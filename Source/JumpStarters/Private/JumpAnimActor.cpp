// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpAnimActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AJumpAnimActor::AJumpAnimActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root0"));
	SetRootComponent(Root);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SpringMeshObject(TEXT("/Game/Vehicle/Anims/Spring/SpringJump.SpringJump"));
	SpringSkel = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SpringSkel0"));
	if (SpringMeshObject.Object) {
		SpringSkel->SetSkeletalMesh(SpringMeshObject.Object);
		SpringSkel->SetupAttachment(GetRootComponent());
	}
	static ConstructorHelpers::FObjectFinder<UAnimSequence> SpringAnimObject(TEXT("/Game/Vehicle/Anims/Spring/SpringJump_Anim.SpringJump_Anim"));
	SpringAnim = SpringAnimObject.Object;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> JacksMeshLeftObject(TEXT("/Game/Vehicle/Anims/Jacks/JacksAnimLeft.JacksAnimLeft"));
	JacksSkelLeft = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("JacksSkelLeft0"));
	if (JacksMeshLeftObject.Object) {
		JacksSkelLeft->SetSkeletalMesh(JacksMeshLeftObject.Object);
		JacksSkelLeft->SetupAttachment(GetRootComponent());
	}
	static ConstructorHelpers::FObjectFinder<UAnimSequence> JacksAnimLeftObject(TEXT("/Game/Vehicle/Anims/Jacks/JacksAnimLeft_Anim.JacksAnimLeft_Anim"));
	JacksAnimLeft = JacksAnimLeftObject.Object;

	//static ConstructorHelpers::FObjectFinder<USkeletalMesh> JacksMeshRightObject(TEXT("/Game/Vehicle/Anims/Jacks/JacksAnimRight.JacksAnimRight"));
	JacksSkelRight = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("JacksSkelRight0"));
	if (JacksMeshLeftObject.Object) {
		JacksSkelRight->SetSkeletalMesh(JacksMeshLeftObject.Object);
		JacksSkelRight->SetupAttachment(GetRootComponent());
	}
	static ConstructorHelpers::FObjectFinder<UAnimSequence> JacksAnimRightObject(TEXT("/Game/Vehicle/Anims/Jacks/JacksAnimRight_Anim.JacksAnimRight_Anim"));
	JacksAnimRight = JacksAnimRightObject.Object;

	RocketParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("/Game/Vehicle/Anims/Rocket/RocketParticles.RocketParticles")).Object;

	BoostParticleSystem = ConstructorHelpers::FObjectFinder<UParticleSystem>(TEXT("/Game/Vehicle/Anims/Boost/BoostParticles.BoostParticles")).Object;
}

void AJumpAnimActor::AnimateJump(TEnumAsByte<ECT::CarType> MyCarType, TEnumAsByte<EJT::JumpType> MyJumpType)
{
	// Animate a jump based on the car and jump types provided
	if (MyCarType == ECT::CarType::Spring) SpringSkel->PlayAnimation(SpringAnim, false);
	else if (MyCarType == ECT::CarType::RocketBoosters) PlayParticleEffect(false);
	else if (MyCarType == ECT::CarType::Jacks)
	{
		if (MyJumpType == EJT::JumpType::Up) { JacksSkelLeft->PlayAnimation(JacksAnimLeft, false); JacksSkelRight->PlayAnimation(JacksAnimRight, false); }
		else if (MyJumpType == EJT::JumpType::Left) JacksSkelLeft->PlayAnimation(JacksAnimLeft, false);
		else if (MyJumpType == EJT::JumpType::Right) JacksSkelRight->PlayAnimation(JacksAnimRight, false);
	}
}

// Play particle effects based on whether to animate boost or rocket boosters
bool AJumpAnimActor::PlayParticleEffect(bool bIsAnimatingBoost)
{
	if (bIsAnimatingBoost && BoostParticleSystem)
	{
		UGameplayStatics::SpawnEmitterAttached(BoostParticleSystem, GetRootComponent(), TEXT("BEmitter0"), FVector(-200.0f, -50.0f, 5.0f),
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
		UGameplayStatics::SpawnEmitterAttached(BoostParticleSystem, GetRootComponent(), TEXT("BEmitter1"), FVector(-200.0f, 50.0f, 5.0f),
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
		return true;
	}
	else if (!bIsAnimatingBoost && RocketParticleSystem)
	{
		UGameplayStatics::SpawnEmitterAttached(RocketParticleSystem, GetRootComponent(), TEXT("Emitter0"), FVector(153.f, -80.f, -20.f),
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
		UGameplayStatics::SpawnEmitterAttached(RocketParticleSystem, GetRootComponent(), TEXT("Emitter1"), FVector(153.f, 80.f, -20.f),
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
		UGameplayStatics::SpawnEmitterAttached(RocketParticleSystem, GetRootComponent(), TEXT("Emitter2"), FVector(-153.f, -80.f, -20.f),
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
		UGameplayStatics::SpawnEmitterAttached(RocketParticleSystem, GetRootComponent(), TEXT("Emitter3"), FVector(-153.f, 80.f, -20.f),
			FRotator::ZeroRotator, EAttachLocation::KeepRelativeOffset);
		return true;
	}
	return false;
}

// Called when the game starts or when spawned
void AJumpAnimActor::BeginPlay()
{
	Super::BeginPlay();
	
}

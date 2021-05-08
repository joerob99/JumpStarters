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
}

void AJumpAnimActor::AnimateJump(TEnumAsByte<ECT::CarType> MyCarType, TEnumAsByte<EJT::JumpType> MyJumpType)
{
	// Animate a jump based on the car and jump types provided
	if (MyCarType == ECT::CarType::Spring) SpringSkel->PlayAnimation(SpringAnim, false);
	/*else if (MyCarType == ECT::CarType::RocketBoosters) ;
	else if (MyCarType == ECT::CarType::Jacks)
	{
		if (MyJumpType == EJT::JumpType::Up);
		else if (MyJumpType == EJT::JumpType::Left);
		else if (MyJumpType == EJT::JumpType::Right);
	}*/
}

// Called when the game starts or when spawned
void AJumpAnimActor::BeginPlay()
{
	Super::BeginPlay();
	
}

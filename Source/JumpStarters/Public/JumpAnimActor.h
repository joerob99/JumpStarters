// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JumpStartersEnums.h"
#include "Containers/EnumAsByte.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "JumpAnimActor.generated.h"

UCLASS()
class JUMPSTARTERS_API AJumpAnimActor : public AActor
{
	GENERATED_BODY()

	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UAnimSequence* SpringAnim;
	//UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	//UAnimSequence* JacksAnim;
	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UAnimSequence* JacksAnimLeft;
	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UAnimSequence* JacksAnimRight;

	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* SpringSkel;
	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* JacksSkelLeft;
	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* JacksSkelRight;
	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* RocketSkel;

	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	USceneComponent* Root;

	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* RocketParticleSystem;
	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* BoostParticleSystem;
	UPROPERTY(Category = "Animation", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* DriftParticleSystem;
	
public:	
	// Sets default values for this actor's properties
	AJumpAnimActor();

	// Jump using different animations for different jump types
	void AnimateJump(TEnumAsByte<ECT::CarType> MyCarType, TEnumAsByte<EJT::JumpType> MyJumpType);

	// Show particle effect differently depending on if boosting or not
	bool PlayParticleEffect(bool bIsAnimatingBoost);

	// Play particle effects for drift/tire smoke
	void TireSmoke();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

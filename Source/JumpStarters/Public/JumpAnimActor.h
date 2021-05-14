// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JumpStartersEnums.h"
#include "Containers/EnumAsByte.h"
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
	UAnimSequence* RocketAnim;

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
	
public:	
	// Sets default values for this actor's properties
	AJumpAnimActor();

	// Jump using spring animation
	void AnimateJump(TEnumAsByte<ECT::CarType> MyCarType, TEnumAsByte<EJT::JumpType> MyJumpType);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

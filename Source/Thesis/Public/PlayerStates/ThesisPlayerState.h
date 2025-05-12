// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "ThesisPlayerState.generated.h"

class UThesisAbilitySystemComponent;
class UThesisAttributeSet;

/**
 * 
 */
UCLASS()
class THESIS_API AThesisPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:

	AThesisPlayerState();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UFUNCTION(BlueprintPure, Category = "Ability System")
	UThesisAbilitySystemComponent* GetThesisAbilitySystemComponent() const;

	UFUNCTION(BlueprintPure, Category = "Ability System")
	UThesisAttributeSet* GetThesisAttributeSet() const;

private:

	UPROPERTY(BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UThesisAbilitySystemComponent> ThesisAbilitySystemComp;

	UPROPERTY(BlueprintReadOnly, Category = "Ability System", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UThesisAttributeSet> ThesisAttributes;
};

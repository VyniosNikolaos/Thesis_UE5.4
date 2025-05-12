// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStates/ThesisPlayerState.h"
#include "AbilitySystem/Components/ThesisAbilitySystemComponent.h"
#include "AbilitySystem/Attributes/ThesisAttributeSet.h"

AThesisPlayerState::AThesisPlayerState()
{
	NetUpdateFrequency = 100.0f;
	MinNetUpdateFrequency = 66.0f;

	ThesisAbilitySystemComp = CreateDefaultSubobject<UThesisAbilitySystemComponent>(TEXT("ThesisAbilitySystemComp"));
	ThesisAbilitySystemComp->SetIsReplicated(true);
	ThesisAbilitySystemComp->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	ThesisAttributes = CreateDefaultSubobject<UThesisAttributeSet>(TEXT("ThesisAttributes"));
}

UAbilitySystemComponent* AThesisPlayerState::GetAbilitySystemComponent() const
{
	return ThesisAbilitySystemComp;
}

UThesisAbilitySystemComponent* AThesisPlayerState::GetThesisAbilitySystemComponent() const
{
	return ThesisAbilitySystemComp;
}

UThesisAttributeSet* AThesisPlayerState::GetThesisAttributeSet() const
{
	return ThesisAttributes;
}

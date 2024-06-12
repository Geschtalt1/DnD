// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CharacterAttributeSet.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class DND_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
};
public{
	UCharacterAttributeSet();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSet")
	FGameplayAttributeData HealthMax;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, HealthMax);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSet")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Health);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSet")
	FGameplayAttributeData ActionPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, ActinPoints);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSet")
	FGameplayAttributeData StarterActionPoints;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, StarterActionPoints);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSet")
	FGameplayAttributeData Vigor;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Vigor);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttributeSet")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UCharacterAttributeSet, Stamina);

};

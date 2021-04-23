// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BaseAttributeSet.generated.h"

// Uses macros from AttributeSet.h
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class GASTEMPLATE_API UBaseAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UBaseAttributeSet();

	//AttributeSet Overrides
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	//Attributes For Health
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Health, Category = "BaseAttribute")
		FGameplayAttributeData Health;
	UFUNCTION()
		virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Health);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxHealth, Category = "BaseAttribute")
		FGameplayAttributeData MaxHealth;
	UFUNCTION()
		virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHealth);

	//Attributes For Mana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mana, Category = "BaseAttribute")
		FGameplayAttributeData Mana;
	UFUNCTION()
		virtual void OnRep_Mana(const FGameplayAttributeData& OldMana);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mana);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMana, Category = "BaseAttribute")
		FGameplayAttributeData MaxMana;
	UFUNCTION()
		virtual void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMana);

	//Attributes For Stamina
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Stamina, Category = "BaseAttribute")
		FGameplayAttributeData Stamina;
	UFUNCTION()
		virtual void OnRep_Stamina(const FGameplayAttributeData& OldStamina);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Stamina);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxStamina, Category = "BaseAttribute")
		FGameplayAttributeData MaxStamina;
	UFUNCTION()
		virtual void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxStamina);

	//Attributes For Energy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Energy, Category = "BaseAttribute")
		FGameplayAttributeData Energy;
	UFUNCTION()
		virtual void OnRep_Energy(const FGameplayAttributeData& OldEnergy);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Energy);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxEnergy, Category = "BaseAttribute")
		FGameplayAttributeData MaxEnergy;
	UFUNCTION()
		virtual void OnRep_MaxEnergy(const FGameplayAttributeData& OldMaxEnergy);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxEnergy);

	//Attributes For Prayer
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Prayer, Category = "BaseAttribute")
		FGameplayAttributeData Prayer;
	UFUNCTION()
		virtual void OnRep_Prayer(const FGameplayAttributeData& OldPrayer);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Prayer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxPrayer, Category = "BaseAttribute")
		FGameplayAttributeData MaxPrayer;
	UFUNCTION()
		virtual void OnRep_MaxPrayer(const FGameplayAttributeData& OldMaxPrayer);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxPrayer);

	/* TEMPLATE
	//Attributes For BEEP
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_BEEP, Category = "BaseAttribute")
		FGameplayAttributeData BEEP;
	UFUNCTION()
		virtual void OnRep_BEEP(const FGameplayAttributeData& OldBEEP);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, BEEP);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_BEEP, Category = "BaseAttribute")
		FGameplayAttributeData MaxBEEP;
			UFUNCTION()
		virtual void OnRep_MaxBEEP(const FGameplayAttributeData& OldMaxBEEP);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxBEEP);
	*/

	//Triggers When Attribute Changes
	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
};

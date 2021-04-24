// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "Abilities/GameplayAbility.h"
#include "GASCharacter.generated.h"

class UBaseAttributeSet;

UCLASS()
class GASTEMPLATE_API AGASCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AGASCharacter();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PossessedBy(AController* NewController) override;

	virtual void OnRep_Controller() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GASCharacter")
		class UAbilitySystemComponent* AbilitySystemComp;

	UFUNCTION(BlueprintCallable, Category = "GASCharacter")
		void InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

		virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "GASCharacter")
		const class UBaseAttributeSet* BaseAttributeSetComp;

	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetHealthValues(float& Health, float& MaxHealth);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetManaValues(float& Mana, float& MaxMana);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetStaminaValues(float& Stamina, float& MaxStamina);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetEnergyValues(float& Energy, float& MaxEnergy);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetPrayerPointsValues(float& Prayer, float& MaxPrayer);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetStrengthValues(float& Strength, float& MaxStrength);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetArcheryValues(float& Archery, float& MaxArchery);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetMagicValues(float& Magic, float& MaxMagic);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetDefenceValues(float& Defence, float& MaxDefence);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetSummoningValues(float& Summoning, float& MaxSummoning);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetTamingValues(float& Taming, float& MaxTaming);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetAgilityValues(float& Agility, float& MaxAgility);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetConstructionValues(float& Construction, float& MaxConstruction);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetCookingValues(float& Cooking, float& MaxCooking);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetCraftingValues(float& Crafting, float& MaxCrafting);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetFarmingValues(float& Farming, float& MaxFarming);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetFiremakingValues(float& Firemaking, float& MaxFiremaking);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetFishingValues(float& Fishing, float& MaxFishing);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetFletchingValues(float& Fletching, float& MaxFletching);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetHerbloreValues(float& Herblore, float& MaxHerblore);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetHunterValues(float& Hunter, float& MaxHunter);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetEngineeringValues(float& Engineering, float& MaxEngineering);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetMiningValues(float& Mining, float& MaxMining);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetInscriptionValues(float& Inscription, float& MaxInscription);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetSlayerValues(float& Slayer, float& MaxSlayer);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetBlacksmithingValues(float& Blacksmithing, float& MaxBlacksmithing);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetWeaponsmithingValues(float& Weaponsmithing, float& MaxWeaponsmithing);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetArmoursmithingValues(float& Armoursmithing, float& MaxArmoursmithing);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetThievingValues(float& Thieving, float& MaxThieving);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetWoodcuttingValues(float& Woodcutting, float& MaxWoodcutting);

	/*	Template
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetBEEPValues(float& BEEP, float& MaxBEEP);
	*/

	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnManaChangedNative(const FOnAttributeChangeData& Data);
	void OnStaminaChangedNative(const FOnAttributeChangeData& Data);
	void OnEnergyChangedNative(const FOnAttributeChangeData& Data);
	void OnPrayerPointsChangedNative(const FOnAttributeChangeData& Data);
	void OnStrengthChangedNative(const FOnAttributeChangeData& Data);
	void OnArcheryChangedNative(const FOnAttributeChangeData& Data);
	void OnMagicChangedNative(const FOnAttributeChangeData& Data);
	void OnDefenceChangedNative(const FOnAttributeChangeData& Data);
	void OnSummoningChangedNative(const FOnAttributeChangeData& Data);
	void OnTamingChangedNative(const FOnAttributeChangeData& Data);
	void OnAgilityChangedNative(const FOnAttributeChangeData& Data);
	void OnConstructionChangedNative(const FOnAttributeChangeData& Data);
	void OnCookingChangedNative(const FOnAttributeChangeData& Data);
	void OnCraftingChangedNative(const FOnAttributeChangeData& Data);
	void OnFarmingChangedNative(const FOnAttributeChangeData& Data);
	void OnFiremakingChangedNative(const FOnAttributeChangeData& Data);
	void OnFishingChangedNative(const FOnAttributeChangeData& Data);
	void OnFletchingChangedNative(const FOnAttributeChangeData& Data);
	void OnHerbloreChangedNative(const FOnAttributeChangeData& Data);
	void OnHunterChangedNative(const FOnAttributeChangeData& Data);
	void OnEngineeringChangedNative(const FOnAttributeChangeData& Data);
	void OnMiningChangedNative(const FOnAttributeChangeData& Data);
	void OnInscriptionChangedNative(const FOnAttributeChangeData& Data);
	void OnSlayerChangedNative(const FOnAttributeChangeData& Data);
	void OnBlacksmithingChangedNative(const FOnAttributeChangeData& Data);
	void OnWeaponsmithingChangedNative(const FOnAttributeChangeData& Data);
	void OnArmoursmithingChangedNative(const FOnAttributeChangeData& Data);
	void OnThievingChangedNative(const FOnAttributeChangeData& Data);
	void OnWoodcuttingChangedNative(const FOnAttributeChangeData& Data);

	/*	Template
	void OnBEEPChangedNative(const FOnAttributeChangeData& Data);
	*/

	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnHealthChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnManaChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnStaminaChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnEnergyChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnPrayerPointsChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnStrengthChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnArcheryChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnMagicChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnDefenceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnSummoningChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnTamingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnAgilityChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnConstructionChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnCookingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnCraftingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnFarmingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnFiremakingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnFishingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnFletchingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnHerbloreChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnHunterChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnEngineeringChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnMiningChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnInscriptionChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnSlayerChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnBlacksmithingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnWeaponsmithingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnArmoursmithingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnThievingChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnWoodcuttingChanged(float OldValue, float NewValue);

	/*	Template
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnBEEPChanged(float OldValue, float NewValue);
	*/

};

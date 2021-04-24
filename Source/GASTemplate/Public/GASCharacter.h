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
		void GetConstitutionValues(float& Constitution, float& MaxConstitution);
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
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetDaggerValues(float& Dagger, float& MaxDagger);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetRapierValues(float& Rapier, float& MaxRapier);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetWakizashiValues(float& Wakizashi, float& MaxWakizashi);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetKatanaValues(float& Katana, float& MaxKatana);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetBroadSwordValues(float& BroadSword, float& MaxBroadSword);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetCurvedSwordValues(float& CurvedSword, float& MaxCurvedSword);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetLongSwordValues(float& LongSword, float& MaxLongSword);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetClaymoreValues(float& Claymore, float& MaxClaymore);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetSpearValues(float& Spear, float& MaxSpear);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetGlaiveValues(float& Glaive, float& MaxGlaive);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetHalberdValues(float& Halberd, float& MaxHalberd);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetPartizanValues(float& Partizan, float& MaxPartizan);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetPoleAxeValues(float& PoleAxe, float& MaxPoleAxe);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetNaginataValues(float& Naginata, float& MaxNaginata);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetUnarmedValues(float& Unarmed, float& MaxUnarmed);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetMaceValues(float& Mace, float& MaxMace);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetFlailValues(float& Flail, float& MaxFlail);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetWarHammerValues(float& WarHammer, float& MaxWarHammer);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetBattleAxeValues(float& BattleAxe, float& MaxBattleAxe);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetQuarterstaffValues(float& Quarterstaff, float& MaxQuarterstaff);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetBowValues(float& Bow, float& MaxBow);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetLongbowValues(float& Longbow, float& MaxLongbow);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetRecurveBowValues(float& RecurveBow, float& MaxRecurveBow);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetCrossbowValues(float& Crossbow, float& MaxCrossbow);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetArbalestValues(float& Arbalest, float& MaxArbalest);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetThrowingKnifeValues(float& ThrowingKnife, float& MaxThrowingKnife);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetThrowingAxeValues(float& ThrowingAxe, float& MaxThrowingAxe);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetChakramValues(float& Chakram, float& MaxChakram);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetJavelinValues(float& Javelin, float& MaxJavelin);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetWandValues(float& Wand, float& MaxWand);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetStaffValues(float& Staff, float& MaxStaff);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetOrbValues(float& Orb, float& MaxOrb);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetTomeValues(float& Tome, float& MaxTome);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetSceptreValues(float& Sceptre, float& MaxSceptre);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetMailValues(float& Mail, float& MaxMail);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetPlateValues(float& Plate, float& MaxPlate);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetFurValues(float& Fur, float& MaxFur);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetLeatherValues(float& Leather, float& MaxLeather);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetClothValues(float& Cloth, float& MaxCloth);
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetSilkValues(float& Silk, float& MaxSilk);

	/*	Template
	UFUNCTION(BlueprintPure, Category = "GASCharacter")
		void GetBEEPValues(float& BEEP, float& MaxBEEP);
	*/

	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnManaChangedNative(const FOnAttributeChangeData& Data);
	void OnStaminaChangedNative(const FOnAttributeChangeData& Data);
	void OnEnergyChangedNative(const FOnAttributeChangeData& Data);
	void OnPrayerPointsChangedNative(const FOnAttributeChangeData& Data);
	void OnConstitutionChangedNative(const FOnAttributeChangeData& Data);
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
	void OnDaggerChangedNative(const FOnAttributeChangeData& Data);
	void OnRapierChangedNative(const FOnAttributeChangeData& Data);
	void OnWakizashiChangedNative(const FOnAttributeChangeData& Data);
	void OnKatanaChangedNative(const FOnAttributeChangeData& Data);
	void OnBroadSwordChangedNative(const FOnAttributeChangeData& Data);
	void OnCurvedSwordChangedNative(const FOnAttributeChangeData& Data);
	void OnLongSwordChangedNative(const FOnAttributeChangeData& Data);
	void OnClaymoreChangedNative(const FOnAttributeChangeData& Data);
	void OnSpearChangedNative(const FOnAttributeChangeData& Data);
	void OnGlaiveChangedNative(const FOnAttributeChangeData& Data);
	void OnHalberdChangedNative(const FOnAttributeChangeData& Data);
	void OnPartizanChangedNative(const FOnAttributeChangeData& Data);
	void OnPoleAxeChangedNative(const FOnAttributeChangeData& Data);
	void OnNaginataChangedNative(const FOnAttributeChangeData& Data);
	void OnUnarmedChangedNative(const FOnAttributeChangeData& Data);
	void OnMaceChangedNative(const FOnAttributeChangeData& Data);
	void OnFlailChangedNative(const FOnAttributeChangeData& Data);
	void OnWarHammerChangedNative(const FOnAttributeChangeData& Data);
	void OnBattleAxeChangedNative(const FOnAttributeChangeData& Data);
	void OnQuarterstaffChangedNative(const FOnAttributeChangeData& Data);
	void OnBowChangedNative(const FOnAttributeChangeData& Data);
	void OnLongbowChangedNative(const FOnAttributeChangeData& Data);
	void OnRecurveBowChangedNative(const FOnAttributeChangeData& Data);
	void OnCrossbowChangedNative(const FOnAttributeChangeData& Data);
	void OnArbalestChangedNative(const FOnAttributeChangeData& Data);
	void OnThrowingKnifeChangedNative(const FOnAttributeChangeData& Data);
	void OnThrowingAxeChangedNative(const FOnAttributeChangeData& Data);
	void OnChakramChangedNative(const FOnAttributeChangeData& Data);
	void OnJavelinChangedNative(const FOnAttributeChangeData& Data);
	void OnWandChangedNative(const FOnAttributeChangeData& Data);
	void OnStaffChangedNative(const FOnAttributeChangeData& Data);
	void OnOrbChangedNative(const FOnAttributeChangeData& Data);
	void OnTomeChangedNative(const FOnAttributeChangeData& Data);
	void OnSceptreChangedNative(const FOnAttributeChangeData& Data);
	void OnMailChangedNative(const FOnAttributeChangeData& Data);
	void OnPlateChangedNative(const FOnAttributeChangeData& Data);
	void OnFurChangedNative(const FOnAttributeChangeData& Data);
	void OnLeatherChangedNative(const FOnAttributeChangeData& Data);
	void OnClothChangedNative(const FOnAttributeChangeData& Data);
	void OnSilkChangedNative(const FOnAttributeChangeData& Data);

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
		void OnConstitutionChanged(float OldValue, float NewValue);
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
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnDaggerChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnRapierChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnWakizashiChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnKatanaChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnBroadSwordChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnCurvedSwordChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnLongSwordChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnClaymoreChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnSpearChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnGlaiveChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnHalberdChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnPartizanChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnPoleAxeChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnNaginataChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnUnarmedChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnMaceChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnFlailChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnWarHammerChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnBattleAxeChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnQuarterstaffChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnBowChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnLongbowChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnRecurveBowChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnCrossbowChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnArbalestChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnThrowingKnifeChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnThrowingAxeChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnChakramChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnJavelinChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnWandChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnStaffChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnOrbChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnTomeChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnSceptreChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnMailChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnPlateChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnFurChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnLeatherChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnClothChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnSilkChanged(float OldValue, float NewValue);

	/*	Template
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnBEEPChanged(float OldValue, float NewValue);
	*/

};

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

	//Base Attributes
	// 
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

	//Attributes For PrayerPoints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_PrayerPoints, Category = "BaseAttribute")
		FGameplayAttributeData PrayerPoints;
	UFUNCTION()
		virtual void OnRep_PrayerPoints(const FGameplayAttributeData& OldPrayerPoints);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, PrayerPoints);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxPrayerPoints, Category = "BaseAttribute")
		FGameplayAttributeData MaxPrayerPoints;
	UFUNCTION()
		virtual void OnRep_MaxPrayerPoints(const FGameplayAttributeData& OldMaxPrayerPoints);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxPrayerPoints);

	/**
	//Combat Attributes
	//
	//Attributes For Constitution (Controls Max Health)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Constitution, Category = "BaseAttribute")
		FGameplayAttributeData Constitution;
	UFUNCTION()
		virtual void OnRep_Constitution(const FGameplayAttributeData& OldConstitution);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Constitution);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxConstitution, Category = "BaseAttribute")
		FGameplayAttributeData MaxConstitution;
	UFUNCTION()
		virtual void OnRep_MaxConstitution(const FGameplayAttributeData& OldMaxConstitution);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxConstitution);

	//Attributes For Strength (Controls Melee Max Damage)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Strength, Category = "BaseAttribute")
		FGameplayAttributeData Strength;
	UFUNCTION()
		virtual void OnRep_Strength(const FGameplayAttributeData& OldStrength);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Strength);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxStrength, Category = "BaseAttribute")
		FGameplayAttributeData MaxStrength;
	UFUNCTION()
		virtual void OnRep_MaxStrength(const FGameplayAttributeData& OldMaxStrength);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxStrength);

	//Attributes For Archery (Controls Ranged Max Damage)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Archery, Category = "BaseAttribute")
		FGameplayAttributeData Archery;
	UFUNCTION()
		virtual void OnRep_Archery(const FGameplayAttributeData& OldArchery);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Archery);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxArchery, Category = "BaseAttribute")
		FGameplayAttributeData MaxArchery;
	UFUNCTION()
		virtual void OnRep_MaxArchery(const FGameplayAttributeData& OldMaxArchery);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxArchery);

	//Attributes For Magic (Controls Magic Max Damage)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Magic, Category = "BaseAttribute")
		FGameplayAttributeData Magic;
	UFUNCTION()
		virtual void OnRep_Magic(const FGameplayAttributeData& OldMagic);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Magic);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMagic, Category = "BaseAttribute")
		FGameplayAttributeData MaxMagic;
	UFUNCTION()
		virtual void OnRep_MaxMagic(const FGameplayAttributeData& OldMaxMagic);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMagic);

	//Attributes For Defence (Controls Armour Max Defence)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Defence, Category = "BaseAttribute")
		FGameplayAttributeData Defence;
	UFUNCTION()
		virtual void OnRep_Defence(const FGameplayAttributeData& OldDefence);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Defence);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxDefence, Category = "BaseAttribute")
		FGameplayAttributeData MaxDefence;
	UFUNCTION()
		virtual void OnRep_MaxDefence(const FGameplayAttributeData& OldMaxDefence);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxDefence);

	//Misc Combat Attributes
	//
	//Attributes For Summoning
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Summoning, Category = "BaseAttribute")
		FGameplayAttributeData Summoning;
	UFUNCTION()
		virtual void OnRep_Summoning(const FGameplayAttributeData& OldSummoning);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Summoning);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxSummoning, Category = "BaseAttribute")
		FGameplayAttributeData MaxSummoning;
	UFUNCTION()
		virtual void OnRep_MaxSummoning(const FGameplayAttributeData& OldMaxSummoning);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxSummoning);

	//Attributes For Taming
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Taming, Category = "BaseAttribute")
		FGameplayAttributeData Taming;
	UFUNCTION()
		virtual void OnRep_Taming(const FGameplayAttributeData& OldTaming);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Taming);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxTaming, Category = "BaseAttribute")
		FGameplayAttributeData MaxTaming;
	UFUNCTION()
		virtual void OnRep_MaxTaming(const FGameplayAttributeData& OldMaxTaming);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxTaming);
	
	//Non Combat Attributes
	//
	//Attributes For Agility
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Agility, Category = "BaseAttribute")
		FGameplayAttributeData Agility;
	UFUNCTION()
		virtual void OnRep_Agility(const FGameplayAttributeData& OldAgility);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Agility);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxAgility, Category = "BaseAttribute")
		FGameplayAttributeData MaxAgility;
	UFUNCTION()
		virtual void OnRep_MaxAgility(const FGameplayAttributeData& OldMaxAgility);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxAgility);

	//Attributes For Construction
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Construction, Category = "BaseAttribute")
		FGameplayAttributeData Construction;
	UFUNCTION()
		virtual void OnRep_Construction(const FGameplayAttributeData& OldConstruction);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Construction);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxConstruction, Category = "BaseAttribute")
		FGameplayAttributeData MaxConstruction;
	UFUNCTION()
		virtual void OnRep_MaxConstruction(const FGameplayAttributeData& OldMaxConstruction);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxConstruction);

	//Attributes For Cooking
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Cooking, Category = "BaseAttribute")
		FGameplayAttributeData Cooking;
	UFUNCTION()
		virtual void OnRep_Cooking(const FGameplayAttributeData& OldCooking);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Cooking);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxCooking, Category = "BaseAttribute")
		FGameplayAttributeData MaxCooking;
	UFUNCTION()
		virtual void OnRep_MaxCooking(const FGameplayAttributeData& OldMaxCooking);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxCooking);

	//Attributes For Crafting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Crafting, Category = "BaseAttribute")
		FGameplayAttributeData Crafting;
	UFUNCTION()
		virtual void OnRep_Crafting(const FGameplayAttributeData& OldCrafting);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Crafting);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxCrafting, Category = "BaseAttribute")
		FGameplayAttributeData MaxCrafting;
	UFUNCTION()
		virtual void OnRep_MaxCrafting(const FGameplayAttributeData& OldMaxCrafting);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxCrafting);

	//Attributes For Farming
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Farming, Category = "BaseAttribute")
		FGameplayAttributeData Farming;
	UFUNCTION()
		virtual void OnRep_Farming(const FGameplayAttributeData& OldFarming);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Farming);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxFarming, Category = "BaseAttribute")
		FGameplayAttributeData MaxFarming;
	UFUNCTION()
		virtual void OnRep_MaxFarming(const FGameplayAttributeData& OldMaxFarming);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxFarming);

	//Attributes For Firemaking
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Firemaking, Category = "BaseAttribute")
		FGameplayAttributeData Firemaking;
	UFUNCTION()
		virtual void OnRep_Firemaking(const FGameplayAttributeData& OldFiremaking);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Firemaking);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxFiremaking, Category = "BaseAttribute")
		FGameplayAttributeData MaxFiremaking;
	UFUNCTION()
		virtual void OnRep_MaxFiremaking(const FGameplayAttributeData& OldMaxFiremaking);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxFiremaking);

	//Attributes For Fishing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Fishing, Category = "BaseAttribute")
		FGameplayAttributeData Fishing;
	UFUNCTION()
		virtual void OnRep_Fishing(const FGameplayAttributeData& OldFishing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Fishing);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxFishing, Category = "BaseAttribute")
		FGameplayAttributeData MaxFishing;
	UFUNCTION()
		virtual void OnRep_MaxFishing(const FGameplayAttributeData& OldMaxFishing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxFishing);

	//Attributes For Fletching
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Fletching, Category = "BaseAttribute")
		FGameplayAttributeData Fletching;
	UFUNCTION()
		virtual void OnRep_Fletching(const FGameplayAttributeData& OldFletching);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Fletching);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxFletching, Category = "BaseAttribute")
		FGameplayAttributeData MaxFletching;
	UFUNCTION()
		virtual void OnRep_MaxFletching(const FGameplayAttributeData& OldMaxFletching);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxFletching);

	//Attributes For Herblore
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Herblore, Category = "BaseAttribute")
		FGameplayAttributeData Herblore;
	UFUNCTION()
		virtual void OnRep_Herblore(const FGameplayAttributeData& OldHerblore);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Herblore);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxHerblore, Category = "BaseAttribute")
		FGameplayAttributeData MaxHerblore;
	UFUNCTION()
		virtual void OnRep_MaxHerblore(const FGameplayAttributeData& OldMaxHerblore);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHerblore);

	//Attributes For Hunter
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Hunter, Category = "BaseAttribute")
		FGameplayAttributeData Hunter;
	UFUNCTION()
		virtual void OnRep_Hunter(const FGameplayAttributeData& OldHunter);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Hunter);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxHunter, Category = "BaseAttribute")
		FGameplayAttributeData MaxHunter;
	UFUNCTION()
		virtual void OnRep_MaxHunter(const FGameplayAttributeData& OldMaxHunter);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHunter);

	//Attributes For Engineering
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Engineering, Category = "BaseAttribute")
		FGameplayAttributeData Engineering;
	UFUNCTION()
		virtual void OnRep_Engineering(const FGameplayAttributeData& OldEngineering);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Engineering);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxEngineering, Category = "BaseAttribute")
		FGameplayAttributeData MaxEngineering;
	UFUNCTION()
		virtual void OnRep_MaxEngineering(const FGameplayAttributeData& OldMaxEngineering);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxEngineering);

	//Attributes For Mining
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mining, Category = "BaseAttribute")
		FGameplayAttributeData Mining;
	UFUNCTION()
		virtual void OnRep_Mining(const FGameplayAttributeData& OldMining);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mining);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMining, Category = "BaseAttribute")
		FGameplayAttributeData MaxMining;
	UFUNCTION()
		virtual void OnRep_MaxMining(const FGameplayAttributeData& OldMaxMining);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMining);

	//Attributes For Inscription
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Inscription, Category = "BaseAttribute")
		FGameplayAttributeData Inscription;
	UFUNCTION()
		virtual void OnRep_Inscription(const FGameplayAttributeData& OldInscription);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Inscription);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxInscription, Category = "BaseAttribute")
		FGameplayAttributeData MaxInscription;
	UFUNCTION()
		virtual void OnRep_MaxInscription(const FGameplayAttributeData& OldMaxInscription);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxInscription);

	//Attributes For Slayer
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Slayer, Category = "BaseAttribute")
		FGameplayAttributeData Slayer;
	UFUNCTION()
		virtual void OnRep_Slayer(const FGameplayAttributeData& OldSlayer);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Slayer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxSlayer, Category = "BaseAttribute")
		FGameplayAttributeData MaxSlayer;
	UFUNCTION()
		virtual void OnRep_MaxSlayer(const FGameplayAttributeData& OldMaxSlayer);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxSlayer);

	//Attributes For Blacksmithing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Blacksmithing, Category = "BaseAttribute")
		FGameplayAttributeData Blacksmithing;
	UFUNCTION()
		virtual void OnRep_Blacksmithing(const FGameplayAttributeData& OldBlacksmithing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Blacksmithing);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxBlacksmithing, Category = "BaseAttribute")
		FGameplayAttributeData MaxBlacksmithing;
	UFUNCTION()
		virtual void OnRep_MaxBlacksmithing(const FGameplayAttributeData& OldMaxBlacksmithing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxBlacksmithing);

	//Attributes For Weaponsmithing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Weaponsmithing, Category = "BaseAttribute")
		FGameplayAttributeData Weaponsmithing;
	UFUNCTION()
		virtual void OnRep_Weaponsmithing(const FGameplayAttributeData& OldWeaponsmithing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Weaponsmithing);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxWeaponsmithing, Category = "BaseAttribute")
		FGameplayAttributeData MaxWeaponsmithing;
	UFUNCTION()
		virtual void OnRep_MaxWeaponsmithing(const FGameplayAttributeData& OldMaxWeaponsmithing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxWeaponsmithing);

	//Attributes For Armoursmithing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Armoursmithing, Category = "BaseAttribute")
		FGameplayAttributeData Armoursmithing;
	UFUNCTION()
		virtual void OnRep_Armoursmithing(const FGameplayAttributeData& OldArmoursmithing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Armoursmithing);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxArmoursmithing, Category = "BaseAttribute")
		FGameplayAttributeData MaxArmoursmithing;
	UFUNCTION()
		virtual void OnRep_MaxArmoursmithing(const FGameplayAttributeData& OldMaxArmoursmithing);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxArmoursmithing);

	//Attributes For Thieving
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Thieving, Category = "BaseAttribute")
		FGameplayAttributeData Thieving;
	UFUNCTION()
		virtual void OnRep_Thieving(const FGameplayAttributeData& OldThieving);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Thieving);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxThieving, Category = "BaseAttribute")
		FGameplayAttributeData MaxThieving;
	UFUNCTION()
		virtual void OnRep_MaxThieving(const FGameplayAttributeData& OldMaxThieving);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxThieving);

	//Attributes For Woodcutting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Woodcutting, Category = "BaseAttribute")
		FGameplayAttributeData Woodcutting;
	UFUNCTION()
		virtual void OnRep_Woodcutting(const FGameplayAttributeData& OldWoodcutting);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Woodcutting);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxWoodcutting, Category = "BaseAttribute")
		FGameplayAttributeData MaxWoodcutting;
	UFUNCTION()
		virtual void OnRep_MaxWoodcutting(const FGameplayAttributeData& OldMaxWoodcutting);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxWoodcutting);

	//Weapon And Armour Type Proficiencies (Controls Effectiveness/Accuracy)
	// 
	//Swords And Hilt Weapons
	//
	//Attributes For Dagger
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Dagger, Category = "BaseAttribute")
		FGameplayAttributeData Dagger;
	UFUNCTION()
		virtual void OnRep_Dagger(const FGameplayAttributeData& OldDagger);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Dagger);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxDagger, Category = "BaseAttribute")
		FGameplayAttributeData MaxDagger;
	UFUNCTION()
		virtual void OnRep_MaxDagger(const FGameplayAttributeData& OldMaxDagger);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxDagger);

	//Attributes For Rapier
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Rapier, Category = "BaseAttribute")
		FGameplayAttributeData Rapier;
	UFUNCTION()
		virtual void OnRep_Rapier(const FGameplayAttributeData& OldRapier);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Rapier);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxRapier, Category = "BaseAttribute")
		FGameplayAttributeData MaxRapier;
	UFUNCTION()
		virtual void OnRep_MaxRapier(const FGameplayAttributeData& OldMaxRapier);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxRapier);

	//Attributes For Wakizashi
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Wakizashi, Category = "BaseAttribute")
		FGameplayAttributeData Wakizashi;
	UFUNCTION()
		virtual void OnRep_Wakizashi(const FGameplayAttributeData& OldWakizashi);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Wakizashi);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxWakizashi, Category = "BaseAttribute")
		FGameplayAttributeData MaxWakizashi;
	UFUNCTION()
		virtual void OnRep_MaxWakizashi(const FGameplayAttributeData& OldMaxWakizashi);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxWakizashi);

	//Attributes For Katana
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Katana, Category = "BaseAttribute")
		FGameplayAttributeData Katana;
	UFUNCTION()
		virtual void OnRep_Katana(const FGameplayAttributeData& OldKatana);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Katana);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxKatana, Category = "BaseAttribute")
		FGameplayAttributeData MaxKatana;
	UFUNCTION()
		virtual void OnRep_MaxKatana(const FGameplayAttributeData& OldMaxKatana);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxKatana);

	//Attributes For BroadSword
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_BroadSword, Category = "BaseAttribute")
		FGameplayAttributeData BroadSword;
	UFUNCTION()
		virtual void OnRep_BroadSword(const FGameplayAttributeData& OldBroadSword);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, BroadSword);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxBroadSword, Category = "BaseAttribute")
		FGameplayAttributeData MaxBroadSword;
	UFUNCTION()
		virtual void OnRep_MaxBroadSword(const FGameplayAttributeData& OldMaxBroadSword);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxBroadSword);

	//Attributes For CurvedSword
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_CurvedSword, Category = "BaseAttribute")
		FGameplayAttributeData CurvedSword;
	UFUNCTION()
		virtual void OnRep_CurvedSword(const FGameplayAttributeData& OldCurvedSword);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, CurvedSword);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxCurvedSword, Category = "BaseAttribute")
		FGameplayAttributeData MaxCurvedSword;
	UFUNCTION()
		virtual void OnRep_MaxCurvedSword(const FGameplayAttributeData& OldMaxCurvedSword);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxCurvedSword);

	//Attributes For LongSword
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_LongSword, Category = "BaseAttribute")
		FGameplayAttributeData LongSword;
	UFUNCTION()
		virtual void OnRep_LongSword(const FGameplayAttributeData& OldLongSword);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, LongSword);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxLongSword, Category = "BaseAttribute")
		FGameplayAttributeData MaxLongSword;
	UFUNCTION()
		virtual void OnRep_MaxLongSword(const FGameplayAttributeData& OldMaxLongSword);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxLongSword);

	//Attributes For Claymore
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Claymore, Category = "BaseAttribute")
		FGameplayAttributeData Claymore;
	UFUNCTION()
		virtual void OnRep_Claymore(const FGameplayAttributeData& OldClaymore);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Claymore);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxClaymore, Category = "BaseAttribute")
		FGameplayAttributeData MaxClaymore;
	UFUNCTION()
		virtual void OnRep_MaxClaymore(const FGameplayAttributeData& OldMaxClaymore);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxClaymore);

	//Spears and Polearms
	// 
	//Attributes For Spear
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Spear, Category = "BaseAttribute")
		FGameplayAttributeData Spear;
	UFUNCTION()
		virtual void OnRep_Spear(const FGameplayAttributeData& OldSpear);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Spear);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxSpear, Category = "BaseAttribute")
		FGameplayAttributeData MaxSpear;
	UFUNCTION()
		virtual void OnRep_MaxSpear(const FGameplayAttributeData& OldMaxSpear);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxSpear);

	//Attributes For Glaive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Glaive, Category = "BaseAttribute")
		FGameplayAttributeData Glaive;
	UFUNCTION()
		virtual void OnRep_Glaive(const FGameplayAttributeData& OldGlaive);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Glaive);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxGlaive, Category = "BaseAttribute")
		FGameplayAttributeData MaxGlaive;
	UFUNCTION()
		virtual void OnRep_MaxGlaive(const FGameplayAttributeData& OldMaxGlaive);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxGlaive);

	//Attributes For Halberd
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Halberd, Category = "BaseAttribute")
		FGameplayAttributeData Halberd;
	UFUNCTION()
		virtual void OnRep_Halberd(const FGameplayAttributeData& OldHalberd);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Halberd);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxHalberd, Category = "BaseAttribute")
		FGameplayAttributeData MaxHalberd;
	UFUNCTION()
		virtual void OnRep_MaxHalberd(const FGameplayAttributeData& OldMaxHalberd);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxHalberd);

	//Attributes For Partizan
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Partizan, Category = "BaseAttribute")
		FGameplayAttributeData Partizan;
	UFUNCTION()
		virtual void OnRep_Partizan(const FGameplayAttributeData& OldPartizan);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Partizan);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxPartizan, Category = "BaseAttribute")
		FGameplayAttributeData MaxPartizan;
	UFUNCTION()
		virtual void OnRep_MaxPartizan(const FGameplayAttributeData& OldMaxPartizan);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxPartizan);

	//Attributes For PoleAxe
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_PoleAxe, Category = "BaseAttribute")
		FGameplayAttributeData PoleAxe;
	UFUNCTION()
		virtual void OnRep_PoleAxe(const FGameplayAttributeData& OldPoleAxe);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, PoleAxe);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxPoleAxe, Category = "BaseAttribute")
		FGameplayAttributeData MaxPoleAxe;
	UFUNCTION()
		virtual void OnRep_MaxPoleAxe(const FGameplayAttributeData& OldMaxPoleAxe);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxPoleAxe);

	//Attributes For Naginata
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Naginata, Category = "BaseAttribute")
		FGameplayAttributeData Naginata;
	UFUNCTION()
		virtual void OnRep_Naginata(const FGameplayAttributeData& OldNaginata);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Naginata);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxNaginata, Category = "BaseAttribute")
		FGameplayAttributeData MaxNaginata;
	UFUNCTION()
		virtual void OnRep_MaxNaginata(const FGameplayAttributeData& OldMaxNaginata);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxNaginata);

	//Trauma and Cleaving Weapons
	//
	//Attributes For Unarmed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Unarmed, Category = "BaseAttribute")
		FGameplayAttributeData Unarmed;
	UFUNCTION()
		virtual void OnRep_Unarmed(const FGameplayAttributeData& OldUnarmed);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Unarmed);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxUnarmed, Category = "BaseAttribute")
		FGameplayAttributeData MaxUnarmed;
	UFUNCTION()
		virtual void OnRep_MaxUnarmed(const FGameplayAttributeData& OldMaxUnarmed);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxUnarmed);

	//Attributes For Mace
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mace, Category = "BaseAttribute")
		FGameplayAttributeData Mace;
	UFUNCTION()
		virtual void OnRep_Mace(const FGameplayAttributeData& OldMace);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mace);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMace, Category = "BaseAttribute")
		FGameplayAttributeData MaxMace;
	UFUNCTION()
		virtual void OnRep_MaxMace(const FGameplayAttributeData& OldMaxMace);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMace);

	//Attributes For Flail
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Flail, Category = "BaseAttribute")
		FGameplayAttributeData Flail;
	UFUNCTION()
		virtual void OnRep_Flail(const FGameplayAttributeData& OldFlail);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Flail);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxFlail, Category = "BaseAttribute")
		FGameplayAttributeData MaxFlail;
	UFUNCTION()
		virtual void OnRep_MaxFlail(const FGameplayAttributeData& OldMaxFlail);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxFlail);

	//Attributes For WarHammer
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_WarHammer, Category = "BaseAttribute")
		FGameplayAttributeData WarHammer;
	UFUNCTION()
		virtual void OnRep_WarHammer(const FGameplayAttributeData& OldWarHammer);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, WarHammer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxWarHammer, Category = "BaseAttribute")
		FGameplayAttributeData MaxWarHammer;
	UFUNCTION()
		virtual void OnRep_MaxWarHammer(const FGameplayAttributeData& OldMaxWarHammer);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxWarHammer);

	//Attributes For BattleAxe
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_BattleAxe, Category = "BaseAttribute")
		FGameplayAttributeData BattleAxe;
	UFUNCTION()
		virtual void OnRep_BattleAxe(const FGameplayAttributeData& OldBattleAxe);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, BattleAxe);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxBattleAxe, Category = "BaseAttribute")
		FGameplayAttributeData MaxBattleAxe;
	UFUNCTION()
		virtual void OnRep_MaxBattleAxe(const FGameplayAttributeData& OldMaxBattleAxe);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxBattleAxe);

	//Attributes For Quarterstaff
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Quarterstaff, Category = "BaseAttribute")
		FGameplayAttributeData Quarterstaff;
	UFUNCTION()
		virtual void OnRep_Quarterstaff(const FGameplayAttributeData& OldQuarterstaff);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Quarterstaff);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxQuarterstaff, Category = "BaseAttribute")
		FGameplayAttributeData MaxQuarterstaff;
	UFUNCTION()
		virtual void OnRep_MaxQuarterstaff(const FGameplayAttributeData& OldMaxQuarterstaff);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxQuarterstaff);

	//Ranged Weapons
	//
	//Attributes For Bow
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Bow, Category = "BaseAttribute")
		FGameplayAttributeData Bow;
	UFUNCTION()
		virtual void OnRep_Bow(const FGameplayAttributeData& OldBow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Bow);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxBow, Category = "BaseAttribute")
		FGameplayAttributeData MaxBow;
	UFUNCTION()
		virtual void OnRep_MaxBow(const FGameplayAttributeData& OldMaxBow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxBow);

	//Attributes For Longbow
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Longbow, Category = "BaseAttribute")
		FGameplayAttributeData Longbow;
	UFUNCTION()
		virtual void OnRep_Longbow(const FGameplayAttributeData& OldLongbow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Longbow);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxLongbow, Category = "BaseAttribute")
		FGameplayAttributeData MaxLongbow;
	UFUNCTION()
		virtual void OnRep_MaxLongbow(const FGameplayAttributeData& OldMaxLongbow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxLongbow);

	//Attributes For RecurveBow
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_RecurveBow, Category = "BaseAttribute")
		FGameplayAttributeData RecurveBow;
	UFUNCTION()
		virtual void OnRep_RecurveBow(const FGameplayAttributeData& OldRecurveBow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, RecurveBow);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxRecurveBow, Category = "BaseAttribute")
		FGameplayAttributeData MaxRecurveBow;
	UFUNCTION()
		virtual void OnRep_MaxRecurveBow(const FGameplayAttributeData& OldMaxRecurveBow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxRecurveBow);

	//Attributes For Crossbow
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Crossbow, Category = "BaseAttribute")
		FGameplayAttributeData Crossbow;
	UFUNCTION()
		virtual void OnRep_Crossbow(const FGameplayAttributeData& OldCrossbow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Crossbow);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxCrossbow, Category = "BaseAttribute")
		FGameplayAttributeData MaxCrossbow;
	UFUNCTION()
		virtual void OnRep_MaxCrossbow(const FGameplayAttributeData& OldMaxCrossbow);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxCrossbow);

	//Attributes For Arbalest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Arbalest, Category = "BaseAttribute")
		FGameplayAttributeData Arbalest;
	UFUNCTION()
		virtual void OnRep_Arbalest(const FGameplayAttributeData& OldArbalest);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Arbalest);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxArbalest, Category = "BaseAttribute")
		FGameplayAttributeData MaxArbalest;
	UFUNCTION()
		virtual void OnRep_MaxArbalest(const FGameplayAttributeData& OldMaxArbalest);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxArbalest);

	//Attributes For ThrowingKnife
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_ThrowingKnife, Category = "BaseAttribute")
		FGameplayAttributeData ThrowingKnife;
	UFUNCTION()
		virtual void OnRep_ThrowingKnife(const FGameplayAttributeData& OldThrowingKnife);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ThrowingKnife);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxThrowingKnife, Category = "BaseAttribute")
		FGameplayAttributeData MaxThrowingKnife;
	UFUNCTION()
		virtual void OnRep_MaxThrowingKnife(const FGameplayAttributeData& OldMaxThrowingKnife);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxThrowingKnife);

	//Attributes For ThrowingAxe
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_ThrowingAxe, Category = "BaseAttribute")
		FGameplayAttributeData ThrowingAxe;
	UFUNCTION()
		virtual void OnRep_ThrowingAxe(const FGameplayAttributeData& OldThrowingAxe);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, ThrowingAxe);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxThrowingAxe, Category = "BaseAttribute")
		FGameplayAttributeData MaxThrowingAxe;
	UFUNCTION()
		virtual void OnRep_MaxThrowingAxe(const FGameplayAttributeData& OldMaxThrowingAxe);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxThrowingAxe);

	//Attributes For Chakram
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Chakram, Category = "BaseAttribute")
		FGameplayAttributeData Chakram;
	UFUNCTION()
		virtual void OnRep_Chakram(const FGameplayAttributeData& OldChakram);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Chakram);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxChakram, Category = "BaseAttribute")
		FGameplayAttributeData MaxChakram;
	UFUNCTION()
		virtual void OnRep_MaxChakram(const FGameplayAttributeData& OldMaxChakram);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxChakram);

	//Attributes For Javelin
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Javelin, Category = "BaseAttribute")
		FGameplayAttributeData Javelin;
	UFUNCTION()
		virtual void OnRep_Javelin(const FGameplayAttributeData& OldJavelin);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Javelin);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxJavelin, Category = "BaseAttribute")
		FGameplayAttributeData MaxJavelin;
	UFUNCTION()
		virtual void OnRep_MaxJavelin(const FGameplayAttributeData& OldMaxJavelin);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxJavelin);

	//Magic Weapons
	//
	//Attributes For Wand
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Wand, Category = "BaseAttribute")
		FGameplayAttributeData Wand;
	UFUNCTION()
		virtual void OnRep_Wand(const FGameplayAttributeData& OldWand);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Wand);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxWand, Category = "BaseAttribute")
		FGameplayAttributeData MaxWand;
	UFUNCTION()
		virtual void OnRep_MaxWand(const FGameplayAttributeData& OldMaxWand);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxWand);

	//Attributes For Staff
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Staff, Category = "BaseAttribute")
		FGameplayAttributeData Staff;
	UFUNCTION()
		virtual void OnRep_Staff(const FGameplayAttributeData& OldStaff);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Staff);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxStaff, Category = "BaseAttribute")
		FGameplayAttributeData MaxStaff;
	UFUNCTION()
		virtual void OnRep_MaxStaff(const FGameplayAttributeData& OldMaxStaff);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxStaff);

	//Attributes For Orb
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Orb, Category = "BaseAttribute")
		FGameplayAttributeData Orb;
	UFUNCTION()
		virtual void OnRep_Orb(const FGameplayAttributeData& OldOrb);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Orb);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxOrb, Category = "BaseAttribute")
		FGameplayAttributeData MaxOrb;
	UFUNCTION()
		virtual void OnRep_MaxOrb(const FGameplayAttributeData& OldMaxOrb);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxOrb);

	//Attributes For Tome
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Tome, Category = "BaseAttribute")
		FGameplayAttributeData Tome;
	UFUNCTION()
		virtual void OnRep_Tome(const FGameplayAttributeData& OldTome);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Tome);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxTome, Category = "BaseAttribute")
		FGameplayAttributeData MaxTome;
	UFUNCTION()
		virtual void OnRep_MaxTome(const FGameplayAttributeData& OldMaxTome);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxTome);

	//Attributes For Sceptre
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Sceptre, Category = "BaseAttribute")
		FGameplayAttributeData Sceptre;
	UFUNCTION()
		virtual void OnRep_Sceptre(const FGameplayAttributeData& OldSceptre);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Sceptre);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxSceptre, Category = "BaseAttribute")
		FGameplayAttributeData MaxSceptre;
	UFUNCTION()
		virtual void OnRep_MaxSceptre(const FGameplayAttributeData& OldMaxSceptre);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxSceptre);

	//Armour Types
	//
	//Strength
	//
	//Attributes For Mail
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Mail, Category = "BaseAttribute")
		FGameplayAttributeData Mail;
	UFUNCTION()
		virtual void OnRep_Mail(const FGameplayAttributeData& OldMail);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Mail);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxMail, Category = "BaseAttribute")
		FGameplayAttributeData MaxMail;
	UFUNCTION()
		virtual void OnRep_MaxMail(const FGameplayAttributeData& OldMaxMail);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxMail);

	//Attributes For Plate
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Plate, Category = "BaseAttribute")
		FGameplayAttributeData Plate;
	UFUNCTION()
		virtual void OnRep_Plate(const FGameplayAttributeData& OldPlate);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Plate);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxPlate, Category = "BaseAttribute")
		FGameplayAttributeData MaxPlate;
	UFUNCTION()
		virtual void OnRep_MaxPlate(const FGameplayAttributeData& OldMaxPlate);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxPlate);

	//Archery
	//
	//Attributes For Fur
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Fur, Category = "BaseAttribute")
		FGameplayAttributeData Fur;
	UFUNCTION()
		virtual void OnRep_Fur(const FGameplayAttributeData& OldFur);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Fur);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxFur, Category = "BaseAttribute")
		FGameplayAttributeData MaxFur;
	UFUNCTION()
		virtual void OnRep_MaxFur(const FGameplayAttributeData& OldMaxFur);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxFur);

	//Attributes For Leather
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Leather, Category = "BaseAttribute")
		FGameplayAttributeData Leather;
	UFUNCTION()
		virtual void OnRep_Leather(const FGameplayAttributeData& OldLeather);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Leather);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxLeather, Category = "BaseAttribute")
		FGameplayAttributeData MaxLeather;
	UFUNCTION()
		virtual void OnRep_MaxLeather(const FGameplayAttributeData& OldMaxLeather);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxLeather);

	//Magic
	//
	//Attributes For Cloth
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Cloth, Category = "BaseAttribute")
		FGameplayAttributeData Cloth;
	UFUNCTION()
		virtual void OnRep_Cloth(const FGameplayAttributeData& OldCloth);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Cloth);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxCloth, Category = "BaseAttribute")
		FGameplayAttributeData MaxCloth;
	UFUNCTION()
		virtual void OnRep_MaxCloth(const FGameplayAttributeData& OldMaxCloth);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxCloth);

	//Attributes For Silk
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_Silk, Category = "BaseAttribute")
		FGameplayAttributeData Silk;
	UFUNCTION()
		virtual void OnRep_Silk(const FGameplayAttributeData& OldSilk);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, Silk);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxSilk, Category = "BaseAttribute")
		FGameplayAttributeData MaxSilk;
	UFUNCTION()
		virtual void OnRep_MaxSilk(const FGameplayAttributeData& OldMaxSilk);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxSilk);
	*/

	/* TEMPLATE
	//Attributes For BEEP
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_BEEP, Category = "BaseAttribute")
		FGameplayAttributeData BEEP;
	UFUNCTION()
		virtual void OnRep_BEEP(const FGameplayAttributeData& OldBEEP);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, BEEP);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_MaxBEEP, Category = "BaseAttribute")
		FGameplayAttributeData MaxBEEP;
	UFUNCTION()
		virtual void OnRep_MaxBEEP(const FGameplayAttributeData& OldMaxBEEP);
	ATTRIBUTE_ACCESSORS(UBaseAttributeSet, MaxBEEP);
	*/

	//Triggers When Attribute Changes
	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
};

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

	//Combat Attributes
	//
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

	//Weapon Type Proficiencies (Controls Effectiveness/Accuracy)
	// 
	//Swords And Hilt Weapons
	//

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

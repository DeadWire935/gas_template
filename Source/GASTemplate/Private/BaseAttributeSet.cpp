// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAttributeSet.h"
#include "..\Public\BaseAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffect.h"
#include "GameplayEffectExtension.h"
#include "GASCharacter.h"


UBaseAttributeSet::UBaseAttributeSet()
{

}

void UBaseAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	//Basic Attributes
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.0f, GetMaxHealth()));
	}
	if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.0f, GetMaxMana()));
	}
	if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.0f, GetMaxStamina()));
	}
	if (Data.EvaluatedData.Attribute == GetEnergyAttribute())
	{
		SetEnergy(FMath::Clamp(GetEnergy(), 0.0f, GetMaxEnergy()));
	}
	if (Data.EvaluatedData.Attribute == GetPrayerPointsAttribute())
	{
		SetPrayerPoints(FMath::Clamp(GetPrayerPoints(), 0.0f, GetMaxPrayerPoints()));
	}
	//Combat Attributes
	if (Data.EvaluatedData.Attribute == GetStrengthAttribute())
	{
		SetStrength(FMath::Clamp(GetStrength(), 0.0f, GetMaxStrength()));
	}
	if (Data.EvaluatedData.Attribute == GetArcheryAttribute())
	{
		SetArchery(FMath::Clamp(GetArchery(), 0.0f, GetMaxArchery()));
	}
	if (Data.EvaluatedData.Attribute == GetMagicAttribute())
	{
		SetMagic(FMath::Clamp(GetMagic(), 0.0f, GetMaxMagic()));
	}
	if (Data.EvaluatedData.Attribute == GetDefenceAttribute())
	{
		SetDefence(FMath::Clamp(GetDefence(), 0.0f, GetMaxDefence()));
	}
	//Misc Combat Attributes
	if (Data.EvaluatedData.Attribute == GetSummoningAttribute())
	{
		SetSummoning(FMath::Clamp(GetSummoning(), 0.0f, GetMaxSummoning()));
	}
	if (Data.EvaluatedData.Attribute == GetTamingAttribute())
	{
		SetTaming(FMath::Clamp(GetTaming(), 0.0f, GetMaxTaming()));
	}
	//Non Combat Attributes
	if (Data.EvaluatedData.Attribute == GetAgilityAttribute())
	{
		SetAgility(FMath::Clamp(GetAgility(), 0.0f, GetMaxAgility()));
	}
	if (Data.EvaluatedData.Attribute == GetConstructionAttribute())
	{
		SetConstruction(FMath::Clamp(GetConstruction(), 0.0f, GetMaxConstruction()));
	}
	if (Data.EvaluatedData.Attribute == GetCookingAttribute())
	{
		SetCooking(FMath::Clamp(GetCooking(), 0.0f, GetMaxCooking()));
	}
	if (Data.EvaluatedData.Attribute == GetCraftingAttribute())
	{
		SetCrafting(FMath::Clamp(GetCrafting(), 0.0f, GetMaxCrafting()));
	}
	if (Data.EvaluatedData.Attribute == GetFarmingAttribute())
	{
		SetFarming(FMath::Clamp(GetFarming(), 0.0f, GetMaxFarming()));
	}
	if (Data.EvaluatedData.Attribute == GetFiremakingAttribute())
	{
		SetFiremaking(FMath::Clamp(GetFiremaking(), 0.0f, GetMaxFiremaking()));
	}
	if (Data.EvaluatedData.Attribute == GetFishingAttribute())
	{
		SetFishing(FMath::Clamp(GetFishing(), 0.0f, GetMaxFishing()));
	}
	if (Data.EvaluatedData.Attribute == GetFletchingAttribute())
	{
		SetFletching(FMath::Clamp(GetFletching(), 0.0f, GetMaxFletching()));
	}
	if (Data.EvaluatedData.Attribute == GetHerbloreAttribute())
	{
		SetHerblore(FMath::Clamp(GetHerblore(), 0.0f, GetMaxHerblore()));
	}
	if (Data.EvaluatedData.Attribute == GetHunterAttribute())
	{
		SetHunter(FMath::Clamp(GetHunter(), 0.0f, GetMaxHunter()));
	}
	if (Data.EvaluatedData.Attribute == GetEngineeringAttribute())
	{
		SetEngineering(FMath::Clamp(GetEngineering(), 0.0f, GetMaxEngineering()));
	}
	if (Data.EvaluatedData.Attribute == GetMiningAttribute())
	{
		SetMining(FMath::Clamp(GetMining(), 0.0f, GetMaxMining()));
	}
	if (Data.EvaluatedData.Attribute == GetInscriptionAttribute())
	{
		SetInscription(FMath::Clamp(GetInscription(), 0.0f, GetMaxInscription()));
	}
	if (Data.EvaluatedData.Attribute == GetSlayerAttribute())
	{
		SetSlayer(FMath::Clamp(GetSlayer(), 0.0f, GetMaxSlayer()));
	}
	if (Data.EvaluatedData.Attribute == GetBlacksmithingAttribute())
	{
		SetBlacksmithing(FMath::Clamp(GetBlacksmithing(), 0.0f, GetMaxBlacksmithing()));
	}
	if (Data.EvaluatedData.Attribute == GetWeaponsmithingAttribute())
	{
		SetWeaponsmithing(FMath::Clamp(GetWeaponsmithing(), 0.0f, GetMaxWeaponsmithing()));
	}
	if (Data.EvaluatedData.Attribute == GetArmoursmithingAttribute())
	{
		SetArmoursmithing(FMath::Clamp(GetArmoursmithing(), 0.0f, GetMaxArmoursmithing()));
	}
	if (Data.EvaluatedData.Attribute == GetThievingAttribute())
	{
		SetThieving(FMath::Clamp(GetThieving(), 0.0f, GetMaxThieving()));
	}
	if (Data.EvaluatedData.Attribute == GetWoodcuttingAttribute())
	{
		SetWoodcutting(FMath::Clamp(GetWoodcutting(), 0.0f, GetMaxWoodcutting()));
	}

	/*	TEMPLATE
	if (Data.EvaluatedData.Attribute == GetBEEPAttribute())
	{
		SetBEEP(FMath::Clamp(GetBEEP(), 0.0f, GetMaxBEEP()));
	}
	*/
}

	void UBaseAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>&OutLifetimeProps) const
	{
		Super::GetLifetimeReplicatedProps(OutLifetimeProps);

		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Health, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Mana, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxStamina, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Energy, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxEnergy, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, PrayerPoints, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxPrayerPoints, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Strength, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxStrength, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Archery, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxArchery, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Magic, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxMagic, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Defence, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxDefence, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Summoning, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxSummoning, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Taming, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxTaming, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Agility, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxAgility, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Construction, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxConstruction, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Cooking, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxCooking, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Crafting, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxCrafting, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Farming, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxFarming, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Firemaking, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxFiremaking, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Fishing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxFishing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Fletching, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxFletching, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Herblore, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxHerblore, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Hunter, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxHunter, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Engineering, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxEngineering, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Mining, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxMining, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Inscription, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxInscription, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Slayer, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxSlayer, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Blacksmithing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxBlacksmithing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Weaponsmithing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxWeaponsmithing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Armoursmithing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxArmoursmithing, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Thieving, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxThieving, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Woodcutting, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxWoodcutting, COND_None, REPNOTIFY_Always);

		/*	Template
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, BEEP, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxBEEP, COND_None, REPNOTIFY_Always);
		*/
}

	void UBaseAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Health, OldHealth);
	}

	void UBaseAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxHealth, OldMaxHealth);
	}
	
	void UBaseAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Mana, OldMana);
	}

	void UBaseAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxMana, OldMaxMana);
	}

	void UBaseAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Stamina, OldStamina);
	}

	void UBaseAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxStamina, OldMaxStamina);
	}

	void UBaseAttributeSet::OnRep_Energy(const FGameplayAttributeData& OldEnergy)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Energy, OldEnergy);
	}

	void UBaseAttributeSet::OnRep_MaxEnergy(const FGameplayAttributeData& OldMaxEnergy)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxEnergy, OldMaxEnergy);
	}

	void UBaseAttributeSet::OnRep_PrayerPoints(const FGameplayAttributeData& OldPrayerPoints)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, PrayerPoints, OldPrayerPoints);
	}

	void UBaseAttributeSet::OnRep_MaxPrayerPoints(const FGameplayAttributeData& OldMaxPrayerPoints)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxPrayerPoints, OldMaxPrayerPoints);
	}

	void UBaseAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldStrength)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Strength, OldStrength);
	}

	void UBaseAttributeSet::OnRep_MaxStrength(const FGameplayAttributeData& OldMaxStrength)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxStrength, OldMaxStrength);
	}

	void UBaseAttributeSet::OnRep_Archery(const FGameplayAttributeData& OldArchery)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Archery, OldArchery);
	}

	void UBaseAttributeSet::OnRep_MaxArchery(const FGameplayAttributeData& OldMaxArchery)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxArchery, OldMaxArchery);
	}

	void UBaseAttributeSet::OnRep_Magic(const FGameplayAttributeData& OldMagic)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Magic, OldMagic);
	}

	void UBaseAttributeSet::OnRep_MaxMagic(const FGameplayAttributeData& OldMaxMagic)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxMagic, OldMaxMagic);
	}

	void UBaseAttributeSet::OnRep_Defence(const FGameplayAttributeData& OldDefence)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Defence, OldDefence);
	}

	void UBaseAttributeSet::OnRep_MaxDefence(const FGameplayAttributeData& OldMaxDefence)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxDefence, OldMaxDefence);
	}

	void UBaseAttributeSet::OnRep_Summoning(const FGameplayAttributeData& OldSummoning)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Summoning, OldSummoning);
	}

	void UBaseAttributeSet::OnRep_MaxSummoning(const FGameplayAttributeData& OldMaxSummoning)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxSummoning, OldMaxSummoning);
	}

	void UBaseAttributeSet::OnRep_Taming(const FGameplayAttributeData& OldTaming)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Taming, OldTaming);
	}

	void UBaseAttributeSet::OnRep_MaxTaming(const FGameplayAttributeData& OldMaxTaming)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxTaming, OldMaxTaming);
	}

	void UBaseAttributeSet::OnRep_Agility(const FGameplayAttributeData& OldAgility)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Agility, OldAgility);
	}

	void UBaseAttributeSet::OnRep_MaxAgility(const FGameplayAttributeData& OldMaxAgility)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxAgility, OldMaxAgility);
	}

	void UBaseAttributeSet::OnRep_Construction(const FGameplayAttributeData& OldConstruction)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Construction, OldConstruction);
	}

	void UBaseAttributeSet::OnRep_MaxConstruction(const FGameplayAttributeData& OldMaxConstruction)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxConstruction, OldMaxConstruction);
	}

	void UBaseAttributeSet::OnRep_Cooking(const FGameplayAttributeData& OldCooking)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Cooking, OldCooking);
	}

	void UBaseAttributeSet::OnRep_MaxCooking(const FGameplayAttributeData& OldMaxCooking)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxCooking, OldMaxCooking);
	}

	void UBaseAttributeSet::OnRep_Crafting(const FGameplayAttributeData& OldCrafting)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Crafting, OldCrafting);
	}

	void UBaseAttributeSet::OnRep_MaxCrafting(const FGameplayAttributeData& OldMaxCrafting)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxCrafting, OldMaxCrafting);
	}

	void UBaseAttributeSet::OnRep_Farming(const FGameplayAttributeData& OldFarming)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Farming, OldFarming);
	}

	void UBaseAttributeSet::OnRep_MaxFarming(const FGameplayAttributeData& OldMaxFarming)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxFarming, OldMaxFarming);
	}

	void UBaseAttributeSet::OnRep_Firemaking(const FGameplayAttributeData& OldFiremaking)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Firemaking, OldFiremaking);
	}

	void UBaseAttributeSet::OnRep_MaxFiremaking(const FGameplayAttributeData& OldMaxFiremaking)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxFiremaking, OldMaxFiremaking);
	}

	void UBaseAttributeSet::OnRep_Fishing(const FGameplayAttributeData& OldFishing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Fishing, OldFishing);
	}

	void UBaseAttributeSet::OnRep_MaxFishing(const FGameplayAttributeData& OldMaxFishing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxFishing, OldMaxFishing);
	}

	void UBaseAttributeSet::OnRep_Fletching(const FGameplayAttributeData& OldFletching)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Fletching, OldFletching);
	}

	void UBaseAttributeSet::OnRep_MaxFletching(const FGameplayAttributeData& OldMaxFletching)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxFletching, OldMaxFletching);
	}

	void UBaseAttributeSet::OnRep_Herblore(const FGameplayAttributeData& OldHerblore)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Herblore, OldHerblore);
	}

	void UBaseAttributeSet::OnRep_MaxHerblore(const FGameplayAttributeData& OldMaxHerblore)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxHerblore, OldMaxHerblore);
	}

	void UBaseAttributeSet::OnRep_Hunter(const FGameplayAttributeData& OldHunter)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Hunter, OldHunter);
	}

	void UBaseAttributeSet::OnRep_MaxHunter(const FGameplayAttributeData& OldMaxHunter)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxHunter, OldMaxHunter);
	}

	void UBaseAttributeSet::OnRep_Engineering(const FGameplayAttributeData& OldEngineering)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Engineering, OldEngineering);
	}

	void UBaseAttributeSet::OnRep_MaxEngineering(const FGameplayAttributeData& OldMaxEngineering)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxEngineering, OldMaxEngineering);
	}

	void UBaseAttributeSet::OnRep_Mining(const FGameplayAttributeData& OldMining)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Mining, OldMining);
	}

	void UBaseAttributeSet::OnRep_MaxMining(const FGameplayAttributeData& OldMaxMining)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxMining, OldMaxMining);
	}

	void UBaseAttributeSet::OnRep_Inscription(const FGameplayAttributeData& OldInscription)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Inscription, OldInscription);
	}

	void UBaseAttributeSet::OnRep_MaxInscription(const FGameplayAttributeData& OldMaxInscription)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxInscription, OldMaxInscription);
	}

	void UBaseAttributeSet::OnRep_Slayer(const FGameplayAttributeData& OldSlayer)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Slayer, OldSlayer);
	}

	void UBaseAttributeSet::OnRep_MaxSlayer(const FGameplayAttributeData& OldMaxSlayer)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxSlayer, OldMaxSlayer);
	}

	void UBaseAttributeSet::OnRep_Blacksmithing(const FGameplayAttributeData& OldBlacksmithing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Blacksmithing, OldBlacksmithing);
	}

	void UBaseAttributeSet::OnRep_MaxBlacksmithing(const FGameplayAttributeData& OldMaxBlacksmithing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxBlacksmithing, OldMaxBlacksmithing);
	}

	void UBaseAttributeSet::OnRep_Weaponsmithing(const FGameplayAttributeData& OldWeaponsmithing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Weaponsmithing, OldWeaponsmithing);
	}

	void UBaseAttributeSet::OnRep_MaxWeaponsmithing(const FGameplayAttributeData& OldMaxWeaponsmithing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxWeaponsmithing, OldMaxWeaponsmithing);
	}

	void UBaseAttributeSet::OnRep_Armoursmithing(const FGameplayAttributeData& OldArmoursmithing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Armoursmithing, OldArmoursmithing);
	}

	void UBaseAttributeSet::OnRep_MaxArmoursmithing(const FGameplayAttributeData& OldMaxArmoursmithing)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxArmoursmithing, OldMaxArmoursmithing);
	}

	void UBaseAttributeSet::OnRep_Thieving(const FGameplayAttributeData& OldThieving)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Thieving, OldThieving);
	}

	void UBaseAttributeSet::OnRep_MaxThieving(const FGameplayAttributeData& OldMaxThieving)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxThieving, OldMaxThieving);
	}

	void UBaseAttributeSet::OnRep_Woodcutting(const FGameplayAttributeData& OldWoodcutting)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Woodcutting, OldWoodcutting);
	}

	void UBaseAttributeSet::OnRep_MaxWoodcutting(const FGameplayAttributeData& OldMaxWoodcutting)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxWoodcutting, OldMaxWoodcutting);
	}

	/*	Template
	void UBaseAttributeSet::OnRep_BEEP(const FGameplayAttributeData& OldBEEP)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, BEEP, OldBEEP);
	}

	void UBaseAttributeSet::OnRep_MaxBEEP(const FGameplayAttributeData& OldMaxBEEP)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxBEEP, OldMaxBEEP);
	}
	*/
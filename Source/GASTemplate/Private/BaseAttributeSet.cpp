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
	if (Data.EvaluatedData.Attribute == GetConstitutionAttribute())
	{
		SetConstitution(FMath::Clamp(GetConstitution(), 0.0f, GetMaxConstitution()));
	}
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
	//Weapon And Armour Type Proficiencies (Controls Effectiveness/Accuracy)
	// 
	//Swords And Hilt Weapons
	//
	if (Data.EvaluatedData.Attribute == GetDaggerAttribute())
	{
		SetDagger(FMath::Clamp(GetDagger(), 0.0f, GetMaxDagger()));
	}
	if (Data.EvaluatedData.Attribute == GetRapierAttribute())
	{
		SetRapier(FMath::Clamp(GetRapier(), 0.0f, GetMaxRapier()));
	}
	if (Data.EvaluatedData.Attribute == GetWakizashiAttribute())
	{
		SetWakizashi(FMath::Clamp(GetWakizashi(), 0.0f, GetMaxWakizashi()));
	}
	if (Data.EvaluatedData.Attribute == GetKatanaAttribute())
	{
		SetKatana(FMath::Clamp(GetKatana(), 0.0f, GetMaxKatana()));
	}
	if (Data.EvaluatedData.Attribute == GetBroadSwordAttribute())
	{
		SetBroadSword(FMath::Clamp(GetBroadSword(), 0.0f, GetMaxBroadSword()));
	}
	if (Data.EvaluatedData.Attribute == GetCurvedSwordAttribute())
	{
		SetCurvedSword(FMath::Clamp(GetCurvedSword(), 0.0f, GetMaxCurvedSword()));
	}
	if (Data.EvaluatedData.Attribute == GetLongSwordAttribute())
	{
		SetLongSword(FMath::Clamp(GetLongSword(), 0.0f, GetMaxLongSword()));
	}
	if (Data.EvaluatedData.Attribute == GetClaymoreAttribute())
	{
		SetClaymore(FMath::Clamp(GetClaymore(), 0.0f, GetMaxClaymore()));
	}
	//Spears and Polearms
	//
	if (Data.EvaluatedData.Attribute == GetSpearAttribute())
	{
		SetSpear(FMath::Clamp(GetSpear(), 0.0f, GetMaxSpear()));
	}
	if (Data.EvaluatedData.Attribute == GetGlaiveAttribute())
	{
		SetGlaive(FMath::Clamp(GetGlaive(), 0.0f, GetMaxGlaive()));
	}
	if (Data.EvaluatedData.Attribute == GetHalberdAttribute())
	{
		SetHalberd(FMath::Clamp(GetHalberd(), 0.0f, GetMaxHalberd()));
	}
	if (Data.EvaluatedData.Attribute == GetPartizanAttribute())
	{
		SetPartizan(FMath::Clamp(GetPartizan(), 0.0f, GetMaxPartizan()));
	}
	if (Data.EvaluatedData.Attribute == GetPoleAxeAttribute())
	{
		SetPoleAxe(FMath::Clamp(GetPoleAxe(), 0.0f, GetMaxPoleAxe()));
	}
	if (Data.EvaluatedData.Attribute == GetNaginataAttribute())
	{
		SetNaginata(FMath::Clamp(GetNaginata(), 0.0f, GetMaxNaginata()));
	}
	//Trauma and Cleaving Weapons
	//
	if (Data.EvaluatedData.Attribute == GetUnarmedAttribute())
	{
		SetUnarmed(FMath::Clamp(GetUnarmed(), 0.0f, GetMaxUnarmed()));
	}
	if (Data.EvaluatedData.Attribute == GetMaceAttribute())
	{
		SetMace(FMath::Clamp(GetMace(), 0.0f, GetMaxMace()));
	}
	if (Data.EvaluatedData.Attribute == GetFlailAttribute())
	{
		SetFlail(FMath::Clamp(GetFlail(), 0.0f, GetMaxFlail()));
	}
	if (Data.EvaluatedData.Attribute == GetWarHammerAttribute())
	{
		SetWarHammer(FMath::Clamp(GetWarHammer(), 0.0f, GetMaxWarHammer()));
	}
	if (Data.EvaluatedData.Attribute == GetBattleAxeAttribute())
	{
		SetBattleAxe(FMath::Clamp(GetBattleAxe(), 0.0f, GetMaxBattleAxe()));
	}
	if (Data.EvaluatedData.Attribute == GetQuarterstaffAttribute())
	{
		SetQuarterstaff(FMath::Clamp(GetQuarterstaff(), 0.0f, GetMaxQuarterstaff()));
	}
	//Ranged Weapons
	//
	if (Data.EvaluatedData.Attribute == GetBowAttribute())
	{
		SetBow(FMath::Clamp(GetBow(), 0.0f, GetMaxBow()));
	}
	if (Data.EvaluatedData.Attribute == GetLongbowAttribute())
	{
		SetLongbow(FMath::Clamp(GetLongbow(), 0.0f, GetMaxLongbow()));
	}
	if (Data.EvaluatedData.Attribute == GetRecurveBowAttribute())
	{
		SetRecurveBow(FMath::Clamp(GetRecurveBow(), 0.0f, GetMaxRecurveBow()));
	}
	if (Data.EvaluatedData.Attribute == GetCrossbowAttribute())
	{
		SetCrossbow(FMath::Clamp(GetCrossbow(), 0.0f, GetMaxCrossbow()));
	}
	if (Data.EvaluatedData.Attribute == GetArbalestAttribute())
	{
		SetArbalest(FMath::Clamp(GetArbalest(), 0.0f, GetMaxArbalest()));
	}
	if (Data.EvaluatedData.Attribute == GetThrowingKnifeAttribute())
	{
		SetThrowingKnife(FMath::Clamp(GetThrowingKnife(), 0.0f, GetMaxThrowingKnife()));
	}
	if (Data.EvaluatedData.Attribute == GetThrowingAxeAttribute())
	{
		SetThrowingAxe(FMath::Clamp(GetThrowingAxe(), 0.0f, GetMaxThrowingAxe()));
	}
	if (Data.EvaluatedData.Attribute == GetChakramAttribute())
	{
		SetChakram(FMath::Clamp(GetChakram(), 0.0f, GetMaxChakram()));
	}
	if (Data.EvaluatedData.Attribute == GetJavelinAttribute())
	{
		SetJavelin(FMath::Clamp(GetJavelin(), 0.0f, GetMaxJavelin()));
	}
	//Magic Weapons
	//
	if (Data.EvaluatedData.Attribute == GetWandAttribute())
	{
		SetWand(FMath::Clamp(GetWand(), 0.0f, GetMaxWand()));
	}
	if (Data.EvaluatedData.Attribute == GetStaffAttribute())
	{
		SetStaff(FMath::Clamp(GetStaff(), 0.0f, GetMaxStaff()));
	}
	if (Data.EvaluatedData.Attribute == GetOrbAttribute())
	{
		SetOrb(FMath::Clamp(GetOrb(), 0.0f, GetMaxOrb()));
	}
	if (Data.EvaluatedData.Attribute == GetTomeAttribute())
	{
		SetTome(FMath::Clamp(GetTome(), 0.0f, GetMaxTome()));
	}
	if (Data.EvaluatedData.Attribute == GetSceptreAttribute())
	{
		SetSceptre(FMath::Clamp(GetSceptre(), 0.0f, GetMaxSceptre()));
	}
	//Armour Types
	// 
	//Strength
	//
	if (Data.EvaluatedData.Attribute == GetMailAttribute())
	{
		SetMail(FMath::Clamp(GetMail(), 0.0f, GetMaxMail()));
	}
	if (Data.EvaluatedData.Attribute == GetPlateAttribute())
	{
		SetPlate(FMath::Clamp(GetPlate(), 0.0f, GetMaxPlate()));
	}
	//Archery
	//
	if (Data.EvaluatedData.Attribute == GetFurAttribute())
	{
		SetFur(FMath::Clamp(GetFur(), 0.0f, GetMaxFur()));
	}
	if (Data.EvaluatedData.Attribute == GetLeatherAttribute())
	{
		SetLeather(FMath::Clamp(GetLeather(), 0.0f, GetMaxLeather()));
	}
	//Magic
	//
	if (Data.EvaluatedData.Attribute == GetClothAttribute())
	{
		SetCloth(FMath::Clamp(GetCloth(), 0.0f, GetMaxCloth()));
	}
	if (Data.EvaluatedData.Attribute == GetSilkAttribute())
	{
		SetSilk(FMath::Clamp(GetSilk(), 0.0f, GetMaxSilk()));
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
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Constitution, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxConstitution, COND_None, REPNOTIFY_Always);
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
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Dagger, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxDagger, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Rapier, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxRapier, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Wakizashi, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxWakizashi, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Katana, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxKatana, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, BroadSword, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxBroadSword, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, CurvedSword, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxCurvedSword, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, LongSword, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxLongSword, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Claymore, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxClaymore, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Spear, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxSpear, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Glaive, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxGlaive, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Halberd, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxHalberd, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Partizan, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxPartizan, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, PoleAxe, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxPoleAxe, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Naginata, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxNaginata, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Unarmed, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxUnarmed, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Mace, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxMace, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Flail, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxFlail, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, WarHammer, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxWarHammer, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, BattleAxe, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxBattleAxe, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Quarterstaff, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxQuarterstaff, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Bow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxBow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Longbow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxLongbow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, RecurveBow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxRecurveBow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Crossbow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxCrossbow, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Arbalest, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxArbalest, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, ThrowingKnife, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxThrowingKnife, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, ThrowingAxe, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxThrowingAxe, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Chakram, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxChakram, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Javelin, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxJavelin, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Wand, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxWand, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Staff, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxStaff, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Orb, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxOrb, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Tome, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxTome, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Sceptre, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxSceptre, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Mail, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxMail, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Plate, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxPlate, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Fur, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxFur, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Leather, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxLeather, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Cloth, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxCloth, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, Silk, COND_None, REPNOTIFY_Always);
		DOREPLIFETIME_CONDITION_NOTIFY(UBaseAttributeSet, MaxSilk, COND_None, REPNOTIFY_Always);

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

	void UBaseAttributeSet::OnRep_Constitution(const FGameplayAttributeData& OldConstitution)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Constitution, OldConstitution);
	}

	void UBaseAttributeSet::OnRep_MaxConstitution(const FGameplayAttributeData& OldMaxConstitution)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxConstitution, OldMaxConstitution);
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

	void UBaseAttributeSet::OnRep_Dagger(const FGameplayAttributeData& OldDagger)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Dagger, OldDagger);
	}

	void UBaseAttributeSet::OnRep_MaxDagger(const FGameplayAttributeData& OldMaxDagger)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxDagger, OldMaxDagger);
	}

	void UBaseAttributeSet::OnRep_Rapier(const FGameplayAttributeData& OldRapier)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Rapier, OldRapier);
	}

	void UBaseAttributeSet::OnRep_MaxRapier(const FGameplayAttributeData& OldMaxRapier)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRapier, OldMaxRapier);
	}

	void UBaseAttributeSet::OnRep_Wakizashi(const FGameplayAttributeData& OldWakizashi)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Wakizashi, OldWakizashi);
	}

	void UBaseAttributeSet::OnRep_MaxWakizashi(const FGameplayAttributeData& OldMaxWakizashi)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxWakizashi, OldMaxWakizashi);
	}

	void UBaseAttributeSet::OnRep_Katana(const FGameplayAttributeData& OldKatana)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Katana, OldKatana);
	}

	void UBaseAttributeSet::OnRep_MaxKatana(const FGameplayAttributeData& OldMaxKatana)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxKatana, OldMaxKatana);
	}

	void UBaseAttributeSet::OnRep_BroadSword(const FGameplayAttributeData& OldBroadSword)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, BroadSword, OldBroadSword);
	}

	void UBaseAttributeSet::OnRep_MaxBroadSword(const FGameplayAttributeData& OldMaxBroadSword)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxBroadSword, OldMaxBroadSword);
	}

	void UBaseAttributeSet::OnRep_CurvedSword(const FGameplayAttributeData& OldCurvedSword)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, CurvedSword, OldCurvedSword);
	}

	void UBaseAttributeSet::OnRep_MaxCurvedSword(const FGameplayAttributeData& OldMaxCurvedSword)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxCurvedSword, OldMaxCurvedSword);
	}

	void UBaseAttributeSet::OnRep_LongSword(const FGameplayAttributeData& OldLongSword)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, LongSword, OldLongSword);
	}

	void UBaseAttributeSet::OnRep_MaxLongSword(const FGameplayAttributeData& OldMaxLongSword)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxLongSword, OldMaxLongSword);
	}

	void UBaseAttributeSet::OnRep_Claymore(const FGameplayAttributeData& OldClaymore)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Claymore, OldClaymore);
	}

	void UBaseAttributeSet::OnRep_MaxClaymore(const FGameplayAttributeData& OldMaxClaymore)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxClaymore, OldMaxClaymore);
	}

	void UBaseAttributeSet::OnRep_Spear(const FGameplayAttributeData& OldSpear)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Spear, OldSpear);
	}

	void UBaseAttributeSet::OnRep_MaxSpear(const FGameplayAttributeData& OldMaxSpear)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxSpear, OldMaxSpear);
	}

	void UBaseAttributeSet::OnRep_Glaive(const FGameplayAttributeData& OldGlaive)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Glaive, OldGlaive);
	}

	void UBaseAttributeSet::OnRep_MaxGlaive(const FGameplayAttributeData& OldMaxGlaive)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxGlaive, OldMaxGlaive);
	}

	void UBaseAttributeSet::OnRep_Halberd(const FGameplayAttributeData& OldHalberd)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Halberd, OldHalberd);
	}

	void UBaseAttributeSet::OnRep_MaxHalberd(const FGameplayAttributeData& OldMaxHalberd)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxHalberd, OldMaxHalberd);
	}

	void UBaseAttributeSet::OnRep_Partizan(const FGameplayAttributeData& OldPartizan)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Partizan, OldPartizan);
	}

	void UBaseAttributeSet::OnRep_MaxPartizan(const FGameplayAttributeData& OldMaxPartizan)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxPartizan, OldMaxPartizan);
	}

	void UBaseAttributeSet::OnRep_PoleAxe(const FGameplayAttributeData& OldPoleAxe)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, PoleAxe, OldPoleAxe);
	}

	void UBaseAttributeSet::OnRep_MaxPoleAxe(const FGameplayAttributeData& OldMaxPoleAxe)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxPoleAxe, OldMaxPoleAxe);
	}

	void UBaseAttributeSet::OnRep_Naginata(const FGameplayAttributeData& OldNaginata)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Naginata, OldNaginata);
	}

	void UBaseAttributeSet::OnRep_MaxNaginata(const FGameplayAttributeData& OldMaxNaginata)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxNaginata, OldMaxNaginata);
	}

	void UBaseAttributeSet::OnRep_Unarmed(const FGameplayAttributeData& OldUnarmed)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Unarmed, OldUnarmed);
	}

	void UBaseAttributeSet::OnRep_MaxUnarmed(const FGameplayAttributeData& OldMaxUnarmed)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxUnarmed, OldMaxUnarmed);
	}

	void UBaseAttributeSet::OnRep_Mace(const FGameplayAttributeData& OldMace)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Mace, OldMace);
	}

	void UBaseAttributeSet::OnRep_MaxMace(const FGameplayAttributeData& OldMaxMace)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxMace, OldMaxMace);
	}

	void UBaseAttributeSet::OnRep_Flail(const FGameplayAttributeData& OldFlail)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Flail, OldFlail);
	}

	void UBaseAttributeSet::OnRep_MaxFlail(const FGameplayAttributeData& OldMaxFlail)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxFlail, OldMaxFlail);
	}

	void UBaseAttributeSet::OnRep_WarHammer(const FGameplayAttributeData& OldWarHammer)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, WarHammer, OldWarHammer);
	}

	void UBaseAttributeSet::OnRep_MaxWarHammer(const FGameplayAttributeData& OldMaxWarHammer)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxWarHammer, OldMaxWarHammer);
	}

	void UBaseAttributeSet::OnRep_BattleAxe(const FGameplayAttributeData& OldBattleAxe)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, BattleAxe, OldBattleAxe);
	}

	void UBaseAttributeSet::OnRep_MaxBattleAxe(const FGameplayAttributeData& OldMaxBattleAxe)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxBattleAxe, OldMaxBattleAxe);
	}

	void UBaseAttributeSet::OnRep_Quarterstaff(const FGameplayAttributeData& OldQuarterstaff)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Quarterstaff, OldQuarterstaff);
	}

	void UBaseAttributeSet::OnRep_MaxQuarterstaff(const FGameplayAttributeData& OldMaxQuarterstaff)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxQuarterstaff, OldMaxQuarterstaff);
	}

	void UBaseAttributeSet::OnRep_Bow(const FGameplayAttributeData& OldBow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Bow, OldBow);
	}

	void UBaseAttributeSet::OnRep_MaxBow(const FGameplayAttributeData& OldMaxBow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxBow, OldMaxBow);
	}

	void UBaseAttributeSet::OnRep_Longbow(const FGameplayAttributeData& OldLongbow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Longbow, OldLongbow);
	}

	void UBaseAttributeSet::OnRep_MaxLongbow(const FGameplayAttributeData& OldMaxLongbow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxLongbow, OldMaxLongbow);
	}

	void UBaseAttributeSet::OnRep_RecurveBow(const FGameplayAttributeData& OldRecurveBow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, RecurveBow, OldRecurveBow);
	}

	void UBaseAttributeSet::OnRep_MaxRecurveBow(const FGameplayAttributeData& OldMaxRecurveBow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxRecurveBow, OldMaxRecurveBow);
	}

	void UBaseAttributeSet::OnRep_Crossbow(const FGameplayAttributeData& OldCrossbow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Crossbow, OldCrossbow);
	}

	void UBaseAttributeSet::OnRep_MaxCrossbow(const FGameplayAttributeData& OldMaxCrossbow)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxCrossbow, OldMaxCrossbow);
	}

	void UBaseAttributeSet::OnRep_Arbalest(const FGameplayAttributeData& OldArbalest)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Arbalest, OldArbalest);
	}

	void UBaseAttributeSet::OnRep_MaxArbalest(const FGameplayAttributeData& OldMaxArbalest)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxArbalest, OldMaxArbalest);
	}

	void UBaseAttributeSet::OnRep_ThrowingKnife(const FGameplayAttributeData& OldThrowingKnife)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, ThrowingKnife, OldThrowingKnife);
	}

	void UBaseAttributeSet::OnRep_MaxThrowingKnife(const FGameplayAttributeData& OldMaxThrowingKnife)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxThrowingKnife, OldMaxThrowingKnife);
	}

	void UBaseAttributeSet::OnRep_ThrowingAxe(const FGameplayAttributeData& OldThrowingAxe)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, ThrowingAxe, OldThrowingAxe);
	}

	void UBaseAttributeSet::OnRep_MaxThrowingAxe(const FGameplayAttributeData& OldMaxThrowingAxe)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxThrowingAxe, OldMaxThrowingAxe);
	}

	void UBaseAttributeSet::OnRep_Chakram(const FGameplayAttributeData& OldChakram)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Chakram, OldChakram);
	}

	void UBaseAttributeSet::OnRep_MaxChakram(const FGameplayAttributeData& OldMaxChakram)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxChakram, OldMaxChakram);
	}

	void UBaseAttributeSet::OnRep_Javelin(const FGameplayAttributeData& OldJavelin)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Javelin, OldJavelin);
	}

	void UBaseAttributeSet::OnRep_MaxJavelin(const FGameplayAttributeData& OldMaxJavelin)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxJavelin, OldMaxJavelin);
	}

	void UBaseAttributeSet::OnRep_Wand(const FGameplayAttributeData& OldWand)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Wand, OldWand);
	}

	void UBaseAttributeSet::OnRep_MaxWand(const FGameplayAttributeData& OldMaxWand)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxWand, OldMaxWand);
	}

	void UBaseAttributeSet::OnRep_Staff(const FGameplayAttributeData& OldStaff)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Staff, OldStaff);
	}

	void UBaseAttributeSet::OnRep_MaxStaff(const FGameplayAttributeData& OldMaxStaff)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxStaff, OldMaxStaff);
	}

	void UBaseAttributeSet::OnRep_Orb(const FGameplayAttributeData& OldOrb)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Orb, OldOrb);
	}

	void UBaseAttributeSet::OnRep_MaxOrb(const FGameplayAttributeData& OldMaxOrb)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxOrb, OldMaxOrb);
	}

	void UBaseAttributeSet::OnRep_Tome(const FGameplayAttributeData& OldTome)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Tome, OldTome);
	}

	void UBaseAttributeSet::OnRep_MaxTome(const FGameplayAttributeData& OldMaxTome)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxTome, OldMaxTome);
	}

	void UBaseAttributeSet::OnRep_Sceptre(const FGameplayAttributeData& OldSceptre)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Sceptre, OldSceptre);
	}

	void UBaseAttributeSet::OnRep_MaxSceptre(const FGameplayAttributeData& OldMaxSceptre)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxSceptre, OldMaxSceptre);
	}

	void UBaseAttributeSet::OnRep_Mail(const FGameplayAttributeData& OldMail)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Mail, OldMail);
	}

	void UBaseAttributeSet::OnRep_MaxMail(const FGameplayAttributeData& OldMaxMail)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxMail, OldMaxMail);
	}

	void UBaseAttributeSet::OnRep_Plate(const FGameplayAttributeData& OldPlate)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Plate, OldPlate);
	}

	void UBaseAttributeSet::OnRep_MaxPlate(const FGameplayAttributeData& OldMaxPlate)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxPlate, OldMaxPlate);
	}

	void UBaseAttributeSet::OnRep_Fur(const FGameplayAttributeData& OldFur)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Fur, OldFur);
	}

	void UBaseAttributeSet::OnRep_MaxFur(const FGameplayAttributeData& OldMaxFur)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxFur, OldMaxFur);
	}

	void UBaseAttributeSet::OnRep_Leather(const FGameplayAttributeData& OldLeather)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Leather, OldLeather);
	}

	void UBaseAttributeSet::OnRep_MaxLeather(const FGameplayAttributeData& OldMaxLeather)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxLeather, OldMaxLeather);
	}

	void UBaseAttributeSet::OnRep_Cloth(const FGameplayAttributeData& OldCloth)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Cloth, OldCloth);
	}

	void UBaseAttributeSet::OnRep_MaxCloth(const FGameplayAttributeData& OldMaxCloth)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxCloth, OldMaxCloth);
	}

	void UBaseAttributeSet::OnRep_Silk(const FGameplayAttributeData& OldSilk)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, Silk, OldSilk);
	}

	void UBaseAttributeSet::OnRep_MaxSilk(const FGameplayAttributeData& OldMaxSilk)
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UBaseAttributeSet, MaxSilk, OldMaxSilk);
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
// Fill out your copyright notice in the Description page of Project Settings.


#include "GASCharacter.h"
#include "BaseAttributeSet.h"

// Sets default values
AGASCharacter::AGASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AbilitySystemComp = CreateDefaultSubobject<UAbilitySystemComponent>("AbilitySystemComp");
}

// Called when the game starts or when spawned
void AGASCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (AbilitySystemComp)
	{
		BaseAttributeSetComp = AbilitySystemComp->GetSet<UBaseAttributeSet>();

		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetHealthAttribute()).AddUObject(this, &AGASCharacter::OnHealthChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetManaAttribute()).AddUObject(this, &AGASCharacter::OnManaChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetStaminaAttribute()).AddUObject(this, &AGASCharacter::OnStaminaChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetEnergyAttribute()).AddUObject(this, &AGASCharacter::OnEnergyChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetPrayerPointsAttribute()).AddUObject(this, &AGASCharacter::OnPrayerPointsChangedNative);
		/*
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetConstitutionAttribute()).AddUObject(this, &AGASCharacter::OnConstitutionChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetStrengthAttribute()).AddUObject(this, &AGASCharacter::OnStrengthChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetArcheryAttribute()).AddUObject(this, &AGASCharacter::OnArcheryChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetMagicAttribute()).AddUObject(this, &AGASCharacter::OnMagicChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetDefenceAttribute()).AddUObject(this, &AGASCharacter::OnDefenceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSummoningAttribute()).AddUObject(this, &AGASCharacter::OnSummoningChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetTamingAttribute()).AddUObject(this, &AGASCharacter::OnTamingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetAgilityAttribute()).AddUObject(this, &AGASCharacter::OnAgilityChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetConstructionAttribute()).AddUObject(this, &AGASCharacter::OnConstructionChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCookingAttribute()).AddUObject(this, &AGASCharacter::OnCookingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCraftingAttribute()).AddUObject(this, &AGASCharacter::OnCraftingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFarmingAttribute()).AddUObject(this, &AGASCharacter::OnFarmingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFiremakingAttribute()).AddUObject(this, &AGASCharacter::OnFiremakingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFishingAttribute()).AddUObject(this, &AGASCharacter::OnFishingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFletchingAttribute()).AddUObject(this, &AGASCharacter::OnFletchingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetHerbloreAttribute()).AddUObject(this, &AGASCharacter::OnHerbloreChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetHunterAttribute()).AddUObject(this, &AGASCharacter::OnHunterChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetEngineeringAttribute()).AddUObject(this, &AGASCharacter::OnEngineeringChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetMiningAttribute()).AddUObject(this, &AGASCharacter::OnMiningChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetInscriptionAttribute()).AddUObject(this, &AGASCharacter::OnInscriptionChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSlayerAttribute()).AddUObject(this, &AGASCharacter::OnSlayerChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetBlacksmithingAttribute()).AddUObject(this, &AGASCharacter::OnBlacksmithingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetWeaponsmithingAttribute()).AddUObject(this, &AGASCharacter::OnWeaponsmithingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetArmoursmithingAttribute()).AddUObject(this, &AGASCharacter::OnArmoursmithingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetThievingAttribute()).AddUObject(this, &AGASCharacter::OnThievingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetWoodcuttingAttribute()).AddUObject(this, &AGASCharacter::OnWoodcuttingChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetDaggerAttribute()).AddUObject(this, &AGASCharacter::OnDaggerChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetRapierAttribute()).AddUObject(this, &AGASCharacter::OnRapierChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetWakizashiAttribute()).AddUObject(this, &AGASCharacter::OnWakizashiChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetKatanaAttribute()).AddUObject(this, &AGASCharacter::OnKatanaChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetBroadSwordAttribute()).AddUObject(this, &AGASCharacter::OnBroadSwordChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCurvedSwordAttribute()).AddUObject(this, &AGASCharacter::OnCurvedSwordChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetLongSwordAttribute()).AddUObject(this, &AGASCharacter::OnLongSwordChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetClaymoreAttribute()).AddUObject(this, &AGASCharacter::OnClaymoreChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSpearAttribute()).AddUObject(this, &AGASCharacter::OnSpearChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetGlaiveAttribute()).AddUObject(this, &AGASCharacter::OnGlaiveChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetHalberdAttribute()).AddUObject(this, &AGASCharacter::OnHalberdChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetPartizanAttribute()).AddUObject(this, &AGASCharacter::OnPartizanChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetPoleAxeAttribute()).AddUObject(this, &AGASCharacter::OnPoleAxeChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetNaginataAttribute()).AddUObject(this, &AGASCharacter::OnNaginataChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetUnarmedAttribute()).AddUObject(this, &AGASCharacter::OnUnarmedChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetMaceAttribute()).AddUObject(this, &AGASCharacter::OnMaceChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFlailAttribute()).AddUObject(this, &AGASCharacter::OnFlailChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetWarHammerAttribute()).AddUObject(this, &AGASCharacter::OnWarHammerChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetBattleAxeAttribute()).AddUObject(this, &AGASCharacter::OnBattleAxeChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetQuarterstaffAttribute()).AddUObject(this, &AGASCharacter::OnQuarterstaffChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetBowAttribute()).AddUObject(this, &AGASCharacter::OnBowChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetLongbowAttribute()).AddUObject(this, &AGASCharacter::OnLongbowChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetRecurveBowAttribute()).AddUObject(this, &AGASCharacter::OnRecurveBowChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetCrossbowAttribute()).AddUObject(this, &AGASCharacter::OnCrossbowChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetArbalestAttribute()).AddUObject(this, &AGASCharacter::OnArbalestChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetThrowingKnifeAttribute()).AddUObject(this, &AGASCharacter::OnThrowingKnifeChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetThrowingAxeAttribute()).AddUObject(this, &AGASCharacter::OnThrowingAxeChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetChakramAttribute()).AddUObject(this, &AGASCharacter::OnChakramChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetJavelinAttribute()).AddUObject(this, &AGASCharacter::OnJavelinChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetWandAttribute()).AddUObject(this, &AGASCharacter::OnWandChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetStaffAttribute()).AddUObject(this, &AGASCharacter::OnStaffChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetOrbAttribute()).AddUObject(this, &AGASCharacter::OnOrbChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetTomeAttribute()).AddUObject(this, &AGASCharacter::OnTomeChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSceptreAttribute()).AddUObject(this, &AGASCharacter::OnSceptreChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetMailAttribute()).AddUObject(this, &AGASCharacter::OnMailChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetPlateAttribute()).AddUObject(this, &AGASCharacter::OnPlateChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetFurAttribute()).AddUObject(this, &AGASCharacter::OnFurChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetLeatherAttribute()).AddUObject(this, &AGASCharacter::OnLeatherChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetClothAttribute()).AddUObject(this, &AGASCharacter::OnClothChangedNative);
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetSilkAttribute()).AddUObject(this, &AGASCharacter::OnSilkChangedNative);
		*/

		/*	Template
		AbilitySystemComp->GetGameplayAttributeValueChangeDelegate(BaseAttributeSetComp->GetBEEPAttribute()).AddUObject(this, &AGASCharacter::OnBEEPChangedNative);
		*/
	}
	
}

// Called every frame
void AGASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AGASCharacter::InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	if (AbilitySystemComp)
	{
		if (HasAuthority() && AbilityToGet)
		{
			AbilitySystemComp->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
		}
	}
}

void AGASCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	//Initialize our abilities
	if (AbilitySystemComp)
	{
		AbilitySystemComp->InitAbilityActorInfo(this, this);
	}
}

void AGASCharacter::OnRep_Controller()
{
	Super::OnRep_Controller();

	// Our controller changed, must update ActorInfo on AbilitySystemComponent
	if (AbilitySystemComp)
	{
		AbilitySystemComp->RefreshAbilityActorInfo();
	}
}

UAbilitySystemComponent* AGASCharacter::GetAbilitySystemComponent() const
{
	return AbilitySystemComp;
}

void AGASCharacter::GetHealthValues(float& Health, float& MaxHealth)
{
	Health = BaseAttributeSetComp->GetHealth();
	MaxHealth = BaseAttributeSetComp->GetMaxHealth();
}

void AGASCharacter::GetManaValues(float& Mana, float& MaxMana)
{
	Mana = BaseAttributeSetComp->GetMana();
	MaxMana = BaseAttributeSetComp->GetMaxMana();
}

void AGASCharacter::GetStaminaValues(float& Stamina, float& MaxStamina)
{
	Stamina = BaseAttributeSetComp->GetStamina();
	MaxStamina = BaseAttributeSetComp->GetMaxStamina();
}

void AGASCharacter::GetEnergyValues(float& Energy, float& MaxEnergy)
{
	Energy = BaseAttributeSetComp->GetEnergy();
	MaxEnergy = BaseAttributeSetComp->GetMaxEnergy();
}

void AGASCharacter::GetPrayerPointsValues(float& Prayer, float& MaxPrayer)
{
	Prayer = BaseAttributeSetComp->GetPrayerPoints();
	MaxPrayer = BaseAttributeSetComp->GetMaxPrayerPoints();
}
/*

void AGASCharacter::GetConstitutionValues(float& Constitution, float& MaxConstitution)
{
	Constitution = BaseAttributeSetComp->GetConstitution();
	MaxConstitution = BaseAttributeSetComp->GetMaxConstitution();
}

void AGASCharacter::GetStrengthValues(float& Strength, float& MaxStrength)
{
	Strength = BaseAttributeSetComp->GetStrength();
	MaxStrength = BaseAttributeSetComp->GetMaxStrength();
}

void AGASCharacter::GetArcheryValues(float& Archery, float& MaxArchery)
{
	Archery = BaseAttributeSetComp->GetArchery();
	MaxArchery = BaseAttributeSetComp->GetMaxArchery();
}

void AGASCharacter::GetMagicValues(float& Magic, float& MaxMagic)
{
	Magic = BaseAttributeSetComp->GetMagic();
	MaxMagic = BaseAttributeSetComp->GetMaxMagic();
}

void AGASCharacter::GetDefenceValues(float& Defence, float& MaxDefence)
{
	Defence = BaseAttributeSetComp->GetDefence();
	MaxDefence = BaseAttributeSetComp->GetMaxDefence();
}

void AGASCharacter::GetSummoningValues(float& Summoning, float& MaxSummoning)
{
	Summoning = BaseAttributeSetComp->GetSummoning();
	MaxSummoning = BaseAttributeSetComp->GetMaxSummoning();
}

void AGASCharacter::GetTamingValues(float& Taming, float& MaxTaming)
{
	Taming = BaseAttributeSetComp->GetTaming();
	MaxTaming = BaseAttributeSetComp->GetMaxTaming();
}

void AGASCharacter::GetAgilityValues(float& Agility, float& MaxAgility)
{
	Agility = BaseAttributeSetComp->GetAgility();
	MaxAgility = BaseAttributeSetComp->GetMaxAgility();
}

void AGASCharacter::GetConstructionValues(float& Construction, float& MaxConstruction)
{
	Construction = BaseAttributeSetComp->GetConstruction();
	MaxConstruction = BaseAttributeSetComp->GetMaxConstruction();
}

void AGASCharacter::GetCookingValues(float& Cooking, float& MaxCooking)
{
	Cooking = BaseAttributeSetComp->GetCooking();
	MaxCooking = BaseAttributeSetComp->GetMaxCooking();
}

void AGASCharacter::GetCraftingValues(float& Crafting, float& MaxCrafting)
{
	Crafting = BaseAttributeSetComp->GetCrafting();
	MaxCrafting = BaseAttributeSetComp->GetMaxCrafting();
}

void AGASCharacter::GetFarmingValues(float& Farming, float& MaxFarming)
{
	Farming = BaseAttributeSetComp->GetFarming();
	MaxFarming = BaseAttributeSetComp->GetMaxFarming();
}

void AGASCharacter::GetFiremakingValues(float& Firemaking, float& MaxFiremaking)
{
	Firemaking = BaseAttributeSetComp->GetFiremaking();
	MaxFiremaking = BaseAttributeSetComp->GetMaxFiremaking();
}

void AGASCharacter::GetFishingValues(float& Fishing, float& MaxFishing)
{
	Fishing = BaseAttributeSetComp->GetFishing();
	MaxFishing = BaseAttributeSetComp->GetMaxFishing();
}

void AGASCharacter::GetFletchingValues(float& Fletching, float& MaxFletching)
{
	Fletching = BaseAttributeSetComp->GetFletching();
	MaxFletching = BaseAttributeSetComp->GetMaxFletching();
}

void AGASCharacter::GetHerbloreValues(float& Herblore, float& MaxHerblore)
{
	Herblore = BaseAttributeSetComp->GetHerblore();
	MaxHerblore = BaseAttributeSetComp->GetMaxHerblore();
}

void AGASCharacter::GetHunterValues(float& Hunter, float& MaxHunter)
{
	Hunter = BaseAttributeSetComp->GetHunter();
	MaxHunter = BaseAttributeSetComp->GetMaxHunter();
}

void AGASCharacter::GetEngineeringValues(float& Engineering, float& MaxEngineering)
{
	Engineering = BaseAttributeSetComp->GetEngineering();
	MaxEngineering = BaseAttributeSetComp->GetMaxEngineering();
}

void AGASCharacter::GetMiningValues(float& Mining, float& MaxMining)
{
	Mining = BaseAttributeSetComp->GetMining();
	MaxMining = BaseAttributeSetComp->GetMaxMining();
}

void AGASCharacter::GetInscriptionValues(float& Inscription, float& MaxInscription)
{
	Inscription = BaseAttributeSetComp->GetInscription();
	MaxInscription = BaseAttributeSetComp->GetMaxInscription();
}

void AGASCharacter::GetSlayerValues(float& Slayer, float& MaxSlayer)
{
	Slayer = BaseAttributeSetComp->GetSlayer();
	MaxSlayer = BaseAttributeSetComp->GetMaxSlayer();
}

void AGASCharacter::GetBlacksmithingValues(float& Blacksmithing, float& MaxBlacksmithing)
{
	Blacksmithing = BaseAttributeSetComp->GetBlacksmithing();
	MaxBlacksmithing = BaseAttributeSetComp->GetMaxBlacksmithing();
}

void AGASCharacter::GetWeaponsmithingValues(float& Weaponsmithing, float& MaxWeaponsmithing)
{
	Weaponsmithing = BaseAttributeSetComp->GetWeaponsmithing();
	MaxWeaponsmithing = BaseAttributeSetComp->GetMaxWeaponsmithing();
}

void AGASCharacter::GetArmoursmithingValues(float& Armoursmithing, float& MaxArmoursmithing)
{
	Armoursmithing = BaseAttributeSetComp->GetArmoursmithing();
	MaxArmoursmithing = BaseAttributeSetComp->GetMaxArmoursmithing();
}

void AGASCharacter::GetThievingValues(float& Thieving, float& MaxThieving)
{
	Thieving = BaseAttributeSetComp->GetThieving();
	MaxThieving = BaseAttributeSetComp->GetMaxThieving();
}

void AGASCharacter::GetWoodcuttingValues(float& Woodcutting, float& MaxWoodcutting)
{
	Woodcutting = BaseAttributeSetComp->GetWoodcutting();
	MaxWoodcutting = BaseAttributeSetComp->GetMaxWoodcutting();
}

void AGASCharacter::GetDaggerValues(float& Dagger, float& MaxDagger)
{
	Dagger = BaseAttributeSetComp->GetDagger();
	MaxDagger = BaseAttributeSetComp->GetMaxDagger();
}

void AGASCharacter::GetRapierValues(float& Rapier, float& MaxRapier)
{
	Rapier = BaseAttributeSetComp->GetRapier();
	MaxRapier = BaseAttributeSetComp->GetMaxRapier();
}

void AGASCharacter::GetWakizashiValues(float& Wakizashi, float& MaxWakizashi)
{
	Wakizashi = BaseAttributeSetComp->GetWakizashi();
	MaxWakizashi = BaseAttributeSetComp->GetMaxWakizashi();
}

void AGASCharacter::GetKatanaValues(float& Katana, float& MaxKatana)
{
	Katana = BaseAttributeSetComp->GetKatana();
	MaxKatana = BaseAttributeSetComp->GetMaxKatana();
}

void AGASCharacter::GetBroadSwordValues(float& BroadSword, float& MaxBroadSword)
{
	BroadSword = BaseAttributeSetComp->GetBroadSword();
	MaxBroadSword = BaseAttributeSetComp->GetMaxBroadSword();
}

void AGASCharacter::GetCurvedSwordValues(float& CurvedSword, float& MaxCurvedSword)
{
	CurvedSword = BaseAttributeSetComp->GetCurvedSword();
	MaxCurvedSword = BaseAttributeSetComp->GetMaxCurvedSword();
}

void AGASCharacter::GetLongSwordValues(float& LongSword, float& MaxLongSword)
{
	LongSword = BaseAttributeSetComp->GetLongSword();
	MaxLongSword = BaseAttributeSetComp->GetMaxLongSword();
}

void AGASCharacter::GetClaymoreValues(float& Claymore, float& MaxClaymore)
{
	Claymore = BaseAttributeSetComp->GetClaymore();
	MaxClaymore = BaseAttributeSetComp->GetMaxClaymore();
}

void AGASCharacter::GetSpearValues(float& Spear, float& MaxSpear)
{
	Spear = BaseAttributeSetComp->GetSpear();
	MaxSpear = BaseAttributeSetComp->GetMaxSpear();
}

void AGASCharacter::GetGlaiveValues(float& Glaive, float& MaxGlaive)
{
	Glaive = BaseAttributeSetComp->GetGlaive();
	MaxGlaive = BaseAttributeSetComp->GetMaxGlaive();
}

void AGASCharacter::GetHalberdValues(float& Halberd, float& MaxHalberd)
{
	Halberd = BaseAttributeSetComp->GetHalberd();
	MaxHalberd = BaseAttributeSetComp->GetMaxHalberd();
}

void AGASCharacter::GetPartizanValues(float& Partizan, float& MaxPartizan)
{
	Partizan = BaseAttributeSetComp->GetPartizan();
	MaxPartizan = BaseAttributeSetComp->GetMaxPartizan();
}

void AGASCharacter::GetPoleAxeValues(float& PoleAxe, float& MaxPoleAxe)
{
	PoleAxe = BaseAttributeSetComp->GetPoleAxe();
	MaxPoleAxe = BaseAttributeSetComp->GetMaxPoleAxe();
}

void AGASCharacter::GetNaginataValues(float& Naginata, float& MaxNaginata)
{
	Naginata = BaseAttributeSetComp->GetNaginata();
	MaxNaginata = BaseAttributeSetComp->GetMaxNaginata();
}

void AGASCharacter::GetUnarmedValues(float& Unarmed, float& MaxUnarmed)
{
	Unarmed = BaseAttributeSetComp->GetUnarmed();
	MaxUnarmed = BaseAttributeSetComp->GetMaxUnarmed();
}

void AGASCharacter::GetMaceValues(float& Mace, float& MaxMace)
{
	Mace = BaseAttributeSetComp->GetMace();
	MaxMace = BaseAttributeSetComp->GetMaxMace();
}

void AGASCharacter::GetFlailValues(float& Flail, float& MaxFlail)
{
	Flail = BaseAttributeSetComp->GetFlail();
	MaxFlail = BaseAttributeSetComp->GetMaxFlail();
}

void AGASCharacter::GetWarHammerValues(float& WarHammer, float& MaxWarHammer)
{
	WarHammer = BaseAttributeSetComp->GetWarHammer();
	MaxWarHammer = BaseAttributeSetComp->GetMaxWarHammer();
}

void AGASCharacter::GetBattleAxeValues(float& BattleAxe, float& MaxBattleAxe)
{
	BattleAxe = BaseAttributeSetComp->GetBattleAxe();
	MaxBattleAxe = BaseAttributeSetComp->GetMaxBattleAxe();
}

void AGASCharacter::GetQuarterstaffValues(float& Quarterstaff, float& MaxQuarterstaff)
{
	Quarterstaff = BaseAttributeSetComp->GetQuarterstaff();
	MaxQuarterstaff = BaseAttributeSetComp->GetMaxQuarterstaff();
}

void AGASCharacter::GetBowValues(float& Bow, float& MaxBow)
{
	Bow = BaseAttributeSetComp->GetBow();
	MaxBow = BaseAttributeSetComp->GetMaxBow();
}

void AGASCharacter::GetLongbowValues(float& Longbow, float& MaxLongbow)
{
	Longbow = BaseAttributeSetComp->GetLongbow();
	MaxLongbow = BaseAttributeSetComp->GetMaxLongbow();
}

void AGASCharacter::GetRecurveBowValues(float& RecurveBow, float& MaxRecurveBow)
{
	RecurveBow = BaseAttributeSetComp->GetRecurveBow();
	MaxRecurveBow = BaseAttributeSetComp->GetMaxRecurveBow();
}

void AGASCharacter::GetCrossbowValues(float& Crossbow, float& MaxCrossbow)
{
	Crossbow = BaseAttributeSetComp->GetCrossbow();
	MaxCrossbow = BaseAttributeSetComp->GetMaxCrossbow();
}

void AGASCharacter::GetArbalestValues(float& Arbalest, float& MaxArbalest)
{
	Arbalest = BaseAttributeSetComp->GetArbalest();
	MaxArbalest = BaseAttributeSetComp->GetMaxArbalest();
}

void AGASCharacter::GetThrowingKnifeValues(float& ThrowingKnife, float& MaxThrowingKnife)
{
	ThrowingKnife = BaseAttributeSetComp->GetThrowingKnife();
	MaxThrowingKnife = BaseAttributeSetComp->GetMaxThrowingKnife();
}

void AGASCharacter::GetThrowingAxeValues(float& ThrowingAxe, float& MaxThrowingAxe)
{
	ThrowingAxe = BaseAttributeSetComp->GetThrowingAxe();
	MaxThrowingAxe = BaseAttributeSetComp->GetMaxThrowingAxe();
}

void AGASCharacter::GetChakramValues(float& Chakram, float& MaxChakram)
{
	Chakram = BaseAttributeSetComp->GetChakram();
	MaxChakram = BaseAttributeSetComp->GetMaxChakram();
}

void AGASCharacter::GetJavelinValues(float& Javelin, float& MaxJavelin)
{
	Javelin = BaseAttributeSetComp->GetJavelin();
	MaxJavelin = BaseAttributeSetComp->GetMaxJavelin();
}

void AGASCharacter::GetWandValues(float& Wand, float& MaxWand)
{
	Wand = BaseAttributeSetComp->GetWand();
	MaxWand = BaseAttributeSetComp->GetMaxWand();
}

void AGASCharacter::GetStaffValues(float& Staff, float& MaxStaff)
{
	Staff = BaseAttributeSetComp->GetStaff();
	MaxStaff = BaseAttributeSetComp->GetMaxStaff();
}

void AGASCharacter::GetOrbValues(float& Orb, float& MaxOrb)
{
	Orb = BaseAttributeSetComp->GetOrb();
	MaxOrb = BaseAttributeSetComp->GetMaxOrb();
}

void AGASCharacter::GetTomeValues(float& Tome, float& MaxTome)
{
	Tome = BaseAttributeSetComp->GetTome();
	MaxTome = BaseAttributeSetComp->GetMaxTome();
}

void AGASCharacter::GetSceptreValues(float& Sceptre, float& MaxSceptre)
{
	Sceptre = BaseAttributeSetComp->GetSceptre();
	MaxSceptre = BaseAttributeSetComp->GetMaxSceptre();
}

void AGASCharacter::GetMailValues(float& Mail, float& MaxMail)
{
	Mail = BaseAttributeSetComp->GetMail();
	MaxMail = BaseAttributeSetComp->GetMaxMail();
}

void AGASCharacter::GetPlateValues(float& Plate, float& MaxPlate)
{
	Plate = BaseAttributeSetComp->GetPlate();
	MaxPlate = BaseAttributeSetComp->GetMaxPlate();
}

void AGASCharacter::GetFurValues(float& Fur, float& MaxFur)
{
	Fur = BaseAttributeSetComp->GetFur();
	MaxFur = BaseAttributeSetComp->GetMaxFur();
}

void AGASCharacter::GetLeatherValues(float& Leather, float& MaxLeather)
{
	Leather = BaseAttributeSetComp->GetLeather();
	MaxLeather = BaseAttributeSetComp->GetMaxLeather();
}

void AGASCharacter::GetClothValues(float& Cloth, float& MaxCloth)
{
	Cloth = BaseAttributeSetComp->GetCloth();
	MaxCloth = BaseAttributeSetComp->GetMaxCloth();
}

void AGASCharacter::GetSilkValues(float& Silk, float& MaxSilk)
{
	Silk = BaseAttributeSetComp->GetSilk();
	MaxSilk = BaseAttributeSetComp->GetMaxSilk();
}
*/

/*	Template
void AGASCharacter::GetBEEPValues(float& BEEP, float& MaxBEEP)
{
	BEEP = BaseAttributeSetComp->GetBEEP();
	MaxBEEP = BaseAttributeSetComp->GetMaxBEEP();
}
*/

void AGASCharacter::OnHealthChangedNative(const FOnAttributeChangeData& Data)
{
	OnHealthChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnManaChangedNative(const FOnAttributeChangeData& Data)
{
	OnManaChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnStaminaChangedNative(const FOnAttributeChangeData& Data)
{
	OnStaminaChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnEnergyChangedNative(const FOnAttributeChangeData& Data)
{
	OnEnergyChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnPrayerPointsChangedNative(const FOnAttributeChangeData& Data)
{
	OnPrayerPointsChanged(Data.OldValue, Data.NewValue);
}
/*

void AGASCharacter::OnConstitutionChangedNative(const FOnAttributeChangeData& Data)
{
	OnConstitutionChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnStrengthChangedNative(const FOnAttributeChangeData& Data)
{
	OnStrengthChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnArcheryChangedNative(const FOnAttributeChangeData& Data)
{
	OnArcheryChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnMagicChangedNative(const FOnAttributeChangeData& Data)
{
	OnMagicChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnDefenceChangedNative(const FOnAttributeChangeData& Data)
{
	OnDefenceChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnSummoningChangedNative(const FOnAttributeChangeData& Data)
{
	OnSummoningChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnTamingChangedNative(const FOnAttributeChangeData& Data)
{
	OnTamingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnAgilityChangedNative(const FOnAttributeChangeData& Data)
{
	OnAgilityChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnConstructionChangedNative(const FOnAttributeChangeData& Data)
{
	OnConstructionChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnCookingChangedNative(const FOnAttributeChangeData& Data)
{
	OnCookingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnCraftingChangedNative(const FOnAttributeChangeData& Data)
{
	OnCraftingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnFarmingChangedNative(const FOnAttributeChangeData& Data)
{
	OnFarmingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnFiremakingChangedNative(const FOnAttributeChangeData& Data)
{
	OnFiremakingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnFishingChangedNative(const FOnAttributeChangeData& Data)
{
	OnFishingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnFletchingChangedNative(const FOnAttributeChangeData& Data)
{
	OnFletchingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnHerbloreChangedNative(const FOnAttributeChangeData& Data)
{
	OnHerbloreChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnHunterChangedNative(const FOnAttributeChangeData& Data)
{
	OnHunterChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnEngineeringChangedNative(const FOnAttributeChangeData& Data)
{
	OnEngineeringChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnMiningChangedNative(const FOnAttributeChangeData& Data)
{
	OnMiningChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnInscriptionChangedNative(const FOnAttributeChangeData& Data)
{
	OnInscriptionChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnSlayerChangedNative(const FOnAttributeChangeData& Data)
{
	OnSlayerChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnBlacksmithingChangedNative(const FOnAttributeChangeData& Data)
{
	OnBlacksmithingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnWeaponsmithingChangedNative(const FOnAttributeChangeData& Data)
{
	OnWeaponsmithingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnArmoursmithingChangedNative(const FOnAttributeChangeData& Data)
{
	OnArmoursmithingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnThievingChangedNative(const FOnAttributeChangeData& Data)
{
	OnThievingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnWoodcuttingChangedNative(const FOnAttributeChangeData& Data)
{
	OnWoodcuttingChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnDaggerChangedNative(const FOnAttributeChangeData& Data)
{
	OnDaggerChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnRapierChangedNative(const FOnAttributeChangeData& Data)
{
	OnRapierChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnWakizashiChangedNative(const FOnAttributeChangeData& Data)
{
	OnWakizashiChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnKatanaChangedNative(const FOnAttributeChangeData& Data)
{
	OnKatanaChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnBroadSwordChangedNative(const FOnAttributeChangeData& Data)
{
	OnBroadSwordChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnCurvedSwordChangedNative(const FOnAttributeChangeData& Data)
{
	OnCurvedSwordChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnLongSwordChangedNative(const FOnAttributeChangeData& Data)
{
	OnLongSwordChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnClaymoreChangedNative(const FOnAttributeChangeData& Data)
{
	OnClaymoreChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnSpearChangedNative(const FOnAttributeChangeData& Data)
{
	OnSpearChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnGlaiveChangedNative(const FOnAttributeChangeData& Data)
{
	OnGlaiveChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnHalberdChangedNative(const FOnAttributeChangeData& Data)
{
	OnHalberdChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnPartizanChangedNative(const FOnAttributeChangeData& Data)
{
	OnPartizanChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnPoleAxeChangedNative(const FOnAttributeChangeData& Data)
{
	OnPoleAxeChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnNaginataChangedNative(const FOnAttributeChangeData& Data)
{
	OnNaginataChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnUnarmedChangedNative(const FOnAttributeChangeData& Data)
{
	OnUnarmedChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnMaceChangedNative(const FOnAttributeChangeData& Data)
{
	OnMaceChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnFlailChangedNative(const FOnAttributeChangeData& Data)
{
	OnFlailChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnWarHammerChangedNative(const FOnAttributeChangeData& Data)
{
	OnWarHammerChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnBattleAxeChangedNative(const FOnAttributeChangeData& Data)
{
	OnBattleAxeChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnQuarterstaffChangedNative(const FOnAttributeChangeData& Data)
{
	OnQuarterstaffChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnBowChangedNative(const FOnAttributeChangeData& Data)
{
	OnBowChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnLongbowChangedNative(const FOnAttributeChangeData& Data)
{
	OnLongbowChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnRecurveBowChangedNative(const FOnAttributeChangeData& Data)
{
	OnRecurveBowChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnCrossbowChangedNative(const FOnAttributeChangeData& Data)
{
	OnCrossbowChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnArbalestChangedNative(const FOnAttributeChangeData& Data)
{
	OnArbalestChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnThrowingKnifeChangedNative(const FOnAttributeChangeData& Data)
{
	OnThrowingKnifeChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnThrowingAxeChangedNative(const FOnAttributeChangeData& Data)
{
	OnThrowingAxeChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnChakramChangedNative(const FOnAttributeChangeData& Data)
{
	OnChakramChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnJavelinChangedNative(const FOnAttributeChangeData& Data)
{
	OnJavelinChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnWandChangedNative(const FOnAttributeChangeData& Data)
{
	OnWandChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnStaffChangedNative(const FOnAttributeChangeData& Data)
{
	OnStaffChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnOrbChangedNative(const FOnAttributeChangeData& Data)
{
	OnOrbChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnTomeChangedNative(const FOnAttributeChangeData& Data)
{
	OnTomeChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnSceptreChangedNative(const FOnAttributeChangeData& Data)
{
	OnSceptreChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnMailChangedNative(const FOnAttributeChangeData& Data)
{
	OnMailChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnPlateChangedNative(const FOnAttributeChangeData& Data)
{
	OnPlateChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnFurChangedNative(const FOnAttributeChangeData& Data)
{
	OnFurChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnLeatherChangedNative(const FOnAttributeChangeData& Data)
{
	OnLeatherChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnClothChangedNative(const FOnAttributeChangeData& Data)
{
	OnClothChanged(Data.OldValue, Data.NewValue);
}

void AGASCharacter::OnSilkChangedNative(const FOnAttributeChangeData& Data)
{
	OnSilkChanged(Data.OldValue, Data.NewValue);
}
*/

/*	Template
void AGASCharacter::OnBEEPChangedNative(const FOnAttributeChangeData& Data)
{
	OnBEEPChanged(Data.OldValue, Data.NewValue);
}
*/

void AGASCharacter::InitializeAbilityMulti(TArray<TSubclassOf<UGameplayAbility>> AbilitiesToAcquire, int32 AbilityLevel)
{
	for (TSubclassOf<UGameplayAbility> AbilityItem : AbilitiesToAcquire)
	{
		InitializeAbility(AbilityItem, AbilityLevel);
	}
}

void AGASCharacter::RemoveAbilityWithTags(FGameplayTagContainer TagContainer)
{
	TArray<FGameplayAbilitySpec*> MatchingAbilities;
	AbilitySystemComp->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbilities, true);
	for (FGameplayAbilitySpec* Spec : MatchingAbilities)
	{
		AbilitySystemComp->ClearAbility(Spec->Handle);
	}
}

void AGASCharacter::ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel)
{
	TArray<FGameplayAbilitySpec*> MatchingAbility;
	AbilitySystemComp->GetActivatableGameplayAbilitySpecsByAllMatchingTags(TagContainer, MatchingAbility, true);
	for (FGameplayAbilitySpec* Spec : MatchingAbility)
	{
		Spec->Level = NewLevel;
	}
}

void AGASCharacter::CancelAbilityWithTags(FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags)
{
	AbilitySystemComp->CancelAbilities(&WithTags, &WithoutTags, nullptr);
}

void AGASCharacter::AddLooseGameplayTag(FGameplayTag TagToAdd)
{
	GetAbilitySystemComponent()->AddLooseGameplayTag(TagToAdd);
	GetAbilitySystemComponent()->SetTagMapCount(TagToAdd, 1);
}

void AGASCharacter::RemoveLooseGameplayTags(FGameplayTag TagsToRemove)
{
	GetAbilitySystemComponent()->RemoveLooseGameplayTag(TagsToRemove);
}

void AGASCharacter::ApplyGEToTargetData(const FGameplayEffectSpecHandle& GESpec, const FGameplayAbilityTargetDataHandle& TargetData)
{
	for (TSharedPtr<FGameplayAbilityTargetData> Data : TargetData.Data)
	{
		Data->ApplyGameplayEffectSpec(*GESpec.Data.Get());
	}
}

void AGASCharacter::SetHealthValues(float NewHealth, float NewMaxHealth)
{
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetHealthAttribute(), EGameplayModOp::Override, NewHealth);
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetMaxHealthAttribute(), EGameplayModOp::Override, NewMaxHealth);
}

void AGASCharacter::SetManaValues(float NewMana, float NewMaxMana)
{
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetManaAttribute(), EGameplayModOp::Override, NewMana);
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetMaxManaAttribute(), EGameplayModOp::Override, NewMaxMana);
}

void AGASCharacter::SetStaminaValues(float NewStamina, float NewMaxStamina)
{
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetStaminaAttribute(), EGameplayModOp::Override, NewStamina);
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetMaxStaminaAttribute(), EGameplayModOp::Override, NewMaxStamina);
}

void AGASCharacter::SetEnergyValues(float NewEnergy, float NewMaxEnergy)
{
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetEnergyAttribute(), EGameplayModOp::Override, NewEnergy);
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetMaxEnergyAttribute(), EGameplayModOp::Override, NewMaxEnergy);
}

void AGASCharacter::SetPrayerPointsValues(float NewPrayerPoints, float NewMaxPrayerPoints)
{
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetPrayerPointsAttribute(), EGameplayModOp::Override, NewPrayerPoints);
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetMaxPrayerPointsAttribute(), EGameplayModOp::Override, NewMaxPrayerPoints);
}

/*	Template
void AGASCharacter::SetBEEPValues(float NewBEEP, float NewMaxBEEP)
{
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetBEEPAttribute(), EGameplayModOp::Override, NewBEEP);
	AbilitySystemComp->ApplyModToAttribute(BaseAttributeSetComp->GetMaxBEEPAttribute(), EGameplayModOp::Override, NewMaxBEEP);
}
*/
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


/*	Template
void AGASCharacter::OnBEEPChangedNative(const FOnAttributeChangeData& Data)
{
	OnBEEPChanged(Data.OldValue, Data.NewValue);
}
*/

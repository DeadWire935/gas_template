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
		void GetPrayerValues(float& Prayer, float& MaxPrayer);

	void OnHealthChangedNative(const FOnAttributeChangeData& Data);
	void OnManaChangedNative(const FOnAttributeChangeData& Data);
	void OnStaminaChangedNative(const FOnAttributeChangeData& Data);
	void OnEnergyChangedNative(const FOnAttributeChangeData& Data);
	void OnPrayerChangedNative(const FOnAttributeChangeData& Data);

	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnHealthChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnManaChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnStaminaChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnEnergyChanged(float OldValue, float NewValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "GASCharacter")
		void OnPrayerChanged(float OldValue, float NewValue);

};

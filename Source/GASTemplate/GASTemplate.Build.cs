// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASTemplate : ModuleRules
{
	public GASTemplate(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "GameplayTags", "GameplayAbilities", "GameplayTasks" });
	}
}

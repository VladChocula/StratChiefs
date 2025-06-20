// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SChiefs : ModuleRules
{
	public SChiefs(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"GameplayAbilities"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { 
			"GameplayTags", 
			"GameplayTasks" 
		});

		PublicIncludePaths.AddRange(new string[] {
			"SChiefs",
			"SChiefs/Variant_Platforming",
			"SChiefs/Variant_Combat",
			"SChiefs/Variant_Combat/AI",
			"SChiefs/Variant_SideScrolling",
			"SChiefs/Variant_SideScrolling/Gameplay",
			"SChiefs/Variant_SideScrolling/AI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}

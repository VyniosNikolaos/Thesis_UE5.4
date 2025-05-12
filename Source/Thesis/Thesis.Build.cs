// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Thesis : ModuleRules
{
	public Thesis(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput","PhysicsCore",
			"NetCore", "OnlineSubsystem", "OnlineSubsystemUtils", "NetCommon", "Networking",
			"UMG", "Slate", "SlateCore", 
			"SkeletalMerging", "MotionWarping",
			"GameplayAbilities", "GameplayTags", "GameplayTasks",
			"Niagara", 
			"AIModule", "NavigationSystem"
		});
	}
}

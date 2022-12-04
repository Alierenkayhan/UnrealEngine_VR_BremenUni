// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AlierenAdrianVRhw : ModuleRules
{
	public AlierenAdrianVRhw(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}

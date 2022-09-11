// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UETC_Proyecto_Final : ModuleRules
{
	public UETC_Proyecto_Final(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}


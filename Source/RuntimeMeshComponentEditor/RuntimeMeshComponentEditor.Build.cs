// Copyright 2016-2018 Chris Conway (Koderz). All Rights Reserved.

using UnrealBuildTool;

public class RuntimeMeshComponentEditor : ModuleRules
{
    public RuntimeMeshComponentEditor(ReadOnlyTargetRules rules) : base(rules)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
				// ... add other public dependencies that you statically link with here ...
                
            }
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                // ... add private dependencies that you statically link with here ...	
                "Engine",
                "Slate",
                "SlateCore",
                "RenderCore",
                "ShaderCore",
                "RHI",
                "UnrealEd",
                "LevelEditor",
                "PropertyEditor",
                "RawMesh",
                "AssetTools",
                "AssetRegistry",
                "Projects",
                "EditorStyle",
                "InputCore",

                "RuntimeMeshComponent",
            }
            );
        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {
				// ... add any modules that your module loads dynamically here ...
			}
            );
    }
}

using UnrealBuildTool;

public class InterfaceNarration : ModuleRules {
    public InterfaceNarration(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "MovieScene",
            "MovieSceneTracks",
            "OEICommon",
            "OEIText",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}

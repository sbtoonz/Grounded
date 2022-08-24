using UnrealBuildTool;

public class OEIPhotoMode : ModuleRules {
    public OEIPhotoMode(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CinematicCamera",
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

using UnrealBuildTool;

public class OEIMoviePlayer : ModuleRules {
    public OEIMoviePlayer(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "BinkMediaPlayer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "MediaAssets",
            "MediaUtils",
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

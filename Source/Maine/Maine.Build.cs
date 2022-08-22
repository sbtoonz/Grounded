using UnrealBuildTool;

public class Maine : ModuleRules {
    public Maine(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AudioMixer",
            "BinkMediaPlayer",
            "Chaos",
            "CinematicCamera",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "Foliage",
            "GameTelemetry",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "InterfaceNarration",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "Niagara",
            "NiagaraCore",
            "NiagaraShader",
            "OEICommon",
            "OEIFlowCharts",
            "OEIGlobalVariables",
            "OEIMoviePlayer",
            "OEIOnlineSubsystemUtils",
            "OEIPhotoMode",
            "OEIScripting",
            "OEIText",
            "OEIVoiceOver",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "PropertyPath",
            "ReplicationGraph",
            "Slate",
            "SlateCore",
            "UMG",
            "WebBrowserWidget",
        });
    }
}

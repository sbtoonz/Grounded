using UnrealBuildTool;

public class OnlineManager : ModuleRules {
    public OnlineManager(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AudioMixer",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "OEIOnlineSubsystemUtils",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
        });
    }
}

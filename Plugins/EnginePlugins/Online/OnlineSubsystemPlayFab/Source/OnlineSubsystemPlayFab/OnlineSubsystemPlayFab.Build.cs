using UnrealBuildTool;

public class OnlineSubsystemPlayFab : ModuleRules {
    public OnlineSubsystemPlayFab(ReadOnlyTargetRules Target) : base(Target) {
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

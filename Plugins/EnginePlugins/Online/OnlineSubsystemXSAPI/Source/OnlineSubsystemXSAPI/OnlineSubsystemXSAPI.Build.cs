using UnrealBuildTool;

public class OnlineSubsystemXSAPI : ModuleRules {
    public OnlineSubsystemXSAPI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "OEIOnlineSubsystemUtils",
        });
    }
}

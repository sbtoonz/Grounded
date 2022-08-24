using UnrealBuildTool;

public class OEIVoiceOver : ModuleRules {
    public OEIVoiceOver(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "MovieScene",
            "OEICommon",
            "OEIFlowCharts",
            "OEIGlobalVariables",
            "OEIScripting",
            "OEIText",
        });
    }
}

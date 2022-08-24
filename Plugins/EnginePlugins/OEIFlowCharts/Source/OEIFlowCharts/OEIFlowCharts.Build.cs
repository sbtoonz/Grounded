using UnrealBuildTool;

public class OEIFlowCharts : ModuleRules {
    public OEIFlowCharts(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "OEICommon",
            "OEIGlobalVariables",
            "OEIScripting",
            "OEIText",
        });
    }
}

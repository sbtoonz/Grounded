using UnrealBuildTool;

public class MaineEditorTarget : TargetRules {
	public MaineEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"Maine",
			"OEIValidation",
		});
	}
}

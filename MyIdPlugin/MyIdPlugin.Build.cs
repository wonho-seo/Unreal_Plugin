// Some copyright should be here...

using UnrealBuildTool;

public class MyIdPlugin : ModuleRules
{
	public MyIdPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine"
				// ... add other public dependencies that you statically link with here ...
			}
			);
	}
}

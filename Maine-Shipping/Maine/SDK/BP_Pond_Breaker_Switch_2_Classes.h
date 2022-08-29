#pragma once

/**
 * Name: Maine
 * Version: Shipping
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_Pond_Breaker_Switch_2.BP_Pond_Breaker_Switch_1_C
	 * Size -> 0x000C (FullSize[0x0458] - InheritedSize[0x044C])
	 */
	class ABP_Pond_Breaker_Switch_1_C : public ABP_Pond_Breaker_Switch_Base_C
	{
	public:
		unsigned char                                              UnknownData_MG59[0x4];                                   // 0x044C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void ToggleIsOnGlobalVariableImplementation();
		void ExecuteUbergraph_BP_Pond_Breaker_Switch_2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

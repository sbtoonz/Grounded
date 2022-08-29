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
	 * BlueprintGeneratedClass BP_Termite_WaveAI.BP_Termite_WaveAI_C
	 * Size -> 0x0008 (FullSize[0x05B8] - InheritedSize[0x05B0])
	 */
	class ABP_Termite_WaveAI_C : public ABP_Termite_AI_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void ExecuteUbergraph_BP_Termite_WaveAI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * BlueprintGeneratedClass BP_AntLeg_L_Front.BP_AntLeg_L_Front_C
	 * Size -> 0x000D (FullSize[0x02B0] - InheritedSize[0x02A3])
	 */
	class ABP_AntLeg_L_Front_C : public ABP_InsectPart_C
	{
	public:
		unsigned char                                              UnknownData_026C[0x5];                                   // 0x02A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_AntLeg_L_Front(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

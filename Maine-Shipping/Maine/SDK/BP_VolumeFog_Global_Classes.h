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
	 * BlueprintGeneratedClass BP_VolumeFog_Global.BP_VolumeFog_Global_C
	 * Size -> 0x0008 (FullSize[0x02C0] - InheritedSize[0x02B8])
	 */
	class ABP_VolumeFog_Global_C : public ABP_VolumeFog_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void UpdateFogMask(float OffsetMaskX, float OffsetMaskY, float ScaleX, float ScaleY);
		void Set_D_Box_Mask(bool Reset, class ABP_VolumeFog_C* NewParam);
		void ExecuteUbergraph_BP_VolumeFog_Global(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

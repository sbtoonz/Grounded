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
	 * BlueprintGeneratedClass BP_FreeCamPhotoPawn.BP_FreeCamPhotoPawn_C
	 * Size -> 0x0009 (FullSize[0x0311] - InheritedSize[0x0308])
	 */
	class ABP_FreeCamPhotoPawn_C : public AMaineFreeCamPhotoPawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0308(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       AreSettingsOpen;                                         // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ExitPhotoMode();
		void BrowsePhotos();
		void ChangeCameraType();
		void ExecuteUbergraph_BP_FreeCamPhotoPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

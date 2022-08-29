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
	 * BlueprintGeneratedClass BP_SpringArmPhotoPawn.BP_SpringArmPhotoPawn_C
	 * Size -> 0x0010 (FullSize[0x0330] - InheritedSize[0x0320])
	 */
	class ABP_SpringArmPhotoPawn_C : public ASpringArmPhotoPawn
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USphereComponent*                                    CameraCollision;                                         // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ExitPhotoMode();
		void BrowsePhotos();
		void ChangeCameraType();
		void ExecuteUbergraph_BP_SpringArmPhotoPawn(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

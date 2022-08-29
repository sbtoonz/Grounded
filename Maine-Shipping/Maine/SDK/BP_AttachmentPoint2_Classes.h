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
	 * BlueprintGeneratedClass BP_AttachmentPoint2.BP_AttachmentPoint2_C
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class ABP_AttachmentPoint2_C : public AAttachmentPoint
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USphereComponent*                                    Sphere;                                                  // 0x0248(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_AttachmentPoint2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

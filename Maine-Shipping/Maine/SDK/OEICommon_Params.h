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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OEICommon.ObsidianIDComponent.ResetID
	 */
	struct UObsidianIDComponent_ResetID_Params
	{	};

	/**
	 * Function OEICommon.OEIUtilitiesLibrary.GetLoadedSubLevels
	 */
	struct UOEIUtilitiesLibrary_GetLoadedSubLevels_Params
	{
	public:
		class UWorld*                                              World;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEICommon.OEIUtilitiesLibrary.ExecuteConsoleCommand
	 */
	struct UOEIUtilitiesLibrary_ExecuteConsoleCommand_Params
	{
	public:
		class FString                                              Command;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEICommon.OEIUtilitiesLibrary.DoesMapExist
	 */
	struct UOEIUtilitiesLibrary_DoesMapExist_Params
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEICommon.OEIUtilitiesLibrary.CameraLookAtActor
	 */
	struct UOEIUtilitiesLibrary_CameraLookAtActor_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             OutCameraPos;                                            // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OutCameraRot;                                            // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEICommon.OEIWorldRuntime.GetOEIWorldRuntime
	 */
	struct UOEIWorldRuntime_GetOEIWorldRuntime_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOEIWorldRuntime*                                    ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEICommon.PooledActor.IsSpawned
	 */
	struct APooledActor_IsSpawned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEICommon.PooledActor.Deactivate
	 */
	struct APooledActor_Deactivate_Params
	{	};

	/**
	 * Function OEICommon.PooledActor.Activate
	 */
	struct APooledActor_Activate_Params
	{
	public:
		bool                                                       Reconstruct;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

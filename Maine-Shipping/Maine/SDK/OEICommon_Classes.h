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
	 * Class OEICommon.Shape
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UShape : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.BoxShape
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UBoxShape : public UShape
	{
	public:
		struct FBoxShapeData                                       BoxShape;                                                // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.CapsuleShape
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UCapsuleShape : public UShape
	{
	public:
		struct FCapsuleShapeData                                   CapsuleShape;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.OEIWorldRuntimeSubsystem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIWorldRuntimeSubsystem : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.GameObjectRegistry
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UGameObjectRegistry : public UOEIWorldRuntimeSubsystem
	{
	public:
		TMap<struct FGuid, class AActor*>                          RegisteredGameObjects;                                   // 0x0028(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.ObsidianIDComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UObsidianIDComponent : public UActorComponent
	{
	public:
		struct FGuid                                               ID;                                                      // 0x00B0(0x0010) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DataTag;                                                 // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIgnoreSavingOfDestruction;                              // 0x00C4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bInstancesShareSavedState;                               // 0x00C5(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6CCS[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (PADDING)

	public:
		void ResetID();
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.OEICommonProjectSettings
	 * Size -> 0x0088 (FullSize[0x00C0] - InheritedSize[0x0038])
	 */
	class UOEICommonProjectSettings : public UDeveloperSettings
	{
	public:
		TArray<class FString>                                      Packages;                                                // 0x0038(0x0010) Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic
		class FString                                              CrashBuddyConfigFile;                                    // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChatterEventQueueTime;                                   // 0x0058(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChatterEventWaitTime;                                    // 0x005C(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChatterEventQueueProcessLimit;                           // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowTextReviewPrefixes;                                 // 0x0064(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1FFB[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftClassPath                                      WorldRuntimeClassName;                                   // 0x0068(0x0018) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ExportedFolder;                                          // 0x0080(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              DesignSourceFolder;                                      // 0x0090(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              DesignStagingFolder;                                     // 0x00A0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              OverrideFolder;                                          // 0x00B0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.OEIUtilitiesLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIUtilitiesLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class FString> GetLoadedSubLevels(class UWorld* World);
		void ExecuteConsoleCommand(const class FString& Command);
		bool DoesMapExist(const class FString& MapName);
		void CameraLookAtActor(TArray<class AActor*> Actors, struct FVector* OutCameraPos, struct FRotator* OutCameraRot);
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.OEIWorldRuntime
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UOEIWorldRuntime : public UObject
	{
	public:
		TMap<class FName, class UOEIWorldRuntimeSubsystem*>        Subsystems;                                              // 0x0028(0x0050) Transient, NativeAccessSpecifierPrivate

	public:
		class UOEIWorldRuntime* GetOEIWorldRuntime(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.PooledActor
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class APooledActor : public AActor
	{
	public:
		bool                                                       Spawned;                                                 // 0x0230(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GQRC[0x7];                                   // 0x0231(0x0007) MISSED OFFSET (PADDING)

	public:
		bool IsSpawned();
		void Deactivate();
		void Activate(bool Reconstruct);
		static UClass* StaticClass();
	};

	/**
	 * Class OEICommon.SphereShape
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USphereShape : public UShape
	{
	public:
		struct FSphereShapeData                                    SphereShape;                                             // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

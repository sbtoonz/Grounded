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
	 * Class MRMesh.MeshReconstructorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshReconstructorBase : public UObject
	{
	public:
		void StopReconstruction();
		void StartReconstruction();
		void PauseReconstruction();
		bool IsReconstructionStarted();
		bool IsReconstructionPaused();
		void DisconnectMRMesh();
		void ConnectMRMesh(class UMRMeshComponent* Mesh);
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MockDataMeshTrackerComponent
	 * Size -> 0x0078 (FullSize[0x02A0] - InheritedSize[0x0228])
	 */
	class UMockDataMeshTrackerComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnMeshTrackerUpdated;                                    // 0x0228(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       ScanWorld;                                               // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestNormals;                                          // 0x0239(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestVertexConfidence;                                 // 0x023A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshTrackerVertexColorMode                                VertexColorMode;                                         // 0x023B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HLHH[0x4];                                   // 0x023C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FColor>                                      BlockVertexColors;                                       // 0x0240(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceZero;                           // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceOne;                            // 0x0260(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateInterval;                                          // 0x0270(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B48M[0x4];                                   // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    MRMesh;                                                  // 0x0278(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VOI[0x20];                                  // 0x0280(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
		void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MRMeshComponent
	 * Size -> 0x00B8 (FullSize[0x0530] - InheritedSize[0x0478])
	 */
	class UMRMeshComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_LHM3[0x8];                                   // 0x0478(0x0008) Fix Super Size
		unsigned char                                              UnknownData_Y6SL[0x8];                                   // 0x0480(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0488(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  WireframeMaterial;                                       // 0x0490(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreateMeshProxySections;                                // 0x0498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdateNavMeshOnMeshUpdate;                              // 0x0499(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bNeverCreateCollisionMesh;                               // 0x049A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N7U6[0x5];                                   // 0x049B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          CachedBodySetup;                                         // 0x04A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UBodySetup*>                                  BodySetups;                                              // 0x04A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_57AV[0x78];                                  // 0x04B8(0x0078) MISSED OFFSET (PADDING)

	public:
		void SetWireframeMaterial(class UMaterialInterface* InMaterial);
		void SetWireframeColor(const struct FLinearColor& InColor);
		void SetUseWireframe(bool bUseWireframe);
		void SetEnableMeshOcclusion(bool bEnable);
		bool IsConnected();
		struct FLinearColor GetWireframeColor();
		bool GetUseWireframe();
		bool GetEnableMeshOcclusion();
		void ForceNavMeshUpdate();
		void Clear();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

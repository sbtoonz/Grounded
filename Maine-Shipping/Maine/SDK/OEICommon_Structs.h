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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum OEICommon.EOEIGender
	 */
	enum class EOEIGender : uint8_t
	{
		Male          = 0,
		Female        = 1,
		Neuter        = 2,
		GenderNeutral = 3,
		MAX           = 4
	};

	/**
	 * Enum OEICommon.EComparisonOperator
	 */
	enum class EComparisonOperator : uint8_t
	{
		Equals              = 0,
		NotEqual            = 1,
		GreaterThan         = 2,
		LessThan            = 3,
		GreaterThanOrEquals = 4,
		LessThanOrEquals    = 5,
		MAX                 = 6
	};

	/**
	 * Enum OEICommon.EBoolResult
	 */
	enum class EBoolResult : uint8_t
	{
		OnTrue  = 0,
		OnFalse = 1,
		MAX     = 2
	};

	/**
	 * Enum OEICommon.EShapeType
	 */
	enum class EShapeType : uint8_t
	{
		Unknown = 0,
		Box     = 1,
		Sphere  = 2,
		Capsule = 3,
		MAX     = 4
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OEICommon.ShapeInterface
	 * Size -> 0x0008
	 */
	struct FShapeInterface
	{
	public:
		unsigned char                                              UnknownData_A8GM[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEICommon.BoxShapeData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FBoxShapeData : public FShapeInterface
	{
	public:
		struct FVector                                             BoxExtent;                                               // 0x0008(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEDM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEICommon.CapsuleShapeData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FCapsuleShapeData : public FShapeInterface
	{
	public:
		float                                                      CapsuleHalfHeight;                                       // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleRadius;                                           // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEICommon.SphereShapeData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FSphereShapeData : public FShapeInterface
	{
	public:
		float                                                      SphereRadius;                                            // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_215P[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEICommon.GuidSet
	 * Size -> 0x0050
	 */
	struct FGuidSet
	{
	public:
		unsigned char                                              IDs[0x50];                                               // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct OEICommon.IDSet
	 * Size -> 0x0050
	 */
	struct FIDSet
	{
	public:
		unsigned char                                              IDs[0x50];                                               // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct OEICommon.ObsidianIDInstanceData
	 * Size -> 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
	 */
	struct FObsidianIDInstanceData : public FActorComponentInstanceData
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0068(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEICommon.TransformedShape
	 * Size -> 0x0040
	 */
	struct FTransformedShape
	{
	public:
		class UShape*                                              Shape;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJZS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          ShapeTransform;                                          // 0x0010(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEICommon.ShapeVariant
	 * Size -> 0x0040
	 */
	struct FShapeVariant
	{
	public:
		EShapeType                                                 ShapeType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TAFV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoxShapeData                                       BoxData;                                                 // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		struct FSphereShapeData                                    SphereData;                                              // 0x0020(0x0010) Edit, NativeAccessSpecifierPublic
		struct FCapsuleShapeData                                   CapsuleData;                                             // 0x0030(0x0010) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct OEICommon.TransformedShapeVariant
	 * Size -> 0x0070
	 */
	struct FTransformedShapeVariant
	{
	public:
		struct FTransform                                          ShapeTransform;                                          // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FShapeVariant                                       Shape;                                                   // 0x0030(0x0040) Edit, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

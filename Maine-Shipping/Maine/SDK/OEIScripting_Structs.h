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
	 * Enum OEIScripting.EScriptTargetType
	 */
	enum class EScriptTargetType : uint8_t
	{
		Owner                = 0,
		LocalPlayerPawn      = 1,
		InstigatorPlayerPawn = 2,
		ResponderPlayerPawn  = 3,
		Speaker              = 4,
		Listener             = 5,
		MAX                  = 6,
		WorldContextObject   = 7
	};

	/**
	 * Enum OEIScripting.ELogicalOperator
	 */
	enum class ELogicalOperator : uint8_t
	{
		And = 0,
		Or  = 1,
		MAX = 2
	};

	/**
	 * Enum OEIScripting.EGlobalScriptType
	 */
	enum class EGlobalScriptType : uint8_t
	{
		Script      = 0,
		Conditional = 1,
		MAX         = 2
	};

	/**
	 * Enum OEIScripting.EExpressionComponentType
	 */
	enum class EExpressionComponentType : uint8_t
	{
		ScriptCall = 0,
		Expression = 1,
		MAX        = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OEIScripting.GlobalScriptBase
	 * Size -> 0x0038
	 */
	struct FGlobalScriptBase
	{
	public:
		unsigned char                                              UnknownData_F396[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               ID;                                                      // 0x0018(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EGlobalScriptType                                          ScriptType;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TMDR[0xF];                                   // 0x0029(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIScripting.ScriptCall
	 * Size -> 0x0058
	 */
	struct FScriptCall
	{
	public:
		unsigned char                                              UnknownData_4H7I[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Library;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Script;                                                  // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Flags;                                                   // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FString>                                      Parameters;                                              // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    ConditionalIndex;                                        // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   FunctionHash;                                            // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ParamHash;                                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K992[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIScripting.GlobalScript
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	struct FGlobalScript : public FGlobalScriptBase
	{
	public:
		TArray<struct FScriptCall>                                 ScriptCalls;                                             // 0x0038(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIScripting.ExpressionComponent
	 * Size -> 0x0010
	 */
	struct FExpressionComponent
	{
	public:
		unsigned char                                              UnknownData_GS85[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ELogicalOperator                                           Operator;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_QBJB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIScripting.ConditionalExpression
	 * Size -> 0x0020 (FullSize[0x0030] - InheritedSize[0x0010])
	 */
	struct FConditionalExpression : public FExpressionComponent
	{
	public:
		TArray<EExpressionComponentType>                           ComponentTypes;                                          // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            ComponentIndices;                                        // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIScripting.ConditionalCall
	 * Size -> 0x0060 (FullSize[0x0070] - InheritedSize[0x0010])
	 */
	struct FConditionalCall : public FExpressionComponent
	{
	public:
		bool                                                       bNot;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DJB0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Library;                                                 // 0x0018(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              ScriptCall;                                              // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              FullName;                                                // 0x0038(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Flags;                                                   // 0x0048(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class FString>                                      Parameters;                                              // 0x0058(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		uint32_t                                                   FunctionHash;                                            // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint32_t                                                   ParamHash;                                               // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIScripting.Conditional
	 * Size -> 0x0050
	 */
	struct FConditional
	{
	public:
		TArray<struct FConditionalExpression>                      ExpressionComponents;                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FConditionalCall>                            CallComponents;                                          // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FConditionalExpression                              Root;                                                    // 0x0020(0x0030) Edit, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct OEIScripting.GlobalConditional
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	struct FGlobalConditional : public FGlobalScriptBase
	{
	public:
		struct FConditional                                        Conditional;                                             // 0x0038(0x0050) Edit, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIScripting.GlobalConditionalReference
	 * Size -> 0x0010
	 */
	struct FGlobalConditionalReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIScripting.GlobalScriptReference
	 * Size -> 0x0010
	 */
	struct FGlobalScriptReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIScripting.TimelineScriptCall
	 * Size -> 0x0020 (FullSize[0x0078] - InheritedSize[0x0058])
	 */
	struct FTimelineScriptCall : public FScriptCall
	{
	public:
		class FString                                              TimelineName;                                            // 0x0058(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ID;                                                      // 0x0068(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

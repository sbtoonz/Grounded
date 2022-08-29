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
	 * ScriptStruct OEIGlobalVariables.GlobalVariableEntry
	 * Size -> 0x0018
	 */
	struct FGlobalVariableEntry
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultValue;                                            // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L61R[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct OEIGlobalVariables.GlobalVariableReference
	 * Size -> 0x0010
	 */
	struct FGlobalVariableReference
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct OEIGlobalVariables.GlobalVariableConditional
	 * Size -> 0x002C
	 */
	struct FGlobalVariableConditional
	{
	public:
		struct FGlobalVariableReference                            ID;                                                      // 0x0000(0x0010) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EComparisonOperator                                        Operator;                                                // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7GCV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VariableValue;                                           // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGlobalVariableReference                            ExternalVariableValueID;                                 // 0x0018(0x0010) Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDefaultReturnValue;                                     // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ILY8[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function OEIScripting.ConditionalLibrary.MakeGlobalConditionalReference
	 */
	struct UConditionalLibrary_MakeGlobalConditionalReference_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGlobalConditionalReference                         ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ConditionalLibrary.GetGlobalConditionalID
	 */
	struct UConditionalLibrary_GetGlobalConditionalID_Params
	{
	public:
		struct FGlobalConditionalReference                         GlobalConditional;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ScriptLibrary.MakeGlobalScriptReference
	 */
	struct UScriptLibrary_MakeGlobalScriptReference_Params
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGlobalScriptReference                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ScriptLibrary.GetGlobalScriptID
	 */
	struct UScriptLibrary_GetGlobalScriptID_Params
	{
	public:
		struct FGlobalScriptReference                              GlobalScript;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FGuid                                               ReturnValue;                                             // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ConditionalLibraryScripting.CallGlobalConditional
	 */
	struct UConditionalLibraryScripting_CallGlobalConditional_Params
	{
	public:
		struct FGuid                                               GlobalScriptID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ConditionalLibraryScripting.AlwaysTrue
	 */
	struct UConditionalLibraryScripting_AlwaysTrue_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ConditionalLibraryScripting.AlwaysFalse
	 */
	struct UConditionalLibraryScripting_AlwaysFalse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ScriptLibraryScripting.DebugPrintMessage
	 */
	struct UScriptLibraryScripting_DebugPrintMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ScriptLibraryScripting.CallGlobalScript
	 */
	struct UScriptLibraryScripting_CallGlobalScript_Params
	{
	public:
		struct FGuid                                               GlobalScriptID;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ScriptLibraryScripting.AddDataAssetHardRef
	 */
	struct UScriptLibraryScripting_AddDataAssetHardRef_Params
	{
	public:
		class FString                                              DataAsset;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OEIScripting.ScriptLibraryScripting.AddClassHardRef
	 */
	struct UScriptLibraryScripting_AddClassHardRef_Params
	{
	public:
		class FString                                              Class;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

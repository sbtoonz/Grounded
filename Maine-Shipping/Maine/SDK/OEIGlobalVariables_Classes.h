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
	 * Class OEIGlobalVariables.GlobalVariableBundle
	 * Size -> 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
	 */
	class UGlobalVariableBundle : public UDataAsset
	{
	public:
		TMap<struct FGuid, struct FGlobalVariableEntry>            GlobalVariableValues;                                    // 0x0030(0x0050) Edit, NativeAccessSpecifierPublic
		int32_t                                                    Hash;                                                    // 0x0080(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MBBU[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.GlobalVariableConditionals
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalVariableConditionals : public UConditionalLibrary
	{
	public:
		bool IsGlobalValue(const struct FGuid& Variable, EComparisonOperator Operator, int32_t Value);
		bool CompareGlobals(const struct FGuid& Variable1, EComparisonOperator Operator, const struct FGuid& Variable2);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.GlobalVariableConditionalsBP
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalVariableConditionalsBP : public UBlueprintFunctionLibrary
	{
	public:
		bool IsGlobalValue(const struct FGuid& Variable, EComparisonOperator Operator, int32_t Value, EBoolResult* OutResult);
		bool CompareGlobals(const struct FGuid& Variable1, EComparisonOperator Operator, const struct FGuid& Variable2, EBoolResult* OutResult);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.SetGlobalValueEvent
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class USetGlobalValueEvent : public UScriptEvent
	{
	public:
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VariableValue;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4CSK[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.SetGlobalIfGlobalEvent
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class USetGlobalIfGlobalEvent : public UScriptEvent
	{
	public:
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VariableValue;                                           // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReference                            ConditionalGlobalVariable;                               // 0x003C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConditionalValue;                                        // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.IncrementGlobalValueEvent
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UIncrementGlobalValueEvent : public UScriptEvent
	{
	public:
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IncrementValue;                                          // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MCM4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.RandomizeGlobalValueEvent
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class URandomizeGlobalValueEvent : public UScriptEvent
	{
	public:
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinValue;                                                // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxValue;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.GlobalVariableScripts
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGlobalVariableScripts : public UScriptLibrary
	{
	public:
		void SetGlobalValue(const struct FGuid& Variable, int32_t Value, class AActor* Instigator);
		void SetGlobalIfGlobal(const struct FGuid& ConditionVariable, int32_t ConditionValue, const struct FGuid& Variable, int32_t Value, class AActor* Instigator);
		void RandomizeGlobalValueWithGlobals(const struct FGuid& Variable, const struct FGuid& MinValueGlobal, const struct FGuid& MaxValueGlobal, class AActor* Instigator);
		void RandomizeGlobalValue(const struct FGuid& Variable, int32_t MinValue, int32_t MaxValue, class AActor* Instigator);
		void IncrementGlobalValue(const struct FGuid& Variable, int32_t IncrementValue, class AActor* Instigator);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.OEIGlobalVariableLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UOEIGlobalVariableLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FGlobalVariableReference MakeGlobalVariableReference(const struct FGuid& ID);
		struct FGuid GetGlobalVariableID(const struct FGlobalVariableReference& Variable);
		static UClass* StaticClass();
	};

	/**
	 * Class OEIGlobalVariables.OEIGlobalVariableSettings
	 * Size -> 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
	 */
	class UOEIGlobalVariableSettings : public UDeveloperSettings
	{
	public:
		unsigned char                                              GlobalVariableBundles[0x10];                             // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

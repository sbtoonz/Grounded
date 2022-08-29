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
	 * BlueprintGeneratedClass CompanyIntro.CompanyIntro_C
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class ACompanyIntro_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0238(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_CompanyIntro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

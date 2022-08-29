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
	 * Class PlayFabCommon.PlayFabAuthenticationContext
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class UPlayFabAuthenticationContext : public UObject
	{
	public:
		class FString                                              ClientSessionTicket;                                     // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              EntityToken;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              DeveloperSecretKey;                                      // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              PlayFabId;                                               // 0x0058(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetPlayFabId(const class FString& InKey);
		void SetEntityToken(const class FString& InToken);
		void SetDeveloperSecretKey(const class FString& InKey);
		void SetClientSessionTicket(const class FString& InTicket);
		class FString GetPlayFabId();
		class FString GetEntityToken();
		class FString GetDeveloperSecretKey();
		class FString GetClientSessionTicket();
		void ForgetAllCredentials();
		void ClientAdminSecurityCheck();
		static UClass* StaticClass();
	};

	/**
	 * Class PlayFabCommon.PlayFabRuntimeSettings
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UPlayFabRuntimeSettings : public UObject
	{
	public:
		class FString                                              ProductionEnvironmentURL;                                // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleId;                                                 // 0x0038(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeveloperSecretKey;                                      // 0x0048(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
	 */
	struct UPlayFabAuthenticationContext_SetPlayFabId_Params
	{
	public:
		class FString                                              InKey;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
	 */
	struct UPlayFabAuthenticationContext_SetEntityToken_Params
	{
	public:
		class FString                                              InToken;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
	 */
	struct UPlayFabAuthenticationContext_SetDeveloperSecretKey_Params
	{
	public:
		class FString                                              InKey;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
	 */
	struct UPlayFabAuthenticationContext_SetClientSessionTicket_Params
	{
	public:
		class FString                                              InTicket;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
	 */
	struct UPlayFabAuthenticationContext_GetPlayFabId_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
	 */
	struct UPlayFabAuthenticationContext_GetEntityToken_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
	 */
	struct UPlayFabAuthenticationContext_GetDeveloperSecretKey_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
	 */
	struct UPlayFabAuthenticationContext_GetClientSessionTicket_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
	 */
	struct UPlayFabAuthenticationContext_ForgetAllCredentials_Params
	{	};

	/**
	 * Function PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
	 */
	struct UPlayFabAuthenticationContext_ClientAdminSecurityCheck_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

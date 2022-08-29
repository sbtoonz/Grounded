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
	 * Enum PlayFab.EGameBuildStatus
	 */
	enum class EGameBuildStatus : uint8_t
	{
		pfenum_Available           = 0,
		pfenum_Validating          = 1,
		pfenum_InvalidBuildPackage = 2,
		pfenum_Processing          = 3,
		pfenum_FailedToProcess     = 4,
		pfenum_MAX                 = 5
	};

	/**
	 * Enum PlayFab.EStatisticResetIntervalOption
	 */
	enum class EStatisticResetIntervalOption : uint8_t
	{
		pfenum_Never = 0,
		pfenum_Hour  = 1,
		pfenum_Day   = 2,
		pfenum_Week  = 3,
		pfenum_Month = 4,
		pfenum_MAX   = 5
	};

	/**
	 * Enum PlayFab.EStatisticAggregationMethod
	 */
	enum class EStatisticAggregationMethod : uint8_t
	{
		pfenum_Last = 0,
		pfenum_Min  = 1,
		pfenum_Max  = 2,
		pfenum_Sum  = 3
	};

	/**
	 * Enum PlayFab.ERegion
	 */
	enum class ERegion : uint8_t
	{
		pfenum_USCentral = 0,
		pfenum_USEast    = 1,
		pfenum_EUWest    = 2,
		pfenum_Singapore = 3,
		pfenum_Japan     = 4,
		pfenum_Brazil    = 5,
		pfenum_Australia = 6,
		pfenum_MAX       = 7
	};

	/**
	 * Enum PlayFab.EPfSourceType
	 */
	enum class EPfSourceType : uint8_t
	{
		pfenum_Admin      = 0,
		pfenum_BackEnd    = 1,
		pfenum_GameClient = 2,
		pfenum_GameServer = 3,
		pfenum_Partner    = 4,
		pfenum_Custom     = 5,
		pfenum_API        = 6,
		pfenum_MAX        = 7
	};

	/**
	 * Enum PlayFab.EAuthTokenType
	 */
	enum class EAuthTokenType : uint8_t
	{
		pfenum_Email = 0,
		pfenum_MAX   = 1
	};

	/**
	 * Enum PlayFab.ETaskInstanceStatus
	 */
	enum class ETaskInstanceStatus : uint8_t
	{
		pfenum_Succeeded  = 0,
		pfenum_Starting   = 1,
		pfenum_InProgress = 2,
		pfenum_Failed     = 3,
		pfenum_Aborted    = 4,
		pfenum_Stalled    = 5,
		pfenum_MAX        = 6
	};

	/**
	 * Enum PlayFab.EResolutionOutcome
	 */
	enum class EResolutionOutcome : uint8_t
	{
		pfenum_Revoke    = 0,
		pfenum_Reinstate = 1,
		pfenum_Manual    = 2,
		pfenum_MAX       = 3
	};

	/**
	 * Enum PlayFab.EPushSetupPlatform
	 */
	enum class EPushSetupPlatform : uint8_t
	{
		pfenum_GCM          = 0,
		pfenum_APNS         = 1,
		pfenum_APNS_SANDBOX = 2,
		pfenum_MAX          = 3
	};

	/**
	 * Enum PlayFab.EScheduledTaskType
	 */
	enum class EScheduledTaskType : uint8_t
	{
		pfenum_CloudScript               = 0,
		pfenum_ActionsOnPlayerSegment    = 1,
		pfenum_CloudScriptAzureFunctions = 2,
		pfenum_InsightsScheduledScaling  = 3,
		pfenum_MAX                       = 4
	};

	/**
	 * Enum PlayFab.EUserDataPermission
	 */
	enum class EUserDataPermission : uint8_t
	{
		pfenum_Private = 0,
		pfenum_Public  = 1,
		pfenum_MAX     = 2
	};

	/**
	 * Enum PlayFab.ELoginIdentityProvider
	 */
	enum class ELoginIdentityProvider : uint8_t
	{
		pfenum_Unknown               = 0,
		pfenum_PlayFab               = 1,
		pfenum_Custom                = 2,
		pfenum_GameCenter            = 3,
		pfenum_GooglePlay            = 4,
		pfenum_Steam                 = 5,
		pfenum_XBoxLive              = 6,
		pfenum_PSN                   = 7,
		pfenum_Kongregate            = 8,
		pfenum_Facebook              = 9,
		pfenum_IOSDevice             = 10,
		pfenum_AndroidDevice         = 11,
		pfenum_Twitch                = 12,
		pfenum_WindowsHello          = 13,
		pfenum_GameServer            = 14,
		pfenum_CustomServer          = 15,
		pfenum_NintendoSwitch        = 16,
		pfenum_FacebookInstantGames  = 17,
		pfenum_OpenIdConnect         = 18,
		pfenum_Apple                 = 19,
		pfenum_NintendoSwitchAccount = 20,
		pfenum_MAX                   = 21
	};

	/**
	 * Enum PlayFab.EIdentifiedDeviceType
	 */
	enum class EIdentifiedDeviceType : uint8_t
	{
		pfenum_Unknown  = 0,
		pfenum_XboxOne  = 1,
		pfenum_Scarlett = 2,
		pfenum_MAX      = 3
	};

	/**
	 * Enum PlayFab.EMatchmakeStatus
	 */
	enum class EMatchmakeStatus : uint8_t
	{
		pfenum_Complete         = 0,
		pfenum_Waiting          = 1,
		pfenum_GameNotFound     = 2,
		pfenum_NoAvailableSlots = 3,
		pfenum_SessionClosed    = 4,
		pfenum_MAX              = 5
	};

	/**
	 * Enum PlayFab.ETransactionStatus
	 */
	enum class ETransactionStatus : uint8_t
	{
		pfenum_CreateCart       = 0,
		pfenum_Init             = 1,
		pfenum_Approved         = 2,
		pfenum_Succeeded        = 3,
		pfenum_FailedByProvider = 4,
		pfenum_DisputePending   = 5,
		pfenum_RefundPending    = 6,
		pfenum_Refunded         = 7,
		pfenum_RefundFailed     = 8,
		pfenum_ChargedBack      = 9,
		pfenum_FailedByUber     = 10,
		pfenum_FailedByPlayFab  = 11,
		pfenum_Revoked          = 12,
		pfenum_TradePending     = 13,
		pfenum_Traded           = 14,
		pfenum_Upgraded         = 15,
		pfenum_StackPending     = 16,
		pfenum_Stacked          = 17,
		pfenum_Other            = 18,
		pfenum_Failed           = 19,
		pfenum_MAX              = 20
	};

	/**
	 * Enum PlayFab.ECloudScriptRevisionOption
	 */
	enum class ECloudScriptRevisionOption : uint8_t
	{
		pfenum_Live     = 0,
		pfenum_Latest   = 1,
		pfenum_Specific = 2,
		pfenum_MAX      = 3
	};

	/**
	 * Enum PlayFab.ETradeStatus
	 */
	enum class ETradeStatus : uint8_t
	{
		pfenum_Invalid   = 0,
		pfenum_Opening   = 1,
		pfenum_Open      = 2,
		pfenum_Accepting = 3,
		pfenum_Accepted  = 4,
		pfenum_Filled    = 5,
		pfenum_Cancelled = 6,
		pfenum_MAX       = 7
	};

	/**
	 * Enum PlayFab.EAdActivity
	 */
	enum class EAdActivity : uint8_t
	{
		pfenum_Opened = 0,
		pfenum_Closed = 1,
		pfenum_Start  = 2,
		pfenum_End    = 3,
		pfenum_MAX    = 4
	};

	/**
	 * Enum PlayFab.EExperimentType
	 */
	enum class EExperimentType : uint8_t
	{
		pfenum_Active   = 0,
		pfenum_Snapshot = 1,
		pfenum_MAX      = 2
	};

	/**
	 * Enum PlayFab.EOperationTypes
	 */
	enum class EOperationTypes : uint8_t
	{
		pfenum_Created = 0,
		pfenum_Updated = 1,
		pfenum_Deleted = 2,
		pfenum_None    = 3,
		pfenum_MAX     = 4
	};

	/**
	 * Enum PlayFab.EAzureVmSize
	 */
	enum class EAzureVmSize : uint8_t
	{
		pfenum_Standard_A1       = 0,
		pfenum_Standard_A2       = 1,
		pfenum_Standard_A3       = 2,
		pfenum_Standard_A4       = 3,
		pfenum_Standard_A1_v2    = 4,
		pfenum_Standard_A2_v2    = 5,
		pfenum_Standard_A4_v2    = 6,
		pfenum_Standard_A8_v2    = 7,
		pfenum_Standard_D1_v2    = 8,
		pfenum_Standard_D2_v2    = 9,
		pfenum_Standard_D3_v2    = 10,
		pfenum_Standard_D4_v2    = 11,
		pfenum_Standard_D5_v2    = 12,
		pfenum_Standard_D2_v3    = 13,
		pfenum_Standard_D4_v3    = 14,
		pfenum_Standard_D8_v3    = 15,
		pfenum_Standard_D16_v3   = 16,
		pfenum_Standard_F1       = 17,
		pfenum_Standard_F2       = 18,
		pfenum_Standard_F4       = 19,
		pfenum_Standard_F8       = 20,
		pfenum_Standard_F16      = 21,
		pfenum_Standard_F2s_v2   = 22,
		pfenum_Standard_F4s_v2   = 23,
		pfenum_Standard_F8s_v2   = 24,
		pfenum_Standard_F16s_v2  = 25,
		pfenum_Standard_D2as_v4  = 26,
		pfenum_Standard_D4as_v4  = 27,
		pfenum_Standard_D8as_v4  = 28,
		pfenum_Standard_D16as_v4 = 29,
		pfenum_Standard_D2a_v4   = 30,
		pfenum_Standard_D4a_v4   = 31,
		pfenum_Standard_D8a_v4   = 32,
		pfenum_Standard_D16a_v4  = 33,
		pfenum_Standard_E2a_v4   = 34,
		pfenum_Standard_E4a_v4   = 35,
		pfenum_Standard_E8a_v4   = 36,
		pfenum_Standard_E16a_v4  = 37,
		pfenum_Standard_E2as_v4  = 38,
		pfenum_Standard_E4as_v4  = 39,
		pfenum_Standard_E8as_v4  = 40,
		pfenum_Standard_E16as_v4 = 41,
		pfenum_Standard_D2s_v3   = 42,
		pfenum_Standard_D4s_v3   = 43,
		pfenum_Standard_D8s_v3   = 44,
		pfenum_Standard_D16s_v3  = 45,
		pfenum_Standard_DS1_v2   = 46,
		pfenum_Standard_DS2_v2   = 47,
		pfenum_Standard_DS3_v2   = 48,
		pfenum_Standard_DS4_v2   = 49,
		pfenum_Standard_DS5_v2   = 50,
		pfenum_Standard_MAX      = 51
	};

	/**
	 * Enum PlayFab.EContainerFlavor
	 */
	enum class EContainerFlavor : uint8_t
	{
		pfenum_ManagedWindowsServerCore        = 0,
		pfenum_CustomLinux                     = 1,
		pfenum_ManagedWindowsServerCorePreview = 2,
		pfenum_Invalid                         = 3,
		pfenum_MAX                             = 4
	};

	/**
	 * Enum PlayFab.ETitleMultiplayerServerEnabledStatus
	 */
	enum class ETitleMultiplayerServerEnabledStatus : uint8_t
	{
		pfenum_Initializing = 0,
		pfenum_Enabled      = 1,
		pfenum_Disabled     = 2,
		pfenum_MAX          = 3
	};

	/**
	 * Enum PlayFab.EPlayerConnectionState
	 */
	enum class EPlayerConnectionState : uint8_t
	{
		pfenum_Unassigned    = 0,
		pfenum_Connecting    = 1,
		pfenum_Participating = 2,
		pfenum_Participated  = 3,
		pfenum_MAX           = 4
	};

	/**
	 * Enum PlayFab.EGameInstanceState
	 */
	enum class EGameInstanceState : uint8_t
	{
		pfenum_Open   = 0,
		pfenum_Closed = 1,
		pfenum_MAX    = 2
	};

	/**
	 * Enum PlayFab.EServerType
	 */
	enum class EServerType : uint8_t
	{
		pfenum_Container = 0,
		pfenum_Process   = 1,
		pfenum_MAX       = 2
	};

	/**
	 * Enum PlayFab.EProtocolType
	 */
	enum class EProtocolType : uint8_t
	{
		pfenum_TCP = 0,
		pfenum_UDP = 1,
		pfenum_MAX = 2
	};

	/**
	 * Enum PlayFab.EOsPlatform
	 */
	enum class EOsPlatform : uint8_t
	{
		pfenum_Windows = 0,
		pfenum_Linux   = 1,
		pfenum_MAX     = 2
	};

	/**
	 * Enum PlayFab.ECancellationReason
	 */
	enum class ECancellationReason : uint8_t
	{
		pfenum_Requested = 0,
		pfenum_Internal  = 1,
		pfenum_Timeout   = 2,
		pfenum_MAX       = 3
	};

	/**
	 * Enum PlayFab.EAzureVmFamily
	 */
	enum class EAzureVmFamily : uint8_t
	{
		pfenum_A     = 0,
		pfenum_Av2   = 1,
		pfenum_Dv2   = 2,
		pfenum_Dv3   = 3,
		pfenum_F     = 4,
		pfenum_Fsv2  = 5,
		pfenum_Dasv4 = 6,
		pfenum_Dav4  = 7,
		pfenum_Eav4  = 8,
		pfenum_Easv4 = 9,
		pfenum_Ev4   = 10,
		pfenum_Esv4  = 11,
		pfenum_Dsv3  = 12,
		pfenum_Dsv2  = 13,
		pfenum_MAX   = 14
	};

	/**
	 * Enum PlayFab.EAzureRegion
	 */
	enum class EAzureRegion : uint8_t
	{
		pfenum_AustraliaEast      = 0,
		pfenum_AustraliaSoutheast = 1,
		pfenum_BrazilSouth        = 2,
		pfenum_CentralUs          = 3,
		pfenum_EastAsia           = 4,
		pfenum_EastUs             = 5,
		pfenum_EastUs2            = 6,
		pfenum_JapanEast          = 7,
		pfenum_JapanWest          = 8,
		pfenum_NorthCentralUs     = 9,
		pfenum_NorthEurope        = 10,
		pfenum_SouthCentralUs     = 11,
		pfenum_SoutheastAsia      = 12,
		pfenum_WestEurope         = 13,
		pfenum_WestUs             = 14,
		pfenum_ChinaEast2         = 15,
		pfenum_ChinaNorth2        = 16,
		pfenum_SouthAfricaNorth   = 17,
		pfenum_CentralUsEuap      = 18,
		pfenum_WestCentralUs      = 19,
		pfenum_KoreaCentral       = 20,
		pfenum_FranceCentral      = 21,
		pfenum_WestUs2            = 22,
		pfenum_CentralIndia       = 23,
		pfenum_UaeNorth           = 24,
		pfenum_MAX                = 25
	};

	/**
	 * Enum PlayFab.EExperimentState
	 */
	enum class EExperimentState : uint8_t
	{
		pfenum_New     = 0,
		pfenum_Started = 1,
		pfenum_Stopped = 2,
		pfenum_Deleted = 3,
		pfenum_MAX     = 4
	};

	/**
	 * Enum PlayFab.EAnalysisTaskState
	 */
	enum class EAnalysisTaskState : uint8_t
	{
		pfenum_Waiting              = 0,
		pfenum_ReadyForSubmission   = 1,
		pfenum_SubmittingToPipeline = 2,
		pfenum_Running              = 3,
		pfenum_Completed            = 4,
		pfenum_Failed               = 5,
		pfenum_Canceled             = 6,
		pfenum_MAX                  = 7
	};

	/**
	 * Enum PlayFab.EPayfabTriggerType
	 */
	enum class EPayfabTriggerType : uint8_t
	{
		pfenum_HTTP  = 0,
		pfenum_Queue = 1,
		pfenum_MAX   = 2
	};

	/**
	 * Enum PlayFab.EUserOrigination
	 */
	enum class EUserOrigination : uint8_t
	{
		pfenum_Organic                = 0,
		pfenum_Steam                  = 1,
		pfenum_Google                 = 2,
		pfenum_Amazon                 = 3,
		pfenum_Facebook               = 4,
		pfenum_Kongregate             = 5,
		pfenum_GamersFirst            = 6,
		pfenum_Unknown                = 7,
		pfenum_IOS                    = 8,
		pfenum_LoadTest               = 9,
		pfenum_Android                = 10,
		pfenum_PSN                    = 11,
		pfenum_GameCenter             = 12,
		pfenum_CustomId               = 13,
		pfenum_XboxLive               = 14,
		pfenum_Parse                  = 15,
		pfenum_Twitch                 = 16,
		pfenum_WindowsHello           = 17,
		pfenum_ServerCustomId         = 18,
		pfenum_NintendoSwitchDeviceId = 19,
		pfenum_FacebookInstantGamesId = 20,
		pfenum_OpenIdConnect          = 21,
		pfenum_Apple                  = 22,
		pfenum_NintendoSwitchAccount  = 23,
		pfenum_MAX                    = 24
	};

	/**
	 * Enum PlayFab.ETitleActivationStatus
	 */
	enum class ETitleActivationStatus : uint8_t
	{
		pfenum_None              = 0,
		pfenum_ActivatedTitleKey = 1,
		pfenum_PendingSteam      = 2,
		pfenum_ActivatedSteam    = 3,
		pfenum_RevokedSteam      = 4,
		pfenum_MAX               = 5
	};

	/**
	 * Enum PlayFab.ESubscriptionProviderStatus
	 */
	enum class ESubscriptionProviderStatus : uint8_t
	{
		pfenum_NoError                         = 0,
		pfenum_Cancelled                       = 1,
		pfenum_UnknownError                    = 2,
		pfenum_BillingError                    = 3,
		pfenum_ProductUnavailable              = 4,
		pfenum_CustomerDidNotAcceptPriceChange = 5,
		pfenum_FreeTrial                       = 6,
		pfenum_PaymentPending                  = 7,
		pfenum_MAX                             = 8
	};

	/**
	 * Enum PlayFab.EStatisticVersionStatus
	 */
	enum class EStatisticVersionStatus : uint8_t
	{
		pfenum_Active          = 0,
		pfenum_SnapshotPending = 1,
		pfenum_Snapshot        = 2,
		pfenum_ArchivalPending = 3,
		pfenum_Archived        = 4,
		pfenum_MAX             = 5
	};

	/**
	 * Enum PlayFab.EStatisticVersionArchivalStatus
	 */
	enum class EStatisticVersionArchivalStatus : uint8_t
	{
		pfenum_NotScheduled = 0,
		pfenum_Scheduled    = 1,
		pfenum_Queued       = 2,
		pfenum_InProgress   = 3,
		pfenum_Complete     = 4,
		pfenum_MAX          = 5
	};

	/**
	 * Enum PlayFab.ESegmentPushNotificationDevicePlatform
	 */
	enum class ESegmentPushNotificationDevicePlatform : uint8_t
	{
		pfenum_ApplePushNotificationService = 0,
		pfenum_GoogleCloudMessaging         = 1,
		pfenum_MAX                          = 2
	};

	/**
	 * Enum PlayFab.ESegmentLoginIdentityProvider
	 */
	enum class ESegmentLoginIdentityProvider : uint8_t
	{
		pfenum_Unknown               = 0,
		pfenum_PlayFab               = 1,
		pfenum_Custom                = 2,
		pfenum_GameCenter            = 3,
		pfenum_GooglePlay            = 4,
		pfenum_Steam                 = 5,
		pfenum_XBoxLive              = 6,
		pfenum_PSN                   = 7,
		pfenum_Kongregate            = 8,
		pfenum_Facebook              = 9,
		pfenum_IOSDevice             = 10,
		pfenum_AndroidDevice         = 11,
		pfenum_Twitch                = 12,
		pfenum_WindowsHello          = 13,
		pfenum_GameServer            = 14,
		pfenum_CustomServer          = 15,
		pfenum_NintendoSwitch        = 16,
		pfenum_FacebookInstantGames  = 17,
		pfenum_OpenIdConnect         = 18,
		pfenum_Apple                 = 19,
		pfenum_NintendoSwitchAccount = 20,
		pfenum_MAX                   = 21
	};

	/**
	 * Enum PlayFab.ESegmentFilterComparison
	 */
	enum class ESegmentFilterComparison : uint8_t
	{
		pfenum_GreaterThan        = 0,
		pfenum_LessThan           = 1,
		pfenum_EqualTo            = 2,
		pfenum_NotEqualTo         = 3,
		pfenum_GreaterThanOrEqual = 4,
		pfenum_LessThanOrEqual    = 5,
		pfenum_Exists             = 6,
		pfenum_Contains           = 7,
		pfenum_NotContains        = 8,
		pfenum_MAX                = 9
	};

	/**
	 * Enum PlayFab.ESegmentCurrency
	 */
	enum class ESegmentCurrency : uint8_t
	{
		pfenum_AED = 0,
		pfenum_AFN = 1,
		pfenum_ALL = 2,
		pfenum_AMD = 3,
		pfenum_ANG = 4,
		pfenum_AOA = 5,
		pfenum_ARS = 6,
		pfenum_AUD = 7,
		pfenum_AWG = 8,
		pfenum_AZN = 9,
		pfenum_BAM = 10,
		pfenum_BBD = 11,
		pfenum_BDT = 12,
		pfenum_BGN = 13,
		pfenum_BHD = 14,
		pfenum_BIF = 15,
		pfenum_BMD = 16,
		pfenum_BND = 17,
		pfenum_BOB = 18,
		pfenum_BRL = 19,
		pfenum_BSD = 20,
		pfenum_BTN = 21,
		pfenum_BWP = 22,
		pfenum_BYR = 23,
		pfenum_BZD = 24,
		pfenum_CAD = 25,
		pfenum_CDF = 26,
		pfenum_CHF = 27,
		pfenum_CLP = 28,
		pfenum_CNY = 29,
		pfenum_COP = 30,
		pfenum_CRC = 31,
		pfenum_CUC = 32,
		pfenum_CUP = 33,
		pfenum_CVE = 34,
		pfenum_CZK = 35,
		pfenum_DJF = 36,
		pfenum_DKK = 37,
		pfenum_DOP = 38,
		pfenum_DZD = 39,
		pfenum_EGP = 40,
		pfenum_ERN = 41,
		pfenum_ETB = 42,
		pfenum_EUR = 43,
		pfenum_FJD = 44,
		pfenum_FKP = 45,
		pfenum_GBP = 46,
		pfenum_GEL = 47,
		pfenum_GGP = 48,
		pfenum_GHS = 49,
		pfenum_GIP = 50,
		pfenum_GMD = 51,
		pfenum_GNF = 52,
		pfenum_GTQ = 53,
		pfenum_GYD = 54,
		pfenum_HKD = 55,
		pfenum_HNL = 56,
		pfenum_HRK = 57,
		pfenum_HTG = 58,
		pfenum_HUF = 59,
		pfenum_IDR = 60,
		pfenum_ILS = 61,
		pfenum_IMP = 62,
		pfenum_INR = 63,
		pfenum_IQD = 64,
		pfenum_IRR = 65,
		pfenum_ISK = 66,
		pfenum_JEP = 67,
		pfenum_JMD = 68,
		pfenum_JOD = 69,
		pfenum_JPY = 70,
		pfenum_KES = 71,
		pfenum_KGS = 72,
		pfenum_KHR = 73,
		pfenum_KMF = 74,
		pfenum_KPW = 75,
		pfenum_KRW = 76,
		pfenum_KWD = 77,
		pfenum_KYD = 78,
		pfenum_KZT = 79,
		pfenum_LAK = 80,
		pfenum_LBP = 81,
		pfenum_LKR = 82,
		pfenum_LRD = 83,
		pfenum_LSL = 84,
		pfenum_LYD = 85,
		pfenum_MAD = 86,
		pfenum_MDL = 87,
		pfenum_MGA = 88,
		pfenum_MKD = 89,
		pfenum_MMK = 90,
		pfenum_MNT = 91,
		pfenum_MOP = 92,
		pfenum_MRO = 93,
		pfenum_MUR = 94,
		pfenum_MVR = 95,
		pfenum_MWK = 96,
		pfenum_MXN = 97,
		pfenum_MYR = 98,
		pfenum_MZN = 99,
		pfenum_NAD = 100,
		pfenum_NGN = 101,
		pfenum_NIO = 102,
		pfenum_NOK = 103,
		pfenum_NPR = 104,
		pfenum_NZD = 105,
		pfenum_OMR = 106,
		pfenum_PAB = 107,
		pfenum_PEN = 108,
		pfenum_PGK = 109,
		pfenum_PHP = 110,
		pfenum_PKR = 111,
		pfenum_PLN = 112,
		pfenum_PYG = 113,
		pfenum_QAR = 114,
		pfenum_RON = 115,
		pfenum_RSD = 116,
		pfenum_RUB = 117,
		pfenum_RWF = 118,
		pfenum_SAR = 119,
		pfenum_SBD = 120,
		pfenum_SCR = 121,
		pfenum_SDG = 122,
		pfenum_SEK = 123,
		pfenum_SGD = 124,
		pfenum_SHP = 125,
		pfenum_SLL = 126,
		pfenum_SOS = 127,
		pfenum_SPL = 128,
		pfenum_SRD = 129,
		pfenum_STD = 130,
		pfenum_SVC = 131,
		pfenum_SYP = 132,
		pfenum_SZL = 133,
		pfenum_THB = 134,
		pfenum_TJS = 135,
		pfenum_TMT = 136,
		pfenum_TND = 137,
		pfenum_TOP = 138,
		pfenum_TRY = 139,
		pfenum_TTD = 140,
		pfenum_TVD = 141,
		pfenum_TWD = 142,
		pfenum_TZS = 143,
		pfenum_UAH = 144,
		pfenum_UGX = 145,
		pfenum_USD = 146,
		pfenum_UYU = 147,
		pfenum_UZS = 148,
		pfenum_VEF = 149,
		pfenum_VND = 150,
		pfenum_VUV = 151,
		pfenum_WST = 152,
		pfenum_XAF = 153,
		pfenum_XCD = 154,
		pfenum_XDR = 155,
		pfenum_XOF = 156,
		pfenum_XPF = 157,
		pfenum_YER = 158,
		pfenum_ZAR = 159,
		pfenum_ZMW = 160,
		pfenum_ZWD = 161,
		pfenum_MAX = 162
	};

	/**
	 * Enum PlayFab.ESegmentCountryCode
	 */
	enum class ESegmentCountryCode : uint8_t
	{
		pfenum_AF  = 0,
		pfenum_AX  = 1,
		pfenum_AL  = 2,
		pfenum_DZ  = 3,
		pfenum_AS  = 4,
		pfenum_AD  = 5,
		pfenum_AO  = 6,
		pfenum_AI  = 7,
		pfenum_AQ  = 8,
		pfenum_AG  = 9,
		pfenum_AR  = 10,
		pfenum_AM  = 11,
		pfenum_AW  = 12,
		pfenum_AU  = 13,
		pfenum_AT  = 14,
		pfenum_AZ  = 15,
		pfenum_BS  = 16,
		pfenum_BH  = 17,
		pfenum_BD  = 18,
		pfenum_BB  = 19,
		pfenum_BY  = 20,
		pfenum_BE  = 21,
		pfenum_BZ  = 22,
		pfenum_BJ  = 23,
		pfenum_BM  = 24,
		pfenum_BT  = 25,
		pfenum_BO  = 26,
		pfenum_BQ  = 27,
		pfenum_BA  = 28,
		pfenum_BW  = 29,
		pfenum_BV  = 30,
		pfenum_BR  = 31,
		pfenum_IO  = 32,
		pfenum_BN  = 33,
		pfenum_BG  = 34,
		pfenum_BF  = 35,
		pfenum_BI  = 36,
		pfenum_KH  = 37,
		pfenum_CM  = 38,
		pfenum_CA  = 39,
		pfenum_CV  = 40,
		pfenum_KY  = 41,
		pfenum_CF  = 42,
		pfenum_TD  = 43,
		pfenum_CL  = 44,
		pfenum_CN  = 45,
		pfenum_CX  = 46,
		pfenum_CC  = 47,
		pfenum_CO  = 48,
		pfenum_KM  = 49,
		pfenum_CG  = 50,
		pfenum_CD  = 51,
		pfenum_CK  = 52,
		pfenum_CR  = 53,
		pfenum_CI  = 54,
		pfenum_HR  = 55,
		pfenum_CU  = 56,
		pfenum_CW  = 57,
		pfenum_CY  = 58,
		pfenum_CZ  = 59,
		pfenum_DK  = 60,
		pfenum_DJ  = 61,
		pfenum_DM  = 62,
		pfenum_DO  = 63,
		pfenum_EC  = 64,
		pfenum_EG  = 65,
		pfenum_SV  = 66,
		pfenum_GQ  = 67,
		pfenum_ER  = 68,
		pfenum_EE  = 69,
		pfenum_ET  = 70,
		pfenum_FK  = 71,
		pfenum_FO  = 72,
		pfenum_FJ  = 73,
		pfenum_FI  = 74,
		pfenum_FR  = 75,
		pfenum_GF  = 76,
		pfenum_PF  = 77,
		pfenum_TF  = 78,
		pfenum_GA  = 79,
		pfenum_GM  = 80,
		pfenum_GE  = 81,
		pfenum_DE  = 82,
		pfenum_GH  = 83,
		pfenum_GI  = 84,
		pfenum_GR  = 85,
		pfenum_GL  = 86,
		pfenum_GD  = 87,
		pfenum_GP  = 88,
		pfenum_GU  = 89,
		pfenum_GT  = 90,
		pfenum_GG  = 91,
		pfenum_GN  = 92,
		pfenum_GW  = 93,
		pfenum_GY  = 94,
		pfenum_HT  = 95,
		pfenum_HM  = 96,
		pfenum_VA  = 97,
		pfenum_HN  = 98,
		pfenum_HK  = 99,
		pfenum_HU  = 100,
		pfenum_IS  = 101,
		pfenum_IN  = 102,
		pfenum_ID  = 103,
		pfenum_IR  = 104,
		pfenum_IQ  = 105,
		pfenum_IE  = 106,
		pfenum_IM  = 107,
		pfenum_IL  = 108,
		pfenum_IT  = 109,
		pfenum_JM  = 110,
		pfenum_JP  = 111,
		pfenum_JE  = 112,
		pfenum_JO  = 113,
		pfenum_KZ  = 114,
		pfenum_KE  = 115,
		pfenum_KI  = 116,
		pfenum_KP  = 117,
		pfenum_KR  = 118,
		pfenum_KW  = 119,
		pfenum_KG  = 120,
		pfenum_LA  = 121,
		pfenum_LV  = 122,
		pfenum_LB  = 123,
		pfenum_LS  = 124,
		pfenum_LR  = 125,
		pfenum_LY  = 126,
		pfenum_LI  = 127,
		pfenum_LT  = 128,
		pfenum_LU  = 129,
		pfenum_MO  = 130,
		pfenum_MK  = 131,
		pfenum_MG  = 132,
		pfenum_MW  = 133,
		pfenum_MY  = 134,
		pfenum_MV  = 135,
		pfenum_ML  = 136,
		pfenum_MT  = 137,
		pfenum_MH  = 138,
		pfenum_MQ  = 139,
		pfenum_MR  = 140,
		pfenum_MU  = 141,
		pfenum_YT  = 142,
		pfenum_MX  = 143,
		pfenum_FM  = 144,
		pfenum_MD  = 145,
		pfenum_MC  = 146,
		pfenum_MN  = 147,
		pfenum_ME  = 148,
		pfenum_MS  = 149,
		pfenum_MA  = 150,
		pfenum_MZ  = 151,
		pfenum_MM  = 152,
		pfenum_NA  = 153,
		pfenum_NR  = 154,
		pfenum_NP  = 155,
		pfenum_NL  = 156,
		pfenum_NC  = 157,
		pfenum_NZ  = 158,
		pfenum_NI  = 159,
		pfenum_NE  = 160,
		pfenum_NG  = 161,
		pfenum_NU  = 162,
		pfenum_NF  = 163,
		pfenum_MP  = 164,
		pfenum_NO  = 165,
		pfenum_OM  = 166,
		pfenum_PK  = 167,
		pfenum_PW  = 168,
		pfenum_PS  = 169,
		pfenum_PA  = 170,
		pfenum_PG  = 171,
		pfenum_PY  = 172,
		pfenum_PE  = 173,
		pfenum_PH  = 174,
		pfenum_PN  = 175,
		pfenum_PL  = 176,
		pfenum_PT  = 177,
		pfenum_PR  = 178,
		pfenum_QA  = 179,
		pfenum_RE  = 180,
		pfenum_RO  = 181,
		pfenum_RU  = 182,
		pfenum_RW  = 183,
		pfenum_BL  = 184,
		pfenum_SH  = 185,
		pfenum_KN  = 186,
		pfenum_LC  = 187,
		pfenum_MF  = 188,
		pfenum_PM  = 189,
		pfenum_VC  = 190,
		pfenum_WS  = 191,
		pfenum_SM  = 192,
		pfenum_ST  = 193,
		pfenum_SA  = 194,
		pfenum_SN  = 195,
		pfenum_RS  = 196,
		pfenum_SC  = 197,
		pfenum_SL  = 198,
		pfenum_SG  = 199,
		pfenum_SX  = 200,
		pfenum_SK  = 201,
		pfenum_SI  = 202,
		pfenum_SB  = 203,
		pfenum_SO  = 204,
		pfenum_ZA  = 205,
		pfenum_GS  = 206,
		pfenum_SS  = 207,
		pfenum_ES  = 208,
		pfenum_LK  = 209,
		pfenum_SD  = 210,
		pfenum_SR  = 211,
		pfenum_SJ  = 212,
		pfenum_SZ  = 213,
		pfenum_SE  = 214,
		pfenum_CH  = 215,
		pfenum_SY  = 216,
		pfenum_TW  = 217,
		pfenum_TJ  = 218,
		pfenum_TZ  = 219,
		pfenum_TH  = 220,
		pfenum_TL  = 221,
		pfenum_TG  = 222,
		pfenum_TK  = 223,
		pfenum_TO  = 224,
		pfenum_TT  = 225,
		pfenum_TN  = 226,
		pfenum_TR  = 227,
		pfenum_TM  = 228,
		pfenum_TC  = 229,
		pfenum_TV  = 230,
		pfenum_UG  = 231,
		pfenum_UA  = 232,
		pfenum_AE  = 233,
		pfenum_GB  = 234,
		pfenum_US  = 235,
		pfenum_UM  = 236,
		pfenum_UY  = 237,
		pfenum_UZ  = 238,
		pfenum_VU  = 239,
		pfenum_VE  = 240,
		pfenum_VN  = 241,
		pfenum_VG  = 242,
		pfenum_VI  = 243,
		pfenum_WF  = 244,
		pfenum_EH  = 245,
		pfenum_YE  = 246,
		pfenum_ZM  = 247,
		pfenum_ZW  = 248,
		pfenum_MAX = 249
	};

	/**
	 * Enum PlayFab.EResultTableNodeType
	 */
	enum class EResultTableNodeType : uint8_t
	{
		pfenum_ItemId  = 0,
		pfenum_TableId = 1,
		pfenum_MAX     = 2
	};

	/**
	 * Enum PlayFab.EPushNotificationPlatform
	 */
	enum class EPushNotificationPlatform : uint8_t
	{
		pfenum_ApplePushNotificationService = 0,
		pfenum_GoogleCloudMessaging         = 1,
		pfenum_MAX                          = 2
	};

	/**
	 * Enum PlayFab.EEmailVerificationStatus
	 */
	enum class EEmailVerificationStatus : uint8_t
	{
		pfenum_Unverified = 0,
		pfenum_Pending    = 1,
		pfenum_Confirmed  = 2,
		pfenum_MAX        = 3
	};

	/**
	 * Enum PlayFab.EEffectType
	 */
	enum class EEffectType : uint8_t
	{
		pfenum_Allow = 0,
		pfenum_Deny  = 1,
		pfenum_MAX   = 2
	};

	/**
	 * Enum PlayFab.ECurrency
	 */
	enum class ECurrency : uint8_t
	{
		pfenum_AED = 0,
		pfenum_AFN = 1,
		pfenum_ALL = 2,
		pfenum_AMD = 3,
		pfenum_ANG = 4,
		pfenum_AOA = 5,
		pfenum_ARS = 6,
		pfenum_AUD = 7,
		pfenum_AWG = 8,
		pfenum_AZN = 9,
		pfenum_BAM = 10,
		pfenum_BBD = 11,
		pfenum_BDT = 12,
		pfenum_BGN = 13,
		pfenum_BHD = 14,
		pfenum_BIF = 15,
		pfenum_BMD = 16,
		pfenum_BND = 17,
		pfenum_BOB = 18,
		pfenum_BRL = 19,
		pfenum_BSD = 20,
		pfenum_BTN = 21,
		pfenum_BWP = 22,
		pfenum_BYR = 23,
		pfenum_BZD = 24,
		pfenum_CAD = 25,
		pfenum_CDF = 26,
		pfenum_CHF = 27,
		pfenum_CLP = 28,
		pfenum_CNY = 29,
		pfenum_COP = 30,
		pfenum_CRC = 31,
		pfenum_CUC = 32,
		pfenum_CUP = 33,
		pfenum_CVE = 34,
		pfenum_CZK = 35,
		pfenum_DJF = 36,
		pfenum_DKK = 37,
		pfenum_DOP = 38,
		pfenum_DZD = 39,
		pfenum_EGP = 40,
		pfenum_ERN = 41,
		pfenum_ETB = 42,
		pfenum_EUR = 43,
		pfenum_FJD = 44,
		pfenum_FKP = 45,
		pfenum_GBP = 46,
		pfenum_GEL = 47,
		pfenum_GGP = 48,
		pfenum_GHS = 49,
		pfenum_GIP = 50,
		pfenum_GMD = 51,
		pfenum_GNF = 52,
		pfenum_GTQ = 53,
		pfenum_GYD = 54,
		pfenum_HKD = 55,
		pfenum_HNL = 56,
		pfenum_HRK = 57,
		pfenum_HTG = 58,
		pfenum_HUF = 59,
		pfenum_IDR = 60,
		pfenum_ILS = 61,
		pfenum_IMP = 62,
		pfenum_INR = 63,
		pfenum_IQD = 64,
		pfenum_IRR = 65,
		pfenum_ISK = 66,
		pfenum_JEP = 67,
		pfenum_JMD = 68,
		pfenum_JOD = 69,
		pfenum_JPY = 70,
		pfenum_KES = 71,
		pfenum_KGS = 72,
		pfenum_KHR = 73,
		pfenum_KMF = 74,
		pfenum_KPW = 75,
		pfenum_KRW = 76,
		pfenum_KWD = 77,
		pfenum_KYD = 78,
		pfenum_KZT = 79,
		pfenum_LAK = 80,
		pfenum_LBP = 81,
		pfenum_LKR = 82,
		pfenum_LRD = 83,
		pfenum_LSL = 84,
		pfenum_LYD = 85,
		pfenum_MAD = 86,
		pfenum_MDL = 87,
		pfenum_MGA = 88,
		pfenum_MKD = 89,
		pfenum_MMK = 90,
		pfenum_MNT = 91,
		pfenum_MOP = 92,
		pfenum_MRO = 93,
		pfenum_MUR = 94,
		pfenum_MVR = 95,
		pfenum_MWK = 96,
		pfenum_MXN = 97,
		pfenum_MYR = 98,
		pfenum_MZN = 99,
		pfenum_NAD = 100,
		pfenum_NGN = 101,
		pfenum_NIO = 102,
		pfenum_NOK = 103,
		pfenum_NPR = 104,
		pfenum_NZD = 105,
		pfenum_OMR = 106,
		pfenum_PAB = 107,
		pfenum_PEN = 108,
		pfenum_PGK = 109,
		pfenum_PHP = 110,
		pfenum_PKR = 111,
		pfenum_PLN = 112,
		pfenum_PYG = 113,
		pfenum_QAR = 114,
		pfenum_RON = 115,
		pfenum_RSD = 116,
		pfenum_RUB = 117,
		pfenum_RWF = 118,
		pfenum_SAR = 119,
		pfenum_SBD = 120,
		pfenum_SCR = 121,
		pfenum_SDG = 122,
		pfenum_SEK = 123,
		pfenum_SGD = 124,
		pfenum_SHP = 125,
		pfenum_SLL = 126,
		pfenum_SOS = 127,
		pfenum_SPL = 128,
		pfenum_SRD = 129,
		pfenum_STD = 130,
		pfenum_SVC = 131,
		pfenum_SYP = 132,
		pfenum_SZL = 133,
		pfenum_THB = 134,
		pfenum_TJS = 135,
		pfenum_TMT = 136,
		pfenum_TND = 137,
		pfenum_TOP = 138,
		pfenum_TRY = 139,
		pfenum_TTD = 140,
		pfenum_TVD = 141,
		pfenum_TWD = 142,
		pfenum_TZS = 143,
		pfenum_UAH = 144,
		pfenum_UGX = 145,
		pfenum_USD = 146,
		pfenum_UYU = 147,
		pfenum_UZS = 148,
		pfenum_VEF = 149,
		pfenum_VND = 150,
		pfenum_VUV = 151,
		pfenum_WST = 152,
		pfenum_XAF = 153,
		pfenum_XCD = 154,
		pfenum_XDR = 155,
		pfenum_XOF = 156,
		pfenum_XPF = 157,
		pfenum_YER = 158,
		pfenum_ZAR = 159,
		pfenum_ZMW = 160,
		pfenum_ZWD = 161,
		pfenum_MAX = 162
	};

	/**
	 * Enum PlayFab.ECountryCode
	 */
	enum class ECountryCode : uint8_t
	{
		pfenum_AF  = 0,
		pfenum_AX  = 1,
		pfenum_AL  = 2,
		pfenum_DZ  = 3,
		pfenum_AS  = 4,
		pfenum_AD  = 5,
		pfenum_AO  = 6,
		pfenum_AI  = 7,
		pfenum_AQ  = 8,
		pfenum_AG  = 9,
		pfenum_AR  = 10,
		pfenum_AM  = 11,
		pfenum_AW  = 12,
		pfenum_AU  = 13,
		pfenum_AT  = 14,
		pfenum_AZ  = 15,
		pfenum_BS  = 16,
		pfenum_BH  = 17,
		pfenum_BD  = 18,
		pfenum_BB  = 19,
		pfenum_BY  = 20,
		pfenum_BE  = 21,
		pfenum_BZ  = 22,
		pfenum_BJ  = 23,
		pfenum_BM  = 24,
		pfenum_BT  = 25,
		pfenum_BO  = 26,
		pfenum_BQ  = 27,
		pfenum_BA  = 28,
		pfenum_BW  = 29,
		pfenum_BV  = 30,
		pfenum_BR  = 31,
		pfenum_IO  = 32,
		pfenum_BN  = 33,
		pfenum_BG  = 34,
		pfenum_BF  = 35,
		pfenum_BI  = 36,
		pfenum_KH  = 37,
		pfenum_CM  = 38,
		pfenum_CA  = 39,
		pfenum_CV  = 40,
		pfenum_KY  = 41,
		pfenum_CF  = 42,
		pfenum_TD  = 43,
		pfenum_CL  = 44,
		pfenum_CN  = 45,
		pfenum_CX  = 46,
		pfenum_CC  = 47,
		pfenum_CO  = 48,
		pfenum_KM  = 49,
		pfenum_CG  = 50,
		pfenum_CD  = 51,
		pfenum_CK  = 52,
		pfenum_CR  = 53,
		pfenum_CI  = 54,
		pfenum_HR  = 55,
		pfenum_CU  = 56,
		pfenum_CW  = 57,
		pfenum_CY  = 58,
		pfenum_CZ  = 59,
		pfenum_DK  = 60,
		pfenum_DJ  = 61,
		pfenum_DM  = 62,
		pfenum_DO  = 63,
		pfenum_EC  = 64,
		pfenum_EG  = 65,
		pfenum_SV  = 66,
		pfenum_GQ  = 67,
		pfenum_ER  = 68,
		pfenum_EE  = 69,
		pfenum_ET  = 70,
		pfenum_FK  = 71,
		pfenum_FO  = 72,
		pfenum_FJ  = 73,
		pfenum_FI  = 74,
		pfenum_FR  = 75,
		pfenum_GF  = 76,
		pfenum_PF  = 77,
		pfenum_TF  = 78,
		pfenum_GA  = 79,
		pfenum_GM  = 80,
		pfenum_GE  = 81,
		pfenum_DE  = 82,
		pfenum_GH  = 83,
		pfenum_GI  = 84,
		pfenum_GR  = 85,
		pfenum_GL  = 86,
		pfenum_GD  = 87,
		pfenum_GP  = 88,
		pfenum_GU  = 89,
		pfenum_GT  = 90,
		pfenum_GG  = 91,
		pfenum_GN  = 92,
		pfenum_GW  = 93,
		pfenum_GY  = 94,
		pfenum_HT  = 95,
		pfenum_HM  = 96,
		pfenum_VA  = 97,
		pfenum_HN  = 98,
		pfenum_HK  = 99,
		pfenum_HU  = 100,
		pfenum_IS  = 101,
		pfenum_IN  = 102,
		pfenum_ID  = 103,
		pfenum_IR  = 104,
		pfenum_IQ  = 105,
		pfenum_IE  = 106,
		pfenum_IM  = 107,
		pfenum_IL  = 108,
		pfenum_IT  = 109,
		pfenum_JM  = 110,
		pfenum_JP  = 111,
		pfenum_JE  = 112,
		pfenum_JO  = 113,
		pfenum_KZ  = 114,
		pfenum_KE  = 115,
		pfenum_KI  = 116,
		pfenum_KP  = 117,
		pfenum_KR  = 118,
		pfenum_KW  = 119,
		pfenum_KG  = 120,
		pfenum_LA  = 121,
		pfenum_LV  = 122,
		pfenum_LB  = 123,
		pfenum_LS  = 124,
		pfenum_LR  = 125,
		pfenum_LY  = 126,
		pfenum_LI  = 127,
		pfenum_LT  = 128,
		pfenum_LU  = 129,
		pfenum_MO  = 130,
		pfenum_MK  = 131,
		pfenum_MG  = 132,
		pfenum_MW  = 133,
		pfenum_MY  = 134,
		pfenum_MV  = 135,
		pfenum_ML  = 136,
		pfenum_MT  = 137,
		pfenum_MH  = 138,
		pfenum_MQ  = 139,
		pfenum_MR  = 140,
		pfenum_MU  = 141,
		pfenum_YT  = 142,
		pfenum_MX  = 143,
		pfenum_FM  = 144,
		pfenum_MD  = 145,
		pfenum_MC  = 146,
		pfenum_MN  = 147,
		pfenum_ME  = 148,
		pfenum_MS  = 149,
		pfenum_MA  = 150,
		pfenum_MZ  = 151,
		pfenum_MM  = 152,
		pfenum_NA  = 153,
		pfenum_NR  = 154,
		pfenum_NP  = 155,
		pfenum_NL  = 156,
		pfenum_NC  = 157,
		pfenum_NZ  = 158,
		pfenum_NI  = 159,
		pfenum_NE  = 160,
		pfenum_NG  = 161,
		pfenum_NU  = 162,
		pfenum_NF  = 163,
		pfenum_MP  = 164,
		pfenum_NO  = 165,
		pfenum_OM  = 166,
		pfenum_PK  = 167,
		pfenum_PW  = 168,
		pfenum_PS  = 169,
		pfenum_PA  = 170,
		pfenum_PG  = 171,
		pfenum_PY  = 172,
		pfenum_PE  = 173,
		pfenum_PH  = 174,
		pfenum_PN  = 175,
		pfenum_PL  = 176,
		pfenum_PT  = 177,
		pfenum_PR  = 178,
		pfenum_QA  = 179,
		pfenum_RE  = 180,
		pfenum_RO  = 181,
		pfenum_RU  = 182,
		pfenum_RW  = 183,
		pfenum_BL  = 184,
		pfenum_SH  = 185,
		pfenum_KN  = 186,
		pfenum_LC  = 187,
		pfenum_MF  = 188,
		pfenum_PM  = 189,
		pfenum_VC  = 190,
		pfenum_WS  = 191,
		pfenum_SM  = 192,
		pfenum_ST  = 193,
		pfenum_SA  = 194,
		pfenum_SN  = 195,
		pfenum_RS  = 196,
		pfenum_SC  = 197,
		pfenum_SL  = 198,
		pfenum_SG  = 199,
		pfenum_SX  = 200,
		pfenum_SK  = 201,
		pfenum_SI  = 202,
		pfenum_SB  = 203,
		pfenum_SO  = 204,
		pfenum_ZA  = 205,
		pfenum_GS  = 206,
		pfenum_SS  = 207,
		pfenum_ES  = 208,
		pfenum_LK  = 209,
		pfenum_SD  = 210,
		pfenum_SR  = 211,
		pfenum_SJ  = 212,
		pfenum_SZ  = 213,
		pfenum_SE  = 214,
		pfenum_CH  = 215,
		pfenum_SY  = 216,
		pfenum_TW  = 217,
		pfenum_TJ  = 218,
		pfenum_TZ  = 219,
		pfenum_TH  = 220,
		pfenum_TL  = 221,
		pfenum_TG  = 222,
		pfenum_TK  = 223,
		pfenum_TO  = 224,
		pfenum_TT  = 225,
		pfenum_TN  = 226,
		pfenum_TR  = 227,
		pfenum_TM  = 228,
		pfenum_TC  = 229,
		pfenum_TV  = 230,
		pfenum_UG  = 231,
		pfenum_UA  = 232,
		pfenum_AE  = 233,
		pfenum_GB  = 234,
		pfenum_US  = 235,
		pfenum_UM  = 236,
		pfenum_UY  = 237,
		pfenum_UZ  = 238,
		pfenum_VU  = 239,
		pfenum_VE  = 240,
		pfenum_VN  = 241,
		pfenum_VG  = 242,
		pfenum_VI  = 243,
		pfenum_WF  = 244,
		pfenum_EH  = 245,
		pfenum_YE  = 246,
		pfenum_ZM  = 247,
		pfenum_ZW  = 248,
		pfenum_MAX = 249
	};

	/**
	 * Enum PlayFab.EContinentCode
	 */
	enum class EContinentCode : uint8_t
	{
		pfenum_AF  = 0,
		pfenum_AN  = 1,
		pfenum_AS  = 2,
		pfenum_EU  = 3,
		pfenum_NA  = 4,
		pfenum_OC  = 5,
		pfenum_SA  = 6,
		pfenum_MAX = 7
	};

	/**
	 * Enum PlayFab.EConditionals
	 */
	enum class EConditionals : uint8_t
	{
		pfenum_Any   = 0,
		pfenum_True  = 1,
		pfenum_False = 2,
		pfenum_MAX   = 3
	};

	/**
	 * Enum PlayFab.EPFJson
	 */
	enum class EPFJson : uint8_t
	{
		None    = 0,
		Null    = 1,
		String  = 2,
		Number  = 3,
		Boolean = 4,
		Array   = 5,
		Object  = 6,
		MAX     = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct PlayFab.PlayFabError
	 * Size -> 0x0038
	 */
	struct FPlayFabError
	{
	public:
		bool                                                       HasError;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3EO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ErrorName;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ErrorMessage;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ErrorDetails;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.PlayFabBaseModel
	 * Size -> 0x0040
	 */
	struct FPlayFabBaseModel
	{
	public:
		struct FPlayFabError                                       responseError;                                           // 0x0000(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  responseData;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.PlayFabResultCommon
	 * Size -> 0x0008
	 */
	struct FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Request;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminEmptyResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminEmptyResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.PlayFabRequestCommon
	 * Size -> 0x0008
	 */
	struct FPlayFabRequestCommon
	{
	public:
		class UPlayFabAuthenticationContext*                       AuthenticationContext;                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAbortTaskInstanceRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminAbortTaskInstanceRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TaskInstanceId;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAddLocalizedNewsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminAddLocalizedNewsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminAddLocalizedNewsRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FAdminAddLocalizedNewsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Body;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Language;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NewsId;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAddNewsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminAddNewsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              NewsId;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAddNewsRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAdminAddNewsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Body;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAddPlayerTagResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminAddPlayerTagResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminAddPlayerTagRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminAddPlayerTagRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TagName;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAddServerBuildResult
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FAdminAddServerBuildResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ActiveRegions;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CommandLineTemplate;                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExecutablePath;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxGamesPerHost;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFreeGameSlots;                                        // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameBuildStatus                                           Status;                                                  // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RGO9[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Timestamp;                                               // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleId;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAddServerBuildRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FAdminAddServerBuildRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ActiveRegions;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CommandLineTemplate;                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExecutablePath;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxGamesPerHost;                                         // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFreeGameSlots;                                        // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminModifyUserVirtualCurrencyResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    Balance;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BalanceChange;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminAddUserVirtualCurrencyRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CJ2X[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminBlankResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminBlankResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminAddVirtualCurrencyTypesRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminAddVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          VirtualCurrencies;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminBanUsersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminBanUsersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminBanUsersRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminBanUsersRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Bans;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminCheckLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCUV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminCheckLimitedEditionItemAvailabilityRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminCheckLimitedEditionItemAvailabilityRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreateTaskResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminCreateTaskResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              TaskId;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreateActionsOnPlayerSegmentTaskRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FAdminCreateActionsOnPlayerSegmentTaskRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CN6W[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Parameter;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Schedule;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreateCloudScriptTaskRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FAdminCreateCloudScriptTaskRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PI8I[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Parameter;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Schedule;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreateInsightsScheduledScalingTaskRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FAdminCreateInsightsScheduledScalingTaskRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QE67[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Parameter;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Schedule;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreateOpenIdConnectionRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FAdminCreateOpenIdConnectionRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ClientId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientSecret;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ConnectionId;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreNonce;                                             // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RHW[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IssuerDiscoveryUrl;                                      // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  IssuerInformation;                                       // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreatePlayerSharedSecretResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminCreatePlayerSharedSecretResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              SecretKey;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreatePlayerSharedSecretRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminCreatePlayerSharedSecretRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FriendlyName;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminCreatePlayerStatisticDefinitionResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Statistic;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreatePlayerStatisticDefinitionRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminCreatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon
	{
	public:
		EStatisticAggregationMethod                                AggregationMethod;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1AD[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatisticResetIntervalOption                              VersionChangeInterval;                                   // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_85U5[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminCreateSegmentResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminCreateSegmentResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SegmentId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminCreateSegmentRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminCreateSegmentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  SegmentModel;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteMasterPlayerAccountResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              JobReceiptId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleIds;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeletePlayerResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminDeletePlayerResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminDeletePlayerSharedSecretResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminDeletePlayerSharedSecretResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteSegmentsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteSegmentsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteStoreResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteStoreResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteTitleResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteTitleResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteTitleDataOverrideResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteTitleDataOverrideResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminExportMasterPlayerDataResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminExportMasterPlayerDataResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              JobReceiptId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetActionsOnPlayersInSegmentTaskInstanceResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Parameter;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Summary;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetAllSegmentsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetAllSegmentsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Segments;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetCatalogItemsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetCatalogItemsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Catalog;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetCloudScriptRevisionResult
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminGetCloudScriptRevisionResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CreatedAt;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Files;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsPublished;                                             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7871[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Revision;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRFP[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminGetCloudScriptTaskInstanceResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetCloudScriptTaskInstanceResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Parameter;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Summary;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetCloudScriptVersionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetCloudScriptVersionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Versions;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetContentListResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminGetContentListResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Contents;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalSize;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetContentUploadUrlResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetContentUploadUrlResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetDataReportResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetDataReportResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              DownloadUrl;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetMatchmakerGameInfoResult
	 * Size -> 0x00B0 (FullSize[0x00B8] - InheritedSize[0x0008])
	 */
	struct FAdminGetMatchmakerGameInfoResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EndTime;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Mode;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Players;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERegion                                                    Region;                                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUNU[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerIPV4Address;                                       // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerIPV6Address;                                       // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerPort;                                              // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_72TO[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerPublicDNSName;                                     // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartTime;                                               // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleId;                                                 // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetMatchmakerGameModesResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetMatchmakerGameModesResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          GameModes;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayedTitleListResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayedTitleListResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              TitleIds;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerIdFromAuthTokenResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerProfileResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerProfileResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  PlayerProfile;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerSegmentsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerSegmentsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Segments;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerSharedSecretsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerSharedSecretsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          SharedSecrets;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayersInSegmentResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayersInSegmentResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ContinuationToken;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          PlayerProfiles;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ProfilesInSegment;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUWZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerStatisticDefinitionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Statistics;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          StatisticVersions;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerTagsResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerTagsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tags;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPolicyResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetPolicyResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              PolicyName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Statements;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPublisherDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminGetPublisherDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetRandomResultTablesResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminGetRandomResultTablesResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Tables;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetSegmentsResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetSegmentsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Segments;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetServerBuildInfoResult
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FAdminGetServerBuildInfoResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ActiveRegions;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ErrorMessage;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxGamesPerHost;                                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFreeGameSlots;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameBuildStatus                                           Status;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXU7[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Timestamp;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleId;                                                 // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetServerBuildUploadURLResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetServerBuildUploadURLResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetStoreItemsResult
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FAdminGetStoreItemsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MarketingData;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPfSourceType                                              Source;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PTW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Store;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetTaskInstancesResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetTaskInstancesResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Summaries;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetTasksResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetTasksResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Tasks;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetTitleDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminGetTitleDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminLookupUserAccountInfoResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminLookupUserAccountInfoResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  UserInfo;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetUserBansResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetUserBansResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetUserDataResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetUserDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataVersion;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FG3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetUserInventoryResult
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminGetUserInventoryResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Inventory;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrencyRechargeTimes;                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGrantItemsToUsersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGrantItemsToUsersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ItemGrantResults;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminIncrementLimitedEditionItemAvailabilityResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminIncrementPlayerStatisticVersionResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  StatisticVersion;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminListOpenIdConnectionResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminListOpenIdConnectionResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Connections;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminListBuildsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminListBuildsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Builds;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminListVirtualCurrencyTypesResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminListVirtualCurrencyTypesResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          VirtualCurrencies;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminModifyMatchmakerGameModesResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminModifyMatchmakerGameModesResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminModifyServerBuildResult
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FAdminModifyServerBuildResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ActiveRegions;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CommandLineTemplate;                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExecutablePath;                                          // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxGamesPerHost;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFreeGameSlots;                                        // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameBuildStatus                                           Status;                                                  // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1DF[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Timestamp;                                               // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleId;                                                 // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRefundPurchaseResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRefundPurchaseResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              PurchaseStatus;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRemovePlayerTagResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminRemovePlayerTagResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminRemoveServerBuildResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminRemoveServerBuildResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminResetCharacterStatisticsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminResetCharacterStatisticsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminResetPasswordResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminResetPasswordResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminResetUserStatisticsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminResetUserStatisticsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminResolvePurchaseDisputeResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminResolvePurchaseDisputeResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              PurchaseStatus;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeAllBansForUserResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeAllBansForUserResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeBansResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeBansResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeInventoryResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeInventoryResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeInventoryItemsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeInventoryItemsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Errors;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRunTaskResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRunTaskResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              TaskInstanceId;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminSendAccountRecoveryEmailResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminSendAccountRecoveryEmailResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateCatalogItemsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateCatalogItemsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminSetPlayerSecretResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminSetPlayerSecretResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminSetPublishedRevisionResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminSetPublishedRevisionResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminSetPublisherDataResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminSetPublisherDataResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateStoreItemsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateStoreItemsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminSetTitleDataResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminSetTitleDataResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminSetTitleDataAndOverridesResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminSetTitleDataAndOverridesResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminSetupPushNotificationResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminSetupPushNotificationResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ARN;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateBansResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateBansResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateCloudScriptResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateCloudScriptResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    Revision;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminUpdatePlayerSharedSecretResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminUpdatePlayerStatisticDefinitionResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Statistic;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdatePolicyResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminUpdatePolicyResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              PolicyName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Statements;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateRandomResultTablesResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateRandomResultTablesResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateSegmentResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateSegmentResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              ErrorMessage;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SegmentId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateUserDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateUserDataResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    DataVersion;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZIU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteContentRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteContentRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteMasterPlayerAccountRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteMasterPlayerAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              MetaData;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteOpenIdConnectionRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteOpenIdConnectionRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ConnectionId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeletePlayerRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminDeletePlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeletePlayerSharedSecretRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminDeletePlayerSharedSecretRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SecretKey;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteSegmentRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteSegmentRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SegmentId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteStoreRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteStoreRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteTaskRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteTaskRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Identifier;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteTitleRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteTitleRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminDeleteTitleDataOverrideRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminDeleteTitleDataOverrideRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              OverrideLabel;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminExportMasterPlayerDataRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminExportMasterPlayerDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetTaskInstanceRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetTaskInstanceRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              TaskInstanceId;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetAllSegmentsRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminGetAllSegmentsRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminGetCatalogItemsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetCatalogItemsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetCloudScriptRevisionRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminGetCloudScriptRevisionRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Revision;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetCloudScriptVersionsRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminGetCloudScriptVersionsRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminGetContentListRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetContentListRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Prefix;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetContentUploadUrlRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetContentUploadUrlRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ContentType;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetDataReportRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetDataReportRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Day;                                                     // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Month;                                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReportName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Year;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K1YO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminGetMatchmakerGameInfoRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetMatchmakerGameInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetMatchmakerGameModesRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetMatchmakerGameModesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayedTitleListRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayedTitleListRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerIdFromAuthTokenRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerIdFromAuthTokenRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Token;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAuthTokenType                                             TokenType;                                               // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35YC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerProfileRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerProfileRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayersSegmentsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayersSegmentsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerSharedSecretsRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerSharedSecretsRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayersInSegmentRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayersInSegmentRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ContinuationToken;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBatchSize;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondsToLive;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SegmentId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerStatisticDefinitionsRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerStatisticDefinitionsRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerStatisticVersionsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPlayerTagsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminGetPlayerTagsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Namespace;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPolicyRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPolicyRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PolicyName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetPublisherDataRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetPublisherDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Keys;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetRandomResultTablesRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetRandomResultTablesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetSegmentsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetSegmentsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SegmentIds;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetServerBuildInfoRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetServerBuildInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetServerBuildUploadURLRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetServerBuildUploadURLRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetStoreItemsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetStoreItemsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetTaskInstancesRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminGetTaskInstancesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              StartedAtRangeFrom;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartedAtRangeTo;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETaskInstanceStatus                                        StatusFilter;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXTJ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  TaskIdentifier;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetTasksRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminGetTasksRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Identifier;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetTitleDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminGetTitleDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Keys;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OverrideLabel;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminLookupUserAccountInfoRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FAdminLookupUserAccountInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Email;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleDisplayName;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetUserBansRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminGetUserBansRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetUserDataRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminGetUserDataRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    IfChangedFromDataVersion;                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1MV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Keys;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGetUserInventoryRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminGetUserInventoryRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminGrantItemsToUsersRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminGrantItemsToUsersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          ItemGrants;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminIncrementLimitedEditionItemAvailabilityRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminIncrementLimitedEditionItemAvailabilityRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WWP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CatalogVersion;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminIncrementPlayerStatisticVersionRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminIncrementPlayerStatisticVersionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminListOpenIdConnectionRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminListOpenIdConnectionRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminListBuildsRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminListBuildsRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminListVirtualCurrencyTypesRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FAdminListVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.AdminModifyMatchmakerGameModesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminModifyMatchmakerGameModesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameModes;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminModifyServerBuildRequest
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FAdminModifyServerBuildRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ActiveRegions;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CommandLineTemplate;                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Comment;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExecutablePath;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxGamesPerHost;                                         // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinFreeGameSlots;                                        // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRefundPurchaseRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminRefundPurchaseRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRemovePlayerTagRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminRemovePlayerTagRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TagName;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRemoveServerBuildRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRemoveServerBuildRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRemoveVirtualCurrencyTypesRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRemoveVirtualCurrencyTypesRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          VirtualCurrencies;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminResetCharacterStatisticsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminResetCharacterStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminResetPasswordRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminResetPasswordRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Token;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminResetUserStatisticsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAdminResetUserStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminResolvePurchaseDisputeRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAdminResolvePurchaseDisputeRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EResolutionOutcome                                         Outcome;                                                 // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDDZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeAllBansForUserRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeAllBansForUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeBansRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeBansRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BanIds;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeInventoryItemRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeInventoryItemRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRevokeInventoryItemsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRevokeInventoryItemsRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminRunTaskRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminRunTaskRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Identifier;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminSendAccountRecoveryEmailRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminSendAccountRecoveryEmailRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmailTemplateId;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateCatalogItemsRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateCatalogItemsRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Catalog;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              CatalogVersion;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SetAsDefaultCatalog;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E268[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminSetPlayerSecretRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminSetPlayerSecretRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayerSecret;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminSetPublishedRevisionRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminSetPublishedRevisionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Revision;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminSetPublisherDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminSetPublisherDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateStoreItemsRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateStoreItemsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MarketingData;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Store;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminSetTitleDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminSetTitleDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminSetTitleDataAndOverridesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminSetTitleDataAndOverridesRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          KeyValues;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              OverrideLabel;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminSetupPushNotificationRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAdminSetupPushNotificationRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Credential;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverwriteOldARN;                                         // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPushSetupPlatform                                         Platform;                                                // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXZJ[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminSubtractUserVirtualCurrencyRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPAA[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateBansRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateBansRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Bans;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateCloudScriptRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateCloudScriptRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeveloperPlayFabId;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Files;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Publish;                                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZOF[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateOpenIdConnectionRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateOpenIdConnectionRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ClientId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientSecret;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ConnectionId;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IssuerDiscoveryUrl;                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  IssuerInformation;                                       // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdatePlayerSharedSecretRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminUpdatePlayerSharedSecretRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       Disabled;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCKR[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FriendlyName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SecretKey;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdatePlayerStatisticDefinitionRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FAdminUpdatePlayerStatisticDefinitionRequest : public FPlayFabRequestCommon
	{
	public:
		EStatisticAggregationMethod                                AggregationMethod;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQLO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatisticResetIntervalOption                              VersionChangeInterval;                                   // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2NC[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdatePolicyRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminUpdatePolicyRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       OverwritePolicy;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UR10[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PolicyName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Statements;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateRandomResultTablesRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateRandomResultTablesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Tables;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateSegmentRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateSegmentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  SegmentModel;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateTaskRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateTaskRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Identifier;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MO0K[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Parameter;                                               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Schedule;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScheduledTaskType                                         Type;                                                    // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMYL[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateUserDataRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateUserDataRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserDataPermission                                        Permission;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0P8I[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateUserInternalDataRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateUserInternalDataRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AdminUpdateUserTitleDisplayNameRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAdminUpdateUserTitleDisplayNameRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AuthenticationGetEntityTokenResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FAuthenticationGetEntityTokenResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EntityToken;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TokenExpiration;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AuthenticationValidateEntityTokenResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAuthenticationValidateEntityTokenResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EIdentifiedDeviceType                                      IdentifiedDeviceType;                                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoginIdentityProvider                                     IdentityProvider;                                        // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9GD7[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Lineage;                                                 // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AuthenticationGetEntityTokenRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FAuthenticationGetEntityTokenRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.AuthenticationValidateEntityTokenRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FAuthenticationValidateEntityTokenRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EntityToken;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAcceptTradeResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientAcceptTradeResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Trade;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAcceptTradeRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientAcceptTradeRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AcceptedInventoryInstanceIds;                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OfferingPlayerId;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TradeId;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAddFriendResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientAddFriendResult : public FPlayFabResultCommon
	{
	public:
		bool                                                       Created;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3MA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientAddFriendRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientAddFriendRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FriendEmail;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendPlayFabId;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendTitleDisplayName;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendUsername;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAddGenericIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientAddGenericIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientAddGenericIDRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientAddGenericIDRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  GenericId;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAddOrUpdateContactEmailResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientAddOrUpdateContactEmailResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientAddOrUpdateContactEmailRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientAddOrUpdateContactEmailRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmailAddress;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAddSharedGroupMembersResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientAddSharedGroupMembersResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientAddSharedGroupMembersRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientAddSharedGroupMembersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabIds;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SharedGroupId;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAddUsernamePasswordResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientAddUsernamePasswordResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              Username;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAddUsernamePasswordRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientAddUsernamePasswordRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientModifyUserVirtualCurrencyResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    Balance;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BalanceChange;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAddUserVirtualCurrencyRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GEM9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientAndroidDevicePushNotificationRegistrationResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientAndroidDevicePushNotificationRegistrationRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientAndroidDevicePushNotificationRegistrationRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ConfirmationMessage;                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceToken;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SendPushNotificationConfirmation;                        // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YO1[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientAttributeInstallResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientAttributeInstallResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientAttributeInstallRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientAttributeInstallRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Adid;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Idfa;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientCancelTradeResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientCancelTradeResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Trade;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientCancelTradeRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientCancelTradeRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              TradeId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConfirmPurchaseResult
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientConfirmPurchaseResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              OrderId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PurchaseDate;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConfirmPurchaseRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientConfirmPurchaseRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OrderId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumeItemResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientConsumeItemResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ItemInstanceId;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingUses;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AFH8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumeItemRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientConsumeItemRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumeCount;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GLN3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumeMicrosoftStoreEntitlementsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientConsumeMicrosoftStoreEntitlementsResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumeMicrosoftStoreEntitlementsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientConsumeMicrosoftStoreEntitlementsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MarketplaceSpecificData;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumePS5EntitlementsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientConsumePS5EntitlementsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumePS5EntitlementsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientConsumePS5EntitlementsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MarketplaceSpecificData;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumePSNEntitlementsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientConsumePSNEntitlementsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ItemsGranted;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumePSNEntitlementsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientConsumePSNEntitlementsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServiceLabel;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L8PR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumeXboxEntitlementsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientConsumeXboxEntitlementsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientConsumeXboxEntitlementsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientConsumeXboxEntitlementsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientCreateSharedGroupResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientCreateSharedGroupResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              SharedGroupId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientCreateSharedGroupRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientCreateSharedGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SharedGroupId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientExecuteCloudScriptResult
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FClientExecuteCloudScriptResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    APIRequestsIssued;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRT9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Error;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecutionTimeSeconds;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YCKV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FunctionName;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FunctionResultTooLarge;                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EG3L[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HttpRequestsIssued;                                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Logs;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       LogsTooLarge;                                            // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XL3[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MemoryConsumedBytes;                                     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProcessorTimeSeconds;                                    // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Revision;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetAccountInfoResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetAccountInfoResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  AccountInfo;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetAdPlacementsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetAdPlacementsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          AdPlacements;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientListUsersCharactersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientListUsersCharactersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Characters;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCatalogItemsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetCatalogItemsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Catalog;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterDataResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterDataResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataVersion;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LRB9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterInventoryResult
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterInventoryResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Inventory;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrencyRechargeTimes;                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterLeaderboardResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterLeaderboardResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterStatisticsResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterStatisticsResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  CharacterStatistics;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetContentDownloadUrlResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetContentDownloadUrlResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientCurrentGamesResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientCurrentGamesResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    GameCount;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U2R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Games;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PlayerCount;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WCS6[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              NextReset;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MIB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetFriendLeaderboardAroundPlayerResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              NextReset;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59A2[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetFriendsListResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetFriendsListResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Friends;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGameServerRegionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGameServerRegionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Regions;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardAroundCharacterResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardAroundPlayerResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              NextReset;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AYD[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardForUsersCharactersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPaymentTokenResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetPaymentTokenResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProviderToken;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPhotonAuthenticationTokenResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              PhotonCustomAuthenticationToken;                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerCombinedInfoResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerCombinedInfoResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  InfoResultPayload;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerProfileResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerProfileResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  PlayerProfile;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerSegmentsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerSegmentsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Segments;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerStatisticsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerStatisticsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Statistics;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          StatisticVersions;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerTagsResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerTagsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tags;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerTradesResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerTradesResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          AcceptedTrades;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          OpenedTrades;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromFacebookIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromGameCenterIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromGenericIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromGoogleIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromKongregateIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromPSNAccountIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromSteamIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromTwitchIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromXboxLiveIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPublisherDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetPublisherDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPurchaseResult
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FClientGetPurchaseResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PaymentProvider;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PurchaseDate;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionId;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TransactionStatus;                                       // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetSharedGroupDataResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientGetSharedGroupDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Members;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetStoreItemsResult
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientGetStoreItemsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MarketingData;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPfSourceType                                              Source;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GMYH[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Store;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTimeResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetTimeResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              Time;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTitleDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetTitleDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTitleNewsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetTitleNewsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          News;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTitlePublicKeyResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetTitlePublicKeyResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              RSAPublicKey;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTradeStatusResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetTradeStatusResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Trade;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetUserDataResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetUserDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataVersion;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_17IG[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetUserInventoryResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetUserInventoryResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Inventory;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrencyRechargeTimes;                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetWindowsHelloChallengeResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetWindowsHelloChallengeResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              Challenge;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGrantCharacterToUserResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGrantCharacterToUserResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterType;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Result;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB2I[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkAndroidDeviceIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkAndroidDeviceIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientEmptyResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientEmptyResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkCustomIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkCustomIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkFacebookAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkFacebookAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkFacebookInstantGamesIdResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkGameCenterAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkGameCenterAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkGoogleAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkGoogleAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkIOSDeviceIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkIOSDeviceIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkKongregateAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkKongregateAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkPSNAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkPSNAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkSteamAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkSteamAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkTwitchAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkTwitchAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkWindowsHelloAccountResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkWindowsHelloAccountResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientLinkXboxAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientLinkXboxAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.PlayFabLoginResultCommon
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FPlayFabLoginResultCommon : public FPlayFabResultCommon
	{
	public:
		class UPlayFabAuthenticationContext*                       AuthenticationContext;                                   // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginResult
	 * Size -> 0x0058 (FullSize[0x0068] - InheritedSize[0x0010])
	 */
	struct FClientLoginResult : public FPlayFabLoginResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  EntityToken;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoResultPayload;                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastLoginTime;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NewlyCreated;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88HV[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionTicket;                                           // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  SettingsForUser;                                         // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  TreatmentAssignment;                                     // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientMatchmakeResult
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FClientMatchmakeResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              Expires;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PollWaitTimeMS;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0F99[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerIPV4Address;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerIPV6Address;                                       // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerPort;                                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2VL5[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerPublicDNSName;                                     // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMatchmakeStatus                                           Status;                                                  // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X5US[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Ticket;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientOpenTradeResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientOpenTradeResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Trade;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientPayForPurchaseResult
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FClientPayForPurchaseResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    CreditApplied;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5JXN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OrderId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProviderData;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProviderToken;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PurchaseConfirmationPageURL;                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PurchaseCurrency;                                        // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchasePrice;                                           // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransactionStatus                                         Status;                                                  // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PHZ[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  VCAmount;                                                // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientPurchaseItemResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientPurchaseItemResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRedeemCouponResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientRedeemCouponResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          GrantedItems;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientEmptyResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientEmptyResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientRegisterForIOSPushNotificationResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientRegisterPlayFabUserResult
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientRegisterPlayFabUserResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  EntityToken;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionTicket;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  SettingsForUser;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveContactEmailResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientRemoveContactEmailResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveFriendResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientRemoveFriendResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveGenericIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientRemoveGenericIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveSharedGroupMembersResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientRemoveSharedGroupMembersResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientReportAdActivityResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientReportAdActivityResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientReportPlayerClientResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientReportPlayerClientResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    SubmissionsRemaining;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I905[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientRestoreIOSPurchasesResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientRestoreIOSPurchasesResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Fulfillments;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRewardAdActivityResult
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FClientRewardAdActivityResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              AdActivityEventId;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugResults;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlacementId;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlacementName;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacementViewsRemaining;                                 // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacementViewsResetMinutes;                              // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  RewardResults;                                           // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientSendAccountRecoveryEmailResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientSendAccountRecoveryEmailResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientSetFriendTagsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientSetFriendTagsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientSetPlayerSecretResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientSetPlayerSecretResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientStartGameResult
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FClientStartGameResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              Expires;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerIPV4Address;                                       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerIPV6Address;                                       // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerPort;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VONI[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerPublicDNSName;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Ticket;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientStartPurchaseResult
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientStartPurchaseResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Contents;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              OrderId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          PaymentOptions;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrencyBalances;                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkAndroidDeviceIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkCustomIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkCustomIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkFacebookAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkFacebookAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkFacebookInstantGamesIdResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkGameCenterAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkGameCenterAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkGoogleAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkGoogleAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkIOSDeviceIDResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkKongregateAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkKongregateAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkNintendoSwitchDeviceIdResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkPSNAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkPSNAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkSteamAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkSteamAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkTwitchAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkTwitchAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkWindowsHelloAccountResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkWindowsHelloAccountResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkXboxAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkXboxAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUnlockContainerItemResult
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientUnlockContainerItemResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          GrantedItems;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              UnlockedItemInstanceId;                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnlockedWithItemInstanceId;                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateCharacterDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUpdateCharacterDataResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    DataVersion;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RES7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateCharacterStatisticsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUpdateCharacterStatisticsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUpdatePlayerStatisticsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUpdatePlayerStatisticsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateSharedGroupDataResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientUpdateSharedGroupDataResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateUserDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUpdateUserDataResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    DataVersion;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F0AQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientUpdateUserTitleDisplayNameResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateAmazonReceiptResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientValidateAmazonReceiptResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Fulfillments;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientValidateGooglePlayPurchaseResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Fulfillments;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateIOSReceiptResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientValidateIOSReceiptResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Fulfillments;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateWindowsReceiptResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientValidateWindowsReceiptResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Fulfillments;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientWriteEventResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientWriteEventResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              EventId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientExecuteCloudScriptRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientExecuteCloudScriptRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionParameter;                                       // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GeneratePlayStreamEvent;                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECloudScriptRevisionOption                                 RevisionSelection;                                       // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5F6G[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpecificRevision;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetAccountInfoRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientGetAccountInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Email;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleDisplayName;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetAdPlacementsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientGetAdPlacementsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AppId;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Identifier;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientListUsersCharactersRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientListUsersCharactersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCatalogItemsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetCatalogItemsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterDataRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IfChangedFromDataVersion;                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JKO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Keys;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterInventoryRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterInventoryRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterLeaderboardRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterLeaderboardRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterType;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartPosition;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetCharacterStatisticsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetCharacterStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetContentDownloadUrlRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetContentDownloadUrlRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              HttpMethod;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ThruCDN;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51CX[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientCurrentGamesRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientCurrentGamesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERegion                                                    Region;                                                  // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBPL[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  TagFilter;                                               // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetFriendLeaderboardRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientGetFriendLeaderboardRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeFacebookFriends;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeSteamFriends;                                     // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q42P[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxResultsCount;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartPosition;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KB9L[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecificVersion;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75O8[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetFriendLeaderboardAroundPlayerRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FClientGetFriendLeaderboardAroundPlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeFacebookFriends;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeSteamFriends;                                     // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANY4[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxResultsCount;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecificVersion;                                      // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IFK[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetFriendsListRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetFriendsListRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeFacebookFriends;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeSteamFriends;                                     // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B8OD[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGameServerRegionsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGameServerRegionsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IPZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartPosition;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHNV[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecificVersion;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GZ8[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardAroundCharacterRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterType;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QB63[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardAroundPlayerRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardAroundPlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOIM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecificVersion;                                      // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EUKH[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetLeaderboardForUsersCharactersRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    MaxResultsCount;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGKN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPaymentTokenRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPaymentTokenRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              TokenProvider;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPhotonAuthenticationTokenRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPhotonAuthenticationTokenRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PhotonApplicationId;                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerCombinedInfoRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerCombinedInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerProfileRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerProfileRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerSegmentsRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerSegmentsRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerStatisticsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticNames;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          StatisticNameVersions;                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerStatisticVersionsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerTagsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerTagsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Namespace;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayerTradesRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayerTradesRequest : public FPlayFabRequestCommon
	{
	public:
		ETradeStatus                                               StatusFilter;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TE0B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromFacebookIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FacebookIDs;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FacebookInstantGamesIds;                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromGameCenterIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromGameCenterIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              GameCenterIDs;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromGenericIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromGenericIDsRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          GenericIDs;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromGoogleIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromGoogleIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              GoogleIDs;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromKongregateIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromKongregateIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              KongregateIDs;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              NintendoSwitchDeviceIds;                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromPSNAccountIDsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    IssuerId;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9C5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PSNAccountIDs;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromSteamIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromSteamIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SteamStringIDs;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromTwitchIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromTwitchIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              TwitchIds;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPlayFabIDsFromXboxLiveIDsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Sandbox;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxLiveAccountIDs;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPublisherDataRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPublisherDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Keys;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetPurchaseRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetPurchaseRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              OrderId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetSharedGroupDataRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetSharedGroupDataRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       GetMembers;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YGA9[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Keys;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SharedGroupId;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetStoreItemsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetStoreItemsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTimeRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FClientGetTimeRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ClientGetTitleDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetTitleDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Keys;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OverrideLabel;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTitleNewsRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetTitleNewsRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9H3F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTitlePublicKeyRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetTitlePublicKeyRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              TitleSharedSecret;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetTradeStatusRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientGetTradeStatusRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              OfferingPlayerId;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TradeId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetUserDataRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientGetUserDataRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    IfChangedFromDataVersion;                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WUD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Keys;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetUserInventoryRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientGetUserInventoryRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGetWindowsHelloChallengeRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientGetWindowsHelloChallengeRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PublicKeyHint;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientGrantCharacterToUserRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientGrantCharacterToUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterName;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkAndroidDeviceIDRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientLinkAndroidDeviceIDRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AndroidDevice;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AndroidDeviceId;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHOD[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OS;                                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkAppleRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkAppleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0O0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IdentityToken;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkCustomIDRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkCustomIDRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CustomId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJBE[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkFacebookAccountRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkFacebookAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AccessToken;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TGT[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkFacebookInstantGamesIdRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FacebookInstantGamesSignature;                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USN7[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkGameCenterAccountRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FClientLinkGameCenterAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HDM0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              GameCenterId;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PublicKeyUrl;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Salt;                                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Signature;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkGoogleAccountRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkGoogleAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JW8I[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerAuthCode;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkIOSDeviceIDRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientLinkIOSDeviceIDRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceID;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceModel;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DUNB[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OS;                                                      // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkKongregateAccountRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientLinkKongregateAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AuthTicket;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KC0Z[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              KongregateId;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkNintendoServiceAccountRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkNintendoServiceAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Y7G[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IdentityToken;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkNintendoSwitchDeviceIdRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNY8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NintendoSwitchDeviceId;                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkOpenIdConnectRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientLinkOpenIdConnectRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ConnectionId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTIX[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IdToken;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkPSNAccountRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientLinkPSNAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AuthCode;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7AVN[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IssuerId;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RedirectUri;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkSteamAccountRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkSteamAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFUY[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SteamTicket;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkTwitchAccountRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkTwitchAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AccessToken;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49U8[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkWindowsHelloAccountRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientLinkWindowsHelloAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ66[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PublicKey;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLinkXboxAccountRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientLinkXboxAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GM22[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              XboxToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithAndroidDeviceIDRequest
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithAndroidDeviceIDRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AndroidDevice;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AndroidDeviceId;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateAccount;                                           // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FMV[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OS;                                                      // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithAppleRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithAppleRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88WI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IdentityToken;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithCustomIDRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithCustomIDRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_28OQ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithEmailAddressRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithEmailAddressRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithFacebookRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithFacebookRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AccessToken;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateAccount;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B546[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithFacebookInstantGamesIdRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0B24[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FacebookInstantGamesSignature;                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithGameCenterRequest
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithGameCenterRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQXY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerId;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PublicKeyUrl;                                            // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Salt;                                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Signature;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithGoogleAccountRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithGoogleAccountRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ML3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerAuthCode;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithIOSDeviceIDRequest
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithIOSDeviceIDRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0LNA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceID;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceModel;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OS;                                                      // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithKongregateRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithKongregateRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AuthTicket;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateAccount;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT51[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KongregateId;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithNintendoServiceAccountRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithNintendoServiceAccountRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXFZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IdentityToken;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithNintendoSwitchDeviceIdRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ED09[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NintendoSwitchDeviceId;                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithOpenIdConnectRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithOpenIdConnectRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ConnectionId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateAccount;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMS9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IdToken;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithPlayFabRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithPlayFabRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithPSNRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithPSNRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AuthCode;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateAccount;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PL9W[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IssuerId;                                                // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGCJ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerSecret;                                            // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RedirectUri;                                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithSteamRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithSteamRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7A32[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamTicket;                                             // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithTwitchRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithTwitchRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AccessToken;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CreateAccount;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSN0[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithWindowsHelloRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithWindowsHelloRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ChallengeSignature;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PublicKeyHint;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientLoginWithXboxRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientLoginWithXboxRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTG7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientMatchmakeRequest
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FClientMatchmakeRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERegion                                                    Region;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartNewIfNoneFound;                                     // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWK4[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  TagFilter;                                               // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientOpenTradeRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientOpenTradeRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AllowedPlayerIds;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OfferedInventoryInstanceIds;                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequestedCatalogItemIds;                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientPayForPurchaseRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientPayForPurchaseRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Currency;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OrderId;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProviderName;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProviderTransactionId;                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientPurchaseItemRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FClientPurchaseItemRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Price;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD88[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StoreId;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRedeemCouponRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientRedeemCouponRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CouponCode;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRefreshPSNAuthTokenRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientRefreshPSNAuthTokenRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AuthCode;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IssuerId;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7EO5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RedirectUri;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRegisterForIOSPushNotificationRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientRegisterForIOSPushNotificationRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ConfirmationMessage;                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceToken;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SendPushNotificationConfirmation;                        // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YU8[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientRegisterPlayFabUserRequest
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FClientRegisterPlayFabUserRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireBothUsernameAndEmail;                             // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1JX[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Username;                                                // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRegisterWithWindowsHelloRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FClientRegisterWithWindowsHelloRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceName;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EncryptedRequest;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PublicKey;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveContactEmailRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientRemoveContactEmailRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveFriendRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientRemoveFriendRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FriendPlayFabId;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveGenericIDRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientRemoveGenericIDRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  GenericId;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRemoveSharedGroupMembersRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientRemoveSharedGroupMembersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabIds;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SharedGroupId;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientReportAdActivityRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientReportAdActivityRequest : public FPlayFabRequestCommon
	{
	public:
		EAdActivity                                                Activity;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HWB2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlacementId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RewardId;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientDeviceInfoRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientDeviceInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Info;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientReportPlayerClientRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientReportPlayerClientRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Comment;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReporteeId;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRestoreIOSPurchasesRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientRestoreIOSPurchasesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceiptData;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientRewardAdActivityRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientRewardAdActivityRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlacementId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RewardId;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientSendAccountRecoveryEmailRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientSendAccountRecoveryEmailRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmailTemplateId;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientSetFriendTagsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientSetFriendTagsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FriendPlayFabId;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tags;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientSetPlayerSecretRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientSetPlayerSecretRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              EncryptedRequest;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientStartGameRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FClientStartGameRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildVersion;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomCommandLineData;                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERegion                                                    Region;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H22D[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientStartPurchaseRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientStartPurchaseRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientSubtractUserVirtualCurrencyRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SI36[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkAndroidDeviceIDRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkAndroidDeviceIDRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AndroidDeviceId;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkAppleRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkAppleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkCustomIDRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkCustomIDRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CustomId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkFacebookAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkFacebookAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkFacebookInstantGamesIdRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkFacebookInstantGamesIdRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FacebookInstantGamesId;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkGameCenterAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkGameCenterAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkGoogleAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkGoogleAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkIOSDeviceIDRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkIOSDeviceIDRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeviceID;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkKongregateAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkKongregateAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkNintendoServiceAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkNintendoServiceAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkNintendoSwitchDeviceIdRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkNintendoSwitchDeviceIdRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NintendoSwitchDeviceId;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkOpenIdConnectRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkOpenIdConnectRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ConnectionId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkPSNAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkPSNAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkSteamAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkSteamAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkTwitchAccountRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkTwitchAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AccessToken;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkWindowsHelloAccountRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkWindowsHelloAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PublicKeyHint;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlinkXboxAccountRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FClientUnlinkXboxAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlockContainerInstanceRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FClientUnlockContainerInstanceRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContainerItemInstanceId;                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeyItemInstanceId;                                       // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUnlockContainerItemRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientUnlockContainerItemRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContainerItemId;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateAvatarUrlRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FClientUpdateAvatarUrlRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ImageUrl;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateCharacterDataRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientUpdateCharacterDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserDataPermission                                        Permission;                                              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JN6[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateCharacterStatisticsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FClientUpdateCharacterStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CharacterStatistics;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdatePlayerStatisticsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUpdatePlayerStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Statistics;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateSharedGroupDataRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FClientUpdateSharedGroupDataRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserDataPermission                                        Permission;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0VG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SharedGroupId;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateUserDataRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FClientUpdateUserDataRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserDataPermission                                        Permission;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZDAG[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ClientUpdateUserTitleDisplayNameRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FClientUpdateUserTitleDisplayNameRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateAmazonReceiptRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FClientValidateAmazonReceiptRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencyCode;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchasePrice;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QE3C[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ReceiptId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserId;                                                  // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateGooglePlayPurchaseRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FClientValidateGooglePlayPurchaseRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencyCode;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchasePrice;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RZ02[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ReceiptJson;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Signature;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateIOSReceiptRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientValidateIOSReceiptRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencyCode;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchasePrice;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6X2F[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ReceiptData;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientValidateWindowsReceiptRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientValidateWindowsReceiptRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CurrencyCode;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PurchasePrice;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2KM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Receipt;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientWriteClientCharacterEventRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FClientWriteClientCharacterEventRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Body;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientWriteClientPlayerEventRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientWriteClientPlayerEventRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Body;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ClientWriteTitleEventRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FClientWriteTitleEventRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Body;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptExecuteCloudScriptResult
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FCloudScriptExecuteCloudScriptResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    APIRequestsIssued;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZNM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Error;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecutionTimeSeconds;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OM01[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FunctionName;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FunctionResultTooLarge;                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUXH[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HttpRequestsIssued;                                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Logs;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       LogsTooLarge;                                            // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ZO8[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MemoryConsumedBytes;                                     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProcessorTimeSeconds;                                    // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Revision;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptExecuteFunctionResult
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FCloudScriptExecuteFunctionResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Error;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecutionTimeMilliseconds;                               // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WMW[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FunctionName;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FunctionResultTooLarge;                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06XR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptListFunctionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FCloudScriptListFunctionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Functions;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptListHttpFunctionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FCloudScriptListHttpFunctionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Functions;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptListQueuedFunctionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FCloudScriptListQueuedFunctionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Functions;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptEmptyResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FCloudScriptEmptyResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.CloudScriptExecuteEntityCloudScriptRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FCloudScriptExecuteEntityCloudScriptRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionParameter;                                       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GeneratePlayStreamEvent;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECloudScriptRevisionOption                                 RevisionSelection;                                       // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SV7[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpecificRevision;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptExecuteFunctionRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FCloudScriptExecuteFunctionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionParameter;                                       // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GeneratePlayStreamEvent;                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ABF7[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptListFunctionsRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FCloudScriptListFunctionsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptPostFunctionResultForEntityTriggeredActionRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptPostFunctionResultForFunctionExecutionRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptPostFunctionResultForPlayerTriggeredActionRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  PlayerProfile;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  PlayStreamEventEnvelope;                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptPostFunctionResultForScheduledTaskRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FCloudScriptPostFunctionResultForScheduledTaskRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ScheduledTaskId;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptRegisterHttpFunctionRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FCloudScriptRegisterHttpFunctionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionUrl;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptRegisterQueuedFunctionRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FCloudScriptRegisterQueuedFunctionRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ConnectionString;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.CloudScriptUnregisterFunctionRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FCloudScriptUnregisterFunctionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.DataAbortFileUploadsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FDataAbortFileUploadsResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGPK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataAbortFileUploadsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FDataAbortFileUploadsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileNames;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1W4E[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataDeleteFilesResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FDataDeleteFilesResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99NW[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataFinalizeFileUploadsResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FDataFinalizeFileUploadsResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M49E[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataGetFilesResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FDataGetFilesResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3XFN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataGetObjectsResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FDataGetObjectsResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Objects;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CB37[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataInitiateFileUploadsResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FDataInitiateFileUploadsResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GH1Y[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          UploadDetails;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.DataSetObjectsResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FDataSetObjectsResponse : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    ProfileVersion;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB3F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          SetResults;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.DataDeleteFilesRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FDataDeleteFilesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileNames;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCQN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataFinalizeFileUploadsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FDataFinalizeFileUploadsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileNames;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MEKM[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataGetFilesRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FDataGetFilesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.DataGetObjectsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FDataGetObjectsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EscapeObject;                                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GPHZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataInitiateFileUploadsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FDataInitiateFileUploadsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FileNames;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHM7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.DataSetObjectsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FDataSetObjectsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpectedProfileVersion;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFIC[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Objects;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.EventsWriteEventsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FEventsWriteEventsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              AssignedEventIds;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.EventsWriteEventsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FEventsWriteEventsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Events;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationCreateExclusionGroupResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FExperimentationCreateExclusionGroupResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ExclusionGroupId;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationCreateExclusionGroupRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FExperimentationCreateExclusionGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationCreateExperimentResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FExperimentationCreateExperimentResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ExperimentId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationCreateExperimentRequest
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FExperimentationCreateExperimentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Duration;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MBM[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EndDate;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExclusionGroupId;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExclusionGroupTrafficAllocation;                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EExperimentType                                            ExperimentType;                                          // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLML[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SegmentId;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartDate;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitlePlayerAccountTestIds;                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Variants;                                                // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationEmptyResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FExperimentationEmptyResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetExclusionGroupsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetExclusionGroupsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ExclusionGroups;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetExclusionGroupTrafficResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetExclusionGroupTrafficResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          TrafficAllocations;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetExperimentsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetExperimentsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Experiments;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetLatestScorecardResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetLatestScorecardResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Scorecard;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetTreatmentAssignmentResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetTreatmentAssignmentResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  TreatmentAssignment;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationDeleteExclusionGroupRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FExperimentationDeleteExclusionGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExclusionGroupId;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationDeleteExperimentRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FExperimentationDeleteExperimentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExperimentId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetExclusionGroupsRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetExclusionGroupsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetExclusionGroupTrafficRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetExclusionGroupTrafficRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExclusionGroupId;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetExperimentsRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetExperimentsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetLatestScorecardRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetLatestScorecardRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExperimentId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationGetTreatmentAssignmentRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FExperimentationGetTreatmentAssignmentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationStartExperimentRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FExperimentationStartExperimentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExperimentId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationStopExperimentRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FExperimentationStopExperimentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExperimentId;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationUpdateExclusionGroupRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FExperimentationUpdateExclusionGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExclusionGroupId;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ExperimentationUpdateExperimentRequest
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FExperimentationUpdateExperimentRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Duration;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UP2W[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EndDate;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExclusionGroupId;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExclusionGroupTrafficAllocation;                         // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EExperimentType                                            ExperimentType;                                          // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHCR[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ID;                                                      // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SegmentId;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartDate;                                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitlePlayerAccountTestIds;                               // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Variants;                                                // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsEmptyResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FGroupsEmptyResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.GroupsAcceptGroupApplicationRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsAcceptGroupApplicationRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsAcceptGroupInvitationRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsAcceptGroupInvitationRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsAddMembersRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FGroupsAddMembersRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsApplyToGroupResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FGroupsApplyToGroupResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Expires;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsApplyToGroupRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FGroupsApplyToGroupRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       AutoAcceptOutstandingInvite;                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34XN[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsBlockEntityRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsBlockEntityRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsChangeMemberRoleRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FGroupsChangeMemberRoleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DestinationRoleId;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              OriginRoleId;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsCreateGroupResponse
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FGroupsCreateGroupResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              AdminRoleId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Created;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MemberRoleId;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MYFJ[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Roles;                                                   // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsCreateGroupRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FGroupsCreateGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsCreateGroupRoleResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FGroupsCreateGroupRoleResponse : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    ProfileVersion;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H62L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RoleId;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleName;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsCreateGroupRoleRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FGroupsCreateGroupRoleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleName;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsGetGroupResponse
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FGroupsGetGroupResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              AdminRoleId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Created;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MemberRoleId;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9Y3[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Roles;                                                   // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsInviteToGroupResponse
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FGroupsInviteToGroupResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              Expires;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InvitedByEntity;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InvitedEntity;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsIsMemberResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FGroupsIsMemberResponse : public FPlayFabResultCommon
	{
	public:
		bool                                                       IsMember;                                                // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQ7R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupApplicationsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupApplicationsResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Applications;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupBlocksResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupBlocksResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BlockedEntities;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupInvitationsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupInvitationsResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Invitations;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupMembersResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupMembersResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListMembershipResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListMembershipResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Groups;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListMembershipOpportunitiesResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FGroupsListMembershipOpportunitiesResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Applications;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Invitations;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsUpdateGroupResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsUpdateGroupResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              OperationReason;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOperationTypes                                            SetResult;                                               // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O87B[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.GroupsUpdateGroupRoleResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsUpdateGroupRoleResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              OperationReason;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProfileVersion;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOperationTypes                                            SetResult;                                               // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRAI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.GroupsDeleteGroupRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsDeleteGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsDeleteRoleRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FGroupsDeleteRoleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsGetGroupRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FGroupsGetGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsInviteToGroupRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FGroupsInviteToGroupRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       AutoAcceptOutstandingApplication;                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWQK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsIsMemberRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FGroupsIsMemberRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupApplicationsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupApplicationsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupBlocksRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupBlocksRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupInvitationsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupInvitationsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListGroupMembersRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListGroupMembersRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListMembershipRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListMembershipRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsListMembershipOpportunitiesRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FGroupsListMembershipOpportunitiesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsRemoveGroupApplicationRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsRemoveGroupApplicationRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsRemoveGroupInvitationRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsRemoveGroupInvitationRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsRemoveMembersRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FGroupsRemoveMembersRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsUnblockEntityRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FGroupsUnblockEntityRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsUpdateGroupRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FGroupsUpdateGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AdminRoleId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpectedProfileVersion;                                  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O046[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GroupName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MemberRoleId;                                            // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.GroupsUpdateGroupRoleRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FGroupsUpdateGroupRoleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpectedProfileVersion;                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IU7T[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Group;                                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleId;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RoleName;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsGetDetailsResponse
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsGetDetailsResponse : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    DataUsageMb;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUKF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ErrorMessage;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Limits;                                                  // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          PendingOperations;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PerformanceLevel;                                        // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RetentionDays;                                           // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsGetLimitsResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsGetLimitsResponse : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    DefaultPerformanceLevel;                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultStorageRetentionDays;                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StorageMaxRetentionDays;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StorageMinRetentionDays;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          SubMeters;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsGetOperationStatusResponse
	 * Size -> 0x0078 (FullSize[0x0080] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsGetOperationStatusResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              Message;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationCompletedTime;                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationId;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationLastUpdated;                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationStartedTime;                                    // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationType;                                           // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OperationValue;                                          // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9V7[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Status;                                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsGetPendingOperationsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsGetPendingOperationsResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          PendingOperations;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsOperationResponse
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsOperationResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              Message;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationType;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsEmptyRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsEmptyRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsGetOperationStatusRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsGetOperationStatusRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsGetPendingOperationsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsGetPendingOperationsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OperationType;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsSetPerformanceRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsSetPerformanceRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PerformanceLevel;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWWT[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.InsightsInsightsSetStorageRetentionRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FInsightsInsightsSetStorageRetentionRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RetentionDays;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGAZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.LocalizationGetLanguageListResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FLocalizationGetLanguageListResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              LanguageList;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.LocalizationGetLanguageListRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FLocalizationGetLanguageListRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerAuthUserResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMatchmakerAuthUserResponse : public FPlayFabResultCommon
	{
	public:
		bool                                                       Authorized;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0WS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerAuthUserRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMatchmakerAuthUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AuthorizationTicket;                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerPlayerJoinedResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMatchmakerPlayerJoinedResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MatchmakerPlayerLeftResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMatchmakerPlayerLeftResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MatchmakerStartGameResponse
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FMatchmakerStartGameResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              GameID;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerIPV4Address;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerIPV6Address;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ServerPort;                                              // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2AQR[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerPublicDNSName;                                     // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerUserInfoResponse
	 * Size -> 0x0068 (FullSize[0x0070] - InheritedSize[0x0008])
	 */
	struct FMatchmakerUserInfoResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Inventory;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       IsDeveloper;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W3W9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamId;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TitleDisplayName;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrencyRechargeTimes;                            // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerPlayerJoinedRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMatchmakerPlayerJoinedRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerPlayerLeftRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerStartGameRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FMatchmakerStartGameRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Build;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CustomCommandLineData;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExternalMatchmakerEventEndpoint;                         // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERegion                                                    Region;                                                  // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLET[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MatchmakerUserInfoRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMatchmakerUserInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCatalogVersion;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_466J[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelAllMatchmakingTicketsForPlayerRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelAllServerBackfillTicketsForPlayerRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelMatchmakingTicketResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelMatchmakingTicketRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelMatchmakingTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketId;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelServerBackfillTicketResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCancelServerBackfillTicketRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCancelServerBackfillTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketId;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerBuildAliasDetailsResponse
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FMultiplayerBuildAliasDetailsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              AliasId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AliasName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          BuildSelectionCriteria;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFVN[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateBuildAliasRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateBuildAliasRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AliasName;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          BuildSelectionCriteria;                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerResponse
	 * Size -> 0x00D8 (FullSize[0x00E0] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateBuildWithCustomContainerResponse : public FPlayFabResultCommon
	{
	public:
		bool                                                       AreAssetsReadonly;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFYH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContainerFlavor                                           ContainerFlavor;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6NJ8[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContainerRunCommand;                                     // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CreationTime;                                            // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomGameContainerImage;                                // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameAssetReferences;                                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameCertificateReferences;                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  LinuxInstrumentationConfiguration;                       // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiplayerServerCountPerVm;                             // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_041Z[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OsPlatform;                                              // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          RegionConfigurations;                                    // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ServerType;                                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamingForAssetDownloads;                           // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAzureVmSize                                               VmSize;                                                  // 0x00D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4E8J[0x6];                                   // 0x00DA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateBuildWithCustomContainerRequest
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateBuildWithCustomContainerRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       AreAssetsReadonly;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R97D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContainerFlavor                                           ContainerFlavor;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DFMW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  ContainerImageReference;                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContainerRunCommand;                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameAssetReferences;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameCertificateReferences;                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  LinuxInstrumentationConfiguration;                       // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiplayerServerCountPerVm;                             // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A0TW[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          RegionConfigurations;                                    // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       UseStreamingForAssetDownloads;                           // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAzureVmSize                                               VmSize;                                                  // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RHX7[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerResponse
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateBuildWithManagedContainerResponse : public FPlayFabResultCommon
	{
	public:
		bool                                                       AreAssetsReadonly;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41A4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContainerFlavor                                           ContainerFlavor;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14DZ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CreationTime;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameAssetReferences;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameCertificateReferences;                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              GameWorkingDirectory;                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InstrumentationConfiguration;                            // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiplayerServerCountPerVm;                             // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ND7Z[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OsPlatform;                                              // 0x0090(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          RegionConfigurations;                                    // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ServerType;                                              // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartMultiplayerServerCommand;                           // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamingForAssetDownloads;                           // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAzureVmSize                                               VmSize;                                                  // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99A1[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateBuildWithManagedContainerRequest
	 * Size -> 0x00A8 (FullSize[0x00B0] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateBuildWithManagedContainerRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       AreAssetsReadonly;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2COE[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContainerFlavor                                           ContainerFlavor;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TLPX[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameAssetReferences;                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameCertificateReferences;                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              GameWorkingDirectory;                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InstrumentationConfiguration;                            // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiplayerServerCountPerVm;                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJQ4[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          RegionConfigurations;                                    // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StartMultiplayerServerCommand;                           // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamingForAssetDownloads;                           // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAzureVmSize                                               VmSize;                                                  // 0x00A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KLTA[0x6];                                   // 0x00AA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateBuildWithProcessBasedServerResponse
	 * Size -> 0x00E8 (FullSize[0x00F0] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateBuildWithProcessBasedServerResponse : public FPlayFabResultCommon
	{
	public:
		bool                                                       AreAssetsReadonly;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWJ6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContainerFlavor                                           ContainerFlavor;                                         // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1XMR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CreationTime;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameAssetReferences;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameCertificateReferences;                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              GameWorkingDirectory;                                    // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InstrumentationConfiguration;                            // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOSPreview;                                             // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D54T[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiplayerServerCountPerVm;                             // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JP9V[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OsPlatform;                                              // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          RegionConfigurations;                                    // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ServerType;                                              // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartMultiplayerServerCommand;                           // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamingForAssetDownloads;                           // 0x00E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAzureVmSize                                               VmSize;                                                  // 0x00E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2UE[0x6];                                   // 0x00EA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateBuildWithProcessBasedServerRequest
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateBuildWithProcessBasedServerRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       AreAssetsReadonly;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DH9H[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameAssetReferences;                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameCertificateReferences;                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              GameWorkingDirectory;                                    // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InstrumentationConfiguration;                            // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsOSPreview;                                             // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3GA[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiplayerServerCountPerVm;                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBX0[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OsPlatform;                                              // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          RegionConfigurations;                                    // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StartMultiplayerServerCommand;                           // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamingForAssetDownloads;                           // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAzureVmSize                                               VmSize;                                                  // 0x00B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7N95[0x6];                                   // 0x00BA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateMatchmakingTicketResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              TicketId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateMatchmakingTicketRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateMatchmakingTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Creator;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GiveUpAfterSeconds;                                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1MX4[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          MembersToMatchWith;                                      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateRemoteUserResponse
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateRemoteUserResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              ExpirationTime;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateRemoteUserRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateRemoteUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ExpirationTime;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VmId;                                                    // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateServerBackfillTicketResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              TicketId;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateServerBackfillTicketRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateServerBackfillTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GiveUpAfterSeconds;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AIQ5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ServerDetails;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateServerMatchmakingTicketRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateServerMatchmakingTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GiveUpAfterSeconds;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00D0[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateTitleMultiplayerServersQuotaChangeResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              RequestId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WasApproved;                                             // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OM3X[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerCreateTitleMultiplayerServersQuotaChangeRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ChangeDescription;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Changes;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ContactEmail;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Notes;                                                   // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartDate;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerEmptyResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMultiplayerEmptyResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerEnableMultiplayerServersForTitleResponse : public FPlayFabResultCommon
	{
	public:
		ETitleMultiplayerServerEnabledStatus                       Status;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USMH[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlResponse
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetAssetUploadUrlResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              AssetUploadUrl;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetBuildResponse
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetBuildResponse : public FPlayFabResultCommon
	{
	public:
		bool                                                       AreAssetsReadonly;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M31[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BuildId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildName;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildStatus;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EContainerFlavor                                           ContainerFlavor;                                         // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TCUX[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ContainerRunCommand;                                     // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CreationTime;                                            // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomGameContainerImage;                                // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameAssetReferences;                                     // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          GameCertificateReferences;                               // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InstrumentationConfiguration;                            // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MetaData;                                                // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MultiplayerServerCountPerVm;                             // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EZZ[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              OsPlatform;                                              // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          RegionConfigurations;                                    // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ServerType;                                              // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StartMultiplayerServerCommand;                           // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamingForAssetDownloads;                           // 0x00F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAzureVmSize                                               VmSize;                                                  // 0x00F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8P5P[0x6];                                   // 0x00FA(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsResponse
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetContainerRegistryCredentialsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              DnsName;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMatchResult
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMatchResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              MatchID;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              RegionPreferences;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ServerDetails;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketResult
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMatchmakingTicketResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CancellationReasonString;                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Created;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Creator;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GiveUpAfterSeconds;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BW7[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          MembersToMatchWith;                                      // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Status;                                                  // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketId;                                                // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsResponse
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMultiplayerServerDetailsResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ConnectedPlayers;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              FQDN;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPV4Address;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastStateTransitionTime;                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerId;                                                // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VmId;                                                    // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMultiplayerServerLogsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              LogDownloadUrl;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetQueueStatisticsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetQueueStatisticsResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    NumberOfPlayersMatching;                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9AY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  TimeToMatchStatisticsInSeconds;                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetRemoteLoginEndpointResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              IPV4Address;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Port;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KKRF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketResult
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetServerBackfillTicketResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CancellationReasonString;                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Created;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GiveUpAfterSeconds;                                      // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZPU[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Members;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ServerDetails;                                           // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Status;                                                  // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketId;                                                // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : public FPlayFabResultCommon
	{
	public:
		ETitleMultiplayerServerEnabledStatus                       Status;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FRKZ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotaChangeResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Change;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Quotas;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FMultiplayerJoinMatchmakingTicketResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListMultiplayerServersResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListMultiplayerServersResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          MultiplayerServerSummaries;                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U9I9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListAssetSummariesResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListAssetSummariesResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          AssetSummaries;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3CW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListBuildAliasesForTitleResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListBuildAliasesForTitleResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BuildAliases;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListBuildSummariesResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListBuildSummariesResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BuildSummaries;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K40C[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListCertificateSummariesResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListCertificateSummariesResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          CertificateSummaries;                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LU22[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListContainerImagesResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListContainerImagesResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              Images;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUB8[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListContainerImageTagsResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListContainerImageTagsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              Tags;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListMatchmakingTicketsForPlayerResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              TicketIds;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListPartyQosServersResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListPartyQosServersResponse : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    PageSize;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AYBO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          QosServers;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              SkipToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListQosServersForTitleResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListQosServersForTitleResponse : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    PageSize;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VAK0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          QosServers;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              SkipToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListServerBackfillTicketsForPlayerResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              TicketIds;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListTitleMultiplayerServersQuotaChangesResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Changes;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesResponse
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListVirtualMachineSummariesResponse : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    PageSize;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9RV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          VirtualMachines;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerResponse
	 * Size -> 0x00A0 (FullSize[0x00A8] - InheritedSize[0x0008])
	 */
	struct FMultiplayerRequestMultiplayerServerResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ConnectedPlayers;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              FQDN;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IPV4Address;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastStateTransitionTime;                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Ports;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerId;                                                // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              State;                                                   // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VmId;                                                    // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsResponse
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMultiplayerRolloverContainerRegistryCredentialsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              DnsName;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Password;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerDeleteAssetRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerDeleteAssetRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerDeleteBuildRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerDeleteBuildRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerDeleteBuildAliasRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerDeleteBuildAliasRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AliasId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerDeleteBuildRegionRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerDeleteBuildRegionRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerDeleteCertificateRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerDeleteCertificateRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerDeleteContainerImageRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerDeleteContainerImageRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImageName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerDeleteRemoteUserRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FMultiplayerDeleteRemoteUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VmId;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerEnableMultiplayerServersForTitleRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerEnableMultiplayerServersForTitleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetAssetUploadUrlRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetAssetUploadUrlRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetBuildRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetBuildRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetBuildAliasRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetBuildAliasRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AliasId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetContainerRegistryCredentialsRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetContainerRegistryCredentialsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMatchRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMatchRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EscapeObject;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYAP[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchID;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReturnMemberAttributes;                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DF17[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMatchmakingTicketRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMatchmakingTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EscapeObject;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T545[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              QueueName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketId;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMultiplayerServerDetailsRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMultiplayerServerDetailsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMultiplayerServerLogsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMultiplayerServerLogsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerId;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetMultiplayerSessionLogsBySessionIdRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetQueueStatisticsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetQueueStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetRemoteLoginEndpointRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetRemoteLoginEndpointRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VmId;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetServerBackfillTicketRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetServerBackfillTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EscapeObject;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JDZB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              QueueName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketId;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotaChangeRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RequestId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerGetTitleMultiplayerServersQuotasRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerJoinMatchmakingTicketRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FMultiplayerJoinMatchmakingTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Member;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TicketId;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListMultiplayerServersRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListMultiplayerServersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNV1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Region;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SkipToken;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListAssetSummariesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListAssetSummariesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1SNC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerMultiplayerEmptyRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerMultiplayerEmptyRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListBuildSummariesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListBuildSummariesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IYMI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListCertificateSummariesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListCertificateSummariesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FH5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListContainerImagesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListContainerImagesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I654[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkipToken;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListContainerImageTagsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListContainerImageTagsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImageName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListMatchmakingTicketsForPlayerRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListMatchmakingTicketsForPlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListPartyQosServersRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListPartyQosServersRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListQosServersForTitleRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListQosServersForTitleRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeAllRegions;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G38[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListServerBackfillTicketsForPlayerRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListServerBackfillTicketsForPlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QueueName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListTitleMultiplayerServersQuotaChangesRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListTitleMultiplayerServersQuotaChangesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerListVirtualMachineSummariesRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FMultiplayerListVirtualMachineSummariesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PageSize;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1ZZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Region;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SkipToken;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerRequestMultiplayerServerRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FMultiplayerRequestMultiplayerServerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  BuildAliasParams;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InitialPlayers;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreferredRegions;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionCookie;                                           // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerRolloverContainerRegistryCredentialsRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMultiplayerRolloverContainerRegistryCredentialsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerShutdownMultiplayerServerRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerShutdownMultiplayerServerRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Region;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerUntagContainerImageRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerUntagContainerImageRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImageName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tag;                                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerUpdateBuildAliasRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMultiplayerUpdateBuildAliasRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AliasId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AliasName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          BuildSelectionCriteria;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerUpdateBuildNameRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerUpdateBuildNameRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BuildName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerUpdateBuildRegionRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMultiplayerUpdateBuildRegionRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  BuildRegion;                                             // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerUpdateBuildRegionsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FMultiplayerUpdateBuildRegionsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BuildId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          BuildRegions;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.MultiplayerUploadCertificateRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FMultiplayerUploadCertificateRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  GameCertificate;                                         // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetGlobalPolicyResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FProfilesGetGlobalPolicyResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Permissions;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetEntityProfileResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FProfilesGetEntityProfileResponse : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Profile;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetEntityProfilesResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FProfilesGetEntityProfilesResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Profiles;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              TitleId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  TitlePlayerAccounts;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesSetGlobalPolicyResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FProfilesSetGlobalPolicyResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ProfilesSetProfileLanguageResponse
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FProfilesSetProfileLanguageResponse : public FPlayFabResultCommon
	{
	public:
		EOperationTypes                                            OperationResult;                                         // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9WN[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VersionNumber;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FProfilesSetEntityProfilePolicyResponse : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Permissions;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetGlobalPolicyRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FProfilesGetGlobalPolicyRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetEntityProfileRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FProfilesGetEntityProfileRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DataAsObject;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7P76[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetEntityProfilesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FProfilesGetEntityProfilesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DataAsObject;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JV3U[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Entities;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MasterPlayerAccountIds;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesSetGlobalPolicyRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FProfilesSetGlobalPolicyRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Permissions;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesSetProfileLanguageRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FProfilesSetProfileLanguageRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpectedVersion;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XFY6[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Language;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ProfilesSetEntityProfilePolicyRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FProfilesSetEntityProfilePolicyRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Entity;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Statements;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerModifyCharacterVirtualCurrencyResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerModifyCharacterVirtualCurrencyResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    Balance;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIN4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VirtualCurrency;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAddCharacterVirtualCurrencyRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerAddCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NI1W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerEmptyResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerEmptyResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerAddFriendRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FServerAddFriendRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FriendEmail;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendPlayFabId;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendTitleDisplayName;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FriendUsername;                                          // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerEmptyResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerEmptyResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerAddGenericIDRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerAddGenericIDRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  GenericId;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAddPlayerTagResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerAddPlayerTagResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerAddPlayerTagRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerAddPlayerTagRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TagName;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAddSharedGroupMembersResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerAddSharedGroupMembersResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerAddSharedGroupMembersRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerAddSharedGroupMembersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabIds;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SharedGroupId;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerModifyUserVirtualCurrencyResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerModifyUserVirtualCurrencyResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    Balance;                                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BalanceChange;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAddUserVirtualCurrencyRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerAddUserVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EZI3[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAuthenticateSessionTicketResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerAuthenticateSessionTicketResult : public FPlayFabResultCommon
	{
	public:
		bool                                                       IsSessionTicketExpired;                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IP9I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  UserInfo;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAuthenticateSessionTicketRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerAuthenticateSessionTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SessionTicket;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAwardSteamAchievementResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerAwardSteamAchievementResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          AchievementResults;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerAwardSteamAchievementRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerAwardSteamAchievementRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Achievements;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerBanUsersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerBanUsersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerBanUsersRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerBanUsersRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Bans;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerConsumeItemResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerConsumeItemResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ItemInstanceId;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingUses;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DXAF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerConsumeItemRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerConsumeItemRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConsumeCount;                                            // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTQB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerCreateSharedGroupResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerCreateSharedGroupResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              SharedGroupId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerCreateSharedGroupRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerCreateSharedGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SharedGroupId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerDeleteCharacterFromUserResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerDeleteCharacterFromUserResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerDeletePlayerResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerDeletePlayerResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerDeletePushNotificationTemplateResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerDeletePushNotificationTemplateResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerDeregisterGameResponse
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerDeregisterGameResponse : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerEvaluateRandomResultTableResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerEvaluateRandomResultTableResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ResultItemId;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerExecuteCloudScriptResult
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FServerExecuteCloudScriptResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    APIRequestsIssued;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SO63[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  Error;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExecutionTimeSeconds;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FI6H[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FunctionName;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionResult;                                          // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FunctionResultTooLarge;                                  // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8Y9[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HttpRequestsIssued;                                      // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Logs;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       LogsTooLarge;                                            // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UUC0[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MemoryConsumedBytes;                                     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProcessorTimeSeconds;                                    // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Revision;                                                // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetAllSegmentsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetAllSegmentsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Segments;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerListUsersCharactersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerListUsersCharactersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Characters;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCatalogItemsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetCatalogItemsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Catalog;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterDataResult
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterDataResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataVersion;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S50W[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterInventoryResult
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterInventoryResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Inventory;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrencyRechargeTimes;                            // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterLeaderboardResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterLeaderboardResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterStatisticsResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterStatisticsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CharacterStatistics;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetContentDownloadUrlResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetContentDownloadUrlResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              URL;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              NextReset;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKOZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerGetFriendsListResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetFriendsListResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Friends;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardAroundCharacterResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardAroundUserResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardAroundUserResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              NextReset;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Version;                                                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7C4L[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardForUsersCharactersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Leaderboard;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerCombinedInfoResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerCombinedInfoResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  InfoResultPayload;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerProfileResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerProfileResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  PlayerProfile;                                           // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerSegmentsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerSegmentsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Segments;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayersInSegmentResult
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayersInSegmentResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ContinuationToken;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          PlayerProfiles;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ProfilesInSegment;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9JWP[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerStatisticsResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerStatisticsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Statistics;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerStatisticVersionsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          StatisticVersions;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerTagsResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerTagsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tags;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromFacebookIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromGenericIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromPSNAccountIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromSteamIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromXboxLiveIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPublisherDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerGetPublisherDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetRandomResultTablesResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerGetRandomResultTablesResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Tables;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetServerCustomIDsFromPlayFabIDsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Data;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetSharedGroupDataResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerGetSharedGroupDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Members;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetStoreItemsResult
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerGetStoreItemsResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  MarketingData;                                           // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPfSourceType                                              Source;                                                  // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A481[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPlayFabJsonObject*>                          Store;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetTimeResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetTimeResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              Time;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetTitleDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerGetTitleDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetTitleNewsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetTitleNewsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          News;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserAccountInfoResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerGetUserAccountInfoResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  UserInfo;                                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserBansResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetUserBansResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserDataResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetUserDataResult : public FPlayFabResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataVersion;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_55LP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserInventoryResult
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerGetUserInventoryResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Inventory;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrencyRechargeTimes;                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantCharacterToUserResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGrantCharacterToUserResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantItemsToCharacterResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGrantItemsToCharacterResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ItemGrantResults;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantItemsToUserResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGrantItemsToUserResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ItemGrantResults;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantItemsToUsersResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGrantItemsToUsersResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          ItemGrantResults;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerLinkPSNAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerLinkPSNAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerLinkServerCustomIdResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerLinkServerCustomIdResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerLinkXboxAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerLinkXboxAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerServerLoginResult
	 * Size -> 0x0058 (FullSize[0x0068] - InheritedSize[0x0010])
	 */
	struct FServerServerLoginResult : public FPlayFabLoginResultCommon
	{
	public:
		class UPlayFabJsonObject*                                  EntityToken;                                             // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoResultPayload;                                       // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LastLoginTime;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NewlyCreated;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93FE[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SessionTicket;                                           // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  SettingsForUser;                                         // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  TreatmentAssignment;                                     // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerModifyItemUsesResult
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerModifyItemUsesResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              ItemInstanceId;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingUses;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXSH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerMoveItemToCharacterFromCharacterResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerMoveItemToCharacterFromUserResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerMoveItemToUserFromCharacterResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerNotifyMatchmakerPlayerLeftResult : public FPlayFabResultCommon
	{
	public:
		EPlayerConnectionState                                     PlayerState;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RMSV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerRedeemCouponResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRedeemCouponResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          GrantedItems;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRedeemMatchmakerTicketResult
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerRedeemMatchmakerTicketResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              Error;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TicketIsValid;                                           // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LD7V[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  UserInfo;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerRefreshGameServerInstanceHeartbeatResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerRegisterGameResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRegisterGameResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRemovePlayerTagResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerRemovePlayerTagResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerRemoveSharedGroupMembersResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerRemoveSharedGroupMembersResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerReportPlayerServerResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerReportPlayerServerResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    SubmissionsRemaining;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVXQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeAllBansForUserResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRevokeAllBansForUserResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeBansResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRevokeBansResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeInventoryResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerRevokeInventoryResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeInventoryItemsResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRevokeInventoryItemsResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Errors;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSavePushNotificationTemplateResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerSavePushNotificationTemplateResult : public FPlayFabResultCommon
	{
	public:
		class FString                                              PushNotificationTemplateId;                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSendCustomAccountRecoveryEmailResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSendEmailFromTemplateResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSendEmailFromTemplateResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSendPushNotificationResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSendPushNotificationResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSetGameServerInstanceDataResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSetGameServerInstanceDataResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSetGameServerInstanceStateResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSetGameServerInstanceStateResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSetGameServerInstanceTagsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSetGameServerInstanceTagsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSetPlayerSecretResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSetPlayerSecretResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSetPublisherDataResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSetPublisherDataResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerSetTitleDataResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerSetTitleDataResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerUnlinkPSNAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerUnlinkPSNAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerUnlinkServerCustomIdResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerUnlinkServerCustomIdResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerUnlinkXboxAccountResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerUnlinkXboxAccountResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerUnlockContainerItemResult
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerUnlockContainerItemResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          GrantedItems;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              UnlockedItemInstanceId;                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UnlockedWithItemInstanceId;                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  VirtualCurrency;                                         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateBansResult
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerUpdateBansResult : public FPlayFabResultCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          BanData;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateCharacterDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerUpdateCharacterDataResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    DataVersion;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFMI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateCharacterStatisticsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerUpdateCharacterStatisticsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerUpdatePlayerStatisticsResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerUpdatePlayerStatisticsResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateSharedGroupDataResult
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerUpdateSharedGroupDataResult : public FPlayFabResultCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateUserDataResult
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerUpdateUserDataResult : public FPlayFabResultCommon
	{
	public:
		int32_t                                                    DataVersion;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WC88[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerWriteEventResponse
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerWriteEventResponse : public FPlayFabResultCommon
	{
	public:
		class FString                                              EventId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerDeleteCharacterFromUserRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerDeleteCharacterFromUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SaveCharacterInventory;                                  // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7HT[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerDeletePlayerRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerDeletePlayerRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerDeletePushNotificationTemplateRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerDeletePushNotificationTemplateRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PushNotificationTemplateId;                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerDeleteSharedGroupRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerDeleteSharedGroupRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SharedGroupId;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerDeregisterGameRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerDeregisterGameRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerEvaluateRandomResultTableRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerEvaluateRandomResultTableRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TableId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerExecuteCloudScriptServerRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerExecuteCloudScriptServerRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FunctionName;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  FunctionParameter;                                       // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GeneratePlayStreamEvent;                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYE0[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECloudScriptRevisionOption                                 RevisionSelection;                                       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X00N[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpecificRevision;                                        // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetAllSegmentsRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerGetAllSegmentsRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerListUsersCharactersRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerListUsersCharactersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCatalogItemsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetCatalogItemsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterDataRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IfChangedFromDataVersion;                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9VTS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Keys;                                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterInventoryRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterInventoryRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterLeaderboardRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterLeaderboardRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterType;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartPosition;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetCharacterStatisticsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetCharacterStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetContentDownloadUrlRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetContentDownloadUrlRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              HttpMethod;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ThruCDN;                                                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YSM[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerGetFriendLeaderboardRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FServerGetFriendLeaderboardRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeFacebookFriends;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeSteamFriends;                                     // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRUV[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxResultsCount;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartPosition;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AGW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecificVersion;                                      // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RULX[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetFriendsListRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerGetFriendsListRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeFacebookFriends;                                  // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeSteamFriends;                                     // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YAOW[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JGWU[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartPosition;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OZS[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatisticName;                                           // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecificVersion;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_08BS[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardAroundCharacterRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardAroundCharacterRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterType;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U6HI[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardAroundUserRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardAroundUserRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxResultsCount;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4B94[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpecificVersion;                                      // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W7DN[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Version;                                                 // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetLeaderboardForUsersCharactersRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetLeaderboardForUsersCharactersRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    MaxResultsCount;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S2NJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerCombinedInfoRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerCombinedInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerProfileRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerProfileRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  ProfileConstraints;                                      // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayersSegmentsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayersSegmentsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayersInSegmentRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayersInSegmentRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ContinuationToken;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxBatchSize;                                            // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SecondsToLive;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SegmentId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerStatisticsRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticNames;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          StatisticNameVersions;                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerStatisticVersionsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerStatisticVersionsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatisticName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayerTagsRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayerTagsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Namespace;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromFacebookIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FacebookIDs;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FacebookInstantGamesIds;                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromGenericIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromGenericIDsRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          GenericIDs;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              NintendoSwitchDeviceIds;                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromPSNAccountIDsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    IssuerId;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OA1H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PSNAccountIDs;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromSteamIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromSteamIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              SteamStringIDs;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPlayFabIDsFromXboxLiveIDsRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Sandbox;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxLiveAccountIDs;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetPublisherDataRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetPublisherDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Keys;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetRandomResultTablesRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetRandomResultTablesRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TableIDs;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetServerCustomIDsFromPlayFabIDsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetServerCustomIDsFromPlayFabIDsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabIds;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetSharedGroupDataRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetSharedGroupDataRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       GetMembers;                                              // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWO8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Keys;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SharedGroupId;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetStoreItemsServerRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerGetStoreItemsServerRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StoreId;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetTimeRequest
	 * Size -> 0x0000 (FullSize[0x0008] - InheritedSize[0x0008])
	 */
	struct FServerGetTimeRequest : public FPlayFabRequestCommon
	{	};

	/**
	 * ScriptStruct PlayFab.ServerGetTitleDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerGetTitleDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Keys;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OverrideLabel;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetTitleNewsRequest
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FServerGetTitleNewsRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X9VQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserAccountInfoRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetUserAccountInfoRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserBansRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerGetUserBansRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserDataRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGetUserDataRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    IfChangedFromDataVersion;                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M9O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Keys;                                                    // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGetUserInventoryRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerGetUserInventoryRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantCharacterToUserRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerGrantCharacterToUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterName;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterType;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantItemsToCharacterRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FServerGrantItemsToCharacterRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Annotation;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CatalogVersion;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemIds;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantItemsToUserRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FServerGrantItemsToUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Annotation;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CatalogVersion;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemIds;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerGrantItemsToUsersRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerGrantItemsToUsersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          ItemGrants;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerLinkPSNAccountRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerLinkPSNAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AuthCode;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X2SW[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IssuerId;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              RedirectUri;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerLinkServerCustomIdRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerLinkServerCustomIdRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QSBB[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerCustomId;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerLinkXboxAccountRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerLinkXboxAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceLink;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8TG[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerLoginWithServerCustomIdRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerLoginWithServerCustomIdRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TORV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSecret;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerCustomId;                                          // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerLoginWithXboxRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerLoginWithXboxRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NV2C[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxToken;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerLoginWithXboxIdRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerLoginWithXboxIdRequest : public FPlayFabRequestCommon
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EC3U[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  InfoRequestParameters;                                   // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Sandbox;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XboxId;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerModifyItemUsesRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerModifyItemUsesRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UsesToAdd;                                               // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZ0A[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerMoveItemToCharacterFromCharacterRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerMoveItemToCharacterFromCharacterRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              GivingCharacterId;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReceivingCharacterId;                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerMoveItemToCharacterFromUserRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerMoveItemToCharacterFromUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerMoveItemToUserFromCharacterRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerMoveItemToUserFromCharacterRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerNotifyMatchmakerPlayerLeftRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerNotifyMatchmakerPlayerLeftRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRedeemCouponRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FServerRedeemCouponRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CouponCode;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRedeemMatchmakerTicketRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerRedeemMatchmakerTicketRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Ticket;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRefreshGameServerInstanceHeartbeatRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRefreshGameServerInstanceHeartbeatRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRegisterGameRequest
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FServerRegisterGameRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Build;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameMode;                                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERegion                                                    Region;                                                  // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRZI[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerIPV4Address;                                       // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerIPV6Address;                                       // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerPort;                                              // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerPublicDNSName;                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Tags;                                                    // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRemoveFriendRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerRemoveFriendRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FriendPlayFabId;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRemoveGenericIDRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerRemoveGenericIDRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  GenericId;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRemovePlayerTagRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerRemovePlayerTagRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TagName;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRemoveSharedGroupMembersRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerRemoveSharedGroupMembersRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabIds;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SharedGroupId;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerReportPlayerServerRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerReportPlayerServerRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Comment;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReporteeId;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ReporterId;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeAllBansForUserRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRevokeAllBansForUserRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeBansRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRevokeBansRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              BanIds;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeInventoryItemRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerRevokeInventoryItemRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerRevokeInventoryItemsRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerRevokeInventoryItemsRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSavePushNotificationTemplateRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FServerSavePushNotificationTemplateRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              AndroidPayload;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ID;                                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IOSPayload;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  LocalizedPushNotificationTemplates;                      // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSendCustomAccountRecoveryEmailRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerSendCustomAccountRecoveryEmailRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Email;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmailTemplateId;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Username;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSendEmailFromTemplateRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerSendEmailFromTemplateRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmailTemplateId;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSendPushNotificationRequest
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FServerSendPushNotificationRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          AdvancedPlatformDelivery;                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Package;                                                 // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Recipient;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Subject;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetPlatforms;                                         // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSendPushNotificationFromTemplateRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerSendPushNotificationFromTemplateRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PushNotificationTemplateId;                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Recipient;                                               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSetFriendTagsRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerSetFriendTagsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              FriendPlayFabId;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Tags;                                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSetGameServerInstanceDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerSetGameServerInstanceDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              GameServerData;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LobbyId;                                                 // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSetGameServerInstanceStateRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerSetGameServerInstanceStateRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGameInstanceState                                         State;                                                   // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BWCR[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct PlayFab.ServerSetGameServerInstanceTagsRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerSetGameServerInstanceTagsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              LobbyId;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Tags;                                                    // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSetPlayerSecretRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerSetPlayerSecretRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              PlayerSecret;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSetPublisherDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerSetPublisherDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSetTitleDataRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerSetTitleDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              Key;                                                     // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSubtractCharacterVirtualCurrencyRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerSubtractCharacterVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GZPN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CharacterId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerSubtractUserVirtualCurrencyRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerSubtractUserVirtualCurrencyRequest : public FPlayFabRequestCommon
	{
	public:
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MBKF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              VirtualCurrency;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUnlinkPSNAccountRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerUnlinkPSNAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUnlinkServerCustomIdRequest
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FServerUnlinkServerCustomIdRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerCustomId;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUnlinkXboxAccountRequest
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FServerUnlinkXboxAccountRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUnlockContainerInstanceRequest
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FServerUnlockContainerInstanceRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContainerItemInstanceId;                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeyItemInstanceId;                                       // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUnlockContainerItemRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FServerUnlockContainerItemRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CatalogVersion;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ContainerItemId;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateAvatarUrlRequest
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FServerUpdateAvatarUrlRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              ImageUrl;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateBansRequest
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FServerUpdateBansRequest : public FPlayFabRequestCommon
	{
	public:
		TArray<class UPlayFabJsonObject*>                          Bans;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateCharacterDataRequest
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FServerUpdateCharacterDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserDataPermission                                        Permission;                                              // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TRBS[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateCharacterStatisticsRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerUpdateCharacterStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CharacterStatistics;                                     // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdatePlayerStatisticsRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerUpdatePlayerStatisticsRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceUpdate;                                             // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUWN[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPlayFabJsonObject*>                          Statistics;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateSharedGroupDataRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerUpdateSharedGroupDataRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserDataPermission                                        Permission;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6N20[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SharedGroupId;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateUserDataRequest
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FServerUpdateUserDataRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EUserDataPermission                                        Permission;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU93[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateUserInternalDataRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerUpdateUserInternalDataRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerUpdateUserInventoryItemDataRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FServerUpdateUserInventoryItemDataRequest : public FPlayFabRequestCommon
	{
	public:
		class FString                                              CharacterId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  Data;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemInstanceId;                                          // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KeysToRemove;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerWriteServerCharacterEventRequest
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FServerWriteServerCharacterEventRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Body;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CharacterId;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerWriteServerPlayerEventRequest
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FServerWriteServerPlayerEventRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Body;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct PlayFab.ServerWriteTitleEventRequest
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FServerWriteTitleEventRequest : public FPlayFabRequestCommon
	{
	public:
		class UPlayFabJsonObject*                                  Body;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayFabJsonObject*                                  CustomTags;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Timestamp;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

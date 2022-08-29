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
	 * Enum Maine.EConversationNodeDisplayStyle
	 */
	enum class EConversationNodeDisplayStyle : uint8_t
	{
		Undefined   = 0,
		Subtitle    = 1,
		RadioBubble = 2,
		Standard    = 3,
		MAX         = 4
	};

	/**
	 * Enum Maine.EColorBlindModeSettings
	 */
	enum class EColorBlindModeSettings : uint8_t
	{
		None         = 0,
		Deuteranopia = 1,
		Protanopia   = 2,
		Tritanopia   = 3,
		MAX          = 4
	};

	/**
	 * Enum Maine.ESubtitleVerbositySettings
	 */
	enum class ESubtitleVerbositySettings : uint8_t
	{
		DialogueOnly = 0,
		All          = 1,
		None         = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.ESubtitleSizeSettings
	 */
	enum class ESubtitleSizeSettings : uint8_t
	{
		Small  = 0,
		Medium = 1,
		Large  = 2,
		MAX    = 3
	};

	/**
	 * Enum Maine.EDamageSourceType
	 */
	enum class EDamageSourceType : uint8_t
	{
		None                = 0,
		EnemyDamage         = 1,
		EnvironmentalDamage = 2,
		Incapacitate        = 3,
		MAX                 = 4
	};

	/**
	 * Enum Maine.EBlockType
	 */
	enum class EBlockType : uint8_t
	{
		None         = 0,
		Blocked      = 1,
		PerfectBlock = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.EHitReactionType
	 */
	enum class EHitReactionType : uint8_t
	{
		None    = 0,
		Flinch  = 1,
		Stun    = 2,
		Stagger = 3,
		Blocked = 4,
		Capture = 5,
		MAX     = 6
	};

	/**
	 * Enum Maine.EInflictDamageStyle
	 */
	enum class EInflictDamageStyle : uint8_t
	{
		Chunk     = 0,
		OverTime  = 1,
		Reflected = 2,
		MAX       = 3
	};

	/**
	 * Enum Maine.EHealthState
	 */
	enum class EHealthState : uint8_t
	{
		Alive         = 0,
		Incapacitated = 1,
		Dead          = 2,
		MAX           = 3
	};

	/**
	 * Enum Maine.ECreatureActivityMode
	 */
	enum class ECreatureActivityMode : uint8_t
	{
		Normal   = 0,
		Sleeping = 1,
		MAX      = 2
	};

	/**
	 * Enum Maine.ECameraDisplayMode
	 */
	enum class ECameraDisplayMode : uint8_t
	{
		None        = 0,
		FirstPerson = 1,
		ThirdPerson = 2,
		MAX         = 3
	};

	/**
	 * Enum Maine.EBurrowState
	 */
	enum class EBurrowState : uint8_t
	{
		None        = 0,
		Unburrowed  = 1,
		Unburrowing = 2,
		Burrowed    = 3,
		Burrowing   = 4,
		MAX         = 5
	};

	/**
	 * Enum Maine.EBuildingState
	 */
	enum class EBuildingState : uint8_t
	{
		None               = 0,
		Built              = 1,
		BeingPlaced        = 2,
		BeingPlacedInvalid = 3,
		UnderConstruction  = 4,
		Cancelled          = 5,
		Destroyed          = 6,
		CollapseDestroy    = 7,
		MAX                = 8
	};

	/**
	 * Enum Maine.EBuildingGridSlot
	 */
	enum class EBuildingGridSlot : uint8_t
	{
		Cell        = 0,
		Floor       = 1,
		WallX       = 2,
		WallY       = 3,
		EdgeX       = 4,
		EdgeY       = 5,
		EdgeZ       = 6,
		WallDiagA   = 7,
		WallDiagB   = 8,
		EdgeA       = 9,
		EdgeB       = 10,
		EdgeCenterZ = 11,
		Count       = 12,
		MAX         = 13
	};

	/**
	 * Enum Maine.EEquipmentChangeFailureFromFullInventoryStimulus
	 */
	enum class EEquipmentChangeFailureFromFullInventoryStimulus : uint8_t
	{
		Unequip              = 0,
		EquipTwoHandedWeapon = 1,
		MAX                  = 2
	};

	/**
	 * Enum Maine.EFabricationState
	 */
	enum class EFabricationState : uint8_t
	{
		None        = 0,
		Ingredients = 1,
		Ready       = 2,
		Processing  = 3,
		Complete    = 4,
		Damaged     = 5,
		MAX         = 6
	};

	/**
	 * Enum Maine.ETrapTriggerState
	 */
	enum class ETrapTriggerState : uint8_t
	{
		None         = 0,
		Waiting      = 1,
		TriggerDelay = 2,
		Triggered    = 3,
		MAX          = 4
	};

	/**
	 * Enum Maine.ESizzleState
	 */
	enum class ESizzleState : uint8_t
	{
		NotSizzling = 0,
		Sizzling    = 1,
		MaxSizzle   = 2,
		MAX         = 3
	};

	/**
	 * Enum Maine.EAttackResolutionType
	 */
	enum class EAttackResolutionType : uint8_t
	{
		WontHit                           = 0,
		InvalidDamageTypeFlagRequirements = 1,
		WillHit                           = 2,
		Projectile                        = 3,
		AOE                               = 4,
		MAX                               = 5
	};

	/**
	 * Enum Maine.ECannotDamageReason
	 */
	enum class ECannotDamageReason : uint8_t
	{
		None               = 0,
		DamageTypeRequired = 1,
		TierRequired       = 2,
		Immunity           = 3,
		MAX                = 4
	};

	/**
	 * Enum Maine.ETamedState
	 */
	enum class ETamedState : uint8_t
	{
		None = 0,
		New  = 1,
		Tame = 2,
		MAX  = 3
	};

	/**
	 * Enum Maine.EGameInputType
	 */
	enum class EGameInputType : uint8_t
	{
		Mouse    = 0,
		Keyboard = 1,
		Gamepad  = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.EJoinSessionFailureResult
	 */
	enum class EJoinSessionFailureResult : uint8_t
	{
		Success                 = 0,
		SessionIsFull           = 1,
		SessionDoesNotExist     = 2,
		CouldNotRetrieveAddress = 3,
		AlreadyInSession        = 4,
		UnknownError            = 5,
		MAX                     = 6
	};

	/**
	 * Enum Maine.ERecipeUnlockSource
	 */
	enum class ERecipeUnlockSource : uint8_t
	{
		None          = 0,
		Resource      = 1,
		Research      = 2,
		ResearchLevel = 3,
		Purchase      = 4,
		CozinessLevel = 5,
		MAX           = 6
	};

	/**
	 * Enum Maine.ETerminalWidgetState
	 */
	enum class ETerminalWidgetState : uint8_t
	{
		Waiting     = 0,
		Start       = 1,
		Locked      = 2,
		Unlocked    = 3,
		LockedFlash = 4,
		None        = 5,
		MAX         = 6
	};

	/**
	 * Enum Maine.EHealthVisualState
	 */
	enum class EHealthVisualState : uint8_t
	{
		Pristine       = 0,
		BarelyDamaged  = 1,
		Damaged        = 2,
		HeavilyDamaged = 3,
		Destroyed      = 4,
		MAX            = 5
	};

	/**
	 * Enum Maine.EWaveAttackState
	 */
	enum class EWaveAttackState : uint8_t
	{
		None          = 0,
		Traveling     = 1,
		AttackingBase = 2,
		MAX           = 3
	};

	/**
	 * Enum Maine.ESaveGameType
	 */
	enum class ESaveGameType : uint8_t
	{
		Standard        = 0,
		Quicksave       = 1,
		Autosave        = 2,
		Logout          = 3,
		PostGame        = 4,
		PointOfNoReturn = 5,
		MAX             = 6
	};

	/**
	 * Enum Maine.ESaveGameResult
	 */
	enum class ESaveGameResult : uint8_t
	{
		Success                                    = 0,
		Restricted                                 = 1,
		FileWritingFailure                         = 2,
		UnableToSaveCompanionStates                = 3,
		PlayerNotAvailable                         = 4,
		AsyncSaveTask_Begun                        = 5,
		AsyncSaveTask_Failed_DeviceFull            = 6,
		AsyncSaveTask_FailedDeletingStaleTargetDir = 7,
		AsyncSaveTask_FailedCreatingTargetDir      = 8,
		AsyncSaveTask_StorageUninitialized         = 9,
		AsyncSaveTask_FailedStorageContainer       = 10,
		AsyncSaveTask_Suspended                    = 11,
		AsyncSaveTask_NoMetadata                   = 12,
		AsyncSaveTask_BufferAccessFailed           = 13,
		AsyncSaveTask_BufferMaximumReached         = 14,
		AsyncSaveTask_FailedPopulatingSaveFileMap  = 15,
		AsyncSaveTask_Delayed                      = 16,
		AsyncSaveTask_FailedScreenshotWaitTimeout  = 17,
		AsyncSaveTask_FailedSaveStateCompression   = 18,
		MAX                                        = 19
	};

	/**
	 * Enum Maine.EActiveUserChangeType
	 */
	enum class EActiveUserChangeType : uint8_t
	{
		Login            = 0,
		LoggingOut       = 1,
		Logout           = 2,
		SwitchingUser    = 3,
		ControllerChange = 4,
		MAX              = 5
	};

	/**
	 * Enum Maine.EWindowInputMode
	 */
	enum class EWindowInputMode : uint8_t
	{
		UI        = 0,
		GameAndUI = 1,
		Game      = 2,
		MAX       = 3
	};

	/**
	 * Enum Maine.EWindowPauseBehavior
	 */
	enum class EWindowPauseBehavior : uint8_t
	{
		DoNotPause             = 0,
		AlwaysPause            = 1,
		PauseBasedOnDifficulty = 2,
		Manual                 = 3,
		MAX                    = 4
	};

	/**
	 * Enum Maine.EControlMappingKeyType
	 */
	enum class EControlMappingKeyType : uint8_t
	{
		None   = 0,
		Action = 1,
		Axis   = 2,
		MAX    = 3
	};

	/**
	 * Enum Maine.EMapEntryType
	 */
	enum class EMapEntryType : uint8_t
	{
		None             = 0,
		Player           = 1,
		POILocation      = 2,
		TrailMarker      = 3,
		RespawnPoint     = 4,
		LabLocation      = 5,
		FieldStation     = 6,
		UserWaypoint     = 7,
		Backpack         = 8,
		Objective        = 9,
		ChipLocation     = 10,
		ResourceSurvey   = 11,
		ResourceWaypoint = 12,
		MAX              = 13
	};

	/**
	 * Enum Maine.ECooldownBeginConfig
	 */
	enum class ECooldownBeginConfig : uint8_t
	{
		AvailableBeginCooldown = 0,
		RandomBeginCooldown    = 1,
		MaxBeginCooldown       = 2,
		SetBeginCooldown       = 3,
		MAX                    = 4
	};

	/**
	 * Enum Maine.EAbilityCondition
	 */
	enum class EAbilityCondition : uint8_t
	{
		None                          = 0,
		CanHitDirectly                = 1,
		CanHitDirecltyMultipleWithAOE = 2,
		IsPreferedAbility             = 3,
		HasRecentlyPushedbackTarget   = 4,
		IsNotInBurrow                 = 5,
		IsInBurrow                    = 6,
		ScriptedBPCondition           = 7,
		MAX                           = 8
	};

	/**
	 * Enum Maine.EAbiltyTargetType
	 */
	enum class EAbiltyTargetType : uint8_t
	{
		Enemy    = 0,
		Self     = 1,
		Scripted = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.EAchievementStat
	 */
	enum class EAchievementStat : uint8_t
	{
		None                            = 0,
		UpgradesPurchased_Party         = 1,
		MutationsUnlocked_Personal      = 2,
		ResourcesAnalyzed_Party         = 3,
		Tier2EquipmentSetWorn_Personal  = 4,
		Tier3ItemCrafted_Personal       = 5,
		ColorThemesUnlocked_Party       = 6,
		MushroomBrickBuilding_Party     = 7,
		SitesDiscovered_Party           = 8,
		SatInChair_Personal             = 9,
		MilkMolarsSpent_Personal        = 10,
		BrainpowerLevel_Party           = 11,
		Tier3ItemFullyUpgraded_Personal = 12,
		Tier3ArrowCrafted_Personal      = 13,
		MAX                             = 14
	};

	/**
	 * Enum Maine.ETargetPriorityType
	 */
	enum class ETargetPriorityType : uint8_t
	{
		None         = 0,
		PartyMembers = 1,
		Buildings    = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.EBuildingTargettingType
	 */
	enum class EBuildingTargettingType : uint8_t
	{
		Default      = 0,
		AlwaysAttack = 1,
		Ignore       = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.EGeneratedLocationType
	 */
	enum class EGeneratedLocationType : uint8_t
	{
		NavMesh     = 0,
		WaterVolume = 1,
		MAX         = 2
	};

	/**
	 * Enum Maine.ESoundDetectionState
	 */
	enum class ESoundDetectionState : uint8_t
	{
		None          = 0,
		Investigating = 1,
		MAX           = 2
	};

	/**
	 * Enum Maine.EWaveState
	 */
	enum class EWaveState : uint8_t
	{
		None     = 0,
		SeekBase = 1,
		Scout    = 2,
		Complete = 3,
		MAX      = 4
	};

	/**
	 * Enum Maine.EInteractAnimType
	 */
	enum class EInteractAnimType : uint8_t
	{
		None          = 0,
		Use           = 1,
		Pickup        = 2,
		Eat           = 3,
		Drink         = 4,
		Sleep         = 5,
		Charge        = 6,
		Steal         = 7,
		Custom        = 8,
		Scoop         = 9,
		Deposit       = 10,
		Revive        = 11,
		Craft         = 12,
		DrinkItem     = 13,
		DrinkItemProp = 14,
		Throw         = 15,
		Scan          = 16,
		MAX           = 17
	};

	/**
	 * Enum Maine.EMovementSpeed
	 */
	enum class EMovementSpeed : uint8_t
	{
		Walk   = 0,
		Sprint = 1,
		MAX    = 2
	};

	/**
	 * Enum Maine.ECombatState
	 */
	enum class ECombatState : uint8_t
	{
		Attack = 0,
		Idle   = 1,
		MAX    = 2
	};

	/**
	 * Enum Maine.EAlertState
	 */
	enum class EAlertState : uint8_t
	{
		Unaware    = 0,
		Aware      = 1,
		Suspicious = 2,
		Danger     = 3,
		MAX        = 4
	};

	/**
	 * Enum Maine.EFaceTargetType
	 */
	enum class EFaceTargetType : uint8_t
	{
		None            = 0,
		FaceTarget      = 1,
		AlignWithTarget = 2,
		MAX             = 3
	};

	/**
	 * Enum Maine.EMoveToType
	 */
	enum class EMoveToType : uint8_t
	{
		None           = 0,
		MoveToActor    = 1,
		MoveToLocation = 2,
		MAX            = 3
	};

	/**
	 * Enum Maine.EDefaultBehaviorType
	 */
	enum class EDefaultBehaviorType : uint8_t
	{
		Wander  = 0,
		Explore = 1,
		MAX     = 2
	};

	/**
	 * Enum Maine.EBehaviorType
	 */
	enum class EBehaviorType : uint8_t
	{
		Disabled           = 0,
		Combat             = 1,
		Investigate        = 2,
		InvestigateSound   = 3,
		Interact           = 4,
		Patrol             = 5,
		Retreat            = 6,
		Wander             = 7,
		Wave               = 8,
		FollowBreadcrumbs  = 9,
		Explore            = 10,
		Flee               = 11,
		Emerge             = 12,
		TransitionMovement = 13,
		ActivePet          = 14,
		InactivePet        = 15,
		MAX                = 16
	};

	/**
	 * Enum Maine.ETargetType
	 */
	enum class ETargetType : uint8_t
	{
		Default         = 0,
		Character       = 1,
		PartyMember     = 2,
		Building        = 3,
		IgnoredBuilding = 4,
		MAX             = 5
	};

	/**
	 * Enum Maine.EHitFrameType
	 */
	enum class EHitFrameType : uint8_t
	{
		HitAtAllFrames = 0,
		OneHitByTarget = 1,
		MAX            = 2
	};

	/**
	 * Enum Maine.EAttackType
	 */
	enum class EAttackType : uint8_t
	{
		Primary   = 0,
		Alternate = 1,
		MAX       = 2
	};

	/**
	 * Enum Maine.EAttackCapsuleType
	 */
	enum class EAttackCapsuleType : uint8_t
	{
		Attack       = 0,
		PullForce    = 1,
		AttachSocket = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.EAttackStatusEffectApplyType
	 */
	enum class EAttackStatusEffectApplyType : uint8_t
	{
		DamageOnly = 0,
		Always     = 1,
		MAX        = 2
	};

	/**
	 * Enum Maine.EAttackHitType
	 */
	enum class EAttackHitType : uint8_t
	{
		Default    = 0,
		ActiveLoop = 1,
		AOE        = 2,
		Self       = 3,
		MAX        = 4
	};

	/**
	 * Enum Maine.ELODDebugDrawMode
	 */
	enum class ELODDebugDrawMode : uint8_t
	{
		None       = 0,
		All        = 1,
		ErrorsOnly = 2,
		MAX        = 3
	};

	/**
	 * Enum Maine.EPlatformToggleSetting
	 */
	enum class EPlatformToggleSetting : uint8_t
	{
		All         = 0,
		XBoxOnly    = 1,
		WindowsOnly = 2,
		MAX         = 3
	};

	/**
	 * Enum Maine.EBirdState
	 */
	enum class EBirdState : uint8_t
	{
		Despawned = 0,
		Arriving  = 1,
		Landed    = 2,
		Leaving   = 3,
		MAX       = 4
	};

	/**
	 * Enum Maine.EBirdSpotType
	 */
	enum class EBirdSpotType : uint8_t
	{
		Ground = 0,
		Perch  = 1,
		MAX    = 2
	};

	/**
	 * Enum Maine.EBreadcrumbType
	 */
	enum class EBreadcrumbType : uint8_t
	{
		AdvertisementForward = 0,
		MAX                  = 1
	};

	/**
	 * Enum Maine.EMoveToResult
	 */
	enum class EMoveToResult : uint8_t
	{
		Pending           = 0,
		Success           = 1,
		Blocked           = 2,
		UnexpectedFailure = 3,
		OffNavMesh        = 4,
		MAX               = 5
	};

	/**
	 * Enum Maine.EMoveToState
	 */
	enum class EMoveToState : uint8_t
	{
		None          = 0,
		MoveToTarget  = 1,
		MoveToNavMesh = 2,
		Failed        = 3,
		Success       = 4,
		MAX           = 5
	};

	/**
	 * Enum Maine.ERandomDestinationType
	 */
	enum class ERandomDestinationType : uint8_t
	{
		Wander      = 0,
		Explore     = 1,
		Investigate = 2,
		ConeWander  = 3,
		MAX         = 4
	};

	/**
	 * Enum Maine.ESetBuildingStateFlags
	 */
	enum class ESetBuildingStateFlags : uint8_t
	{
		None         = 0,
		Force        = 1,
		FromInstance = 2,
		SkipFlush    = 3,
		MAX          = 4
	};

	/**
	 * Enum Maine.EBuildingFireType
	 */
	enum class EBuildingFireType : uint8_t
	{
		None           = 0,
		RequiredForUse = 1,
		Toggle         = 2,
		MAX            = 3
	};

	/**
	 * Enum Maine.EBuildingGridSurfaceType
	 */
	enum class EBuildingGridSurfaceType : uint8_t
	{
		None    = 0,
		Invalid = 1,
		Water   = 2,
		Default = 3,
		MAX     = 4
	};

	/**
	 * Enum Maine.EBuildingBuoyantPlacementMode
	 */
	enum class EBuildingBuoyantPlacementMode : uint8_t
	{
		None    = 0,
		Surface = 1,
		Any     = 2,
		MAX     = 3
	};

	/**
	 * Enum Maine.EBuildingGroundEmbedMode
	 */
	enum class EBuildingGroundEmbedMode : uint8_t
	{
		None       = 0,
		Permitted  = 1,
		Encouraged = 2,
		MAX        = 3
	};

	/**
	 * Enum Maine.EBuildingTerrainConformMode
	 */
	enum class EBuildingTerrainConformMode : uint8_t
	{
		AlwaysLevel  = 0,
		MatchTerrain = 1,
		MAX          = 2
	};

	/**
	 * Enum Maine.EBuildingPlacementMode
	 */
	enum class EBuildingPlacementMode : uint8_t
	{
		None     = 0,
		Standard = 1,
		Wall     = 2,
		Grid     = 3,
		MAX      = 4
	};

	/**
	 * Enum Maine.EBuildingSlotType
	 */
	enum class EBuildingSlotType : uint8_t
	{
		None  = 0,
		Cell  = 1,
		Floor = 2,
		Wall  = 3,
		MAX   = 4
	};

	/**
	 * Enum Maine.EGetCellFlags
	 */
	enum class EGetCellFlags : uint8_t
	{
		None                           = 0,
		IncludeIntersections           = 1,
		IncludeSupporting              = 2,
		IncludeBlocking                = 3,
		IncludeSupportingIntersections = 4,
		IncludeBlockingIntersections   = 5,
		All                            = 6,
		MAX                            = 7
	};

	/**
	 * Enum Maine.EBuildingPlacementFlags
	 */
	enum class EBuildingPlacementFlags : uint8_t
	{
		None               = 0,
		AutoAddIngredients = 1,
		Deployable         = 2,
		Relocate           = 3,
		MAX                = 4
	};

	/**
	 * Enum Maine.EBuildingTraceSolidity
	 */
	enum class EBuildingTraceSolidity : uint8_t
	{
		Any       = 0,
		SolidOnly = 1,
		MAX       = 2
	};

	/**
	 * Enum Maine.EBuildingTraceType
	 */
	enum class EBuildingTraceType : uint8_t
	{
		Look  = 0,
		Floor = 1,
		MAX   = 2
	};

	/**
	 * Enum Maine.EAnimMovementState
	 */
	enum class EAnimMovementState : uint8_t
	{
		OnGround = 0,
		InAir    = 1,
		Climbing = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.EProxyPathingFailureEvent
	 */
	enum class EProxyPathingFailureEvent : uint8_t
	{
		None         = 0,
		ProjectStart = 1,
		ProjectEnd   = 2,
		FindPath     = 3,
		Obstructed   = 4,
		LocalMinimum = 5,
		MAX          = 6
	};

	/**
	 * Enum Maine.EContextMenuType
	 */
	enum class EContextMenuType : uint8_t
	{
		INVALID   = 0,
		Item      = 1,
		Canteen   = 2,
		Mountable = 3,
		MAX       = 4
	};

	/**
	 * Enum Maine.EControlSet
	 */
	enum class EControlSet : uint8_t
	{
		Mouse   = 0,
		Gamepad = 1,
		MAX     = 2
	};

	/**
	 * Enum Maine.EConversationPlayPriority
	 */
	enum class EConversationPlayPriority : uint8_t
	{
		High    = 0,
		Medium  = 1,
		Low     = 2,
		VeryLow = 3,
		MAX     = 4
	};

	/**
	 * Enum Maine.ECreditsDisplayType
	 */
	enum class ECreditsDisplayType : uint8_t
	{
		None  = 0,
		Text  = 1,
		Image = 2,
		MAX   = 3
	};

	/**
	 * Enum Maine.ECustomPropertyValueFormat
	 */
	enum class ECustomPropertyValueFormat : uint8_t
	{
		PlainNumber = 0,
		Percent     = 1,
		Degrees     = 2,
		Seconds     = 3,
		MAX         = 4
	};

	/**
	 * Enum Maine.ECustomPropertyInputType
	 */
	enum class ECustomPropertyInputType : uint8_t
	{
		Slider   = 0,
		Toggle   = 1,
		Dropdown = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.ECutsceneTargetType
	 */
	enum class ECutsceneTargetType : uint8_t
	{
		None          = 0,
		AllPlayers    = 1,
		TriggerPlayer = 2,
		MAX           = 3
	};

	/**
	 * Enum Maine.EDamageInfoFlags
	 */
	enum class EDamageInfoFlags : uint8_t
	{
		None                  = 0,
		KillingBlow           = 1,
		CriticalHit           = 2,
		DamageColliderBonus   = 3,
		DamageColliderPenalty = 4,
		MAX                   = 5
	};

	/**
	 * Enum Maine.EHitMotionType
	 */
	enum class EHitMotionType : uint8_t
	{
		None        = 0,
		RightToLeft = 1,
		LeftToRight = 2,
		FrontToBack = 3,
		BackToFront = 4,
		MAX         = 5
	};

	/**
	 * Enum Maine.EDamageEventType
	 */
	enum class EDamageEventType : uint8_t
	{
		Invalid = 0,
		Point   = 1,
		Radial  = 2,
		Generic = 3,
		MAX     = 4
	};

	/**
	 * Enum Maine.EPartyDistanceType
	 */
	enum class EPartyDistanceType : uint8_t
	{
		Minimum = 0,
		Maximum = 1,
		MAX     = 2
	};

	/**
	 * Enum Maine.EItemVisualsPriority
	 */
	enum class EItemVisualsPriority : uint8_t
	{
		Base   = 0,
		Glider = 1,
		MAX    = 2
	};

	/**
	 * Enum Maine.EDamageEventComponentType
	 */
	enum class EDamageEventComponentType : uint8_t
	{
		AllDamageTaken            = 0,
		ColliderConfigDamageTaken = 1,
		MAX                       = 2
	};

	/**
	 * Enum Maine.EFocusRerouterChildIterationStyle
	 */
	enum class EFocusRerouterChildIterationStyle : uint8_t
	{
		Forward   = 0,
		Backwards = 1,
		MAX       = 2
	};

	/**
	 * Enum Maine.EFoliageSwapFlags
	 */
	enum class EFoliageSwapFlags : uint8_t
	{
		None           = 0,
		LocalOperation = 1,
		Immediate      = 2,
		FromDamage     = 3,
		FromInteract   = 4,
		MAX            = 5
	};

	/**
	 * Enum Maine.EFoliageSwapLevel
	 */
	enum class EFoliageSwapLevel : uint8_t
	{
		Always     = 0,
		Small      = 1,
		Player     = 2,
		Large      = 3,
		SuperLarge = 4,
		Never      = 5,
		MAX        = 6
	};

	/**
	 * Enum Maine.EFoliageOperationFlags
	 */
	enum class EFoliageOperationFlags : uint8_t
	{
		None              = 0,
		LocalOperation    = 1,
		Animate           = 2,
		UnreplicatedState = 3,
		SkipMarkNavDirty  = 4,
		MAX               = 5
	};

	/**
	 * Enum Maine.EFrankenlineAxis
	 */
	enum class EFrankenlineAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		MAX = 2
	};

	/**
	 * Enum Maine.EInteractHoldHandleType
	 */
	enum class EInteractHoldHandleType : uint8_t
	{
		None                  = 0,
		HandleHoldInteract    = 1,
		HandleNonHoldInteract = 2,
		Interrupted           = 3,
		MAX                   = 4
	};

	/**
	 * Enum Maine.EPlayerDeathBehavior
	 */
	enum class EPlayerDeathBehavior : uint8_t
	{
		DropItemsOnDeath    = 0,
		KeepItemsOnDeath    = 1,
		DestroyItemsOnDeath = 2,
		MAX                 = 3
	};

	/**
	 * Enum Maine.EDetachSplineReason
	 */
	enum class EDetachSplineReason : uint8_t
	{
		None       = 0,
		Landed     = 1,
		Ejecting   = 2,
		KnockedOff = 3,
		ToppedOut  = 4,
		MAX        = 5
	};

	/**
	 * Enum Maine.EChatterScienceSizeType
	 */
	enum class EChatterScienceSizeType : uint8_t
	{
		Small = 0,
		Large = 1,
		MAX   = 2
	};

	/**
	 * Enum Maine.EChatterConsumableType
	 */
	enum class EChatterConsumableType : uint8_t
	{
		None         = 0,
		GenericFood  = 1,
		GenericWater = 2,
		DirtyWater   = 3,
		Juice        = 4,
		CookedMeat   = 5,
		SpoiledMeat  = 6,
		Mushroom     = 7,
		Smoothie     = 8,
		RawMeat      = 9,
		DriedMeat    = 10,
		MAX          = 11
	};

	/**
	 * Enum Maine.EChatterItemType
	 */
	enum class EChatterItemType : uint8_t
	{
		None    = 0,
		Generic = 1,
		Axe     = 2,
		Hammer  = 3,
		Spear   = 4,
		Bow     = 5,
		MAX     = 6
	};

	/**
	 * Enum Maine.EGameCombatEndReason
	 */
	enum class EGameCombatEndReason : uint8_t
	{
		Victory = 0,
		Flee    = 1,
		Death   = 2,
		MAX     = 3
	};

	/**
	 * Enum Maine.EGameCombatState
	 */
	enum class EGameCombatState : uint8_t
	{
		OutOfCombat = 0,
		InCombat    = 1,
		MAX         = 2
	};

	/**
	 * Enum Maine.ESeverity
	 */
	enum class ESeverity : uint8_t
	{
		Medium  = 0,
		Extreme = 1,
		MAX     = 2
	};

	/**
	 * Enum Maine.ECharacterAudioType
	 */
	enum class ECharacterAudioType : uint8_t
	{
		Character = 0,
		Weapon    = 1,
		Armor     = 2,
		MAX       = 3
	};

	/**
	 * Enum Maine.EGameDifficulty
	 */
	enum class EGameDifficulty : uint8_t
	{
		Relaxed = 0,
		Normal  = 1,
		Hard    = 2,
		MAX     = 3
	};

	/**
	 * Enum Maine.EGameMode
	 */
	enum class EGameMode : uint8_t
	{
		None              = 0,
		Normal            = 1,
		Relaxed           = 2,
		Hard              = 3,
		Creative          = 4,
		CreativeCreatures = 5,
		Custom            = 6,
		MAX               = 7
	};

	/**
	 * Enum Maine.EPlayerCharacterIdentity
	 */
	enum class EPlayerCharacterIdentity : uint8_t
	{
		Max     = 0,
		Hoops   = 1,
		Pete    = 2,
		Willow  = 3,
		MrBones = 4,
		Count   = 5,
		None    = 6,
		Random  = 7
	};

	/**
	 * Enum Maine.EGamePackageTypeFlags
	 */
	enum class EGamePackageTypeFlags : uint8_t
	{
		Default    = 0,
		Flight     = 1,
		Demo       = 2,
		PublicTest = 3,
		MAX        = 4
	};

	/**
	 * Enum Maine.EGamePackageType
	 */
	enum class EGamePackageType : uint8_t
	{
		Default    = 0,
		Flight     = 1,
		Demo       = 2,
		PublicTest = 3,
		MAX        = 4
	};

	/**
	 * Enum Maine.EGameContentType
	 */
	enum class EGameContentType : uint8_t
	{
		Development = 0,
		Release     = 1,
		MAX         = 2
	};

	/**
	 * Enum Maine.EBuildConfigationType
	 */
	enum class EBuildConfigationType : uint8_t
	{
		Debug       = 0,
		Development = 1,
		Test        = 2,
		Shipping    = 3,
		MAX         = 4
	};

	/**
	 * Enum Maine.EChatBoxMessageType
	 */
	enum class EChatBoxMessageType : uint8_t
	{
		Other = 0,
		Chat  = 1,
		MAX   = 2
	};

	/**
	 * Enum Maine.EGardenItemType
	 */
	enum class EGardenItemType : uint8_t
	{
		None     = 0,
		Catalyst = 1,
		Modifier = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.EGardenState
	 */
	enum class EGardenState : uint8_t
	{
		Idle         = 0,
		InProduction = 1,
		Complete     = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.EControlConflictContext
	 */
	enum class EControlConflictContext : uint8_t
	{
		None                    = 0,
		InGameGeneral           = 1,
		InGameBuildingPlacement = 2,
		InGameInteract          = 3,
		InGameHotbar            = 4,
		MenuGlobal              = 5,
		MenuGeneral             = 6,
		InventoryMenu           = 7,
		CraftingMenu            = 8,
		MapMenu                 = 9,
		YardexMenu              = 10,
		RadialMenuBuilding      = 11,
		RadialMenuEmotes        = 12,
		RadialMenuQuickchat     = 13,
		RadialMenuExecutables   = 14,
		RadialMenuHotbar        = 15,
		RadialMenuAmmo          = 16,
		Container               = 17,
		Analyzer                = 18,
		Surveyor                = 19,
		PlayerList              = 20,
		SaveLoadMenu            = 21,
		InGameGrounded          = 22,
		InGameAerial            = 23,
		InGameSwimming          = 24,
		InGameUsesAmmo          = 25,
		InGameBlock             = 26,
		InGameHauling           = 27,
		PhotoMode               = 28,
		MAX                     = 29
	};

	/**
	 * Enum Maine.EBindableControlCategory
	 */
	enum class EBindableControlCategory : uint8_t
	{
		Default           = 0,
		Hotpouch          = 1,
		BuildingPlacement = 2,
		UI                = 3,
		PhotoMode         = 4,
		MAX               = 5
	};

	/**
	 * Enum Maine.EFoliageInstanceState
	 */
	enum class EFoliageInstanceState : uint8_t
	{
		Added   = 0,
		Removed = 1,
		MAX     = 2
	};

	/**
	 * Enum Maine.EKeyItemVisibility
	 */
	enum class EKeyItemVisibility : uint8_t
	{
		AlwaysVisible   = 0,
		HideUntilActive = 1,
		HideIndividuals = 2,
		AlwaysHidden    = 3,
		MAX             = 4
	};

	/**
	 * Enum Maine.EGoapActionResult
	 */
	enum class EGoapActionResult : uint8_t
	{
		Failed    = 0,
		Succeeded = 1,
		MAX       = 2
	};

	/**
	 * Enum Maine.EVitalAdjustmentVisibility
	 */
	enum class EVitalAdjustmentVisibility : uint8_t
	{
		Normal = 0,
		Fake   = 1,
		Hidden = 2,
		MAX    = 3
	};

	/**
	 * Enum Maine.EHazardEffectApplyType
	 */
	enum class EHazardEffectApplyType : uint8_t
	{
		Overlap  = 0,
		Interval = 1,
		MAX      = 2
	};

	/**
	 * Enum Maine.EPlayEffectType
	 */
	enum class EPlayEffectType : uint8_t
	{
		None          = 0,
		All           = 1,
		SoundOnly     = 2,
		ParticlesOnly = 3,
		MAX           = 4
	};

	/**
	 * Enum Maine.EIncapacitationSetting
	 */
	enum class EIncapacitationSetting : uint8_t
	{
		None            = 0,
		Always          = 1,
		MultiplayerOnly = 2,
		MAX             = 3
	};

	/**
	 * Enum Maine.EHeatHazardCondition
	 */
	enum class EHeatHazardCondition : uint8_t
	{
		InSunlight      = 0,
		OnHotSurface    = 1,
		HotTimeOfDay    = 2,
		NotInWater      = 3,
		InHeatVolume    = 4,
		NearHeatEmitter = 5,
		IsSwimming      = 6,
		MAX             = 7
	};

	/**
	 * Enum Maine.EHotBarQuickSlotType
	 */
	enum class EHotBarQuickSlotType : uint8_t
	{
		NONE              = 0,
		SPECIFIC_ITEM     = 1,
		ANY_MELEE_WEAPON  = 2,
		ANY_RANGED_WEAPON = 3,
		ANY_CONSUMABLE    = 4,
		ANY_HEALING       = 5,
		ANY_THROWABLE     = 6,
		ANY_LIGHT         = 7,
		ANY_BOMB          = 8,
		ANY_WEAPON        = 9,
		ANY               = 10,
		MAX               = 11
	};

	/**
	 * Enum Maine.EHUDMarkerType
	 */
	enum class EHUDMarkerType : uint8_t
	{
		None                  = 0,
		InProgressBuilding    = 1,
		RestingSpot           = 2,
		MarkerBuilding        = 3,
		MissionObjective      = 4,
		StarterLocation       = 5,
		Player                = 6,
		DroppedBackpack       = 7,
		DroppedItem           = 8,
		RadarLocation         = 9,
		Storage               = 10,
		ObjectiveItem         = 11,
		TheftInProgress       = 12,
		TempModelItem         = 13,
		NeedsRepairBuilding   = 14,
		Tutorial              = 15,
		TechChip              = 16,
		UnderAttack           = 17,
		Fragile               = 18,
		ActivePet             = 19,
		PlayerWaypoint        = 20,
		BuildingPowerSource   = 21,
		BuildingPowerReceiver = 22,
		BaseUnderAttack       = 23,
		ResourceWaypoint      = 24,
		MAX                   = 25
	};

	/**
	 * Enum Maine.EInteractionPriority
	 */
	enum class EInteractionPriority : uint8_t
	{
		Default   = 0,
		Creatures = 1,
		Items     = 2,
		Buildings = 3,
		Foliage   = 4,
		Water     = 5,
		Lowest    = 6,
		MAX       = 7
	};

	/**
	 * Enum Maine.EInteractionChannel
	 */
	enum class EInteractionChannel : uint8_t
	{
		Primary      = 0,
		Primary_Hold = 1,
		Cancel       = 2,
		Cancel_Hold  = 3,
		LightFire    = 4,
		Drop         = 5,
		Relocate     = 6,
		Customize    = 7,
		Pick         = 8,
		Count        = 9,
		MAX          = 10
	};

	/**
	 * Enum Maine.EInteractionType
	 */
	enum class EInteractionType : uint8_t
	{
		None                   = 0,
		Pickup                 = 1,
		Eat                    = 2,
		Drink                  = 3,
		Cook                   = 4,
		Rest                   = 5,
		PlaceBuilding          = 6,
		AddIngredient          = 7,
		LightFire              = 8,
		InventoryFull          = 9,
		Drying                 = 10,
		InvalidPlayer          = 11,
		Equip                  = 12,
		Cancel                 = 13,
		UnableToLightFire      = 14,
		Storage                = 15,
		Conversation           = 16,
		Revive                 = 17,
		MissingIngredients     = 18,
		Busy                   = 19,
		StartZiplineConnection = 20,
		ZiplineZip             = 21,
		Mount                  = 22,
		CannotHaul             = 23,
		Climb                  = 24,
		Pet                    = 25,
		PetHome                = 26,
		ConfigureSign          = 27,
		SpinningWheel          = 28,
		MAX                    = 29
	};

	/**
	 * Enum Maine.EInteractHighlightLevel
	 */
	enum class EInteractHighlightLevel : uint8_t
	{
		None                 = 0,
		ItemsOnly            = 1,
		RealInteractableOnly = 2,
		All                  = 3,
		MAX                  = 4
	};

	/**
	 * Enum Maine.EInteractionState
	 */
	enum class EInteractionState : uint8_t
	{
		Hidden   = 0,
		Disabled = 1,
		Enabled  = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.EItemDestroyReason
	 */
	enum class EItemDestroyReason : uint8_t
	{
		Error      = 0,
		Power      = 1,
		Durability = 2,
		Hatched    = 3,
		MAX        = 4
	};

	/**
	 * Enum Maine.EItemSpawnType
	 */
	enum class EItemSpawnType : uint8_t
	{
		World      = 0,
		Equippable = 1,
		Cooking    = 2,
		Drying     = 3,
		Processing = 4,
		MAX        = 5
	};

	/**
	 * Enum Maine.EThrowAttackType
	 */
	enum class EThrowAttackType : uint8_t
	{
		None   = 0,
		Impact = 1,
		Time   = 2,
		MAX    = 3
	};

	/**
	 * Enum Maine.ESpoilState
	 */
	enum class ESpoilState : uint8_t
	{
		None      = 0,
		Unspoiled = 1,
		Spoiled   = 2,
		MAX       = 3
	};

	/**
	 * Enum Maine.EGlidingStyle
	 */
	enum class EGlidingStyle : uint8_t
	{
		None          = 0,
		FallingSlowly = 1,
		Gliding       = 2,
		MAX           = 3
	};

	/**
	 * Enum Maine.EGardenModifierType
	 */
	enum class EGardenModifierType : uint8_t
	{
		None            = 0,
		Duration        = 1,
		RareSpawnChance = 2,
		MAX             = 3
	};

	/**
	 * Enum Maine.ESocketName
	 */
	enum class ESocketName : uint8_t
	{
		None            = 0,
		RightHand       = 1,
		LeftHand        = 2,
		Grass           = 3,
		Log             = 4,
		ShoulderFar     = 5,
		Stack           = 6,
		HaulingFallback = 7,
		MAX             = 8
	};

	/**
	 * Enum Maine.EEquipmentSlot
	 */
	enum class EEquipmentSlot : uint8_t
	{
		None     = 0,
		MainHand = 1,
		OffHand  = 2,
		Head     = 3,
		Chest    = 4,
		Arms     = 5,
		Legs     = 6,
		Glider   = 7,
		MAX      = 8
	};

	/**
	 * Enum Maine.EItemType
	 */
	enum class EItemType : uint8_t
	{
		General         = 0,
		PersonalKeyItem = 1,
		PartyKeyItem    = 2,
		MAX             = 3
	};

	/**
	 * Enum Maine.EItemProcessingState
	 */
	enum class EItemProcessingState : uint8_t
	{
		Empty      = 0,
		NotStarted = 1,
		Working    = 2,
		Finished   = 3,
		MAX        = 4
	};

	/**
	 * Enum Maine.ESpawnProximityBehavior
	 */
	enum class ESpawnProximityBehavior : uint8_t
	{
		Always     = 0,
		IfNoneNear = 1,
		IfAnyNear  = 2,
		MAX        = 3
	};

	/**
	 * Enum Maine.ESpawnIntervalBehavior
	 */
	enum class ESpawnIntervalBehavior : uint8_t
	{
		None             = 0,
		OnSpecificHour   = 1,
		OnElapsedHours   = 2,
		OnRest           = 3,
		OnApproach       = 4,
		OnStart          = 5,
		OnConditionalMet = 6,
		MAX              = 7
	};

	/**
	 * Enum Maine.EItemSpawnEventType
	 */
	enum class EItemSpawnEventType : uint8_t
	{
		Spawn   = 0,
		Despawn = 1,
		Respawn = 2,
		MAX     = 3
	};

	/**
	 * Enum Maine.ETextDisplayType
	 */
	enum class ETextDisplayType : uint8_t
	{
		Percentage                  = 0,
		NormalizedPercentage        = 1,
		NormalizedDisplayPercentage = 2,
		IntegerPercentage           = 3,
		RawInteger                  = 4,
		RawFloat                    = 5,
		MAX                         = 6
	};

	/**
	 * Enum Maine.ELODActorFilterType
	 */
	enum class ELODActorFilterType : uint8_t
	{
		AllActors   = 0,
		FullActors  = 1,
		ProxyActors = 2,
		MAX         = 3
	};

	/**
	 * Enum Maine.ELootSpawnType
	 */
	enum class ELootSpawnType : uint8_t
	{
		SpawnOnTrigger  = 0,
		SpawnOnHit      = 1,
		SpawnOnDeath    = 2,
		SpawnOnInteract = 3,
		MAX             = 4
	};

	/**
	 * Enum Maine.ELootLocationType
	 */
	enum class ELootLocationType : uint8_t
	{
		WorldDrop = 0,
		Inventory = 1,
		MAX       = 2
	};

	/**
	 * Enum Maine.ELootType
	 */
	enum class ELootType : uint8_t
	{
		Item      = 0,
		Science   = 1,
		Equipment = 2,
		Actor     = 3,
		Inventory = 4,
		MAX       = 5
	};

	/**
	 * Enum Maine.EMaineCustomMovementMode
	 */
	enum class EMaineCustomMovementMode : uint8_t
	{
		CUSTMOVE_None        = 0,
		CUSTMOVE_SplineClimb = 1,
		CUSTMOVE_Glide       = 2,
		CUSTMOVE_Zipline     = 3,
		CUSTMOVE_Perched     = 4,
		CUSTMOVE_MAX         = 5
	};

	/**
	 * Enum Maine.EClimbSplineRotationType
	 */
	enum class EClimbSplineRotationType : uint8_t
	{
		StandOnSpline = 0,
		FaceSpline    = 1,
		MAX           = 2
	};

	/**
	 * Enum Maine.EFootstepType
	 */
	enum class EFootstepType : uint8_t
	{
		None    = 0,
		Default = 1,
		Sprint  = 2,
		Landed  = 3,
		Jump    = 4,
		MAX     = 5
	};

	/**
	 * Enum Maine.EVoiceChatActivation
	 */
	enum class EVoiceChatActivation : uint8_t
	{
		Never      = 0,
		PushToTalk = 1,
		OnActivity = 2,
		MAX        = 3
	};

	/**
	 * Enum Maine.EScalabilitySettings
	 */
	enum class EScalabilitySettings : uint8_t
	{
		Low    = 0,
		Medium = 1,
		High   = 2,
		Epic   = 3,
		MAX    = 4
	};

	/**
	 * Enum Maine.EFPSLimit
	 */
	enum class EFPSLimit : uint8_t
	{
		Thirty            = 0,
		Sixty             = 1,
		HundredTwenty     = 2,
		HundredFourtyFour = 3,
		HundredSixty      = 4,
		HundredSixtyFive  = 5,
		HundredEighty     = 6,
		TwoHundred        = 7,
		TwoHundredFourty  = 8,
		Unlimited         = 9,
		MAX               = 10
	};

	/**
	 * Enum Maine.ELanguageSetting
	 */
	enum class ELanguageSetting : uint8_t
	{
		English              = 0,
		French               = 1,
		German               = 2,
		Spanish              = 3,
		Italian              = 4,
		Chinese              = 5,
		BrazillianPortuguese = 6,
		Russian              = 7,
		Polish               = 8,
		Korean               = 9,
		Japanese             = 10,
		Turkish              = 11,
		Thai                 = 12,
		Arabic               = 13,
		MAX                  = 14
	};

	/**
	 * Enum Maine.ETriggerType
	 */
	enum class ETriggerType : uint8_t
	{
		BeginOverlap = 0,
		EndOverlap   = 1,
		PartyOverlap = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.EMainMenuStateTransitionType
	 */
	enum class EMainMenuStateTransitionType : uint8_t
	{
		Forwards  = 0,
		Backwards = 1,
		MAX       = 2
	};

	/**
	 * Enum Maine.EMainMenuState
	 */
	enum class EMainMenuState : uint8_t
	{
		None                                = 0,
		BeginShowMainMenuState              = 1,
		PressAnyKey                         = 2,
		LoggingIn                           = 3,
		ConvertingOldSaveFiles              = 4,
		MainMenu                            = 5,
		SinglePlayerSelect                  = 6,
		WaitingForMultiplayerPrivilegeCheck = 7,
		MultiPlayerHostJoinSelect           = 8,
		MultiPlayerNewContinueSelect        = 9,
		WaitForHostingGame                  = 10,
		Options                             = 11,
		Credits                             = 12,
		Quitting                            = 13,
		LoadGame                            = 14,
		ServerBroswer                       = 15,
		GameLobby                           = 16,
		Complete                            = 17,
		MAX                                 = 18
	};

	/**
	 * Enum Maine.EPuzzlePieceZone
	 */
	enum class EPuzzlePieceZone : uint8_t
	{
		Pond       = 0,
		Table      = 1,
		Stump      = 2,
		SouthGrass = 3,
		NorthGrass = 4,
		Sandbox    = 5,
		Hedges     = 6,
		OakTree    = 7,
		Flowerbed  = 8,
		TheHaze    = 9,
		COUNT      = 10,
		MAX        = 11
	};

	/**
	 * Enum Maine.EMaterialSwapLayer
	 */
	enum class EMaterialSwapLayer : uint8_t
	{
		Asset            = 0,
		Component        = 1,
		Dynamic          = 2,
		PhobiaController = 3,
		Building         = 4,
		MAX              = 5
	};

	/**
	 * Enum Maine.EParticleBlockingVolumeType
	 */
	enum class EParticleBlockingVolumeType : uint8_t
	{
		SphereFade = 0,
		BoxKill    = 1,
		MAX        = 2
	};

	/**
	 * Enum Maine.EPlayerStatType
	 */
	enum class EPlayerStatType : uint8_t
	{
		None            = 0,
		Kill            = 1,
		CraftItem       = 2,
		PickupItem      = 3,
		Revive          = 4,
		Discover        = 5,
		Stamina         = 6,
		BasketballShot  = 7,
		TamePet         = 8,
		ProcessItem     = 9,
		ZiplineDistance = 10,
		UseItem         = 11,
		Block           = 12,
		Scripted        = 13,
		TakePhoto       = 14,
		RangedAttack    = 15,
		MAX             = 16
	};

	/**
	 * Enum Maine.EPlayerUpgradeType
	 */
	enum class EPlayerUpgradeType : uint8_t
	{
		None         = 0,
		StatusEffect = 1,
		Perk         = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.EBuildingPowerState
	 */
	enum class EBuildingPowerState : uint8_t
	{
		BuildingPowerFeatureDisabled = 0,
		Off                          = 1,
		LowPower                     = 2,
		FullPower                    = 3,
		MAX                          = 4
	};

	/**
	 * Enum Maine.EQuadAudioSatelliteType
	 */
	enum class EQuadAudioSatelliteType : uint8_t
	{
		FrontLeft  = 0,
		FrontRight = 1,
		BackLeft   = 2,
		BackRight  = 3,
		MAX        = 4
	};

	/**
	 * Enum Maine.EQuestObjectiveType
	 */
	enum class EQuestObjectiveType : uint8_t
	{
		Standard          = 0,
		Recipe            = 1,
		Item              = 2,
		WaterDropTutorial = 3,
		MAX               = 4
	};

	/**
	 * Enum Maine.EStunState
	 */
	enum class EStunState : uint8_t
	{
		None         = 0,
		Stunned      = 1,
		StunCooldown = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.ERecipeVisibility
	 */
	enum class ERecipeVisibility : uint8_t
	{
		Visible        = 0,
		Hidden         = 1,
		RecipeRequired = 2,
		MAX            = 3
	};

	/**
	 * Enum Maine.ERelevanceType
	 */
	enum class ERelevanceType : uint8_t
	{
		Relevant            = 0,
		FarAway             = 1,
		NotRendering        = 2,
		FarAwayNotRendering = 3,
		NumBits             = 4,
		MAX                 = 5
	};

	/**
	 * Enum Maine.ERespawnableMeshPlacementType
	 */
	enum class ERespawnableMeshPlacementType : uint8_t
	{
		None           = 0,
		FoliageSockets = 1,
		MAX            = 2
	};

	/**
	 * Enum Maine.ESaveGamePlayerCountType
	 */
	enum class ESaveGamePlayerCountType : uint8_t
	{
		Unknown      = 0,
		SinglePlayer = 1,
		MultiPlayer  = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.ESaveGameHeaderDataValidity
	 */
	enum class ESaveGameHeaderDataValidity : uint8_t
	{
		Valid                             = 0,
		InvalidOldSaveVersion             = 1,
		InvalidDifferentPackageType       = 2,
		InvalidRequiresDevelopmentContent = 3,
		InvalidRequiresNewerBuild         = 4,
		MAX                               = 5
	};

	/**
	 * Enum Maine.EDeleteGameResult
	 */
	enum class EDeleteGameResult : uint8_t
	{
		Success                      = 0,
		Restricted                   = 1,
		Failed                       = 2,
		SaveOfGivenNameNotFound      = 3,
		FailedDeletingStaleTargetDir = 4,
		MAX                          = 5
	};

	/**
	 * Enum Maine.ELoadGameResult
	 */
	enum class ELoadGameResult : uint8_t
	{
		Success                       = 0,
		Restricted                    = 1,
		MissingFile                   = 2,
		FileReadingFailure            = 3,
		CorruptionDetected            = 4,
		UnableToRestorePlayerState    = 5,
		UnableToRestoreCompanionState = 6,
		NoCompanionManager            = 7,
		ClassDependencyLoadFailure    = 8,
		SpawnFailure                  = 9,
		InvalidQuicksaveIndex         = 10,
		InvalidAutosaveIndex          = 11,
		SaveOfGivenNameNotFound       = 12,
		PlatformLoadUnsuccessful      = 13,
		StorageUninitialized          = 14,
		SaveVersionUnsupported        = 15,
		SaveFromNewerBuild            = 16,
		MAX                           = 17
	};

	/**
	 * Enum Maine.EPlayerRestoreResult
	 */
	enum class EPlayerRestoreResult : uint8_t
	{
		PRR_RestoredNothing              = 0,
		PRR_RestoredPlayerStateOnly      = 1,
		PRR_RestoredPlayerAndPlayerState = 2,
		PRR_MAX                          = 3
	};

	/**
	 * Enum Maine.ESaveLoadRestriction
	 */
	enum class ESaveLoadRestriction : uint8_t
	{
		NoCurrentRestriction        = 0,
		NoPlayerPresent             = 1,
		CinematicInProgress         = 2,
		PlayerInConversation        = 3,
		PlayerInCombat              = 4,
		LevelTraveling              = 5,
		ModalInterface              = 6,
		PlayerIsIncapacitated       = 7,
		SaveInProgress              = 8,
		LoadInProgress              = 9,
		ManualRestriction           = 10,
		Unsupported                 = 11,
		DeviceFull                  = 12,
		PlatformSaveSystemNull      = 13,
		PlatformStorageInaccessible = 14,
		PlayerFalling               = 15,
		PlayerInActiveHazard        = 16,
		PlayerInterpolatingToSpline = 17,
		PlayerDeadOrDying           = 18,
		UserLoggingOut              = 19,
		UIWindowActive              = 20,
		WaveActive                  = 21,
		MAX                         = 22
	};

	/**
	 * Enum Maine.ESaveLoadMenuMode
	 */
	enum class ESaveLoadMenuMode : uint8_t
	{
		SaveMode = 0,
		LoadMode = 1,
		MAX      = 2
	};

	/**
	 * Enum Maine.EScreenEffectType
	 */
	enum class EScreenEffectType : uint8_t
	{
		Instant = 0,
		InOut   = 1,
		MAX     = 2
	};

	/**
	 * Enum Maine.ESignUnlockType
	 */
	enum class ESignUnlockType : uint8_t
	{
		Default        = 0,
		RequiresUnlock = 1,
		MAX            = 2
	};

	/**
	 * Enum Maine.ESpawnedItemEmbedType
	 */
	enum class ESpawnedItemEmbedType : uint8_t
	{
		None  = 0,
		Embed = 1,
		Stick = 2,
		MAX   = 3
	};

	/**
	 * Enum Maine.EStatusEffectClearFlags
	 */
	enum class EStatusEffectClearFlags : uint8_t
	{
		DealDamage  = 0,
		TakeDamage  = 1,
		CombatStart = 2,
		CombatEnd   = 3,
		Rest        = 4,
		MAX         = 5
	};

	/**
	 * Enum Maine.EStatusEffectApplyType
	 */
	enum class EStatusEffectApplyType : uint8_t
	{
		None     = 0,
		OverTime = 1,
		Instant  = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.EStatusEffectDurationType
	 */
	enum class EStatusEffectDurationType : uint8_t
	{
		Duration = 0,
		Infinite = 1,
		Instant  = 2,
		DayNight = 3,
		MAX      = 4
	};

	/**
	 * Enum Maine.EStatusEffectValueType
	 */
	enum class EStatusEffectValueType : uint8_t
	{
		None     = 0,
		Add      = 1,
		Multiply = 2,
		MAX      = 3
	};

	/**
	 * Enum Maine.EStatusEffectType
	 */
	enum class EStatusEffectType : uint8_t
	{
		None                            = 0,
		MoveSpeed                       = 1,
		Immunity                        = 2,
		MaxHealth                       = 3,
		MaxStamina                      = 4,
		MaxStun                         = 5,
		StaminaSprint                   = 6,
		StaminaAttack                   = 7,
		SwimSpeed                       = 8,
		MaxHauling                      = 9,
		FallDamage                      = 10,
		WaterBreathing                  = 11,
		TeamChange                      = 12,
		HungerRate                      = 13,
		ThirstRate                      = 14,
		StaminaRegenRate                = 15,
		DisableMovement                 = 16,
		SpawnActor                      = 17,
		WaterBreathingRate              = 18,
		AttackDamage                    = 19,
		Health                          = 20,
		Stamina                         = 21,
		Food                            = 22,
		Water                           = 23,
		DamageReduction                 = 24,
		CriticalHitChance               = 25,
		ReviveTime                      = 26,
		ApplyAttackEffect               = 27,
		AllowAirbornStaminaRegen        = 28,
		PerfectBlockTime                = 29,
		ApplyBlockEffect                = 30,
		ReflectDamage                   = 31,
		LifeSteal                       = 32,
		Invisibility                    = 33,
		Stun                            = 34,
		TriggerExtraAttack              = 35,
		EquipmentDurability             = 36,
		StaminaCapMultiplier            = 37,
		DirtyWater                      = 38,
		GliderDurabilityDrainMultiplier = 39,
		AttackSpeed                     = 40,
		Sizzle                          = 41,
		StaminaDelay                    = 42,
		SizzleRateMultiplier            = 43,
		ApplyBlockEffectSelf            = 44,
		TokenCooldownTime               = 45,
		AbilityCooldownMultiplier       = 46,
		ApplyCritEffect                 = 47,
		ApplyCritEffectSelf             = 48,
		MAX                             = 49
	};

	/**
	 * Enum Maine.EStatusEffectOriginType
	 */
	enum class EStatusEffectOriginType : uint8_t
	{
		Gear        = 0,
		Consumable  = 1,
		Creature    = 2,
		Environment = 3,
		Perk        = 4,
		Upgrade     = 5,
		Thirst      = 6,
		Hunger      = 7,
		Other       = 8,
		MAX         = 9
	};

	/**
	 * Enum Maine.ECharacterAnimMontageType
	 */
	enum class ECharacterAnimMontageType : uint8_t
	{
		None               = 0,
		Attack             = 1,
		Throw              = 2,
		Interact           = 3,
		Reaction           = 4,
		Emote              = 5,
		MovementTransition = 6,
		MovementReaction   = 7,
		SplineMovement     = 8,
		MAX                = 9
	};

	/**
	 * Enum Maine.ECharacterLockCategory
	 */
	enum class ECharacterLockCategory : uint8_t
	{
		None      = 0,
		Animation = 1,
		Cinematic = 2,
		AI        = 3,
		Capture   = 4,
		MAX       = 5
	};

	/**
	 * Enum Maine.EAlternateAttackFunction
	 */
	enum class EAlternateAttackFunction : uint8_t
	{
		AlternateAttack = 0,
		Block           = 1,
		MAX             = 2
	};

	/**
	 * Enum Maine.EDestroyCharacterVariation
	 */
	enum class EDestroyCharacterVariation : uint8_t
	{
		RespawnCorpse = 0,
		MAX           = 1
	};

	/**
	 * Enum Maine.RecipeUnlockMode
	 */
	enum class ERecipeUnlockMode : uint8_t
	{
		RecipeUnlockMode_Default              = 0,
		RecipeUnlockMode_IncludeHidden        = 1,
		RecipeUnlockMode_RecipeUnlockMode_MAX = 2
	};

	/**
	 * Enum Maine.ESurvivalDamageTypeFlags
	 */
	enum class ESurvivalDamageTypeFlags : uint8_t
	{
		Generic     = 0,
		Chopping    = 1,
		Mining      = 2,
		Stabbing    = 3,
		Digging     = 4,
		Gas         = 5,
		Mint        = 6,
		Slashing    = 7,
		Burning     = 8,
		Explosive   = 9,
		Shock       = 10,
		Salty       = 11,
		Spicy       = 12,
		Acid        = 13,
		Pollen      = 14,
		PuffballGas = 15,
		MAX         = 16
	};

	/**
	 * Enum Maine.ERecipeUnlockType
	 */
	enum class ERecipeUnlockType : uint8_t
	{
		Discovery = 0,
		Research  = 1,
		All       = 2,
		MAX       = 3
	};

	/**
	 * Enum Maine.EGamePlatform
	 */
	enum class EGamePlatform : uint8_t
	{
		XboxOne      = 0,
		WindowsStore = 1,
		WindowsSteam = 2,
		XboxScarlett = 3,
		MAX          = 4
	};

	/**
	 * Enum Maine.EPlayerDisconnectReason
	 */
	enum class EPlayerDisconnectReason : uint8_t
	{
		None   = 0,
		Kicked = 1,
		MAX    = 2
	};

	/**
	 * Enum Maine.ECanRevertToFoliageState
	 */
	enum class ECanRevertToFoliageState : uint8_t
	{
		No          = 0,
		IfNecessary = 1,
		Yes         = 2,
		MAX         = 3
	};

	/**
	 * Enum Maine.ESwimmingMovementType
	 */
	enum class ESwimmingMovementType : uint8_t
	{
		None      = 0,
		Passive   = 1,
		Sprinting = 2,
		MAX       = 3
	};

	/**
	 * Enum Maine.ESwitchMode
	 */
	enum class ESwitchMode : uint8_t
	{
		AllowNumUses = 0,
		PingPong     = 1,
		MAX          = 2
	};

	/**
	 * Enum Maine.ETechTreeUnlockType
	 */
	enum class ETechTreeUnlockType : uint8_t
	{
		None            = 0,
		Recipe          = 1,
		StatusEffect    = 2,
		TransmitterType = 3,
		Perk            = 4,
		Sign            = 5,
		MAX             = 6
	};

	/**
	 * Enum Maine.EManagedPostProcessBitMasks
	 */
	enum class EManagedPostProcessBitMasks : uint8_t
	{
		None             = 0,
		Stencil          = 1,
		FragilityStencil = 2,
		Construction     = 3,
		MAX              = 4
	};

	/**
	 * Enum Maine.ETrackedSpawnState
	 */
	enum class ETrackedSpawnState : uint8_t
	{
		NotSpawned = 0,
		Spawned    = 1,
		MAX        = 2
	};

	/**
	 * Enum Maine.ETrackingType
	 */
	enum class ETrackingType : uint8_t
	{
		Head  = 0,
		Body  = 1,
		Count = 2,
		MAX   = 3
	};

	/**
	 * Enum Maine.ESetTrapStateFlags
	 */
	enum class ESetTrapStateFlags : uint8_t
	{
		None      = 0,
		SkipFlush = 1,
		Force     = 2,
		MAX       = 3
	};

	/**
	 * Enum Maine.ETrapApplyType
	 */
	enum class ETrapApplyType : uint8_t
	{
		None             = 0,
		Overlap          = 1,
		Hit              = 2,
		TriggerOnOverlap = 3,
		TriggerOnArmed   = 4,
		MAX              = 5
	};

	/**
	 * Enum Maine.ETrapArmedSetting
	 */
	enum class ETrapArmedSetting : uint8_t
	{
		Always = 0,
		Manual = 1,
		OnHit  = 2,
		MAX    = 3
	};

	/**
	 * Enum Maine.ETutorialLogType
	 */
	enum class ETutorialLogType : uint8_t
	{
		AlwaysShow   = 0,
		NeverShow    = 1,
		ShowWhenSeen = 2,
		MAX          = 3
	};

	/**
	 * Enum Maine.ETutorialDisplayTime
	 */
	enum class ETutorialDisplayTime : uint8_t
	{
		FixedTime      = 0,
		Infinite       = 1,
		FixedTimeShort = 2,
		MAX            = 3
	};

	/**
	 * Enum Maine.ERadialShortcut
	 */
	enum class ERadialShortcut : uint8_t
	{
		EmptyShortcut       = 0,
		OpenInventoryMenu   = 1,
		OpenCraftingMenu    = 2,
		OpenMapMenu         = 3,
		OpenQuestMenu       = 4,
		ToggleCameraMode    = 5,
		ToggleTimeMode      = 6,
		OpenFeedbackMenu    = 7,
		ToggleFarHUDMarkers = 8,
		EnterPhotoMode      = 9,
		EnterSpyGlassMode   = 10,
		MAX                 = 11
	};

	/**
	 * Enum Maine.ECraftingInterfaceType
	 */
	enum class ECraftingInterfaceType : uint8_t
	{
		Scab      = 0,
		Workbench = 1,
		MAX       = 2
	};

	/**
	 * Enum Maine.EVisualEffectMeshType
	 */
	enum class EVisualEffectMeshType : uint8_t
	{
		None      = 0,
		Character = 1,
		MainHand  = 2,
		OffHand   = 3,
		MeshTag   = 4,
		MAX       = 5
	};

	/**
	 * Enum Maine.EWaveSpawnState
	 */
	enum class EWaveSpawnState : uint8_t
	{
		None                = 0,
		ChooseStartLocation = 1,
		SpawnWave           = 2,
		Waiting             = 3,
		MAX                 = 4
	};

	/**
	 * Enum Maine.EWaypointType
	 */
	enum class EWaypointType : uint8_t
	{
		Patrol = 0,
		Emerge = 1,
		MAX    = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Maine.AchievementData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FAchievementData : public FTableRowBase
	{
	public:
		class FString                                              AchievementUnlockTag;                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerStatConfig*                                   PlayerStat;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTotalPartyPlayerStat;                                   // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_83X1[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0024(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAchievementStat                                           AchievementStat;                                         // 0x0034(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperator                                        ComparisonOperator;                                      // 0x0035(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2T0[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ConditionalValue;                                        // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHostMustBePresentAtValueChange;                         // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClientMustBePresentAtValueChange;                       // 0x003D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUnlockInCreativeMode;                                // 0x003E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21QU[0x1];                                   // 0x003F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AchievementStatus
	 * Size -> 0x0058
	 */
	struct FAchievementStatus
	{
	public:
		struct FName_NetCrc                                        AchievementName;                                         // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LastKnownStatValue;                                      // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlocked;                                               // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58EV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAchievementData                                    AchievementData;                                         // 0x0018(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AIShoutEvent
	 * Size -> 0x0028
	 */
	struct FAIShoutEvent
	{
	public:
		class AActor*                                              Shouter;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AKHT[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AISoundEvent
	 * Size -> 0x0028
	 */
	struct FAISoundEvent
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SoundLocation;                                           // 0x0008(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Range;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                Tag;                                                     // 0x001C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OS9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.HourBasedOneShotBundle
	 * Size -> 0x0020
	 */
	struct FHourBasedOneShotBundle
	{
	public:
		int32_t                                                    HourOfDay;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           SpawnDistanceRange;                                      // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VDGO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USoundBase*>                                  RandomSounds;                                            // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ZoneOneShotEntry
	 * Size -> 0x01D0 (FullSize[0x01D8] - InheritedSize[0x0008])
	 */
	struct FZoneOneShotEntry : public FTableRowBase
	{
	public:
		int32_t                                                    StartHourOfDay;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndHourOfDay;                                            // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseCurveForProbability;                                  // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41LF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Probability;                                             // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  ProbabilityCurve;                                        // 0x0018(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       UseCurveForRetriggerTime;                                // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MX1B[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           RetriggerTimeRange;                                      // 0x00A4(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7W0[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  MinRetriggerTimeCurve;                                   // 0x00B0(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  MaxRetriggerTimeCurve;                                   // 0x0138(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FVector2D                                           OneShotSpawnDistanceRange;                               // 0x01C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USoundBase*>                                  RandomSounds;                                            // 0x01C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.SkeletalMeshAttachment
	 * Size -> 0x0010
	 */
	struct FSkeletalMeshAttachment
	{
	public:
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketName;                                              // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AttackDataPreloadAssets
	 * Size -> 0x0060
	 */
	struct FAttackDataPreloadAssets
	{
	public:
		unsigned char                                              UnknownData_I74E[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProjectileClass;                                         // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UVisualEffect*                                       AttackVFX;                                               // 0x0048(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          SoundFX;                                                 // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USurfaceEffectData*                                  HitEffect;                                               // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Maine.ProxyComponentTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FProxyComponentTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_64CA[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.HotBarQuickSlotItemTypeKey
	 * Size -> 0x0020
	 */
	struct FHotBarQuickSlotItemTypeKey
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    EnhanceLevel;                                            // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BonusEnhanceLevel;                                       // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        BonusEnhanceTypeTag;                                     // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BestiaryStat
	 * Size -> 0x0010
	 */
	struct FBestiaryStat
	{
	public:
		class UPlayerStatConfig*                                   Stat;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVYD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AnyControlMappingKey
	 * Size -> 0x0010
	 */
	struct FAnyControlMappingKey
	{
	public:
		EControlMappingKeyType                                     Type;                                                    // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKBF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                Name;                                                    // 0x0004(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAxisPositive;                                           // 0x000C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGE8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AnyControlMapping
	 * Size -> 0x0030
	 */
	struct FAnyControlMapping
	{
	public:
		struct FAnyControlMappingKey                               Key;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputChord                                         Chord;                                                   // 0x0010(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BirdSplineItemSpawn
	 * Size -> 0x0020
	 */
	struct FBirdSplineItemSpawn
	{
	public:
		float                                                      Chance;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AFW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SpawnActor;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         SplineRange;                                             // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AbilityData
	 * Size -> 0x0080 (FullSize[0x0088] - InheritedSize[0x0008])
	 */
	struct FAbilityData : public FTableRowBase
	{
	public:
		struct FDataTableRowHandle                                 AttackData;                                              // 0x0008(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Cooldown;                                                // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECooldownBeginConfig                                       BeginCooldownConfig;                                     // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQUI[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SetBeginCooldown;                                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAbiltyTargetType                                          AbilityTargetType;                                       // 0x0028(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2PXH[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               ScriptedTargetTags;                                      // 0x0030(0x0020) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       UseNearestScriptedTarget;                                // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6R7F[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EAbilityCondition>                                  AbilityConditions;                                       // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 PreferredNextAbility;                                    // 0x0068(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       IgnoreCooldownInPreferedAbility;                         // 0x0078(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HFM8[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        AnimPreAttack;                                           // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BossPhase
	 * Size -> 0x0040
	 */
	struct FBossPhase
	{
	public:
		float                                                      HealthThreshold;                                         // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJXI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         StatusEffects;                                           // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FAbilityData>                                Abilities;                                               // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         AbilityDataList;                                         // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AnimToLoad;                                              // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BossActorSpawn
	 * Size -> 0x0010
	 */
	struct FBossActorSpawn
	{
	public:
		class UClass*                                              ActorToSpawn;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATargetPoint*                                        SpawnPoint;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PhaseEncounter
	 * Size -> 0x0010
	 */
	struct FPhaseEncounter
	{
	public:
		int32_t                                                    PhaseIndex;                                              // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BGE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AEncounter*                                          Encounter;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.MaterialToIngredientMapping
	 * Size -> 0x0030
	 */
	struct FMaterialToIngredientMapping
	{
	public:
		class FString                                              MeshName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartIndex;                                              // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndIndex;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 Ingredient;                                              // 0x0018(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       NeedsInvisibleConstructionMaterial;                      // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCWE[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AllowableBuildingPenetration
	 * Size -> 0x0020
	 */
	struct FAllowableBuildingPenetration
	{
	public:
		struct FFloatRange                                         Depth;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         Normal;                                                  // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingGridBuildingId
	 * Size -> 0x0010
	 */
	struct FBuildingGridBuildingId
	{
	public:
		unsigned char                                              UnknownData_AV15[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ID;                                                      // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQSZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BuildingGridKey
	 * Size -> 0x0010
	 */
	struct FBuildingGridKey
	{
	public:
		struct FIntVector                                          Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBuildingGridSlot                                          Slot;                                                    // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LX54[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BuildingGridLocation
	 * Size -> 0x0028
	 */
	struct FBuildingGridLocation
	{
	public:
		TWeakObjectPtr<class UBuildingGridComponent>               Grid;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_14QM[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBuildingGridKey                                    Key;                                                     // 0x0018(0x0010) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingReplicatedData
	 * Size -> 0x0048
	 */
	struct FBuildingReplicatedData
	{
	public:
		struct FBuildingGridBuildingId                             BuildingId;                                              // 0x0000(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBuildingGridLocation                               GridLocation;                                            // 0x0010(0x0028) NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBuildingGridBuildingId                             ReplacingBuilding;                                       // 0x0038(0x0010) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingPowerId
	 * Size -> 0x0008
	 */
	struct FBuildingPowerId
	{
	public:
		int32_t                                                    NetworkId;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NodeId;                                                  // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.InstancedBuildingTypeData
	 * Size -> 0x0010
	 */
	struct FInstancedBuildingTypeData
	{
	public:
		unsigned char                                              UnknownData_6Y36[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.InstancedBuildingData
	 * Size -> 0x0078
	 */
	struct FInstancedBuildingData
	{
	public:
		class UBuildingGridComponent*                              Grid;                                                    // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UClass*, struct FInstancedBuildingTypeData>     Items;                                                   // 0x0008(0x0050) NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ItemsKeys;                                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ICZ[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BuildingGridISMKey
	 * Size -> 0x0010
	 */
	struct FBuildingGridISMKey
	{
	public:
		class UClass*                                              Class;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Mesh;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingGridISMMetadata
	 * Size -> 0x0020
	 */
	struct FBuildingGridISMMetadata
	{
	public:
		unsigned char                                              UnknownData_LWG3[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.DelayedDestructionData
	 * Size -> 0x0010
	 */
	struct FDelayedDestructionData
	{
	public:
		unsigned char                                              UnknownData_A11E[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.LiteBuildingGridSlotData
	 * Size -> 0x0008
	 */
	struct FLiteBuildingGridSlotData
	{
	public:
		unsigned char                                              UnknownData_PTHS[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.LiteBuilding
	 * Size -> 0x0038
	 */
	struct FLiteBuilding
	{
	public:
		unsigned char                                              UnknownData_J2QK[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuilding*                                           CDO;                                                     // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3GLC[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.LiteBuildingGrid
	 * Size -> 0x0240
	 */
	struct FLiteBuildingGrid
	{
	public:
		unsigned char                                              UnknownData_MFPT[0x128];                                 // 0x0000(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FBuildingGridKey, struct FLiteBuildingGridSlotData> Grid;                                                    // 0x0128(0x0050) Transient, NativeAccessSpecifierPrivate
		TMap<uint32_t, struct FLiteBuilding>                       Buildings;                                               // 0x0178(0x0050) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              RemovedBuildings[0x50];                                  // 0x01C8(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              UnknownData_7CGJ[0x28];                                  // 0x0218(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BurgleQuestParameterValue
	 * Size -> 0x0010
	 */
	struct FBurgleQuestParameterValue
	{
	public:
		struct FFloatRange                                         ProgressRange;                                           // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BurgleQuestInstanceKillConfiguration
	 * Size -> 0x0014 (FullSize[0x0024] - InheritedSize[0x0010])
	 */
	struct FBurgleQuestInstanceKillConfiguration : public FBurgleQuestParameterValue
	{
	public:
		struct FGameplayTag                                        CreatureTag;                                             // 0x0010(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinCount;                                                // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxCountProgress;                                        // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BurgleQuestKillGroupRewardConfig
	 * Size -> 0x000C
	 */
	struct FBurgleQuestKillGroupRewardConfig
	{
	public:
		struct FGameplayTag                                        CreatureTag;                                             // 0x0000(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SciencePerKill;                                          // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AttackComboData
	 * Size -> 0x0020
	 */
	struct FAttackComboData
	{
	public:
		TArray<struct FDataTableRowHandle>                         Attacks;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5G2[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ScalingType;                                             // 0x0014(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMZF[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.OverrideDisplayModeData
	 * Size -> 0x0008
	 */
	struct FOverrideDisplayModeData
	{
	public:
		unsigned char                                              UnknownData_9A4K[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.InstancedMeshKey
	 * Size -> 0x0020
	 */
	struct FInstancedMeshKey
	{
	public:
		TWeakObjectPtr<class UInstancedStaticMeshComponent>        InstancedStaticMeshComponent;                            // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeshIndex;                                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CK8J[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.FoliageKey
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FFoliageKey : public FInstancedMeshKey
	{	};

	/**
	 * ScriptStruct Maine.ClimbableSplineKey
	 * Size -> 0x0038
	 */
	struct FClimbableSplineKey
	{
	public:
		TWeakObjectPtr<class UClimbableSplineComponent>            HardSplineComponent;                                     // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UClimbableSplineComponent>            CDOSplineComponent;                                      // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBaseLODActor*                                       LODActor;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFoliageKey                                         FoliageKey;                                              // 0x0018(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Maine.AttractionComponentKey
	 * Size -> 0x0038
	 */
	struct FAttractionComponentKey
	{
	public:
		TWeakObjectPtr<class UAttractionComponent>                 HardComponent;                                           // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TWeakObjectPtr<class UAttractionComponent>                 CDOComponent;                                            // 0x0008(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBaseLODActor*                                       LODActor;                                                // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FFoliageKey                                         FoliageKey;                                              // 0x0018(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Maine.CharacterPropEntry
	 * Size -> 0x0020
	 */
	struct FCharacterPropEntry
	{
	public:
		unsigned char                                              UnknownData_JVAD[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Actor;                                                   // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.GoapActionOwner
	 * Size -> 0x0050
	 */
	struct FGoapActionOwner
	{
	public:
		unsigned char                                              UnknownData_XBLN[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.GoapActionInstance
	 * Size -> 0x0060
	 */
	struct FGoapActionInstance
	{
	public:
		struct FGoapActionOwner                                    Owner;                                                   // 0x0000(0x0050) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGoapAction*                                         Action;                                                  // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bProjectToGround;                                        // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KP9[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ClimbableSplineAnimSegment
	 * Size -> 0x0028
	 */
	struct FClimbableSplineAnimSegment
	{
	public:
		struct FFloatRange                                         TimeRange;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Animation;                                               // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0018(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43AL[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PredefinedColonyData
	 * Size -> 0x0010
	 */
	struct FPredefinedColonyData
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UColonyConfiguration*                                Config;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.GlobalVariableReferemceConditional
	 * Size -> 0x0018
	 */
	struct FGlobalVariableReferemceConditional
	{
	public:
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0000(0x0010) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperator                                        ComparisonOperator;                                      // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WUUB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.CreditsEntry
	 * Size -> 0x0040
	 */
	struct FCreditsEntry
	{
	public:
		class FString                                              DebugName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ECreditsDisplayType                                        DisplayType;                                             // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              HeaderLevel;                                             // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KMYP[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              RawString;                                               // 0x0018(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              ImageKey;                                                // 0x0028(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              bRandomizeOrder : 1;                                     // 0x0038(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_95BI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.CreditsGroup
	 * Size -> 0x0030
	 */
	struct FCreditsGroup
	{
	public:
		class FString                                              DebugName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FString                                              Content;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FCreditsEntry>                               Credits;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Maine.CustomizedValue
	 * Size -> 0x000C
	 */
	struct FCustomizedValue
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PropertyValue;                                           // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.CustomProperty
	 * Size -> 0x0040
	 */
	struct FCustomProperty
	{
	public:
		ECustomPropertyInputType                                   InputType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CLZ5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PropertyID;                                              // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          PropertyName;                                            // 0x000C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLocString>                                  DropdownPropertyNames;                                   // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      SliderMinValue;                                          // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderMaxValue;                                          // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderStepSize;                                          // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECustomPropertyValueFormat                                 ValueFormat;                                             // 0x003C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7DY7[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SpawnData
	 * Size -> 0x0040
	 */
	struct FSpawnData
	{
	public:
		class UClass*                                              ActorToSpawn;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        Colony;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnCount;                                              // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6K0T[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATargetPoint*                                        SpawnPoint;                                              // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        SpawnClimbSplineRole;                                    // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATargetPoint*                                        InteractionPoint;                                        // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ASpawnAssociatedActor*                               AssociatedActor;                                         // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableProxyLODAI;                                      // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5L0E[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.EQSParameter
	 * Size -> 0x0008
	 */
	struct FEQSParameter
	{
	public:
		class UClass*                                              EQSParameter;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AIDynamicParam_Maine
	 * Size -> 0x0018
	 */
	struct FAIDynamicParam_Maine
	{
	public:
		class FName                                                ParamName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAIParamType                                               ParamType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVRQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEQSParameter                                       ValueSelector;                                           // 0x0010(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ItemDataPreloadAssets
	 * Size -> 0x0048
	 */
	struct FItemDataPreloadAssets
	{
	public:
		unsigned char                                              UnknownData_HHSN[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterAudioData*                                 AudioData;                                               // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          BlockSound;                                              // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USoundBase*                                          PerfectBlockSound;                                       // 0x0040(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Maine.FaucetItemSpawnData
	 * Size -> 0x0028
	 */
	struct FFaucetItemSpawnData
	{
	public:
		class UClass*                                              SpawnGroup;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SpawnData;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ValidSpawnPointSockets;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bAttachToSockets;                                        // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowSocketRepeat;                                      // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8XEZ[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.NativeRippleEvent
	 * Size -> 0x0014
	 */
	struct FNativeRippleEvent
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Size;                                                    // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ReplicatedFoliageTypeData
	 * Size -> 0x0010
	 */
	struct FReplicatedFoliageTypeData
	{
	public:
		unsigned char                                              UnknownData_8YYO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ReplicatedFoliageSet
	 * Size -> 0x0060
	 */
	struct FReplicatedFoliageSet
	{
	public:
		TMap<TWeakObjectPtr<class UInstancedStaticMeshComponent>, struct FReplicatedFoliageTypeData> Items;                                                   // 0x0000(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8MPQ[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.FootstepEntry
	 * Size -> 0x0020
	 */
	struct FFootstepEntry
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GF9U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVisualEffect*                                       VisualEffect;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SoundEffect;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundInensity;                                           // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundRange;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.FPCMeshData
	 * Size -> 0x00A0
	 */
	struct FFPCMeshData
	{
	public:
		struct FTransform                                          StartTransform;                                          // 0x0000(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       UniqueVariant;                                           // 0x0060(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSkeletalMesh;                                         // 0x0061(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ESA[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMesh*>                                 StaticMeshVariants;                                      // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               SkeletalMeshVariants;                                    // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AnimMontage;                                             // 0x0088(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AnimInstanceClass;                                       // 0x0090(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CastsShadow;                                             // 0x0098(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0099(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DC5G[0x6];                                   // 0x009A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.FPCOverlayConfig
	 * Size -> 0x0018
	 */
	struct FFPCOverlayConfig
	{
	public:
		TArray<struct FFPCMeshData>                                MeshPieces;                                              // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      BlendTime;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN04[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MovementConfig
	 * Size -> 0x000C
	 */
	struct FMovementConfig
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMoveDuration;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxMoveRandomDeviation;                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BehaviorMovementConfig
	 * Size -> 0x000C
	 */
	struct FBehaviorMovementConfig
	{
	public:
		struct FMovementConfig                                     DefaultConfig;                                           // 0x0000(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.CombatMusicSettings
	 * Size -> 0x0018
	 */
	struct FCombatMusicSettings
	{
	public:
		struct FGameplayTag                                        CombatMusicTag;                                          // 0x0000(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMusicTrackData*                                     CombatMusicTrack;                                        // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42K3[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TagDataInt
	 * Size -> 0x000C
	 */
	struct FTagDataInt
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.CozinessLevel
	 * Size -> 0x0050
	 */
	struct FCozinessLevel
	{
	public:
		int32_t                                                    RequiredValue;                                           // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BurgleQuestProgressLevel;                                // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BurgleQuestScienceReward;                                // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3NKG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         StatusEffects;                                           // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         UnlockRecipes;                                           // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         UnlockPerks;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UMusicTrackData*                                     DayTrack;                                                // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMusicTrackData*                                     NightTrack;                                              // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ComboScalingData
	 * Size -> 0x0018
	 */
	struct FComboScalingData
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              ScalingValue;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ThrowingImpactData
	 * Size -> 0x0020
	 */
	struct FThrowingImpactData
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 AttackData;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      SoundIntensity;                                          // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundRange;                                              // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ControlMetadata
	 * Size -> 0x0078
	 */
	struct FControlMetadata
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          GamepadOverrideDisplayName;                              // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ReverseActionName;                                       // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRebindableKeyboard;                                     // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRebindableGamepad;                                      // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4K7Q[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EControlConflictContext>                            ConflictCategories;                                      // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		EBindableControlCategory                                   Category;                                                // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J563[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OrderInUI;                                               // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideForKeyboard;                                        // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideForGamepad;                                         // 0x0059(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8KDL[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FeatureGate;                                             // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHU3[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AxisDirectionKey
	 * Size -> 0x000C
	 */
	struct FAxisDirectionKey
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPositive;                                               // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0IX[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ControlConflictContextMetadata
	 * Size -> 0x0018
	 */
	struct FControlConflictContextMetadata
	{
	public:
		TArray<EControlConflictContext>                            ConflictsWith;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E9LQ[0x8];                                   // 0x0010(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.FoliageRespawnRules
	 * Size -> 0x0058
	 */
	struct FFoliageRespawnRules
	{
	public:
		struct FGuid                                               UniqueId;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DebugName;                                               // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 StaticMeshes;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              RespawnOnlyOnRest : 1;                                   // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RespawnWhenRemoved : 1;                                  // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IgnorePlayerDistanceCheckOnRest : 1;                     // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XB1A[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumInGameHoursGoneRequired;                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDistanceAwayFromPlayersRequired;                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReferemceConditional                 GlobalVariableCondition;                                 // 0x003C(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1LWM[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AttractionCDOData
	 * Size -> 0x0010
	 */
	struct FAttractionCDOData
	{
	public:
		TArray<class UGoapAction*>                                 Actions;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.FoliageMapping
	 * Size -> 0x0090
	 */
	struct FFoliageMapping
	{
	public:
		class UClass*                                              FoliageBlueprintClass;                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFoliageInstanceState                                      DefaultState;                                            // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanAttackToSwap;                                         // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFoliageSwapLevel                                          DisplaceLevel;                                           // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MX6A[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayerSwapDistance;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          DisplaceAudioLoop;                                       // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   DisplaceAudioAttenuation;                                // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UVisualEffect*>                               InteractVisualEffects;                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      SpringStrength;                                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringDecay;                                             // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActiveInDevelopmentContentOnly;                         // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowGOAPAdvertisements;                                // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JZO9[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HeightAboveOrigin;                                       // 0x003C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UAttractionComponent*, struct FAttractionCDOData> CDOAttractionData;                                       // 0x0040(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ProcessingTypeGlobalData
	 * Size -> 0x0020
	 */
	struct FProcessingTypeGlobalData
	{
	public:
		struct FGameplayTag                                        ProcessingTag;                                           // 0x0000(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProcessingTime;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPlayerRemoval;                                     // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GY2[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVisualEffect*                                       WorkingVFX;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualEffect*                                       StartedVFX;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ItemStackUpgradeData
	 * Size -> 0x0040
	 */
	struct FItemStackUpgradeData
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTag                                        ItemStackTag;                                            // 0x0038(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ResearchLevelGlobalData
	 * Size -> 0x0030
	 */
	struct FResearchLevelGlobalData
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResearchPointThreshold;                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8QR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         UnlockRecipes;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    BonusScienceAtLevel;                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18OV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.RecipeModData
	 * Size -> 0x0030
	 */
	struct FRecipeModData
	{
	public:
		struct FDataTableRowHandle                                 ItemRowHandle;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedModType;                                        // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedDescription;                                    // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ItemBonusEnhancementData
	 * Size -> 0x0088
	 */
	struct FItemBonusEnhancementData
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ItemSlotBG[0x28];                                        // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              DamageType;                                              // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         EnhancementItems;                                        // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 ExtraRepairItem;                                         // 0x0078(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.KeyItemDisplayData
	 * Size -> 0x0020
	 */
	struct FKeyItemDisplayData
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Icon;                                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EKeyItemVisibility                                         Visibility;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JG3Z[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TamingHappinessStep
	 * Size -> 0x0014
	 */
	struct FTamingHappinessStep
	{
	public:
		float                                                      MaxHappiness;                                            // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          DisplayName;                                             // 0x0004(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.InputKeyData
	 * Size -> 0x0098
	 */
	struct FInputKeyData
	{
	public:
		struct FSlateBrush                                         Image;                                                   // 0x0000(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FLocString                                          OverrideNarrationName;                                   // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HUDMarkerVariationData
	 * Size -> 0x0030
	 */
	struct FHUDMarkerVariationData
	{
	public:
		TArray<struct FSlateBrush>                                 BrushList;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FSlateBrush>                                 MapBrushList;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FLocString>                                  BrushDisplayName;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.RadialShortcutData
	 * Size -> 0x0098
	 */
	struct FRadialShortcutData
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0000(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLocString                                          DisplayName;                                             // 0x0088(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.StatusEffectUIData
	 * Size -> 0x0028
	 */
	struct FStatusEffectUIData
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          Description;                                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.GoapActionVitalAdjustment
	 * Size -> 0x0010
	 */
	struct FGoapActionVitalAdjustment
	{
	public:
		struct FGameplayTag                                        Vital;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVitalAdjustmentVisibility                                 Visibility;                                              // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YE33[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.CombinedLadderData
	 * Size -> 0x0018
	 */
	struct FCombinedLadderData
	{
	public:
		class ACombinedLadder*                                     CombinedLadder;                                          // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ALadderBuilding*>                             BuildingStack;                                           // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.EggHatchType
	 * Size -> 0x0030
	 */
	struct FEggHatchType
	{
	public:
		unsigned char                                              FullActor[0x28];                                         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      Ratio;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXE3[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.DamageData
	 * Size -> 0x0030
	 */
	struct FDamageData
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SBKS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageEventType                                           DamageEventType;                                         // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitReactionType                                           ForcedHitReaction;                                       // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVRY[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HitStun;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pushback;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VKMU[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 DeathNotification;                                       // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HealthColliderConfig
	 * Size -> 0x0050
	 */
	struct FHealthColliderConfig
	{
	public:
		class FString                                              ComponentName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplier;                                        // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ForwardComponentName;                                    // 0x0014(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardAngleRange;                                       // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DamageSourceTags;                                        // 0x0020(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		uint32_t                                                   DamageTypeFlags;                                         // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHJL[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ThreatDamageModifierConfig
	 * Size -> 0x0038
	 */
	struct FThreatDamageModifierConfig
	{
	public:
		float                                                      ThreatMultiplier;                                        // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHG4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               DamageSourceTags;                                        // 0x0008(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		uint32_t                                                   DamageTypeFlags;                                         // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTL5[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HeatHazardConditionState
	 * Size -> 0x0008
	 */
	struct FHeatHazardConditionState
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCIB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeWhenStateChanged;                                    // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HeatEmitterTraceResult
	 * Size -> 0x0050
	 */
	struct FHeatEmitterTraceResult
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DistanceToOwner;                                         // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissionMaxRadius;                                       // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissionMaxStrength;                                     // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissionStrengthAtOwnerLocation;                         // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmitterDamageMultiplier;                                 // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8PU5[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.HeatEmitter
	 * Size -> 0x00B0
	 */
	struct FHeatEmitter
	{
	public:
		class UStaticMesh*                                         StaticMesh;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseActorForwardScaling;                                  // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFEE[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FOVAngleBeforeFallOff;                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmissionMaxRadius;                                       // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6GR2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  DistanceFallOffCurve;                                    // 0x0020(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      EmissionMaxStrength;                                     // 0x00A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EmitterDamageMultiplier;                                 // 0x00AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ArmorEquipmentSlot
	 * Size -> 0x0010
	 */
	struct FArmorEquipmentSlot
	{
	public:
		EEquipmentSlot                                             EquipmentSlot;                                           // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ASDW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DurabilityRatio;                                         // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UItem>                                Armor;                                                   // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HUDMarkerArray
	 * Size -> 0x0028
	 */
	struct FHUDMarkerArray
	{
	public:
		unsigned char                                              UnknownData_3GB2[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UHUDMarkerData*>                              MarkerArray;                                             // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Q6A[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.UnreachableActionData
	 * Size -> 0x0008
	 */
	struct FUnreachableActionData
	{
	public:
		unsigned char                                              UnknownData_WVGQ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PowerReservoir
	 * Size -> 0x0028
	 */
	struct FPowerReservoir
	{
	public:
		unsigned char                                              UnknownData_XXMY[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        AllowedPowerType;                                        // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        CurrentPowerType;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChargesStored;                                           // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChargeCapacity;                                          // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Maine.ItemProcessingData
	 * Size -> 0x0078
	 */
	struct FItemProcessingData
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinishTime;                                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     LocationIndex;                                           // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUOP[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASpawnedItem*                                        WorldItemActor;                                          // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            VisualEffect;                                            // 0x0018(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB8X[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AItemProcessingBuilding*                             Owner;                                                   // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FUniqueNetIdRepl                                    ProcessingInstigator;                                    // 0x0048(0x0028) BlueprintVisible, BlueprintReadOnly, RepSkip, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGameplayTag                                        ProcessingType;                                          // 0x0070(0x0008) RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Maine.ItemSpawnGroupEvent
	 * Size -> 0x0050
	 */
	struct FItemSpawnGroupEvent
	{
	public:
		EItemSpawnEventType                                        EventType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESpawnIntervalBehavior                                     When;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JL0[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WhenValue;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowQueueing : 1;                                      // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R0N5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EventPercentageChance;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         AffectedPercentage;                                      // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInt32Range                                         AffectedCount;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         MaxPercentage;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInt32Range                                         MaxCount;                                                // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.GameVersion
	 * Size -> 0x000C
	 */
	struct FGameVersion
	{
	public:
		unsigned char                                              Major;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Minor;                                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Patch;                                                   // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZRP[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Build;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OrderSet;                                                // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IDIE[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ItemSpawnPointData
	 * Size -> 0x0080
	 */
	struct FItemSpawnPointData
	{
	public:
		class UClass*                                              ItemSpawnData;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_581W[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameVersion                                        VersionAdded;                                            // 0x0050(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6PK[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Provider[0x10];                                          // 0x0060(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		TWeakObjectPtr<class AActor>                               AttachParent;                                            // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ProviderIndex;                                           // 0x0078(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValid;                                                // 0x007C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowMultipleUse;                                       // 0x007D(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVPE[0x2];                                   // 0x007E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ItemSpawnGroup
	 * Size -> 0x0030
	 */
	struct FItemSpawnGroup
	{
	public:
		TArray<struct FItemSpawnPointData>                         SpawnPointDatas;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              SpawnPointProviders[0x10];                               // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_7HH9[0x10];                                  // 0x0020(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TrackedItemSpawnGroupEventRepData
	 * Size -> 0x000C
	 */
	struct FTrackedItemSpawnGroupEventRepData
	{
	public:
		uint32_t                                                   UniqueId;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EventIndex;                                              // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Seed;                                                    // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TrackedItemSpawnGroupRepData
	 * Size -> 0x001C (FullSize[0x0028] - InheritedSize[0x000C])
	 */
	struct FTrackedItemSpawnGroupRepData : public FFastArraySerializerItem
	{
	public:
		unsigned char                                              UnknownData_BCN6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemSpawnGroupData*                                 ItemSpawnGroupData;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTrackedItemSpawnGroupEventRepData>          Events;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TrackedItemSpawnGroupRepDataArray
	 * Size -> 0x0010 (FullSize[0x0118] - InheritedSize[0x0108])
	 */
	struct FTrackedItemSpawnGroupRepDataArray : public FFastArraySerializer
	{
	public:
		TArray<struct FTrackedItemSpawnGroupRepData>               Items;                                                   // 0x0108(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.LabMachineInfoBase
	 * Size -> 0x0008
	 */
	struct FLabMachineInfoBase
	{
	public:
		uint32_t                                                   InfoA;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   InfoB;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ClassTreeNode
	 * Size -> 0x0018
	 */
	struct FClassTreeNode
	{
	public:
		unsigned char                                              UnknownData_X048[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.LootData
	 * Size -> 0x0058
	 */
	struct FLootData
	{
	public:
		ELootType                                                  Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YII2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 ItemData;                                                // 0x0008(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              OverrideWorldActor;                                      // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorToSpawn;                                            // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChanceMultiplier;                                    // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELootSpawnType                                             SpawnType;                                               // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELootLocationType                                          LocationType;                                            // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_379S[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SocketName;                                              // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     SpawnPoint;                                              // 0x0040(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SpawnPointPreviousVelocity;                              // 0x0048(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              IgnoreObjectiveMarkers : 1;                              // 0x0054(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoUnderFloorCheckDuringLootSpawn;                       // 0x0055(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCheckConditionals;                                      // 0x0056(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F24D[0x1];                                   // 0x0057(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MapPuzzleUpdate
	 * Size -> 0x0010
	 */
	struct FMapPuzzleUpdate
	{
	public:
		class UMapPuzzlePieceWidget*                               Widget;                                                  // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          NewTexture;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PuzzlePieceTextureEntry
	 * Size -> 0x0008
	 */
	struct FPuzzlePieceTextureEntry
	{
	public:
		class UTexture2D*                                          KnownAreaTexture;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Maine.ActorMaterialKey
	 * Size -> 0x0010
	 */
	struct FActorMaterialKey
	{
	public:
		class UMeshComponent*                                      MeshComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DJM8[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MaterialInterfaceArray
	 * Size -> 0x0010
	 */
	struct FMaterialInterfaceArray
	{
	public:
		TArray<class UMaterialInterface*>                          Array;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ConditionalMusicTrack
	 * Size -> 0x0020
	 */
	struct FConditionalMusicTrack
	{
	public:
		class UMusicTrackData*                                     MusicTrack;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0008(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperator                                        GlobalVariableComparisonOperator;                        // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QFT7[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GlobalVariableCompareValue;                              // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.RecipeKnowledge
	 * Size -> 0x0010
	 */
	struct FRecipeKnowledge
	{
	public:
		struct FName_NetCrc                                        RecipeRowName;                                           // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bReplaced;                                               // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2WKM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ItemKnowledge
	 * Size -> 0x0010
	 */
	struct FItemKnowledge
	{
	public:
		struct FName_NetCrc                                        ResourceName;                                            // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bDoesKnowOf : 1;                                         // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasDiscovered : 1;                                      // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHasResearched : 1;                                      // 0x000C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PFZ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TechUnlockData
	 * Size -> 0x0010
	 */
	struct FTechUnlockData
	{
	public:
		struct FName_NetCrc                                        TechTreeNodeRowName;                                     // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    PointsAllocated;                                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ItemStackUpgrade
	 * Size -> 0x000C
	 */
	struct FItemStackUpgrade
	{
	public:
		struct FGameplayTag                                        ItemStackTag;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PerkStatus
	 * Size -> 0x0024
	 */
	struct FPerkStatus
	{
	public:
		struct FName_NetCrc                                        PerkName;                                                // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEquipped;                                               // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QM1W[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               StatusEffectID;                                          // 0x0014(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PhobiaMaterialSetting
	 * Size -> 0x0030
	 */
	struct FPhobiaMaterialSetting
	{
	public:
		int32_t                                                    MaterialIndex;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EV8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Material[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct Maine.PhobiaSettingData
	 * Size -> 0x0020
	 */
	struct FPhobiaSettingData
	{
	public:
		TArray<struct FPhobiaMaterialSetting>                      MaterialReplacements;                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        HideBoneNames;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PhobiaMeshData
	 * Size -> 0x0020
	 */
	struct FPhobiaMeshData
	{
	public:
		class FString                                              MeshName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPhobiaSettingData>                          Settings;                                                // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PlayerUpgrade
	 * Size -> 0x0020
	 */
	struct FPlayerUpgrade
	{
	public:
		struct FName_NetCrc                                        UpgradeName;                                             // 0x0000(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               StatusEffectID;                                          // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingPowerNodeList
	 * Size -> 0x0010
	 */
	struct FBuildingPowerNodeList
	{
	public:
		TArray<int32_t>                                            Nodes;                                                   // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingPowerVertex
	 * Size -> 0x0070
	 */
	struct FBuildingPowerVertex
	{
	public:
		int32_t                                                    NodeId;                                                  // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z63B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABuilding*                                           Building;                                                // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               BuildingGuid;                                            // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, struct FBuildingPowerNodeList>               Neighbors;                                               // 0x0020(0x0050) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingPowerNetwork
	 * Size -> 0x0100
	 */
	struct FBuildingPowerNetwork
	{
	public:
		int32_t                                                    NetworkId;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AK4K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, struct FBuildingPowerVertex>                 GraphVertices;                                           // 0x0008(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              ReachableNetworks[0x50];                                 // 0x0058(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              AccessibleNetworks[0x50];                                // 0x00A8(0x0050) UNKNOWN PROPERTY: SetProperty
		bool                                                       bIsSwitch;                                               // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSwitchActive;                                         // 0x00F9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KMBM[0x2];                                   // 0x00FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PowerOutput;                                             // 0x00FC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.RecipeMod
	 * Size -> 0x0020
	 */
	struct FRecipeMod
	{
	public:
		struct FDataTableRowHandle                                 ModItem;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 ResultItem;                                              // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.RecipeProducitonItem
	 * Size -> 0x0028
	 */
	struct FRecipeProducitonItem
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 RecipeRowHandle;                                         // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FinishTime;                                              // 0x0018(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1LM[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AProductionBuilding*                                 Owner;                                                   // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct Maine.FlySwimCharacterWiggle
	 * Size -> 0x1020
	 */
	struct FFlySwimCharacterWiggle
	{
	public:
		unsigned char                                              UnknownData_GSMH[0x1020];                                // 0x0000(0x1020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.QuadAudioBedSoundData
	 * Size -> 0x0020
	 */
	struct FQuadAudioBedSoundData
	{
	public:
		class USoundBase*                                          FrontLeftSound;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          FrontRightSound;                                         // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          BackLeftSound;                                           // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          BackRightSound;                                          // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ManagedRenderTarget
	 * Size -> 0x0038
	 */
	struct FManagedRenderTarget
	{
	public:
		unsigned char                                              Publisher[0x10];                                         // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       PublisherRequestedUnregister;                            // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MV19[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Subscribers[0x10];                                       // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class UManagedRenderTargetObject*                          RenderTargetInfo;                                        // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.MaineAlwaysRelevantActorInfo
	 * Size -> 0x0018
	 */
	struct FMaineAlwaysRelevantActorInfo
	{
	public:
		class UNetConnection*                                      Connection;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewer;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              LastViewTarget;                                          // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.RespawnableInstancedMeshData
	 * Size -> 0x0020
	 */
	struct FRespawnableInstancedMeshData
	{
	public:
		struct FFoliageKey                                         AttachedToFoliage;                                       // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.SurfaceEffect
	 * Size -> 0x0018
	 */
	struct FSurfaceEffect
	{
	public:
		EPhysicalSurface                                           SurfaceType;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXKU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVisualEffect*                                       VisualEffect;                                            // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SoundEffect;                                             // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AdditionnalTokenDeviation
	 * Size -> 0x000C
	 */
	struct FAdditionnalTokenDeviation
	{
	public:
		float                                                      ProbabilityDeviation;                                    // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddTokenCooldown;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddTokenRandomDeviation;                                 // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AutoConsoleCommandProperties
	 * Size -> 0x0028
	 */
	struct FAutoConsoleCommandProperties
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerRegularly;                                       // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOneTimeTrigger;                                         // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8M0[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ExecuteWaitTime;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerAfterTravel;                                     // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KDI8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Command;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PWI[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AutoRandomInputProperties
	 * Size -> 0x0050
	 */
	struct FAutoRandomInputProperties
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGLH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                Key;                                                     // 0x0008(0x0018) Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAxis;                                                   // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46AX[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinAxisDeltaSpeed;                                       // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAxisDeltaSpeed;                                       // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHold;                                                   // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7KQX[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinHoldTime;                                             // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHoldTime;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinTriggerTime;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTriggerTime;                                          // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8AEK[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AutoEquipmentProperties
	 * Size -> 0x0020
	 */
	struct FAutoEquipmentProperties
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Slot;                                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Amount;                                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefill;                                                 // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanThrow;                                               // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M496[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SurvivalTraitSettings
	 * Size -> 0x0048
	 */
	struct FSurvivalTraitSettings
	{
	public:
		float                                                      MaxValue;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValue;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdjustmentPerSecond;                                     // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdjustmentTickInterval;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BonusPercentage;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PenaltyPercentage;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 AdjustmentEffect;                                        // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 DamageEffect;                                            // 0x0028(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 BonusEffect;                                             // 0x0038(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BreathSettings
	 * Size -> 0x00B0
	 */
	struct FBreathSettings
	{
	public:
		float                                                      MaxValue;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AdjustmentPerSecond;                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenPerSecond;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFOT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 DamageEffect;                                            // 0x0010(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    OutOfBreathAlertTime;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RunningOutOfBreathEffectTime;                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  VignetteIntensityCurve;                                  // 0x0028(0x0088) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.CustomGameModeSettings
	 * Size -> 0x0004
	 */
	struct FCustomGameModeSettings
	{
	public:
		EGameDifficulty                                            GameDifficulty;                                          // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCreativeMode : 1;                                       // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEncountersEnabled : 1;                                  // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCreaturesIgnorePlayers : 1;                             // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBuildingIntegrityEnabled : 1;                           // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHungerAndThirstEnabled : 1;                             // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bStaminaEnabled : 1;                                     // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFriendlyFireEnabled : 1;                                // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDurabilityEnabled : 1;                                  // 0x0001(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSpoilingEnabled : 1;                                    // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bQuestsEnabled : 1;                                      // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDamageEnabled : 1;                                      // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPetInvincible : 1;                                      // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMenusPauseGame : 1;                                     // 0x0002(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerDeathBehavior                                       DeathBehavior;                                           // 0x0003(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PlayerCombatTracker
	 * Size -> 0x000C
	 */
	struct FPlayerCombatTracker
	{
	public:
		struct FGameplayTag                                        Tag;                                                     // 0x0000(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ActiveQuestStickiedData
	 * Size -> 0x0018
	 */
	struct FActiveQuestStickiedData
	{
	public:
		struct FDataTableRowHandle                                 QuestRowHandle;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bStickiedState;                                          // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZXR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.DeathInfo
	 * Size -> 0x0030
	 */
	struct FDeathInfo
	{
	public:
		struct FDataTableRowHandle                                 DeathNotificationDataHandle;                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageInstigator;                                        // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class APlayerState>                         PlayerInstigator;                                        // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageSourceType                                          DamageSourceType;                                        // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsIncapacitate;                                         // 0x0029(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGHI[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SwimmingCharacterMovementSettings
	 * Size -> 0x0010
	 */
	struct FSwimmingCharacterMovementSettings
	{
	public:
		ESwimmingMovementType                                      MovementType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UG0M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDistanceFactor;                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HorizontalFactor;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VerticalPullFactor;                                      // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TerminalConditional
	 * Size -> 0x0058
	 */
	struct FTerminalConditional
	{
	public:
		class FName                                                ConditionalStateName;                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGlobalVariableReferemceConditional>         GlobalVariableConditionals;                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		ELogicalOperator                                           ConditionalLogic;                                        // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETerminalWidgetState                                       WidgetState;                                             // 0x0019(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StateDisablesInteraction;                                // 0x001A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB45[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGlobalVariableReferemceConditional>         GlobalValuesSetOnInteract;                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         RequiredItemsToSetGlobalValues;                          // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLocString                                          InteractionText;                                         // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UConditionalToggleComponent*                         ToggleComponent;                                         // 0x0050(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.SourceTexture
	 * Size -> 0x0008
	 */
	struct FSourceTexture
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.StencilRequiredGlobalPostProcessMaterial
	 * Size -> 0x0068
	 */
	struct FStencilRequiredGlobalPostProcessMaterial
	{
	public:
		struct FWeightedBlendable                                  PostProcessMaterial;                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		EManagedPostProcessBitMasks                                Bits;                                                    // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J4DZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActiveObjectIDs[0x50];                                   // 0x0018(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct Maine.TrackingPart
	 * Size -> 0x0020
	 */
	struct FTrackingPart
	{
	public:
		unsigned char                                              UnknownData_YI32[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayTurnThreshold;                                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayTurnTimer;                                          // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQ7P[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Speed;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZSG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.RecipeRequirements
	 * Size -> 0x0018
	 */
	struct FRecipeRequirements
	{
	public:
		struct FDataTableRowHandle                                 Item;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ItemCount;                                               // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BZXA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TrapHitParams
	 * Size -> 0x0030
	 */
	struct FTrapHitParams
	{
	public:
		struct FGameplayTagContainer                               DamageSourceTags;                                        // 0x0000(0x0020) Edit, NativeAccessSpecifierPublic
		uint32_t                                                   DamageTypeFlags;                                         // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BP14[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.InstancedStorageData
	 * Size -> 0x0058
	 */
	struct FInstancedStorageData
	{
	public:
		class UInstancedStaticMeshComponent*                       ISMComponent;                                            // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<int32_t, int32_t>                                     StorageToISMIndices;                                     // 0x0008(0x0050) Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HealthStateMesh
	 * Size -> 0x0010
	 */
	struct FHealthStateMesh
	{
	public:
		EHealthVisualState                                         HealthState;                                             // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DV1F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         StaticMesh;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HealthStateMeshList
	 * Size -> 0x0010
	 */
	struct FHealthStateMeshList
	{
	public:
		TArray<struct FHealthStateMesh>                            HealthStateMeshes;                                       // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ActorCustomTickFunction
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	struct FActorCustomTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_SZRC[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.WaveSpawn
	 * Size -> 0x0028
	 */
	struct FWaveSpawn
	{
	public:
		class UClass*                                              ActorToSpawn;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeight;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x000C(0x0010) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperator                                        GlobalVariableComparisonOperator;                        // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0K2[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GlobalVariableCompareValue;                              // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9F0B[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.WaveSpawnFaction
	 * Size -> 0x0018
	 */
	struct FWaveSpawnFaction
	{
	public:
		struct FGameplayTag                                        FactionTag;                                              // 0x0000(0x0008) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWaveSpawn>                                  Spawns;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HeatBracket
	 * Size -> 0x000C
	 */
	struct FHeatBracket
	{
	public:
		int32_t                                                    HeatMin;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeatMax;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalSpawnWeight;                                        // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.OverlappedVolumes
	 * Size -> 0x0018
	 */
	struct FOverlappedVolumes
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AGameZoneVolume*>                             Volumes;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.DamageInfo
	 * Size -> 0x0068
	 */
	struct FDamageInfo
	{
	public:
		unsigned char                                              UnknownData_YGOJ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             HitLocation;                                             // 0x0004(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AController>                          InstigatorController;                                    // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              DamageSource;                                            // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               Target;                                                  // 0x0020(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInflictDamageStyle                                        InflictStyle;                                            // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TMB3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageType;                                              // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UAttack>                              OriginAttack;                                            // 0x0038(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitStun;                                                 // 0x0044(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHitReactionType                                           ForcedHitReaction;                                       // 0x0048(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBlockType                                                 BlockType;                                               // 0x0049(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageSourceType                                          DamageSourceType;                                        // 0x004A(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q9WO[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Pushback;                                                // 0x004C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageFlags;                                             // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AI9R[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 DeathNotification;                                       // 0x0058(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingGridBuilding
	 * Size -> 0x0098
	 */
	struct FBuildingGridBuilding
	{
	public:
		unsigned char                                              UnknownData_0MHS[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BuildingClass;                                           // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInstancedMeshKey                                   InstancedMesh;                                           // 0x0020(0x0020) NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPAU[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.LookTriggeredParams
	 * Size -> 0x0008
	 */
	struct FLookTriggeredParams
	{
	public:
		class ASurvivalCharacter*                                  TriggeringCharacter;                                     // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.DetectedSound
	 * Size -> 0x0014
	 */
	struct FDetectedSound
	{
	public:
		unsigned char                                              UnknownData_U14U[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AppearanceParams
	 * Size -> 0x000C
	 */
	struct FAppearanceParams
	{
	public:
		unsigned char                                              UnknownData_MUTA[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AttackAmmoData
	 * Size -> 0x0020
	 */
	struct FAttackAmmoData
	{
	public:
		struct FDataTableRowHandle                                 AmmoItem;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 Attack;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AttackAIParams
	 * Size -> 0x0018
	 */
	struct FAttackAIParams
	{
	public:
		float                                                      MinDist;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDist;                                                 // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreferredMaxDist;                                        // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreferredDistPostLunge;                                  // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreferredHeight;                                         // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLockRotation;                                           // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresFacing;                                         // 0x0015(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LM5F[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AttackHazardParams
	 * Size -> 0x0038
	 */
	struct FAttackHazardParams
	{
	public:
		unsigned char                                              HazardClass[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bAttachToOwner;                                          // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BM23[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachSocket;                                            // 0x002C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDHN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AttackData
	 * Size -> 0x0218 (FullSize[0x0220] - InheritedSize[0x0008])
	 */
	struct FAttackData : public FTableRowBase
	{
	public:
		struct FDamageData                                         DamageData;                                              // 0x0008(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDamageData>                                 DamageDataSecondary;                                     // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FDamageData                                         ChargedDamageData;                                       // 0x0048(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ChargeTime;                                              // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bChargeHoldChainsAttack;                                 // 0x007C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VZKJ[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Range;                                                   // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideTraceRadius;                                     // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeAngle;                                               // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConeBaseDirectionAngle;                                  // 0x008C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ConeBaseDirectionSymetry;                                // 0x0090(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EGG[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x0094(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundIntensity;                                          // 0x0098(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SoundRange;                                              // 0x009C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAttackHitType                                             HitResolutionType;                                       // 0x00A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsHostile : 1;                                          // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFriendlyFire : 1;                                       // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIgnoreOwner : 1;                                        // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDropHauledItems : 1;                                    // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FireAttackOnFullCharge : 1;                              // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEndAttackOnHit : 1;                                     // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSelfDestruct : 1;                                       // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDestroyTarget : 1;                                      // 0x00A1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H78P[0x2];                                   // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttackAIParams                                     AIParams;                                                // 0x00A4(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    StaminaCost;                                             // 0x00BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ChargedStaminaCost;                                      // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JHBU[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ProjectileClass[0x28];                                   // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              SummonClass[0x28];                                       // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FAttackHazardParams>                         Hazards;                                                 // 0x0118(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bRangedAttack;                                           // 0x0128(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBurrowAttack;                                           // 0x0129(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBurrowOnEndAttack;                                      // 0x012A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnBurrowOnEndAttack;                                    // 0x012B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileAttackTime;                                    // 0x012C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                OriginSocket;                                            // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            LauchOrientationOffset;                                  // 0x0138(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseOffsetAsRange;                                       // 0x0144(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSummonBossMobsPhase;                                    // 0x0145(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1WM6[0x2];                                   // 0x0146(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         StatusEffects;                                           // 0x0148(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		EAttackStatusEffectApplyType                               StatusEffectApplyType;                                   // 0x0158(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCBH[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAttackAnimEffect*                                   AttackAnim;                                              // 0x0160(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        WeaponAnim;                                              // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        DeflectAnim;                                             // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 DeathNotification;                                       // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              AttackVFX[0x28];                                         // 0x0188(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SoundFX[0x28];                                           // 0x01B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HitEffect[0x28];                                         // 0x01D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTagContainer                               Tags;                                                    // 0x0200(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TrackedAura
	 * Size -> 0x000C
	 */
	struct FTrackedAura
	{
	public:
		unsigned char                                              UnknownData_3RH0[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.Base
	 * Size -> 0x0038
	 */
	struct FBase
	{
	public:
		unsigned char                                              UnknownData_DRO6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABuilding*>                                   Buildings;                                               // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBuildingGridBuildingId>                     InstancedBuildings;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXTZ[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.AnimEffectParams
	 * Size -> 0x0018
	 */
	struct FAnimEffectParams
	{
	public:
		unsigned char                                              UnknownData_Z571[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BuildingNode
	 * Size -> 0x0004
	 */
	struct FBuildingNode
	{
	public:
		unsigned char                                              UnknownData_I3GZ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BestiaryData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FBestiaryData : public FTableRowBase
	{
	public:
		class UClass*                                              Creature;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               WeakpointTags;                                           // 0x0010(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UPlayerStatConfig*>                           Stats;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UPlayerStatConfig*                                   UnlockStat;                                              // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StatValuePerTier;                                        // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUOW[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ColonyIdentifier
	 * Size -> 0x0004
	 */
	struct FColonyIdentifier
	{
	public:
		unsigned char                                              UnknownData_X2AH[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.Breadcrumb
	 * Size -> 0x00B0
	 */
	struct FBreadcrumb
	{
	public:
		unsigned char                                              UnknownData_WEML[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBreadcrumbType                                            Type;                                                    // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AG6L[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0018(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TravelDistance;                                          // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SQ04[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CreationTime;                                            // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeathTime;                                               // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68Y7[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGoapActionInstance                                 AdvertisedAction;                                        // 0x0048(0x0060) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColonyIdentifier                                   Colony;                                                  // 0x00A8(0x0004) BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OH70[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.OriginalMaterialMapping
	 * Size -> 0x000C
	 */
	struct FOriginalMaterialMapping
	{
	public:
		unsigned char                                              UnknownData_U08A[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BuildingPivotUpdate
	 * Size -> 0x0060
	 */
	struct FBuildingPivotUpdate
	{
	public:
		int32_t                                                    BuildingVersion;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IE9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BuildingClass[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FTransform                                          PivotChange;                                             // 0x0030(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BaseBuildingData
	 * Size -> 0x01A8 (FullSize[0x01B0] - InheritedSize[0x0008])
	 */
	struct FBaseBuildingData : public FTableRowBase
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedWildcardDisplayName;                            // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLocString>                                  SearchableKeywords;                                      // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedDescription;                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Heat;                                                    // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P7YO[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BuildingActor[0x28];                                     // 0x0058(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BuildingActorFlipped[0x28];                              // 0x0080(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BuildingActorDiagonal[0x28];                             // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BuildingActorWall[0x28];                                 // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BuildingActorCeiling[0x28];                              // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		EBuildingSlotType                                          SlotType;                                                // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAlternateSlotType;                                   // 0x0121(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBuildingSlotType                                          AlternateSlotType;                                       // 0x0122(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBuildingGroundEmbedMode                                   EmbedMode;                                               // 0x0123(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bPlaceAtPlayerRotation : 1;                              // 0x0124(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRotateRandom : 1;                                       // 0x0124(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAllowPlaceInWater : 1;                                  // 0x0124(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBuildingBuoyantPlacementMode                              BuoyantPlacement;                                        // 0x0125(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTXE[0x2];                                   // 0x0126(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FreeBuildingPlacementDistance;                           // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuildingWallMountPlacementDistance;                      // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BuildingCeilingMountPlacementDistance;                   // 0x0130(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlacementOriginOffset;                                   // 0x0134(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoOverrideAllowedWallNormal : 1;                        // 0x0140(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SS1[0x3];                                   // 0x0141(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFloatRange                                         OverrideAllowedWallNormal;                               // 0x0144(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CozinessContribution;                                    // 0x0154(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CozinessAdditionalContribution;                          // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCozinessStructural : 1;                                 // 0x015C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ZD8[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ModelViewerMeshOverride[0x28];                           // 0x0160(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UMaterialInterface*>                          ModelViewerMaterialsOverride;                            // 0x0188(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bModelViewerAddOverheadSpotlight;                        // 0x0198(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6RN[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBuildingPivotUpdate>                        PivotUpdateHistory;                                      // 0x01A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingBlockedResult
	 * Size -> 0x0058
	 */
	struct FBuildingBlockedResult
	{
	public:
		unsigned char                                              UnknownData_IQPL[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BaseRecipeData
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FBaseRecipeData : public FTableRowBase
	{
	public:
		ERecipeVisibility                                          Visibility;                                              // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWasCut : 1;                                             // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bHideInCraftingMenu : 1;                                 // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1RW5[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        CategoryTag;                                             // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RXIJ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRecipeRequirements>                         Requirements;                                            // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 ReplaceRecipe;                                           // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.MetaBuildingIdentifier
	 * Size -> 0x0020
	 */
	struct FMetaBuildingIdentifier
	{
	public:
		struct FDataTableRowHandle                                 Building;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 Variant;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingRecipeData
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	struct FBuildingRecipeData : public FBaseRecipeData
	{
	public:
		struct FDataTableRowHandle                                 Building;                                                // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FMetaBuildingIdentifier                             MetaBuilding;                                            // 0x0048(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bIsFlammable : 1;                                        // 0x0068(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TXVJ[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BurgleQuestIntParameterValue
	 * Size -> 0x0004 (FullSize[0x0014] - InheritedSize[0x0010])
	 */
	struct FBurgleQuestIntParameterValue : public FBurgleQuestParameterValue
	{
	public:
		int32_t                                                    Value;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BurgleQuestTableRowParameterValue
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FBurgleQuestTableRowParameterValue : public FBurgleQuestParameterValue
	{
	public:
		struct FDataTableRowHandle                                 Value;                                                   // 0x0010(0x0010) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ChatWheelData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FChatWheelData : public FTableRowBase
	{
	public:
		struct FChatterEventReference                              ChatterEvent;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FLocString                                          ChatWheelName;                                           // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ChatWheelIcon;                                           // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.Colony
	 * Size -> 0x0038
	 */
	struct FColony
	{
	public:
		unsigned char                                              UnknownData_OJIX[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UColonyConfiguration*                                Config;                                                  // 0x0010(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EE9O[0x20];                                  // 0x0018(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ContextEntry
	 * Size -> 0x0020
	 */
	struct FContextEntry
	{
	public:
		class UTexture2D*                                          DisplayImage;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          DisplayString;                                           // 0x0008(0x0010) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActionTag;                                               // 0x0018(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.StreamVoiceOverData
	 * Size -> 0x0028
	 */
	struct FStreamVoiceOverData
	{
	public:
		unsigned char                                              UnknownData_3YUH[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ActiveConversationData
	 * Size -> 0x0024
	 */
	struct FActiveConversationData
	{
	public:
		unsigned char                                              UnknownData_ONHK[0x24];                                  // 0x0000(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ConversationPlayData
	 * Size -> 0x0024
	 */
	struct FConversationPlayData
	{
	public:
		unsigned char                                              UnknownData_CVZF[0x24];                                  // 0x0000(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PlayerResponseData
	 * Size -> 0x0020
	 */
	struct FPlayerResponseData
	{
	public:
		int32_t                                                    NodeId;                                                  // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BCNX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayString;                                           // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasSeen;                                                 // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KCPH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.CustomizationCameraTraceData
	 * Size -> 0x0018
	 */
	struct FCustomizationCameraTraceData
	{
	public:
		unsigned char                                              UnknownData_ND2S[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MaineRadialDamageEvent
	 * Size -> 0x0040 (FullSize[0x0080] - InheritedSize[0x0040])
	 */
	struct FMaineRadialDamageEvent : public FRadialDamageEvent
	{
	public:
		unsigned char                                              UnknownData_H27X[0x40];                                  // 0x0040(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MainePointDamageEvent
	 * Size -> 0x0040 (FullSize[0x00F0] - InheritedSize[0x00B0])
	 */
	struct FMainePointDamageEvent : public FPointDamageEvent
	{
	public:
		unsigned char                                              UnknownData_DAXL[0x40];                                  // 0x00B0(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MaineDamageEvent
	 * Size -> 0x0040 (FullSize[0x0050] - InheritedSize[0x0010])
	 */
	struct FMaineDamageEvent : public FDamageEvent
	{
	public:
		unsigned char                                              UnknownData_KF1D[0x40];                                  // 0x0010(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.DeathNotificationData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FDeathNotificationData : public FTableRowBase
	{
	public:
		TArray<struct FLocString>                                  DeathMessages;                                           // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FLocString>                                  IncapacitationMessages;                                  // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.EmoteData
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FEmoteData : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        EmoteTag;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          EmoteName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          EmoteIcon;                                               // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChatterEventReference                              ChatterEvent;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.FoliageDisplacerAudioData
	 * Size -> 0x0014
	 */
	struct FFoliageDisplacerAudioData
	{
	public:
		unsigned char                                              UnknownData_MREU[0x14];                                  // 0x0000(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.FoliageAnimationData
	 * Size -> 0x0060
	 */
	struct FFoliageAnimationData
	{
	public:
		unsigned char                                              UnknownData_I7SV[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.CachedFoliageMeshInfo
	 * Size -> 0x0060
	 */
	struct FCachedFoliageMeshInfo
	{
	public:
		struct FFoliageKey                                         FoliageKey;                                              // 0x0000(0x0020) BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          FoliageTransform;                                        // 0x0020(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TimeStampWhenRemoved;                                    // 0x0050(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UBaseLODActor>                        ActorInstance;                                           // 0x0054(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_49ET[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.FoliageDisplacerRegistration
	 * Size -> 0x0008
	 */
	struct FFoliageDisplacerRegistration
	{
	public:
		TWeakObjectPtr<class UFoliageDisplacerComponent>           Displacer;                                               // 0x0000(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.FoliageDisplaceData
	 * Size -> 0x0060
	 */
	struct FFoliageDisplaceData
	{
	public:
		unsigned char                                              UnknownData_6QKY[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFoliageDisplacerRegistration>               RegisteredDisplacers;                                    // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUCF[0x20];                                  // 0x0040(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ChatBoxMessage
	 * Size -> 0x0020
	 */
	struct FChatBoxMessage
	{
	public:
		class ASurvivalPlayerState*                                SenderPlayerState;                                       // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChatBoxMessageType                                        Type;                                                    // 0x001C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T1E1[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.GardenRecipeData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FGardenRecipeData : public FTableRowBase
	{
	public:
		struct FDataTableRowHandle                                 CatalystItem;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              SpawnData;                                               // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RareSpawnData;                                           // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SpawnSockets;                                            // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      RareSpawnChance;                                         // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Duration;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         InProductionMesh;                                        // 0x0040(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         RareSpawnInProductionMesh;                               // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         PreviewMesh;                                             // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ControlAxisMetadataPair
	 * Size -> 0x0088
	 */
	struct FControlAxisMetadataPair
	{
	public:
		struct FAxisDirectionKey                                   Key;                                                     // 0x0000(0x000C) Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5MC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FControlMetadata                                    MetaData;                                                // 0x0010(0x0078) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ItemRegionKey
	 * Size -> 0x0018
	 */
	struct FItemRegionKey
	{
	public:
		unsigned char                                              UnknownData_73JB[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PushbackActorData
	 * Size -> 0x0010
	 */
	struct FPushbackActorData
	{
	public:
		class AActor*                                              Instigator;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSincePushed;                                         // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFNL[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.HUDMarkerParameters
	 * Size -> 0x0038
	 */
	struct FHUDMarkerParameters
	{
	public:
		bool                                                       bShowDistance;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KX44[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Lifetime;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IconVariant;                                             // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorVariant;                                            // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FWF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 Quest;                                                   // 0x0018(0x0010) BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 AdditionalData;                                          // 0x0028(0x0010) BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.InterestActionNode
	 * Size -> 0x02A0
	 */
	struct FInterestActionNode
	{
	public:
		struct FGoapActionInstance                                 Action;                                                  // 0x0000(0x0060) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H57J[0x240];                                 // 0x0060(0x0240) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.WorldEvaluatorInstance
	 * Size -> 0x0010
	 */
	struct FWorldEvaluatorInstance
	{
	public:
		class UGoapWorldStateEvaluator*                            Evaluator;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A2K8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.VitalStatValue
	 * Size -> 0x000C
	 */
	struct FVitalStatValue
	{
	public:
		float                                                      VitalValue;                                              // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QWR[0x8];                                   // 0x0004(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.VitalState
	 * Size -> 0x00A8
	 */
	struct FVitalState
	{
	public:
		TMap<class UVitalStat*, struct FVitalStatValue>            Vitals;                                                  // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class UVitalStat*, struct FVitalStatValue>            DirtyVitals;                                             // 0x0050(0x0050) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1ZF[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.RealInterestState
	 * Size -> 0x00F8
	 */
	struct FRealInterestState
	{
	public:
		struct FVitalState                                         Vitals;                                                  // 0x0000(0x00A8) NativeAccessSpecifierPublic
		TMap<struct FGoapActionInstance, float>                    ActionCooldowns;                                         // 0x00A8(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.InterestStateItemStack
	 * Size -> 0x0020
	 */
	struct FInterestStateItemStack
	{
	public:
		struct FDataTableRowHandle                                 Item;                                                    // 0x0000(0x0010) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E1YH[0x10];                                  // 0x0010(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SimulatedInterestState
	 * Size -> 0x0230
	 */
	struct FSimulatedInterestState
	{
	public:
		TMap<struct FGoapActionInstance, float>                    ActionCooldowns;                                         // 0x0000(0x0050) BlueprintVisible, NativeAccessSpecifierPublic
		struct FVitalState                                         Vitals;                                                  // 0x0050(0x00A8) NativeAccessSpecifierPublic
		TArray<struct FInterestStateItemStack>                     CarriedItems;                                            // 0x00F8(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInterestStateItemStack>                     GroundItems;                                             // 0x0108(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MQRN[0x118];                                 // 0x0118(0x0118) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TriggerComponentStatus
	 * Size -> 0x0002
	 */
	struct FTriggerComponentStatus
	{
	public:
		unsigned char                                              UnknownData_H9UA[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ItemSpawnParameters
	 * Size -> 0x0020
	 */
	struct FItemSpawnParameters
	{
	public:
		EItemSpawnType                                             ItemSpawnType;                                           // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FI7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              EquippedTo;                                              // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              OverrideSpawnActor;                                      // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        GoapRegionTag;                                           // 0x0018(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AddItemResult
	 * Size -> 0x0020
	 */
	struct FAddItemResult
	{
	public:
		unsigned char                                              UnknownData_RMXA[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ItemSetData
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FItemSetData : public FTableRowBase
	{
	public:
		TArray<struct FDataTableRowHandle>                         Items;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         StatusEffects;                                           // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ConsumableData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FConsumableData : public FTableRowBase
	{
	public:
		TArray<struct FDataTableRowHandle>                         StatusEffects;                                           // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FChatterEventReference                              ConsumeChatterEvent;                                     // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EChatterConsumableType                                     ConsumeChatterType;                                      // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61R4[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ConsumableDataSet
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FConsumableDataSet : public FTableRowBase
	{
	public:
		TArray<struct FDataTableRowHandle>                         ConsumableEffects;                                       // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FChatterEventReference                              ConsumeChatterEvent;                                     // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EChatterConsumableType                                     ConsumeChatterType;                                      // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2BGJ[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.EquippedActorOption
	 * Size -> 0x0030
	 */
	struct FEquippedActorOption
	{
	public:
		struct FGameplayTag                                        CharacterType;                                           // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EquippedActor[0x28];                                     // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct Maine.ArmorAttachData
	 * Size -> 0x0030
	 */
	struct FArmorAttachData
	{
	public:
		unsigned char                                              ArmorAttachActor[0x28];                                  // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                ArmorAttachSocket;                                       // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.EquippableData
	 * Size -> 0x0040
	 */
	struct FEquippableData
	{
	public:
		class USoundCue*                                           EquipAudio;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        EquipAnim;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Durability;                                              // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageReduction;                                         // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         StatusEffects;                                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FRecipeRequirements>                         RepairRecipe;                                            // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        HairType;                                                // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.HaulingData
	 * Size -> 0x000C
	 */
	struct FHaulingData
	{
	public:
		ESocketName                                                HaulingSocket;                                           // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8CSQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxHaulCount;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StackHeight;                                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ItemProcessingStateChange
	 * Size -> 0x0020
	 */
	struct FItemProcessingStateChange
	{
	public:
		struct FGameplayTag                                        ProcessingType;                                          // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 ResultItem;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ResultItemCount;                                         // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9KON[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SpoilData
	 * Size -> 0x0018
	 */
	struct FSpoilData
	{
	public:
		ESpoilState                                                SpoilState;                                              // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJFB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 SpoiledResultItem;                                       // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ThrowData
	 * Size -> 0x0038
	 */
	struct FThrowData
	{
	public:
		bool                                                       bCanThrow;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanThrowUnderWater;                                     // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LY0E[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ThrowSpeedMultiplier;                                    // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ThrowSpeedMultiplierInWater;                             // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EThrowAttackType                                           ThrowAttackType;                                         // 0x000C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYCQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AttackDelay;                                             // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDestroyOnAttack;                                        // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD0S[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 OverrideImpactAttack;                                    // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ImpactType;                                              // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        ThrowAnim;                                               // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ItemPowerData
	 * Size -> 0x0020
	 */
	struct FItemPowerData
	{
	public:
		bool                                                       UsesPower;                                               // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysOn;                                                // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConsumesPowerDuringRest;                                // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeUsedInWater;                                       // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        UsesPowerType;                                           // 0x0004(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ProvidesPower;                                           // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalPowerTimeInHours;                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalCharges;                                            // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractAnimType                                          ChargingAnimType;                                        // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1DPD[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.InspectData
	 * Size -> 0x00D8
	 */
	struct FInspectData
	{
	public:
		unsigned char                                              InspectModelOverrideSoft[0x28];                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              InspectStaticMeshOverrideSoft[0x28];                     // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              InspectSkeletalMeshOverrideSoft[0x28];                   // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              InspectModel2DTextureOverrideSoft[0x28];                 // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UMaterialInterface*>                          InspectMaterialsOverride;                                // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      ModelScale;                                              // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_09EH[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FConversationReference                              Conversation;                                            // 0x00B8(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConversationStartNode;                                   // 0x00D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InspectKeyItemOnPickup;                                  // 0x00D4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowYRotation;                                         // 0x00D5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSkyLight;                                           // 0x00D6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHEC[0x1];                                   // 0x00D7(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.GlidingData
	 * Size -> 0x0020
	 */
	struct FGlidingData
	{
	public:
		EGlidingStyle                                              Style;                                                   // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KEXE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StaminaDrainPerSecond;                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForwardAcceleration;                                     // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForwardVelocity;                                      // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DescendSpeed;                                            // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DescendDrag;                                             // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LiftAcceleration;                                        // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bUseWhileSwimming : 1;                                   // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BA2A[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BaseItemData
	 * Size -> 0x0590 (FullSize[0x0598] - InheritedSize[0x0008])
	 */
	struct FBaseItemData : public FTableRowBase
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedWildcardDisplayName;                            // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLocString>                                  SearchableKeywords;                                      // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedDescription;                                    // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Icon;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ModIcon;                                                 // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EItemType                                                  ItemType;                                                // 0x0058(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RJO9[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        RarityTag;                                               // 0x005C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        StackSizeTag;                                            // 0x0064(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        KeyItemCategory;                                         // 0x006C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        KeyItemSubCategory;                                      // 0x0074(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07H5[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 BestiaryData;                                            // 0x0080(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         UnlockRecipes;                                           // 0x0090(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         ResearchUnlockRecipes;                                   // 0x00A0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         NewResearchUnlockRecipes;                                // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         TechTreeUnlocks;                                         // 0x00C0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              WorldActor[0x28];                                        // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              DynamicMesh[0x28];                                       // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<class UMaterialInterface*>                          DynamicMaterials;                                        // 0x0120(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    Tier;                                                    // 0x0130(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWorldMarker : 1;                                        // 0x0134(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCanEnhance : 1;                                         // 0x0134(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XNP[0x3];                                   // 0x0135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               OverrideValidEnhancementTags;                            // 0x0138(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              bHotDroppable : 1;                                       // 0x0158(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIsFlammable : 1;                                        // 0x0158(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KY7L : 1;                                    // 0x0158(0x0001) BIT_FIELD (PADDING)
		unsigned char                                              bWasCut : 1;                                             // 0x0158(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8K6[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PlayerEquippedActor[0x28];                               // 0x0160(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FEquippedActorOption>                        CustomEquippedActors;                                    // 0x0188(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FArmorAttachData                                    ArmorAttachData;                                         // 0x0198(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FArmorAttachData                                    FirstPersonArmorAttachData;                              // 0x01C8(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FEquippableData                                     EquippableData;                                          // 0x01F8(0x0040) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		EEquipmentSlot                                             Slot;                                                    // 0x0238(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TwoHanded;                                               // 0x0239(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_185A[0x2];                                   // 0x023A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Stance;                                                  // 0x023C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESocketName                                                OverrideEquipSocket;                                     // 0x0240(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDMarkerType                                             MarkerType;                                              // 0x0241(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3MY[0x2];                                   // 0x0242(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MarkerVariation;                                         // 0x0244(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLightSource;                                          // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBlock;                                               // 0x0249(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B3C9[0x2];                                   // 0x024A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockDamageMultiplier;                                   // 0x024C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockStaminaCost;                                        // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockStaminaRegenMultiplier;                             // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        BlockAnim;                                               // 0x0258(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBaseAnimEffect*                                     BlockedEffectAnim;                                       // 0x0260(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BlockSound[0x28];                                        // 0x0268(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              PerfectBlockSound[0x28];                                 // 0x0290(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FAttackComboData                                    AttackComboData;                                         // 0x02B8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAttackComboData                                    AlternateAttackComboData;                                // 0x02D8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FAttackComboData                                    SwimmingAttackComboData;                                 // 0x02F8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FAttackAmmoData>                             AmmoAttackData;                                          // 0x0318(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         ConsumableData;                                          // 0x0328(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class USoundCue*                                           ConsumeAudio;                                            // 0x0338(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInteractAnimType                                          ConsumeAnimType;                                         // 0x0340(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bBurgleQuestCanAnalyze : 1;                              // 0x0341(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8110[0x2];                                   // 0x0342(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BurgleQuestAnalyzeRewardLevel;                           // 0x0344(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGoapActionConsumeItem*                              OverrideTemplateConsumeAction;                           // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FHaulingData                                        HaulingData;                                             // 0x0350(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DENT[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemProcessingStateChange>                  ProcessingOptions;                                       // 0x0360(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              ProcessingActorOverride[0x28];                           // 0x0370(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      HatchTime;                                               // 0x0398(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_15UZ[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHatchingDataAsset*                                  HatchData;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGardenModifierType                                        GardenModifierType;                                      // 0x03A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1279[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GardenModifierValue;                                     // 0x03AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSpoilData                                          SpoilData;                                               // 0x03B0(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FThrowData                                          ThrowData;                                               // 0x03C8(0x0038) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FItemPowerData                                      PowerData;                                               // 0x0400(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FInspectData                                        InspectData;                                             // 0x0420(0x00D8) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGlidingData                                        GlidingData;                                             // 0x04F8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ResourceCategory;                                        // 0x0518(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               Tags;                                                    // 0x0538(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TelemetryTag;                                            // 0x0558(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           PickupAudio;                                             // 0x0560(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AudioData[0x28];                                         // 0x0568(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EInteractAnimType                                          InteractAnimType;                                        // 0x0590(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26FA[0x7];                                   // 0x0591(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.LabMachineMeshGroup
	 * Size -> 0x0028
	 */
	struct FLabMachineMeshGroup
	{
	public:
		TArray<class UStaticMesh*>                                 Cabinet;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UStaticMesh*>                                 Doodads;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UStaticMesh*                                         Trim;                                                    // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.LabMachineBlueprintableInfo
	 * Size -> 0x0038
	 */
	struct FLabMachineBlueprintableInfo
	{
	public:
		unsigned char                                              CabinetDoodadsTop;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetOneDoodadsBottom;                                 // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetPanelTop;                                         // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetOnePanelBottom;                                   // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetTwoFrontPanelTop;                                 // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetTwoInsetDoodadsTop;                               // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetTwoFrontPanelBottom;                              // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetTwoInsetDoodadsBottom;                            // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CabinetDoor;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TopPiece;                                                // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConsolePlate;                                            // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConsoleButtons;                                          // 0x000B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConsoleFrontPanel;                                       // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ConsoleDoodads;                                          // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CollisionEnabled;                                        // 0x000E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasMonitor;                                              // 0x000F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CollisionDisabled;                                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              VariantType;                                             // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipCabinet;                                             // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BlinkingLights;                                          // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ManuallyOverrideMaterials;                               // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LightsOut;                                               // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CabinetDoorA;                                            // 0x0016(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanHaveDoodadsOne;                                       // 0x0017(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanHaveDoodadsTwo;                                       // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanHaveDoodadsThree;                                     // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanHaveDoodadsFour;                                      // 0x001A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanHaveDoodadsFive;                                      // 0x001B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CabinetPanelTrimTop;                                     // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CabinetOnePanelTrimBottom;                               // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CabinetTwoPanelTrimTop;                                  // 0x001E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CabinetTwoPanelTrimBottom;                               // 0x001F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasCabinet;                                              // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasConsoleA;                                             // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ConsolePanelTrim;                                        // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FlipConsole;                                             // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TableBaseVariant;                                        // 0x0024(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EmissiveStrip;                                           // 0x0025(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8B7F[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        EmissiveStripColor;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.LODActorClassData
	 * Size -> 0x0088
	 */
	struct FLODActorClassData
	{
	public:
		class UClass*                                              ClassPointer;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9Q1[0x28];                                  // 0x0008(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ProxyStandInClass;                                       // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZSW[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TrackedLooker
	 * Size -> 0x000C
	 */
	struct FTrackedLooker
	{
	public:
		unsigned char                                              UnknownData_5OTL[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PuzzlePieceZoneData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FPuzzlePieceZoneData : public FTableRowBase
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EPuzzlePieceZone                                           Zone;                                                    // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N555[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MetaBuildingVariantData
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FMetaBuildingVariantData : public FTableRowBase
	{
	public:
		unsigned char                                              bDummy : 1;                                              // 0x0008(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VJ3M[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.MetaBuildingData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FMetaBuildingData : public FTableRowBase
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CategoryTag;                                             // 0x0018(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         SubBuildings;                                            // 0x0020(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FDataTableRowHandle>                         SubBuildingVariants;                                     // 0x0030(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct Maine.ObjectRefCounter
	 * Size -> 0x0030
	 */
	struct FObjectRefCounter
	{
	public:
		unsigned char                                              UnknownData_FFWB[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ReputationData
	 * Size -> 0x000C
	 */
	struct FReputationData
	{
	public:
		struct FGameplayTag                                        FactionTag;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PerkCondition
	 * Size -> 0x0004
	 */
	struct FPerkCondition
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PerkReward
	 * Size -> 0x0020
	 */
	struct FPerkReward
	{
	public:
		TArray<struct FDataTableRowHandle>                         StatusEffects;                                           // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         Recipes;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PerkTier
	 * Size -> 0x0028
	 */
	struct FPerkTier
	{
	public:
		struct FPerkCondition                                      Condition;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCV1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPerkReward                                         Reward;                                                  // 0x0008(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PerkData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FPerkData : public FTableRowBase
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedDescription;                                    // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPlayerStatConfig*                                   Stat;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReference                            GlobalVariable;                                          // 0x0038(0x0010) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPerkTier>                                   Tiers;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PerlinNoise
	 * Size -> 0x1014
	 */
	struct FPerlinNoise
	{
	public:
		unsigned char                                              UnknownData_KEBV[0x1014];                                // 0x0000(0x1014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PetPersonalityData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FPetPersonalityData : public FTableRowBase
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3U7A[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PlayerUpgradeTier
	 * Size -> 0x0018
	 */
	struct FPlayerUpgradeTier
	{
	public:
		struct FDataTableRowHandle                                 StatusEffectData;                                        // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V4MC[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PlayerUpgradeData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FPlayerUpgradeData : public FTableRowBase
	{
	public:
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		int32_t                                                    BaseCost;                                                // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerUpgradeType                                         UpgradeType;                                             // 0x0044(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y693[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPlayerUpgradeTier>                          Tiers;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PopulationMonitorSample
	 * Size -> 0x0010
	 */
	struct FPopulationMonitorSample
	{
	public:
		class UClass*                                              ActorType;                                               // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SampleTime;                                              // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SampleValue;                                             // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.BuildingPowerBipartiteSet
	 * Size -> 0x0050
	 */
	struct FBuildingPowerBipartiteSet
	{
	public:
		unsigned char                                              UnknownData_IYZE[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.BuildingPowerEdge
	 * Size -> 0x0010
	 */
	struct FBuildingPowerEdge
	{
	public:
		int32_t                                                    NodeA;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NodeB;                                                   // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NetworkIdA;                                              // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NetworkIdB;                                              // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.PowerTypeData
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FPowerTypeData : public FTableRowBase
	{
	public:
		struct FGameplayTag                                        GameplayTag;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          LocalizedDisplayName;                                    // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          SlotBacking;                                             // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              SlotBackingColor;                                        // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConsumable;                                           // 0x002C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU07[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         ConsumableEffects;                                       // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bCanDump;                                                // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PHUO[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DumpedActor;                                             // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ProceduralAnimationHandle
	 * Size -> 0x0004
	 */
	struct FProceduralAnimationHandle
	{
	public:
		unsigned char                                              UnknownData_HMHH[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ObjectiveHUDMarkerData
	 * Size -> 0x0018
	 */
	struct FObjectiveHUDMarkerData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ActorTagOverride;                                        // 0x000C(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDMarkerType                                             MarkerType;                                              // 0x0014(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowDistance;                                            // 0x0015(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_39R6[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.QuestGlobalVariableData
	 * Size -> 0x0058
	 */
	struct FQuestGlobalVariableData
	{
	public:
		struct FGlobalVariableReference                            TriggerStartGlobal;                                      // 0x0000(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperator                                        TriggerStartGlobalComparisonOperator;                    // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z25Z[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TriggerStartGlobalValue;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReference                            TriggerCompleteGlobal;                                   // 0x0018(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EComparisonOperator                                        TriggerCompleteGlobalComparisonOperator;                 // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ER97[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TriggerCompleteGlobalValue;                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReference                            OnStartGlobalVariable;                                   // 0x0030(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnStartGlobalVariableValue;                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGlobalVariableReference                            OnCompleteGlobalVariable;                                // 0x0044(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OnCompleteGlobalVariableValue;                           // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.QuestConversationData
	 * Size -> 0x0020
	 */
	struct FQuestConversationData
	{
	public:
		struct FConversationReference                              ConversationReference;                                   // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NodeId;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GP9I[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ObjectiveData
	 * Size -> 0x00F0
	 */
	struct FObjectiveData
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartsHidden;                                            // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisplaysObjectiveMarker;                                 // 0x0011(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWVB[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 RecipeOrItem;                                            // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EQuestObjectiveType                                        ObjectiveType;                                           // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2C7[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FObjectiveHUDMarkerData                             HUDMarkerData;                                           // 0x002C(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FQuestGlobalVariableData                            GlobalVariableData;                                      // 0x0044(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IPKR[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestConversationData                              ObjectiveStartConversation;                              // 0x00A0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ObjectiveStartConversationDelay;                         // 0x00C0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QP9T[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestConversationData                              ObjectiveCompleteConversation;                           // 0x00C8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ObjectiveCompleteConversationDelay;                      // 0x00E8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DisabledForPackageFlags;                                 // 0x00EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.QuestData
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FQuestData : public FTableRowBase
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          Description;                                             // 0x0018(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FObjectiveData>                              Objectives;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FQuestGlobalVariableData                            GlobalVariableData;                                      // 0x0038(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FQuestConversationData                              QuestStartConversation;                                  // 0x0090(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      QuestStartConversationDelay;                             // 0x00B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMRC[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuestConversationData                              QuestCompleteConversation;                               // 0x00B8(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      QuestCompleteConversationDelay;                          // 0x00D8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DisabledForPackageFlags;                                 // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OnlyValidInDevelopmentContent;                           // 0x00E0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocalClientQuest;                                      // 0x00E1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       StartsAsStickied;                                        // 0x00E2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Tutorial;                                                // 0x00E3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoSaveOnComplete;                                      // 0x00E4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EFKW[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.RecipeData
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	struct FRecipeData : public FBaseRecipeData
	{
	public:
		struct FDataTableRowHandle                                 CraftedItem;                                             // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    CraftedItemCount;                                        // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8N1[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 ToolRequired;                                            // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FGameplayTag                                        CraftingBuildingTag;                                     // 0x0060(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FRecipeMod>                                  RecipeMods;                                              // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              bBurgleQuestCanCraft : 1;                                // 0x0078(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQO5[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BurgleQuestCraftRewardLevel;                             // 0x007C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BurgleQuestMinCount;                                     // 0x0080(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BurgleQuestMaxCount;                                     // 0x0084(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BurgleQuestMaxCountProgress;                             // 0x0088(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVBK[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ReplicatedFoliageRemovedData
	 * Size -> 0x0008
	 */
	struct FReplicatedFoliageRemovedData
	{
	public:
		unsigned char                                              UnknownData_DFQJ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ReplicatedFoliageAddedData
	 * Size -> 0x000C
	 */
	struct FReplicatedFoliageAddedData
	{
	public:
		unsigned char                                              UnknownData_1BX1[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ActiveScreenEffect
	 * Size -> 0x0018
	 */
	struct FActiveScreenEffect
	{
	public:
		class UScreenEffectData*                                   ScreenEffectData;                                        // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3I5J[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SignSetData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FSignSetData : public FTableRowBase
	{
	public:
		class UDataTable*                                          Table;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESignUnlockType                                            UnlockType;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5P2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SignBuildingData
	 * Size -> 0x0070 (FullSize[0x0078] - InheritedSize[0x0008])
	 */
	struct FSignBuildingData : public FTableRowBase
	{
	public:
		unsigned char                                              Icon[0x28];                                              // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Material[0x28];                                          // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FGameplayTagContainer                               Tags;                                                    // 0x0058(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.CachedCollisionSettings
	 * Size -> 0x0028
	 */
	struct FCachedCollisionSettings
	{
	public:
		unsigned char                                              bPhysicsEnabled : 1;                                     // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bGravityEnabled : 1;                                     // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionEnabled                                          CollisionType;                                           // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CD15[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearDamping;                                           // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCollisionResponseContainer                         Responses;                                               // 0x0008(0x0020) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.StatusEffectData
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FStatusEffectData : public FTableRowBase
	{
	public:
		struct FStatusEffectUIData                                 DisplayData;                                             // 0x0008(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		EStatusEffectType                                          Type;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDL4[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectDurationType                                  DurationType;                                            // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGS8[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Interval;                                                // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DamageTypeFlags;                                         // 0x0044(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0048(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ApplicationTags;                                         // 0x0050(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               EffectTags;                                              // 0x0070(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DamageSourceTags;                                        // 0x0090(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               DamageTargetTags;                                        // 0x00B0(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FGameplayTag                                        UniqueTag;                                               // 0x00D0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStatusEffectApplyType                                     ApplyType;                                               // 0x00D8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_43QM[0x3];                                   // 0x00D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ClearFlags;                                              // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 ExtraData;                                               // 0x00E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              SpawnedActor[0x28];                                      // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		class UScreenEffectData*                                   ScreenEffectData;                                        // 0x0118(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UVisualEffect*                                       VisualEffectData;                                        // 0x0120(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInUI;                                               // 0x0128(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNegativeEffectInUI;                                   // 0x0129(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStackInUI;                                              // 0x012A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3FCB[0x5];                                   // 0x012B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.StatusEffectReferenceData
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FStatusEffectReferenceData : public FTableRowBase
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDataTableRowHandle                                 Category;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FLocString                                          DisplayName;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          Description;                                             // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.StatusEffectReferenceCategoryData
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FStatusEffectReferenceCategoryData : public FTableRowBase
	{
	public:
		struct FLocString                                          CategoryName;                                            // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.AICombatAction
	 * Size -> 0x0018
	 */
	struct FAICombatAction
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAttack*                                             DesiredAttack;                                           // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        AnimPreAttack;                                           // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.SurvivalCharacterData
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FSurvivalCharacterData : public FTableRowBase
	{
	public:
		class UObject*                                             Icon;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          CharacterName;                                           // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               CharacterTags;                                           // 0x0020(0x0020) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              bTameable : 1;                                           // 0x0040(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0I92[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         TamingFood;                                              // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         PetPersonalities;                                        // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         ActivePetPassiveEffects;                                 // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              DebugSpawnActor[0x28];                                   // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct Maine.ValueAdjustment
	 * Size -> 0x000C
	 */
	struct FValueAdjustment
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumValue;                                            // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumValue;                                            // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TeamData
	 * Size -> 0x0058 (FullSize[0x0060] - InheritedSize[0x0008])
	 */
	struct FTeamData : public FTableRowBase
	{
	public:
		ETeamAttitude                                              DefaultRelationship;                                     // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJJS[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         FriendlyTeams;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         NeutralTeams;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         HostileTeams;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDataTableRowHandle>                         FleeTeams;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bAlwaysFlee;                                             // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSO7[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        FactionTag;                                              // 0x0054(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReputationOnDeath;                                       // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TechTreeData
	 * Size -> 0x00B8 (FullSize[0x00C0] - InheritedSize[0x0008])
	 */
	struct FTechTreeData : public FTableRowBase
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          DisplayDescription;                                      // 0x0018(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         IconBrush;                                               // 0x0028(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UDataTable*                                          TechTreeRecipesTable;                                    // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ScienceRewardOnUnlock;                                   // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4STN[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TechTreeRecipeData
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FTechTreeRecipeData : public FTableRowBase
	{
	public:
		struct FLocString                                          OverrideDisplayName;                                     // 0x0008(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          OverrideDisplayDescription;                              // 0x0018(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETechTreeUnlockType                                        UnlockType;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BUB4[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         UnlockData;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FGameplayTag>                                UnlockDataTags;                                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    Cost;                                                    // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredTechTreeUnlocks;                                 // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TrackedSpawnData
	 * Size -> 0x0030
	 */
	struct FTrackedSpawnData
	{
	public:
		unsigned char                                              UnknownData_BIJN[0x30];                                  // 0x0000(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TutorialControlIdentifier
	 * Size -> 0x000C
	 */
	struct FTutorialControlIdentifier
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAxisPositive;                                           // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QHKV[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.TutorialPageData
	 * Size -> 0x0068
	 */
	struct FTutorialPageData
	{
	public:
		unsigned char                                              TutorialIconSoft[0x28];                                  // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLocString                                          TutorialTitle;                                           // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          TutorialText;                                            // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          TutorialDescription;                                     // 0x0048(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTutorialControlIdentifier>                  TutorialControls;                                        // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.TutorialData
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FTutorialData : public FTableRowBase
	{
	public:
		unsigned char                                              TutorialIconSoft[0x28];                                  // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FTutorialControlIdentifier>                  TutorialControls;                                        // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLocString                                          TutorialTitle;                                           // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          TutorialText;                                            // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLocString                                          TutorialDescription;                                     // 0x0060(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTutorialPageData>                           TutorialPages;                                           // 0x0070(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		ETutorialDisplayTime                                       TutorialDisplayTime;                                     // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1UVN[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        CategoryTag;                                             // 0x0084(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETutorialLogType                                           LogType;                                                 // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowEvenWhenTutorialsDisabled;                          // 0x008D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5HCX[0x2];                                   // 0x008E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.CameraTarget
	 * Size -> 0x0610
	 */
	struct FCameraTarget
	{
	public:
		unsigned char                                              UnknownData_01LY[0x610];                                 // 0x0000(0x0610) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.SpawnedWaveActorData
	 * Size -> 0x0018
	 */
	struct FSpawnedWaveActorData
	{
	public:
		unsigned char                                              UnknownData_R3KM[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PendingWaveSpawn
	 * Size -> 0x0020
	 */
	struct FPendingWaveSpawn
	{
	public:
		TArray<class UClass*>                                      Spawns;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		class AWaveSpawnTarget*                                    SpawnTarget;                                             // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnRequestID;                                          // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2T1W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.WaveSpawnParams
	 * Size -> 0x0008
	 */
	struct FWaveSpawnParams
	{
	public:
		float                                                      SpawnChance;                                             // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Heat;                                                    // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ZoneData
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FZoneData : public FTableRowBase
	{
	public:
		struct FLocString                                          DisplayName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInteriorTrigger;                                     // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SB5P[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 ZoneAudio;                                               // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct Maine.ZoneReverbSettings
	 * Size -> 0x0020
	 */
	struct FZoneReverbSettings
	{
	public:
		class UReverbEffect*                                       ReverbEffect;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TagName;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Volume;                                                  // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeTime;                                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6P2[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.ZoneAudioData
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FZoneAudioData : public FTableRowBase
	{
	public:
		class UDataTable*                                          OneShotTable;                                            // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UQuadAudioBedSounds*                                 QuadAudioBedSounds;                                      // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMusicSettings*                                      OverrideMusicSettings;                                   // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FZoneReverbSettings                                 ReverbSettings;                                          // 0x0020(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bInteriorAudio;                                          // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRNL[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Maine.PendingVolumes
	 * Size -> 0x0018
	 */
	struct FPendingVolumes
	{
	public:
		unsigned char                                              UnknownData_NCWV[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APhotoPawn;
enum class EPhotoModeEntryAllowedResult : uint8;
class UInputComponent;
class APlayerController;
class ACharacter;
struct FPhotoModeCharacterCollisionInfo;
class APawn;
class AActor;
struct FTransform;
class UAnimMontage;
class AGameModeBase;
#ifdef OEIPHOTOMODE_PhotoModeComponent_generated_h
#error "PhotoModeComponent.generated.h already included, missing '#pragma once' in PhotoModeComponent.h"
#endif
#define OEIPHOTOMODE_PhotoModeComponent_generated_h

#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_RPC_WRAPPERS \
	virtual void ClientOnPhotoModeEntered_Implementation(APhotoPawn* PhotoPawn); \
	virtual void ClientOnPhotoModeExited_Implementation(); \
	virtual void ClientOnPhotoModeGroupEntryUnallowed_Implementation(EPhotoModeEntryAllowedResult Reason); \
	virtual void ClientOnPhotoPawnSetupInputs_Implementation(APhotoPawn* PhotoPawn, UInputComponent* InputComponent); \
	virtual void ClientPrePhotoModeEntered_Implementation(APlayerController* PlayerController); \
	virtual void ClientSetPoseableCloneOnMatchingClient_Implementation(APlayerController* OwningController, ACharacter* InClone, FPhotoModeCharacterCollisionInfo CollisionInfo); \
	virtual void MulticastEnterPhotoModeAsGroup_Implementation(APawn* InstigatingPossessedPawn); \
	virtual void MulticastExitPhotoModeAsGroup_Implementation(APawn* InstigatingPawn); \
	virtual void MulticastOnCharacterYawOffsetChanged_Implementation(AActor* Actor, FTransform Transform); \
	virtual void MulticastSetCharacterVisibility_Implementation(ACharacter* Character, bool Visible); \
	virtual void MulticastSetEquipmentVisibility_Implementation(ACharacter* Character, FName AssociatedTag, bool Visible); \
	virtual void MulticastSetPhotoModePose_Implementation(ACharacter* Clone, UAnimMontage* Montage, float BlendValue); \
	virtual void ServerDestroyPhotoModePoseableClone_Implementation(ACharacter* Clone); \
	virtual void ServerEnterPhotoModeAsGroup_Implementation(APlayerController* InstigatingController); \
	virtual void ServerExitPhotoModeAsGroup_Implementation(APawn* InstigatingPawn); \
	virtual void ServerHideEquipment_Implementation(ACharacter* Character, FName AssociatedTag); \
	virtual void ServerHideOriginalPawn_Implementation(APawn* OriginalPawn); \
	virtual void ServerHidePoseableClone_Implementation(ACharacter* PoseableClone); \
	virtual void ServerOnCharacterYawOffsetChanged_Implementation(AActor* Actor, FTransform Transform); \
	virtual void ServerOnPhotoModeExited_Implementation(); \
	virtual void ServerOnPostLogin_Implementation(AGameModeBase* GameMode, APlayerController* NewPlayer); \
	virtual void ServerPhotoModeSpawnPoseableClone_Implementation(APlayerController* ActivatingController, APawn* OriginalPawn); \
	virtual void ServerPostSpawnPhotoModePoseableClone_Implementation(APawn* OriginalPawn, ACharacter* Clone, FPhotoModeCharacterCollisionInfo CollisionInfo); \
	virtual void ServerPrePhotoModeEntered_Implementation(APlayerController* PlayerController); \
	virtual void ServerPreSpawnPhotoModePoseableClone_Implementation(APawn* OriginalPawn); \
	virtual void ServerSetIsReadyToEnterPhotoMode_Implementation(bool Ready); \
	virtual void ServerSetPhotoModePose_Implementation(ACharacter* Clone, UAnimMontage* Montage, float BlendValue); \
	virtual void ServerShowEquipment_Implementation(ACharacter* Character, FName AssociatedTag); \
	virtual void ServerShowOriginalPawn_Implementation(APawn* OriginalPawn); \
	virtual void ServerShowPoseableClone_Implementation(ACharacter* PoseableClone); \
 \
	DECLARE_FUNCTION(execCheckIsReadyToEnterPhotoMode); \
	DECLARE_FUNCTION(execClientOnPhotoModeEntered); \
	DECLARE_FUNCTION(execClientOnPhotoModeExited); \
	DECLARE_FUNCTION(execClientOnPhotoModeGroupEntryUnallowed); \
	DECLARE_FUNCTION(execClientOnPhotoPawnSetupInputs); \
	DECLARE_FUNCTION(execClientPrePhotoModeEntered); \
	DECLARE_FUNCTION(execClientSetPoseableCloneOnMatchingClient); \
	DECLARE_FUNCTION(execEnterPhotoMode); \
	DECLARE_FUNCTION(execIsPhotoModeEntryAllowed); \
	DECLARE_FUNCTION(execMulticastEnterPhotoModeAsGroup); \
	DECLARE_FUNCTION(execMulticastExitPhotoModeAsGroup); \
	DECLARE_FUNCTION(execMulticastOnCharacterYawOffsetChanged); \
	DECLARE_FUNCTION(execMulticastSetCharacterVisibility); \
	DECLARE_FUNCTION(execMulticastSetEquipmentVisibility); \
	DECLARE_FUNCTION(execMulticastSetPhotoModePose); \
	DECLARE_FUNCTION(execServerDestroyPhotoModePoseableClone); \
	DECLARE_FUNCTION(execServerEnterPhotoModeAsGroup); \
	DECLARE_FUNCTION(execServerExitPhotoModeAsGroup); \
	DECLARE_FUNCTION(execServerHideEquipment); \
	DECLARE_FUNCTION(execServerHideOriginalPawn); \
	DECLARE_FUNCTION(execServerHidePoseableClone); \
	DECLARE_FUNCTION(execServerOnCharacterYawOffsetChanged); \
	DECLARE_FUNCTION(execServerOnPhotoModeExited); \
	DECLARE_FUNCTION(execServerOnPostLogin); \
	DECLARE_FUNCTION(execServerPhotoModeSpawnPoseableClone); \
	DECLARE_FUNCTION(execServerPostSpawnPhotoModePoseableClone); \
	DECLARE_FUNCTION(execServerPrePhotoModeEntered); \
	DECLARE_FUNCTION(execServerPreSpawnPhotoModePoseableClone); \
	DECLARE_FUNCTION(execServerSetIsReadyToEnterPhotoMode); \
	DECLARE_FUNCTION(execServerSetPhotoModePose); \
	DECLARE_FUNCTION(execServerShowEquipment); \
	DECLARE_FUNCTION(execServerShowOriginalPawn); \
	DECLARE_FUNCTION(execServerShowPoseableClone); \
	DECLARE_FUNCTION(execSpawnPoseableClone);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientOnPhotoModeEntered_Implementation(APhotoPawn* PhotoPawn); \
	virtual void ClientOnPhotoModeExited_Implementation(); \
	virtual void ClientOnPhotoModeGroupEntryUnallowed_Implementation(EPhotoModeEntryAllowedResult Reason); \
	virtual void ClientOnPhotoPawnSetupInputs_Implementation(APhotoPawn* PhotoPawn, UInputComponent* InputComponent); \
	virtual void ClientPrePhotoModeEntered_Implementation(APlayerController* PlayerController); \
	virtual void ClientSetPoseableCloneOnMatchingClient_Implementation(APlayerController* OwningController, ACharacter* InClone, FPhotoModeCharacterCollisionInfo CollisionInfo); \
	virtual void MulticastEnterPhotoModeAsGroup_Implementation(APawn* InstigatingPossessedPawn); \
	virtual void MulticastExitPhotoModeAsGroup_Implementation(APawn* InstigatingPawn); \
	virtual void MulticastOnCharacterYawOffsetChanged_Implementation(AActor* Actor, FTransform Transform); \
	virtual void MulticastSetCharacterVisibility_Implementation(ACharacter* Character, bool Visible); \
	virtual void MulticastSetEquipmentVisibility_Implementation(ACharacter* Character, FName AssociatedTag, bool Visible); \
	virtual void MulticastSetPhotoModePose_Implementation(ACharacter* Clone, UAnimMontage* Montage, float BlendValue); \
	virtual void ServerDestroyPhotoModePoseableClone_Implementation(ACharacter* Clone); \
	virtual void ServerEnterPhotoModeAsGroup_Implementation(APlayerController* InstigatingController); \
	virtual void ServerExitPhotoModeAsGroup_Implementation(APawn* InstigatingPawn); \
	virtual void ServerHideEquipment_Implementation(ACharacter* Character, FName AssociatedTag); \
	virtual void ServerHideOriginalPawn_Implementation(APawn* OriginalPawn); \
	virtual void ServerHidePoseableClone_Implementation(ACharacter* PoseableClone); \
	virtual void ServerOnCharacterYawOffsetChanged_Implementation(AActor* Actor, FTransform Transform); \
	virtual void ServerOnPhotoModeExited_Implementation(); \
	virtual void ServerOnPostLogin_Implementation(AGameModeBase* GameMode, APlayerController* NewPlayer); \
	virtual void ServerPhotoModeSpawnPoseableClone_Implementation(APlayerController* ActivatingController, APawn* OriginalPawn); \
	virtual void ServerPostSpawnPhotoModePoseableClone_Implementation(APawn* OriginalPawn, ACharacter* Clone, FPhotoModeCharacterCollisionInfo CollisionInfo); \
	virtual void ServerPrePhotoModeEntered_Implementation(APlayerController* PlayerController); \
	virtual void ServerPreSpawnPhotoModePoseableClone_Implementation(APawn* OriginalPawn); \
	virtual void ServerSetIsReadyToEnterPhotoMode_Implementation(bool Ready); \
	virtual void ServerSetPhotoModePose_Implementation(ACharacter* Clone, UAnimMontage* Montage, float BlendValue); \
	virtual void ServerShowEquipment_Implementation(ACharacter* Character, FName AssociatedTag); \
	virtual void ServerShowOriginalPawn_Implementation(APawn* OriginalPawn); \
	virtual void ServerShowPoseableClone_Implementation(ACharacter* PoseableClone); \
 \
	DECLARE_FUNCTION(execCheckIsReadyToEnterPhotoMode); \
	DECLARE_FUNCTION(execClientOnPhotoModeEntered); \
	DECLARE_FUNCTION(execClientOnPhotoModeExited); \
	DECLARE_FUNCTION(execClientOnPhotoModeGroupEntryUnallowed); \
	DECLARE_FUNCTION(execClientOnPhotoPawnSetupInputs); \
	DECLARE_FUNCTION(execClientPrePhotoModeEntered); \
	DECLARE_FUNCTION(execClientSetPoseableCloneOnMatchingClient); \
	DECLARE_FUNCTION(execEnterPhotoMode); \
	DECLARE_FUNCTION(execIsPhotoModeEntryAllowed); \
	DECLARE_FUNCTION(execMulticastEnterPhotoModeAsGroup); \
	DECLARE_FUNCTION(execMulticastExitPhotoModeAsGroup); \
	DECLARE_FUNCTION(execMulticastOnCharacterYawOffsetChanged); \
	DECLARE_FUNCTION(execMulticastSetCharacterVisibility); \
	DECLARE_FUNCTION(execMulticastSetEquipmentVisibility); \
	DECLARE_FUNCTION(execMulticastSetPhotoModePose); \
	DECLARE_FUNCTION(execServerDestroyPhotoModePoseableClone); \
	DECLARE_FUNCTION(execServerEnterPhotoModeAsGroup); \
	DECLARE_FUNCTION(execServerExitPhotoModeAsGroup); \
	DECLARE_FUNCTION(execServerHideEquipment); \
	DECLARE_FUNCTION(execServerHideOriginalPawn); \
	DECLARE_FUNCTION(execServerHidePoseableClone); \
	DECLARE_FUNCTION(execServerOnCharacterYawOffsetChanged); \
	DECLARE_FUNCTION(execServerOnPhotoModeExited); \
	DECLARE_FUNCTION(execServerOnPostLogin); \
	DECLARE_FUNCTION(execServerPhotoModeSpawnPoseableClone); \
	DECLARE_FUNCTION(execServerPostSpawnPhotoModePoseableClone); \
	DECLARE_FUNCTION(execServerPrePhotoModeEntered); \
	DECLARE_FUNCTION(execServerPreSpawnPhotoModePoseableClone); \
	DECLARE_FUNCTION(execServerSetIsReadyToEnterPhotoMode); \
	DECLARE_FUNCTION(execServerSetPhotoModePose); \
	DECLARE_FUNCTION(execServerShowEquipment); \
	DECLARE_FUNCTION(execServerShowOriginalPawn); \
	DECLARE_FUNCTION(execServerShowPoseableClone); \
	DECLARE_FUNCTION(execSpawnPoseableClone);


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_EVENT_PARMS \
	struct PhotoModeComponent_eventClientOnPhotoModeEntered_Parms \
	{ \
		APhotoPawn* PhotoPawn; \
	}; \
	struct PhotoModeComponent_eventClientOnPhotoModeGroupEntryUnallowed_Parms \
	{ \
		EPhotoModeEntryAllowedResult Reason; \
	}; \
	struct PhotoModeComponent_eventClientOnPhotoPawnSetupInputs_Parms \
	{ \
		APhotoPawn* PhotoPawn; \
		UInputComponent* InputComponent; \
	}; \
	struct PhotoModeComponent_eventClientPrePhotoModeEntered_Parms \
	{ \
		APlayerController* PlayerController; \
	}; \
	struct PhotoModeComponent_eventClientSetPoseableCloneOnMatchingClient_Parms \
	{ \
		APlayerController* OwningController; \
		ACharacter* InClone; \
		FPhotoModeCharacterCollisionInfo CollisionInfo; \
	}; \
	struct PhotoModeComponent_eventMulticastEnterPhotoModeAsGroup_Parms \
	{ \
		APawn* InstigatingPossessedPawn; \
	}; \
	struct PhotoModeComponent_eventMulticastExitPhotoModeAsGroup_Parms \
	{ \
		APawn* InstigatingPawn; \
	}; \
	struct PhotoModeComponent_eventMulticastOnCharacterYawOffsetChanged_Parms \
	{ \
		AActor* Actor; \
		FTransform Transform; \
	}; \
	struct PhotoModeComponent_eventMulticastSetCharacterVisibility_Parms \
	{ \
		ACharacter* Character; \
		bool Visible; \
	}; \
	struct PhotoModeComponent_eventMulticastSetEquipmentVisibility_Parms \
	{ \
		ACharacter* Character; \
		FName AssociatedTag; \
		bool Visible; \
	}; \
	struct PhotoModeComponent_eventMulticastSetPhotoModePose_Parms \
	{ \
		ACharacter* Clone; \
		UAnimMontage* Montage; \
		float BlendValue; \
	}; \
	struct PhotoModeComponent_eventServerDestroyPhotoModePoseableClone_Parms \
	{ \
		ACharacter* Clone; \
	}; \
	struct PhotoModeComponent_eventServerEnterPhotoModeAsGroup_Parms \
	{ \
		APlayerController* InstigatingController; \
	}; \
	struct PhotoModeComponent_eventServerExitPhotoModeAsGroup_Parms \
	{ \
		APawn* InstigatingPawn; \
	}; \
	struct PhotoModeComponent_eventServerHideEquipment_Parms \
	{ \
		ACharacter* Character; \
		FName AssociatedTag; \
	}; \
	struct PhotoModeComponent_eventServerHideOriginalPawn_Parms \
	{ \
		APawn* OriginalPawn; \
	}; \
	struct PhotoModeComponent_eventServerHidePoseableClone_Parms \
	{ \
		ACharacter* PoseableClone; \
	}; \
	struct PhotoModeComponent_eventServerOnCharacterYawOffsetChanged_Parms \
	{ \
		AActor* Actor; \
		FTransform Transform; \
	}; \
	struct PhotoModeComponent_eventServerOnPostLogin_Parms \
	{ \
		AGameModeBase* GameMode; \
		APlayerController* NewPlayer; \
	}; \
	struct PhotoModeComponent_eventServerPhotoModeSpawnPoseableClone_Parms \
	{ \
		APlayerController* ActivatingController; \
		APawn* OriginalPawn; \
	}; \
	struct PhotoModeComponent_eventServerPostSpawnPhotoModePoseableClone_Parms \
	{ \
		APawn* OriginalPawn; \
		ACharacter* Clone; \
		FPhotoModeCharacterCollisionInfo CollisionInfo; \
	}; \
	struct PhotoModeComponent_eventServerPrePhotoModeEntered_Parms \
	{ \
		APlayerController* PlayerController; \
	}; \
	struct PhotoModeComponent_eventServerPreSpawnPhotoModePoseableClone_Parms \
	{ \
		APawn* OriginalPawn; \
	}; \
	struct PhotoModeComponent_eventServerSetIsReadyToEnterPhotoMode_Parms \
	{ \
		bool Ready; \
	}; \
	struct PhotoModeComponent_eventServerSetPhotoModePose_Parms \
	{ \
		ACharacter* Clone; \
		UAnimMontage* Montage; \
		float BlendValue; \
	}; \
	struct PhotoModeComponent_eventServerShowEquipment_Parms \
	{ \
		ACharacter* Character; \
		FName AssociatedTag; \
	}; \
	struct PhotoModeComponent_eventServerShowOriginalPawn_Parms \
	{ \
		APawn* OriginalPawn; \
	}; \
	struct PhotoModeComponent_eventServerShowPoseableClone_Parms \
	{ \
		ACharacter* PoseableClone; \
	};


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_CALLBACK_WRAPPERS
#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhotoModeComponent(); \
	friend struct Z_Construct_UClass_UPhotoModeComponent_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsPhotoModeClone=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsPhotoModeClone	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUPhotoModeComponent(); \
	friend struct Z_Construct_UClass_UPhotoModeComponent_Statics; \
public: \
	DECLARE_CLASS(UPhotoModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OEIPhotoMode"), NO_API) \
	DECLARE_SERIALIZER(UPhotoModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		IsPhotoModeClone=NETFIELD_REP_START, \
		NETFIELD_REP_END=IsPhotoModeClone	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhotoModeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhotoModeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeComponent(UPhotoModeComponent&&); \
	NO_API UPhotoModeComponent(const UPhotoModeComponent&); \
public:


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhotoModeComponent(UPhotoModeComponent&&); \
	NO_API UPhotoModeComponent(const UPhotoModeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhotoModeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhotoModeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhotoModeComponent)


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__IsReadyToEnterPhotoMode() { return STRUCT_OFFSET(UPhotoModeComponent, IsReadyToEnterPhotoMode); } \
	FORCEINLINE static uint32 __PPO__ClientReadyCheckEnable() { return STRUCT_OFFSET(UPhotoModeComponent, ClientReadyCheckEnable); } \
	FORCEINLINE static uint32 __PPO__WereInputsSetup() { return STRUCT_OFFSET(UPhotoModeComponent, WereInputsSetup); } \
	FORCEINLINE static uint32 __PPO__IsPhotoModeClone() { return STRUCT_OFFSET(UPhotoModeComponent, IsPhotoModeClone); }


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_18_PROLOG \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_EVENT_PARMS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_INCLASS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_PRIVATE_PROPERTY_OFFSET \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_CALLBACK_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_INCLASS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIPHOTOMODE_API UClass* StaticClass<class UPhotoModeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIPhotoMode_Source_OEIPhotoMode_Public_PhotoModeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OEIPhotoMode/Public/PhotoModeComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhotoModeComponent() {}
// Cross Module References
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeComponent_NoRegister();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_UPhotoModeComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OEIPhotoMode();
	OEIPHOTOMODE_API UClass* Z_Construct_UClass_APhotoPawn_NoRegister();
	OEIPHOTOMODE_API UEnum* Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	OEIPHOTOMODE_API UScriptStruct* Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPhotoModeComponent::execCheckIsReadyToEnterPhotoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckIsReadyToEnterPhotoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execClientOnPhotoModeEntered)
	{
		P_GET_OBJECT(APhotoPawn,Z_Param_PhotoPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientOnPhotoModeEntered_Implementation(Z_Param_PhotoPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execClientOnPhotoModeExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientOnPhotoModeExited_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execClientOnPhotoModeGroupEntryUnallowed)
	{
		P_GET_ENUM(EPhotoModeEntryAllowedResult,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientOnPhotoModeGroupEntryUnallowed_Implementation(EPhotoModeEntryAllowedResult(Z_Param_Reason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execClientOnPhotoPawnSetupInputs)
	{
		P_GET_OBJECT(APhotoPawn,Z_Param_PhotoPawn);
		P_GET_OBJECT(UInputComponent,Z_Param_InputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientOnPhotoPawnSetupInputs_Implementation(Z_Param_PhotoPawn,Z_Param_InputComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execClientPrePhotoModeEntered)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPrePhotoModeEntered_Implementation(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execClientSetPoseableCloneOnMatchingClient)
	{
		P_GET_OBJECT(APlayerController,Z_Param_OwningController);
		P_GET_OBJECT(ACharacter,Z_Param_InClone);
		P_GET_STRUCT(FPhotoModeCharacterCollisionInfo,Z_Param_CollisionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetPoseableCloneOnMatchingClient_Implementation(Z_Param_OwningController,Z_Param_InClone,Z_Param_CollisionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execEnterPhotoMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPhotoMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execIsPhotoModeEntryAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPhotoModeEntryAllowedResult*)Z_Param__Result=P_THIS->IsPhotoModeEntryAllowed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execMulticastEnterPhotoModeAsGroup)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatingPossessedPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEnterPhotoModeAsGroup_Implementation(Z_Param_InstigatingPossessedPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execMulticastExitPhotoModeAsGroup)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatingPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastExitPhotoModeAsGroup_Implementation(Z_Param_InstigatingPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execMulticastOnCharacterYawOffsetChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastOnCharacterYawOffsetChanged_Implementation(Z_Param_Actor,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execMulticastSetCharacterVisibility)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetCharacterVisibility_Implementation(Z_Param_Character,Z_Param_Visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execMulticastSetEquipmentVisibility)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_PROPERTY(FNameProperty,Z_Param_AssociatedTag);
		P_GET_UBOOL(Z_Param_Visible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetEquipmentVisibility_Implementation(Z_Param_Character,Z_Param_AssociatedTag,Z_Param_Visible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execMulticastSetPhotoModePose)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Clone);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastSetPhotoModePose_Implementation(Z_Param_Clone,Z_Param_Montage,Z_Param_BlendValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerDestroyPhotoModePoseableClone)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Clone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerDestroyPhotoModePoseableClone_Implementation(Z_Param_Clone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerEnterPhotoModeAsGroup)
	{
		P_GET_OBJECT(APlayerController,Z_Param_InstigatingController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerEnterPhotoModeAsGroup_Implementation(Z_Param_InstigatingController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerExitPhotoModeAsGroup)
	{
		P_GET_OBJECT(APawn,Z_Param_InstigatingPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerExitPhotoModeAsGroup_Implementation(Z_Param_InstigatingPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerHideEquipment)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_PROPERTY(FNameProperty,Z_Param_AssociatedTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerHideEquipment_Implementation(Z_Param_Character,Z_Param_AssociatedTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerHideOriginalPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_OriginalPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerHideOriginalPawn_Implementation(Z_Param_OriginalPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerHidePoseableClone)
	{
		P_GET_OBJECT(ACharacter,Z_Param_PoseableClone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerHidePoseableClone_Implementation(Z_Param_PoseableClone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerOnCharacterYawOffsetChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerOnCharacterYawOffsetChanged_Implementation(Z_Param_Actor,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerOnPhotoModeExited)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerOnPhotoModeExited_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerOnPostLogin)
	{
		P_GET_OBJECT(AGameModeBase,Z_Param_GameMode);
		P_GET_OBJECT(APlayerController,Z_Param_NewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerOnPostLogin_Implementation(Z_Param_GameMode,Z_Param_NewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerPhotoModeSpawnPoseableClone)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ActivatingController);
		P_GET_OBJECT(APawn,Z_Param_OriginalPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPhotoModeSpawnPoseableClone_Implementation(Z_Param_ActivatingController,Z_Param_OriginalPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerPostSpawnPhotoModePoseableClone)
	{
		P_GET_OBJECT(APawn,Z_Param_OriginalPawn);
		P_GET_OBJECT(ACharacter,Z_Param_Clone);
		P_GET_STRUCT(FPhotoModeCharacterCollisionInfo,Z_Param_CollisionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPostSpawnPhotoModePoseableClone_Implementation(Z_Param_OriginalPawn,Z_Param_Clone,Z_Param_CollisionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerPrePhotoModeEntered)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPrePhotoModeEntered_Implementation(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerPreSpawnPhotoModePoseableClone)
	{
		P_GET_OBJECT(APawn,Z_Param_OriginalPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerPreSpawnPhotoModePoseableClone_Implementation(Z_Param_OriginalPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerSetIsReadyToEnterPhotoMode)
	{
		P_GET_UBOOL(Z_Param_Ready);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetIsReadyToEnterPhotoMode_Implementation(Z_Param_Ready);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerSetPhotoModePose)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Clone);
		P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerSetPhotoModePose_Implementation(Z_Param_Clone,Z_Param_Montage,Z_Param_BlendValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerShowEquipment)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_PROPERTY(FNameProperty,Z_Param_AssociatedTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerShowEquipment_Implementation(Z_Param_Character,Z_Param_AssociatedTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerShowOriginalPawn)
	{
		P_GET_OBJECT(APawn,Z_Param_OriginalPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerShowOriginalPawn_Implementation(Z_Param_OriginalPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execServerShowPoseableClone)
	{
		P_GET_OBJECT(ACharacter,Z_Param_PoseableClone);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerShowPoseableClone_Implementation(Z_Param_PoseableClone);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhotoModeComponent::execSpawnPoseableClone)
	{
		P_GET_OBJECT(APlayerController,Z_Param_ActivatingController);
		P_GET_OBJECT(APawn,Z_Param_OriginalPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACharacter**)Z_Param__Result=P_THIS->SpawnPoseableClone(Z_Param_ActivatingController,Z_Param_OriginalPawn);
		P_NATIVE_END;
	}
	static FName NAME_UPhotoModeComponent_ClientOnPhotoModeEntered = FName(TEXT("ClientOnPhotoModeEntered"));
	void UPhotoModeComponent::ClientOnPhotoModeEntered(APhotoPawn* PhotoPawn)
	{
		PhotoModeComponent_eventClientOnPhotoModeEntered_Parms Parms;
		Parms.PhotoPawn=PhotoPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ClientOnPhotoModeEntered),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ClientOnPhotoModeExited = FName(TEXT("ClientOnPhotoModeExited"));
	void UPhotoModeComponent::ClientOnPhotoModeExited()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ClientOnPhotoModeExited),NULL);
	}
	static FName NAME_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed = FName(TEXT("ClientOnPhotoModeGroupEntryUnallowed"));
	void UPhotoModeComponent::ClientOnPhotoModeGroupEntryUnallowed(EPhotoModeEntryAllowedResult Reason)
	{
		PhotoModeComponent_eventClientOnPhotoModeGroupEntryUnallowed_Parms Parms;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs = FName(TEXT("ClientOnPhotoPawnSetupInputs"));
	void UPhotoModeComponent::ClientOnPhotoPawnSetupInputs(APhotoPawn* PhotoPawn, UInputComponent* InputComponent)
	{
		PhotoModeComponent_eventClientOnPhotoPawnSetupInputs_Parms Parms;
		Parms.PhotoPawn=PhotoPawn;
		Parms.InputComponent=InputComponent;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ClientPrePhotoModeEntered = FName(TEXT("ClientPrePhotoModeEntered"));
	void UPhotoModeComponent::ClientPrePhotoModeEntered(APlayerController* PlayerController)
	{
		PhotoModeComponent_eventClientPrePhotoModeEntered_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ClientPrePhotoModeEntered),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient = FName(TEXT("ClientSetPoseableCloneOnMatchingClient"));
	void UPhotoModeComponent::ClientSetPoseableCloneOnMatchingClient(APlayerController* OwningController, ACharacter* InClone, FPhotoModeCharacterCollisionInfo CollisionInfo)
	{
		PhotoModeComponent_eventClientSetPoseableCloneOnMatchingClient_Parms Parms;
		Parms.OwningController=OwningController;
		Parms.InClone=InClone;
		Parms.CollisionInfo=CollisionInfo;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient),&Parms);
	}
	static FName NAME_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup = FName(TEXT("MulticastEnterPhotoModeAsGroup"));
	void UPhotoModeComponent::MulticastEnterPhotoModeAsGroup(APawn* InstigatingPossessedPawn)
	{
		PhotoModeComponent_eventMulticastEnterPhotoModeAsGroup_Parms Parms;
		Parms.InstigatingPossessedPawn=InstigatingPossessedPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup),&Parms);
	}
	static FName NAME_UPhotoModeComponent_MulticastExitPhotoModeAsGroup = FName(TEXT("MulticastExitPhotoModeAsGroup"));
	void UPhotoModeComponent::MulticastExitPhotoModeAsGroup(APawn* InstigatingPawn)
	{
		PhotoModeComponent_eventMulticastExitPhotoModeAsGroup_Parms Parms;
		Parms.InstigatingPawn=InstigatingPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_MulticastExitPhotoModeAsGroup),&Parms);
	}
	static FName NAME_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged = FName(TEXT("MulticastOnCharacterYawOffsetChanged"));
	void UPhotoModeComponent::MulticastOnCharacterYawOffsetChanged(AActor* Actor, FTransform Transform)
	{
		PhotoModeComponent_eventMulticastOnCharacterYawOffsetChanged_Parms Parms;
		Parms.Actor=Actor;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged),&Parms);
	}
	static FName NAME_UPhotoModeComponent_MulticastSetCharacterVisibility = FName(TEXT("MulticastSetCharacterVisibility"));
	void UPhotoModeComponent::MulticastSetCharacterVisibility(ACharacter* Character, bool Visible)
	{
		PhotoModeComponent_eventMulticastSetCharacterVisibility_Parms Parms;
		Parms.Character=Character;
		Parms.Visible=Visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_MulticastSetCharacterVisibility),&Parms);
	}
	static FName NAME_UPhotoModeComponent_MulticastSetEquipmentVisibility = FName(TEXT("MulticastSetEquipmentVisibility"));
	void UPhotoModeComponent::MulticastSetEquipmentVisibility(ACharacter* Character, FName AssociatedTag, bool Visible)
	{
		PhotoModeComponent_eventMulticastSetEquipmentVisibility_Parms Parms;
		Parms.Character=Character;
		Parms.AssociatedTag=AssociatedTag;
		Parms.Visible=Visible ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_MulticastSetEquipmentVisibility),&Parms);
	}
	static FName NAME_UPhotoModeComponent_MulticastSetPhotoModePose = FName(TEXT("MulticastSetPhotoModePose"));
	void UPhotoModeComponent::MulticastSetPhotoModePose(ACharacter* Clone, UAnimMontage* Montage, float BlendValue)
	{
		PhotoModeComponent_eventMulticastSetPhotoModePose_Parms Parms;
		Parms.Clone=Clone;
		Parms.Montage=Montage;
		Parms.BlendValue=BlendValue;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_MulticastSetPhotoModePose),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone = FName(TEXT("ServerDestroyPhotoModePoseableClone"));
	void UPhotoModeComponent::ServerDestroyPhotoModePoseableClone(ACharacter* Clone)
	{
		PhotoModeComponent_eventServerDestroyPhotoModePoseableClone_Parms Parms;
		Parms.Clone=Clone;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerEnterPhotoModeAsGroup = FName(TEXT("ServerEnterPhotoModeAsGroup"));
	void UPhotoModeComponent::ServerEnterPhotoModeAsGroup(APlayerController* InstigatingController)
	{
		PhotoModeComponent_eventServerEnterPhotoModeAsGroup_Parms Parms;
		Parms.InstigatingController=InstigatingController;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerEnterPhotoModeAsGroup),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerExitPhotoModeAsGroup = FName(TEXT("ServerExitPhotoModeAsGroup"));
	void UPhotoModeComponent::ServerExitPhotoModeAsGroup(APawn* InstigatingPawn)
	{
		PhotoModeComponent_eventServerExitPhotoModeAsGroup_Parms Parms;
		Parms.InstigatingPawn=InstigatingPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerExitPhotoModeAsGroup),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerHideEquipment = FName(TEXT("ServerHideEquipment"));
	void UPhotoModeComponent::ServerHideEquipment(ACharacter* Character, FName AssociatedTag)
	{
		PhotoModeComponent_eventServerHideEquipment_Parms Parms;
		Parms.Character=Character;
		Parms.AssociatedTag=AssociatedTag;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerHideEquipment),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerHideOriginalPawn = FName(TEXT("ServerHideOriginalPawn"));
	void UPhotoModeComponent::ServerHideOriginalPawn(APawn* OriginalPawn)
	{
		PhotoModeComponent_eventServerHideOriginalPawn_Parms Parms;
		Parms.OriginalPawn=OriginalPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerHideOriginalPawn),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerHidePoseableClone = FName(TEXT("ServerHidePoseableClone"));
	void UPhotoModeComponent::ServerHidePoseableClone(ACharacter* PoseableClone)
	{
		PhotoModeComponent_eventServerHidePoseableClone_Parms Parms;
		Parms.PoseableClone=PoseableClone;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerHidePoseableClone),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged = FName(TEXT("ServerOnCharacterYawOffsetChanged"));
	void UPhotoModeComponent::ServerOnCharacterYawOffsetChanged(AActor* Actor, FTransform Transform)
	{
		PhotoModeComponent_eventServerOnCharacterYawOffsetChanged_Parms Parms;
		Parms.Actor=Actor;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerOnPhotoModeExited = FName(TEXT("ServerOnPhotoModeExited"));
	void UPhotoModeComponent::ServerOnPhotoModeExited()
	{
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerOnPhotoModeExited),NULL);
	}
	static FName NAME_UPhotoModeComponent_ServerOnPostLogin = FName(TEXT("ServerOnPostLogin"));
	void UPhotoModeComponent::ServerOnPostLogin(AGameModeBase* GameMode, APlayerController* NewPlayer)
	{
		PhotoModeComponent_eventServerOnPostLogin_Parms Parms;
		Parms.GameMode=GameMode;
		Parms.NewPlayer=NewPlayer;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerOnPostLogin),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone = FName(TEXT("ServerPhotoModeSpawnPoseableClone"));
	void UPhotoModeComponent::ServerPhotoModeSpawnPoseableClone(APlayerController* ActivatingController, APawn* OriginalPawn)
	{
		PhotoModeComponent_eventServerPhotoModeSpawnPoseableClone_Parms Parms;
		Parms.ActivatingController=ActivatingController;
		Parms.OriginalPawn=OriginalPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone = FName(TEXT("ServerPostSpawnPhotoModePoseableClone"));
	void UPhotoModeComponent::ServerPostSpawnPhotoModePoseableClone(APawn* OriginalPawn, ACharacter* Clone, FPhotoModeCharacterCollisionInfo CollisionInfo)
	{
		PhotoModeComponent_eventServerPostSpawnPhotoModePoseableClone_Parms Parms;
		Parms.OriginalPawn=OriginalPawn;
		Parms.Clone=Clone;
		Parms.CollisionInfo=CollisionInfo;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerPrePhotoModeEntered = FName(TEXT("ServerPrePhotoModeEntered"));
	void UPhotoModeComponent::ServerPrePhotoModeEntered(APlayerController* PlayerController)
	{
		PhotoModeComponent_eventServerPrePhotoModeEntered_Parms Parms;
		Parms.PlayerController=PlayerController;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerPrePhotoModeEntered),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone = FName(TEXT("ServerPreSpawnPhotoModePoseableClone"));
	void UPhotoModeComponent::ServerPreSpawnPhotoModePoseableClone(APawn* OriginalPawn)
	{
		PhotoModeComponent_eventServerPreSpawnPhotoModePoseableClone_Parms Parms;
		Parms.OriginalPawn=OriginalPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode = FName(TEXT("ServerSetIsReadyToEnterPhotoMode"));
	void UPhotoModeComponent::ServerSetIsReadyToEnterPhotoMode(bool Ready)
	{
		PhotoModeComponent_eventServerSetIsReadyToEnterPhotoMode_Parms Parms;
		Parms.Ready=Ready ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerSetPhotoModePose = FName(TEXT("ServerSetPhotoModePose"));
	void UPhotoModeComponent::ServerSetPhotoModePose(ACharacter* Clone, UAnimMontage* Montage, float BlendValue)
	{
		PhotoModeComponent_eventServerSetPhotoModePose_Parms Parms;
		Parms.Clone=Clone;
		Parms.Montage=Montage;
		Parms.BlendValue=BlendValue;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerSetPhotoModePose),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerShowEquipment = FName(TEXT("ServerShowEquipment"));
	void UPhotoModeComponent::ServerShowEquipment(ACharacter* Character, FName AssociatedTag)
	{
		PhotoModeComponent_eventServerShowEquipment_Parms Parms;
		Parms.Character=Character;
		Parms.AssociatedTag=AssociatedTag;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerShowEquipment),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerShowOriginalPawn = FName(TEXT("ServerShowOriginalPawn"));
	void UPhotoModeComponent::ServerShowOriginalPawn(APawn* OriginalPawn)
	{
		PhotoModeComponent_eventServerShowOriginalPawn_Parms Parms;
		Parms.OriginalPawn=OriginalPawn;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerShowOriginalPawn),&Parms);
	}
	static FName NAME_UPhotoModeComponent_ServerShowPoseableClone = FName(TEXT("ServerShowPoseableClone"));
	void UPhotoModeComponent::ServerShowPoseableClone(ACharacter* PoseableClone)
	{
		PhotoModeComponent_eventServerShowPoseableClone_Parms Parms;
		Parms.PoseableClone=PoseableClone;
		ProcessEvent(FindFunctionChecked(NAME_UPhotoModeComponent_ServerShowPoseableClone),&Parms);
	}
	void UPhotoModeComponent::StaticRegisterNativesUPhotoModeComponent()
	{
		UClass* Class = UPhotoModeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIsReadyToEnterPhotoMode", &UPhotoModeComponent::execCheckIsReadyToEnterPhotoMode },
			{ "ClientOnPhotoModeEntered", &UPhotoModeComponent::execClientOnPhotoModeEntered },
			{ "ClientOnPhotoModeExited", &UPhotoModeComponent::execClientOnPhotoModeExited },
			{ "ClientOnPhotoModeGroupEntryUnallowed", &UPhotoModeComponent::execClientOnPhotoModeGroupEntryUnallowed },
			{ "ClientOnPhotoPawnSetupInputs", &UPhotoModeComponent::execClientOnPhotoPawnSetupInputs },
			{ "ClientPrePhotoModeEntered", &UPhotoModeComponent::execClientPrePhotoModeEntered },
			{ "ClientSetPoseableCloneOnMatchingClient", &UPhotoModeComponent::execClientSetPoseableCloneOnMatchingClient },
			{ "EnterPhotoMode", &UPhotoModeComponent::execEnterPhotoMode },
			{ "IsPhotoModeEntryAllowed", &UPhotoModeComponent::execIsPhotoModeEntryAllowed },
			{ "MulticastEnterPhotoModeAsGroup", &UPhotoModeComponent::execMulticastEnterPhotoModeAsGroup },
			{ "MulticastExitPhotoModeAsGroup", &UPhotoModeComponent::execMulticastExitPhotoModeAsGroup },
			{ "MulticastOnCharacterYawOffsetChanged", &UPhotoModeComponent::execMulticastOnCharacterYawOffsetChanged },
			{ "MulticastSetCharacterVisibility", &UPhotoModeComponent::execMulticastSetCharacterVisibility },
			{ "MulticastSetEquipmentVisibility", &UPhotoModeComponent::execMulticastSetEquipmentVisibility },
			{ "MulticastSetPhotoModePose", &UPhotoModeComponent::execMulticastSetPhotoModePose },
			{ "ServerDestroyPhotoModePoseableClone", &UPhotoModeComponent::execServerDestroyPhotoModePoseableClone },
			{ "ServerEnterPhotoModeAsGroup", &UPhotoModeComponent::execServerEnterPhotoModeAsGroup },
			{ "ServerExitPhotoModeAsGroup", &UPhotoModeComponent::execServerExitPhotoModeAsGroup },
			{ "ServerHideEquipment", &UPhotoModeComponent::execServerHideEquipment },
			{ "ServerHideOriginalPawn", &UPhotoModeComponent::execServerHideOriginalPawn },
			{ "ServerHidePoseableClone", &UPhotoModeComponent::execServerHidePoseableClone },
			{ "ServerOnCharacterYawOffsetChanged", &UPhotoModeComponent::execServerOnCharacterYawOffsetChanged },
			{ "ServerOnPhotoModeExited", &UPhotoModeComponent::execServerOnPhotoModeExited },
			{ "ServerOnPostLogin", &UPhotoModeComponent::execServerOnPostLogin },
			{ "ServerPhotoModeSpawnPoseableClone", &UPhotoModeComponent::execServerPhotoModeSpawnPoseableClone },
			{ "ServerPostSpawnPhotoModePoseableClone", &UPhotoModeComponent::execServerPostSpawnPhotoModePoseableClone },
			{ "ServerPrePhotoModeEntered", &UPhotoModeComponent::execServerPrePhotoModeEntered },
			{ "ServerPreSpawnPhotoModePoseableClone", &UPhotoModeComponent::execServerPreSpawnPhotoModePoseableClone },
			{ "ServerSetIsReadyToEnterPhotoMode", &UPhotoModeComponent::execServerSetIsReadyToEnterPhotoMode },
			{ "ServerSetPhotoModePose", &UPhotoModeComponent::execServerSetPhotoModePose },
			{ "ServerShowEquipment", &UPhotoModeComponent::execServerShowEquipment },
			{ "ServerShowOriginalPawn", &UPhotoModeComponent::execServerShowOriginalPawn },
			{ "ServerShowPoseableClone", &UPhotoModeComponent::execServerShowPoseableClone },
			{ "SpawnPoseableClone", &UPhotoModeComponent::execSpawnPoseableClone },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics
	{
		struct PhotoModeComponent_eventCheckIsReadyToEnterPhotoMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventCheckIsReadyToEnterPhotoMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeComponent_eventCheckIsReadyToEnterPhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "CheckIsReadyToEnterPhotoMode", nullptr, nullptr, sizeof(PhotoModeComponent_eventCheckIsReadyToEnterPhotoMode_Parms), Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhotoPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::NewProp_PhotoPawn = { "PhotoPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientOnPhotoModeEntered_Parms, PhotoPawn), Z_Construct_UClass_APhotoPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::NewProp_PhotoPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ClientOnPhotoModeEntered", nullptr, nullptr, sizeof(PhotoModeComponent_eventClientOnPhotoModeEntered_Parms), Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ClientOnPhotoModeExited", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientOnPhotoModeGroupEntryUnallowed_Parms, Reason), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ClientOnPhotoModeGroupEntryUnallowed", nullptr, nullptr, sizeof(PhotoModeComponent_eventClientOnPhotoModeGroupEntryUnallowed_Parms), Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhotoPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::NewProp_PhotoPawn = { "PhotoPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientOnPhotoPawnSetupInputs_Parms, PhotoPawn), Z_Construct_UClass_APhotoPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::NewProp_InputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::NewProp_InputComponent = { "InputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientOnPhotoPawnSetupInputs_Parms, InputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::NewProp_InputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::NewProp_InputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::NewProp_PhotoPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::NewProp_InputComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ClientOnPhotoPawnSetupInputs", nullptr, nullptr, sizeof(PhotoModeComponent_eventClientOnPhotoPawnSetupInputs_Parms), Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientPrePhotoModeEntered_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ClientPrePhotoModeEntered", nullptr, nullptr, sizeof(PhotoModeComponent_eventClientPrePhotoModeEntered_Parms), Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InClone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientSetPoseableCloneOnMatchingClient_Parms, OwningController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::NewProp_InClone = { "InClone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientSetPoseableCloneOnMatchingClient_Parms, InClone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventClientSetPoseableCloneOnMatchingClient_Parms, CollisionInfo), Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::NewProp_OwningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::NewProp_InClone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::NewProp_CollisionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ClientSetPoseableCloneOnMatchingClient", nullptr, nullptr, sizeof(PhotoModeComponent_eventClientSetPoseableCloneOnMatchingClient_Parms), Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "EnterPhotoMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics
	{
		struct PhotoModeComponent_eventIsPhotoModeEntryAllowed_Parms
		{
			EPhotoModeEntryAllowedResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventIsPhotoModeEntryAllowed_Parms, ReturnValue), Z_Construct_UEnum_OEIPhotoMode_EPhotoModeEntryAllowedResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "IsPhotoModeEntryAllowed", nullptr, nullptr, sizeof(PhotoModeComponent_eventIsPhotoModeEntryAllowed_Parms), Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatingPossessedPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::NewProp_InstigatingPossessedPawn = { "InstigatingPossessedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastEnterPhotoModeAsGroup_Parms, InstigatingPossessedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::NewProp_InstigatingPossessedPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "MulticastEnterPhotoModeAsGroup", nullptr, nullptr, sizeof(PhotoModeComponent_eventMulticastEnterPhotoModeAsGroup_Parms), Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatingPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::NewProp_InstigatingPawn = { "InstigatingPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastExitPhotoModeAsGroup_Parms, InstigatingPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::NewProp_InstigatingPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "MulticastExitPhotoModeAsGroup", nullptr, nullptr, sizeof(PhotoModeComponent_eventMulticastExitPhotoModeAsGroup_Parms), Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastOnCharacterYawOffsetChanged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastOnCharacterYawOffsetChanged_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "MulticastOnCharacterYawOffsetChanged", nullptr, nullptr, sizeof(PhotoModeComponent_eventMulticastOnCharacterYawOffsetChanged_Parms), Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastSetCharacterVisibility_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventMulticastSetCharacterVisibility_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeComponent_eventMulticastSetCharacterVisibility_Parms), &Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "MulticastSetCharacterVisibility", nullptr, nullptr, sizeof(PhotoModeComponent_eventMulticastSetCharacterVisibility_Parms), Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssociatedTag;
		static void NewProp_Visible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Visible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastSetEquipmentVisibility_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_AssociatedTag = { "AssociatedTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastSetEquipmentVisibility_Parms, AssociatedTag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_Visible_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventMulticastSetEquipmentVisibility_Parms*)Obj)->Visible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_Visible = { "Visible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeComponent_eventMulticastSetEquipmentVisibility_Parms), &Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_Visible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_AssociatedTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::NewProp_Visible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "MulticastSetEquipmentVisibility", nullptr, nullptr, sizeof(PhotoModeComponent_eventMulticastSetEquipmentVisibility_Parms), Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Clone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::NewProp_Clone = { "Clone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastSetPhotoModePose_Parms, Clone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastSetPhotoModePose_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::NewProp_BlendValue = { "BlendValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventMulticastSetPhotoModePose_Parms, BlendValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::NewProp_Clone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::NewProp_BlendValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "MulticastSetPhotoModePose", nullptr, nullptr, sizeof(PhotoModeComponent_eventMulticastSetPhotoModePose_Parms), Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Clone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::NewProp_Clone = { "Clone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerDestroyPhotoModePoseableClone_Parms, Clone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::NewProp_Clone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerDestroyPhotoModePoseableClone", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerDestroyPhotoModePoseableClone_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatingController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::NewProp_InstigatingController = { "InstigatingController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerEnterPhotoModeAsGroup_Parms, InstigatingController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::NewProp_InstigatingController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerEnterPhotoModeAsGroup", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerEnterPhotoModeAsGroup_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatingPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::NewProp_InstigatingPawn = { "InstigatingPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerExitPhotoModeAsGroup_Parms, InstigatingPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::NewProp_InstigatingPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerExitPhotoModeAsGroup", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerExitPhotoModeAsGroup_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssociatedTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerHideEquipment_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::NewProp_AssociatedTag = { "AssociatedTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerHideEquipment_Parms, AssociatedTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::NewProp_AssociatedTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerHideEquipment", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerHideEquipment_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::NewProp_OriginalPawn = { "OriginalPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerHideOriginalPawn_Parms, OriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::NewProp_OriginalPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerHideOriginalPawn", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerHideOriginalPawn_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseableClone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::NewProp_PoseableClone = { "PoseableClone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerHidePoseableClone_Parms, PoseableClone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::NewProp_PoseableClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerHidePoseableClone", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerHidePoseableClone_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerOnCharacterYawOffsetChanged_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerOnCharacterYawOffsetChanged_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerOnCharacterYawOffsetChanged", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerOnCharacterYawOffsetChanged_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04A20CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerOnPhotoModeExited", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameMode;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerOnPostLogin_Parms, GameMode), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::NewProp_NewPlayer = { "NewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerOnPostLogin_Parms, NewPlayer), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::NewProp_GameMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::NewProp_NewPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerOnPostLogin", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerOnPostLogin_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatingController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::NewProp_ActivatingController = { "ActivatingController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerPhotoModeSpawnPoseableClone_Parms, ActivatingController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::NewProp_OriginalPawn = { "OriginalPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerPhotoModeSpawnPoseableClone_Parms, OriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::NewProp_ActivatingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::NewProp_OriginalPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerPhotoModeSpawnPoseableClone", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerPhotoModeSpawnPoseableClone_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Clone;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::NewProp_OriginalPawn = { "OriginalPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerPostSpawnPhotoModePoseableClone_Parms, OriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::NewProp_Clone = { "Clone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerPostSpawnPhotoModePoseableClone_Parms, Clone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::NewProp_CollisionInfo = { "CollisionInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerPostSpawnPhotoModePoseableClone_Parms, CollisionInfo), Z_Construct_UScriptStruct_FPhotoModeCharacterCollisionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::NewProp_OriginalPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::NewProp_Clone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::NewProp_CollisionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerPostSpawnPhotoModePoseableClone", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerPostSpawnPhotoModePoseableClone_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerPrePhotoModeEntered_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerPrePhotoModeEntered", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerPrePhotoModeEntered_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::NewProp_OriginalPawn = { "OriginalPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerPreSpawnPhotoModePoseableClone_Parms, OriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::NewProp_OriginalPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerPreSpawnPhotoModePoseableClone", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerPreSpawnPhotoModePoseableClone_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics
	{
		static void NewProp_Ready_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Ready;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::NewProp_Ready_SetBit(void* Obj)
	{
		((PhotoModeComponent_eventServerSetIsReadyToEnterPhotoMode_Parms*)Obj)->Ready = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::NewProp_Ready = { "Ready", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PhotoModeComponent_eventServerSetIsReadyToEnterPhotoMode_Parms), &Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::NewProp_Ready_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::NewProp_Ready,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerSetIsReadyToEnterPhotoMode", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerSetIsReadyToEnterPhotoMode_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Clone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Montage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::NewProp_Clone = { "Clone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerSetPhotoModePose_Parms, Clone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerSetPhotoModePose_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::NewProp_BlendValue = { "BlendValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerSetPhotoModePose_Parms, BlendValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::NewProp_Clone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::NewProp_Montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::NewProp_BlendValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerSetPhotoModePose", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerSetPhotoModePose_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssociatedTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerShowEquipment_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::NewProp_AssociatedTag = { "AssociatedTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerShowEquipment_Parms, AssociatedTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::NewProp_AssociatedTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerShowEquipment", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerShowEquipment_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::NewProp_OriginalPawn = { "OriginalPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerShowOriginalPawn_Parms, OriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::NewProp_OriginalPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerShowOriginalPawn", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerShowOriginalPawn_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoseableClone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::NewProp_PoseableClone = { "PoseableClone", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventServerShowPoseableClone_Parms, PoseableClone), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::NewProp_PoseableClone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "ServerShowPoseableClone", nullptr, nullptr, sizeof(PhotoModeComponent_eventServerShowPoseableClone_Parms), Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics
	{
		struct PhotoModeComponent_eventSpawnPoseableClone_Parms
		{
			APlayerController* ActivatingController;
			APawn* OriginalPawn;
			ACharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActivatingController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OriginalPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::NewProp_ActivatingController = { "ActivatingController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventSpawnPoseableClone_Parms, ActivatingController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::NewProp_OriginalPawn = { "OriginalPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventSpawnPoseableClone_Parms, OriginalPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PhotoModeComponent_eventSpawnPoseableClone_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::NewProp_ActivatingController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::NewProp_OriginalPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhotoModeComponent, nullptr, "SpawnPoseableClone", nullptr, nullptr, sizeof(PhotoModeComponent_eventSpawnPoseableClone_Parms), Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhotoModeComponent_NoRegister()
	{
		return UPhotoModeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPhotoModeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedTransformValid_MetaData[];
#endif
		static void NewProp_CachedTransformValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CachedTransformValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReadyToEnterPhotoMode_MetaData[];
#endif
		static void NewProp_IsReadyToEnterPhotoMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReadyToEnterPhotoMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientReadyCheckEnable_MetaData[];
#endif
		static void NewProp_ClientReadyCheckEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClientReadyCheckEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WereInputsSetup_MetaData[];
#endif
		static void NewProp_WereInputsSetup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WereInputsSetup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPhotoModeClone_MetaData[];
#endif
		static void NewProp_IsPhotoModeClone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPhotoModeClone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhotoModeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OEIPhotoMode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhotoModeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhotoModeComponent_CheckIsReadyToEnterPhotoMode, "CheckIsReadyToEnterPhotoMode" }, // 360791960
		{ &Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeEntered, "ClientOnPhotoModeEntered" }, // 2058194800
		{ &Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeExited, "ClientOnPhotoModeExited" }, // 3694402016
		{ &Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoModeGroupEntryUnallowed, "ClientOnPhotoModeGroupEntryUnallowed" }, // 3513623360
		{ &Z_Construct_UFunction_UPhotoModeComponent_ClientOnPhotoPawnSetupInputs, "ClientOnPhotoPawnSetupInputs" }, // 92981741
		{ &Z_Construct_UFunction_UPhotoModeComponent_ClientPrePhotoModeEntered, "ClientPrePhotoModeEntered" }, // 381560952
		{ &Z_Construct_UFunction_UPhotoModeComponent_ClientSetPoseableCloneOnMatchingClient, "ClientSetPoseableCloneOnMatchingClient" }, // 757644234
		{ &Z_Construct_UFunction_UPhotoModeComponent_EnterPhotoMode, "EnterPhotoMode" }, // 4224507015
		{ &Z_Construct_UFunction_UPhotoModeComponent_IsPhotoModeEntryAllowed, "IsPhotoModeEntryAllowed" }, // 3938790675
		{ &Z_Construct_UFunction_UPhotoModeComponent_MulticastEnterPhotoModeAsGroup, "MulticastEnterPhotoModeAsGroup" }, // 3603969741
		{ &Z_Construct_UFunction_UPhotoModeComponent_MulticastExitPhotoModeAsGroup, "MulticastExitPhotoModeAsGroup" }, // 2086564759
		{ &Z_Construct_UFunction_UPhotoModeComponent_MulticastOnCharacterYawOffsetChanged, "MulticastOnCharacterYawOffsetChanged" }, // 3101353753
		{ &Z_Construct_UFunction_UPhotoModeComponent_MulticastSetCharacterVisibility, "MulticastSetCharacterVisibility" }, // 572926128
		{ &Z_Construct_UFunction_UPhotoModeComponent_MulticastSetEquipmentVisibility, "MulticastSetEquipmentVisibility" }, // 2205656370
		{ &Z_Construct_UFunction_UPhotoModeComponent_MulticastSetPhotoModePose, "MulticastSetPhotoModePose" }, // 3133457925
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerDestroyPhotoModePoseableClone, "ServerDestroyPhotoModePoseableClone" }, // 3139524590
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerEnterPhotoModeAsGroup, "ServerEnterPhotoModeAsGroup" }, // 332191741
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerExitPhotoModeAsGroup, "ServerExitPhotoModeAsGroup" }, // 1428780013
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerHideEquipment, "ServerHideEquipment" }, // 1028506524
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerHideOriginalPawn, "ServerHideOriginalPawn" }, // 76527049
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerHidePoseableClone, "ServerHidePoseableClone" }, // 291427994
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerOnCharacterYawOffsetChanged, "ServerOnCharacterYawOffsetChanged" }, // 4133589178
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerOnPhotoModeExited, "ServerOnPhotoModeExited" }, // 200506878
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerOnPostLogin, "ServerOnPostLogin" }, // 192206126
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerPhotoModeSpawnPoseableClone, "ServerPhotoModeSpawnPoseableClone" }, // 1806714251
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerPostSpawnPhotoModePoseableClone, "ServerPostSpawnPhotoModePoseableClone" }, // 332777984
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerPrePhotoModeEntered, "ServerPrePhotoModeEntered" }, // 2774554404
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerPreSpawnPhotoModePoseableClone, "ServerPreSpawnPhotoModePoseableClone" }, // 2632986029
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerSetIsReadyToEnterPhotoMode, "ServerSetIsReadyToEnterPhotoMode" }, // 1188894739
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerSetPhotoModePose, "ServerSetPhotoModePose" }, // 2573213993
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerShowEquipment, "ServerShowEquipment" }, // 2609677168
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerShowOriginalPawn, "ServerShowOriginalPawn" }, // 3281363383
		{ &Z_Construct_UFunction_UPhotoModeComponent_ServerShowPoseableClone, "ServerShowPoseableClone" }, // 1920459596
		{ &Z_Construct_UFunction_UPhotoModeComponent_SpawnPoseableClone, "SpawnPoseableClone" }, // 4027315380
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PhotoModeComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransform_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransform = { "CachedTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPhotoModeComponent, CachedTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransformValid_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransformValid_SetBit(void* Obj)
	{
		((UPhotoModeComponent*)Obj)->CachedTransformValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransformValid = { "CachedTransformValid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeComponent), &Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransformValid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransformValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransformValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsReadyToEnterPhotoMode_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsReadyToEnterPhotoMode_SetBit(void* Obj)
	{
		((UPhotoModeComponent*)Obj)->IsReadyToEnterPhotoMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsReadyToEnterPhotoMode = { "IsReadyToEnterPhotoMode", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeComponent), &Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsReadyToEnterPhotoMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsReadyToEnterPhotoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsReadyToEnterPhotoMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ClientReadyCheckEnable_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ClientReadyCheckEnable_SetBit(void* Obj)
	{
		((UPhotoModeComponent*)Obj)->ClientReadyCheckEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ClientReadyCheckEnable = { "ClientReadyCheckEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeComponent), &Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ClientReadyCheckEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ClientReadyCheckEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ClientReadyCheckEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_WereInputsSetup_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_WereInputsSetup_SetBit(void* Obj)
	{
		((UPhotoModeComponent*)Obj)->WereInputsSetup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_WereInputsSetup = { "WereInputsSetup", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeComponent), &Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_WereInputsSetup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_WereInputsSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_WereInputsSetup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsPhotoModeClone_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "PhotoModeComponent" },
		{ "ModuleRelativePath", "Public/PhotoModeComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsPhotoModeClone_SetBit(void* Obj)
	{
		((UPhotoModeComponent*)Obj)->IsPhotoModeClone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsPhotoModeClone = { "IsPhotoModeClone", nullptr, (EPropertyFlags)0x0020080000000025, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPhotoModeComponent), &Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsPhotoModeClone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsPhotoModeClone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsPhotoModeClone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhotoModeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_CachedTransformValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsReadyToEnterPhotoMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_ClientReadyCheckEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_WereInputsSetup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhotoModeComponent_Statics::NewProp_IsPhotoModeClone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhotoModeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhotoModeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPhotoModeComponent_Statics::ClassParams = {
		&UPhotoModeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPhotoModeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPhotoModeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhotoModeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhotoModeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPhotoModeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPhotoModeComponent, 3262820586);
	template<> OEIPHOTOMODE_API UClass* StaticClass<UPhotoModeComponent>()
	{
		return UPhotoModeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhotoModeComponent(Z_Construct_UClass_UPhotoModeComponent, &UPhotoModeComponent::StaticClass, TEXT("/Script/OEIPhotoMode"), TEXT("UPhotoModeComponent"), false, nullptr, nullptr, nullptr);

	void UPhotoModeComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_IsPhotoModeClone(TEXT("IsPhotoModeClone"));

		const bool bIsValid = true
			&& Name_IsPhotoModeClone == ClassReps[(int32)ENetFields_Private::IsPhotoModeClone].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPhotoModeComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhotoModeComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

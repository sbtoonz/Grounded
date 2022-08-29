/**
 * Name: Maine
 * Version: Shipping
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.SpawnEmitterBySurfaceType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<EPhysicalSurface, class UParticleSystem*>     SurfaceImpactMap                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               CameraShake                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      CameraShakeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CameraShakeRadius                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::SpawnEmitterBySurfaceType(class APawn* Pawn, TMap<EPhysicalSurface, class UParticleSystem*> SurfaceImpactMap, bool CameraShake, class UClass* CameraShakeType, float CameraShakeRadius, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.SpawnEmitterBySurfaceType");
		
		USurvival_Functions_C_SpawnEmitterBySurfaceType_Params params {};
		params.Pawn = Pawn;
		params.SurfaceImpactMap = SurfaceImpactMap;
		params.CameraShake = CameraShake;
		params.CameraShakeType = CameraShakeType;
		params.CameraShakeRadius = CameraShakeRadius;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.Reciprocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::Reciprocal(float Value, class UObject* __WorldContext, float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.Reciprocal");
		
		USurvival_Functions_C_Reciprocal_Params params {};
		params.Value = Value;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.GetCalendarHourFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCalendarComponent*                          Calendar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CurrentHour                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::GetCalendarHourFloat(class UObject* __WorldContext, class UCalendarComponent** Calendar, float* CurrentHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.GetCalendarHourFloat");
		
		USurvival_Functions_C_GetCalendarHourFloat_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Calendar != nullptr)
			*Calendar = params.Calendar;
		if (CurrentHour != nullptr)
			*CurrentHour = params.CurrentHour;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.RaycastToCeiling
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UParticleSystemComponent*                    PositionReferenceParticle                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UParticleSystemComponent*>            ParticlesToModify                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class FName                                        LifetimeParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SmokeAlphaParam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::RaycastToCeiling(class UParticleSystemComponent* PositionReferenceParticle, TArray<class UParticleSystemComponent*>* ParticlesToModify, const class FName& LifetimeParam, const class FName& SmokeAlphaParam, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.RaycastToCeiling");
		
		USurvival_Functions_C_RaycastToCeiling_Params params {};
		params.PositionReferenceParticle = PositionReferenceParticle;
		params.LifetimeParam = LifetimeParam;
		params.SmokeAlphaParam = SmokeAlphaParam;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ParticlesToModify != nullptr)
			*ParticlesToModify = params.ParticlesToModify;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.CheckForUndesiredHitsFromMultitraces
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FHitResult>                          MultitraceHitResults                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  NewHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               ReturnHit                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurvival_Functions_C::CheckForUndesiredHitsFromMultitraces(TArray<struct FHitResult>* MultitraceHitResults, class UObject* __WorldContext, struct FHitResult* NewHitResult, bool* ReturnHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.CheckForUndesiredHitsFromMultitraces");
		
		USurvival_Functions_C_CheckForUndesiredHitsFromMultitraces_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultitraceHitResults != nullptr)
			*MultitraceHitResults = params.MultitraceHitResults;
		if (NewHitResult != nullptr)
			*NewHitResult = params.NewHitResult;
		if (ReturnHit != nullptr)
			*ReturnHit = params.ReturnHit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.GetBPTutorialManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_TutorialManagerComponent_C*              BP_TutorialManagerComponent                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::GetBPTutorialManager(class UObject* __WorldContext, class UBP_TutorialManagerComponent_C** BP_TutorialManagerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.GetBPTutorialManager");
		
		USurvival_Functions_C_GetBPTutorialManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BP_TutorialManagerComponent != nullptr)
			*BP_TutorialManagerComponent = params.BP_TutorialManagerComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.AreDataTableRowsEqual
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDataTableRowHandle                         A                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FDataTableRowHandle                         B                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurvival_Functions_C::AreDataTableRowsEqual(const struct FDataTableRowHandle& A, const struct FDataTableRowHandle& B, class UObject* __WorldContext, bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.AreDataTableRowsEqual");
		
		USurvival_Functions_C_AreDataTableRowsEqual_Params params {};
		params.A = A;
		params.B = B;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.GetBPQuestManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_QuestManagerComponent_C*                 BP_QuestManagerComponent                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::GetBPQuestManager(class UObject* __WorldContext, class UBP_QuestManagerComponent_C** BP_QuestManagerComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.GetBPQuestManager");
		
		USurvival_Functions_C_GetBPQuestManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BP_QuestManagerComponent != nullptr)
			*BP_QuestManagerComponent = params.BP_QuestManagerComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.PlayConsumeAudioForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::PlayConsumeAudioForItem(class UItem* Item, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.PlayConsumeAudioForItem");
		
		USurvival_Functions_C_PlayConsumeAudioForItem_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.PlayEquipAudioForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::PlayEquipAudioForItem(class UItem* Item, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.PlayEquipAudioForItem");
		
		USurvival_Functions_C_PlayEquipAudioForItem_Params params {};
		params.Item = Item;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.AddTaggedActorsToArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Tag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ActorArray                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::AddTaggedActorsToArray(const class FName& Tag, TArray<class AActor*>* ActorArray, class AActor* WorldContextObject, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.AddTaggedActorsToArray");
		
		USurvival_Functions_C_AddTaggedActorsToArray_Params params {};
		params.Tag = Tag;
		params.WorldContextObject = WorldContextObject;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorArray != nullptr)
			*ActorArray = params.ActorArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.TraceLengthRemap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              CurrentTraceLength                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TraceHit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TraceLengthHit                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRangeA                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InRangeB_TraceLengthMax                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutRangeA                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              OutRangeB                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RemappedTraceRange                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::TraceLengthRemap(float* CurrentTraceLength, bool TraceHit, float TraceLengthHit, float InRangeA, float InRangeB_TraceLengthMax, float OutRangeA, float OutRangeB, class UObject* __WorldContext, float* RemappedTraceRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.TraceLengthRemap");
		
		USurvival_Functions_C_TraceLengthRemap_Params params {};
		params.TraceHit = TraceHit;
		params.TraceLengthHit = TraceLengthHit;
		params.InRangeA = InRangeA;
		params.InRangeB_TraceLengthMax = InRangeB_TraceLengthMax;
		params.OutRangeA = OutRangeA;
		params.OutRangeB = OutRangeB;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentTraceLength != nullptr)
			*CurrentTraceLength = params.CurrentTraceLength;
		if (RemappedTraceRange != nullptr)
			*RemappedTraceRange = params.RemappedTraceRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.VertexSecondaryAnim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInstanceDynamic*                    MaterialInstanceDynamic                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     PreviousLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NewPreviousLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::VertexSecondaryAnim(float DeltaTime, class UMaterialInstanceDynamic* MaterialInstanceDynamic, class AActor* Actor, const struct FVector& PreviousLocation, class UObject* __WorldContext, struct FVector* NewPreviousLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.VertexSecondaryAnim");
		
		USurvival_Functions_C_VertexSecondaryAnim_Params params {};
		params.DeltaTime = DeltaTime;
		params.MaterialInstanceDynamic = MaterialInstanceDynamic;
		params.Actor = Actor;
		params.PreviousLocation = PreviousLocation;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewPreviousLocation != nullptr)
			*NewPreviousLocation = params.NewPreviousLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.ShowSCABSignal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::ShowSCABSignal(class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.ShowSCABSignal");
		
		USurvival_Functions_C_ShowSCABSignal_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.GetSaveLoadManager
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USaveLoadManager*                            SaveLoadManager                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::GetSaveLoadManager(class UObject* __WorldContext, class USaveLoadManager** SaveLoadManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.GetSaveLoadManager");
		
		USurvival_Functions_C_GetSaveLoadManager_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SaveLoadManager != nullptr)
			*SaveLoadManager = params.SaveLoadManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.GetSurvivalGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBP_SurvivalGameInstance_C*                  Instance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::GetSurvivalGameInstance(class UObject* __WorldContext, class UBP_SurvivalGameInstance_C** Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.GetSurvivalGameInstance");
		
		USurvival_Functions_C_GetSurvivalGameInstance_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Instance != nullptr)
			*Instance = params.Instance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.GetCalendarHour
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCalendarComponent*                          Calendar                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentHour                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::GetCalendarHour(class UObject* __WorldContext, class UCalendarComponent** Calendar, int32_t* CurrentHour)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.GetCalendarHour");
		
		USurvival_Functions_C_GetCalendarHour_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Calendar != nullptr)
			*Calendar = params.Calendar;
		if (CurrentHour != nullptr)
			*CurrentHour = params.CurrentHour;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Survival_Functions.Survival_Functions_C.GetSurvivalHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUI_HUD_C*                                   HUD                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USurvival_Functions_C::GetSurvivalHUD(class UObject* __WorldContext, class UUI_HUD_C** HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Survival_Functions.Survival_Functions_C.GetSurvivalHUD");
		
		USurvival_Functions_C_GetSurvivalHUD_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HUD != nullptr)
			*HUD = params.HUD;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvival_Functions_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvival_Functions_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Survival_Functions.Survival_Functions_C");
		return ptr;
	}

}



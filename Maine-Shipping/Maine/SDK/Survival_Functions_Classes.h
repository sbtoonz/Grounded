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
	 * BlueprintGeneratedClass Survival_Functions.Survival_Functions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USurvival_Functions_C : public UBlueprintFunctionLibrary
	{
	public:
		void SpawnEmitterBySurfaceType(class APawn* Pawn, TMap<EPhysicalSurface, class UParticleSystem*> SurfaceImpactMap, bool CameraShake, class UClass* CameraShakeType, float CameraShakeRadius, class UObject* __WorldContext);
		void Reciprocal(float Value, class UObject* __WorldContext, float* Result);
		void GetCalendarHourFloat(class UObject* __WorldContext, class UCalendarComponent** Calendar, float* CurrentHour);
		void RaycastToCeiling(class UParticleSystemComponent* PositionReferenceParticle, TArray<class UParticleSystemComponent*>* ParticlesToModify, const class FName& LifetimeParam, const class FName& SmokeAlphaParam, class UObject* __WorldContext);
		void CheckForUndesiredHitsFromMultitraces(TArray<struct FHitResult>* MultitraceHitResults, class UObject* __WorldContext, struct FHitResult* NewHitResult, bool* ReturnHit);
		void GetBPTutorialManager(class UObject* __WorldContext, class UBP_TutorialManagerComponent_C** BP_TutorialManagerComponent);
		void AreDataTableRowsEqual(const struct FDataTableRowHandle& A, const struct FDataTableRowHandle& B, class UObject* __WorldContext, bool* Yes);
		void GetBPQuestManager(class UObject* __WorldContext, class UBP_QuestManagerComponent_C** BP_QuestManagerComponent);
		void PlayConsumeAudioForItem(class UItem* Item, class UObject* __WorldContext);
		void PlayEquipAudioForItem(class UItem* Item, class UObject* __WorldContext);
		void AddTaggedActorsToArray(const class FName& Tag, TArray<class AActor*>* ActorArray, class AActor* WorldContextObject, class UObject* __WorldContext);
		void TraceLengthRemap(float* CurrentTraceLength, bool TraceHit, float TraceLengthHit, float InRangeA, float InRangeB_TraceLengthMax, float OutRangeA, float OutRangeB, class UObject* __WorldContext, float* RemappedTraceRange);
		void VertexSecondaryAnim(float DeltaTime, class UMaterialInstanceDynamic* MaterialInstanceDynamic, class AActor* Actor, const struct FVector& PreviousLocation, class UObject* __WorldContext, struct FVector* NewPreviousLocation);
		void ShowSCABSignal(class UObject* __WorldContext);
		void GetSaveLoadManager(class UObject* __WorldContext, class USaveLoadManager** SaveLoadManager);
		void GetSurvivalGameInstance(class UObject* __WorldContext, class UBP_SurvivalGameInstance_C** Instance);
		void GetCalendarHour(class UObject* __WorldContext, class UCalendarComponent** Calendar, int32_t* CurrentHour);
		void GetSurvivalHUD(class UObject* __WorldContext, class UUI_HUD_C** HUD);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

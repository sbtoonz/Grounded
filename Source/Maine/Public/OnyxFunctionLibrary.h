#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InputCoreTypes.h"
#include "UObject/NoExportTypes.h"
#include "LocString.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Framework/Commands/InputChord.h"
#include "GameFramework/PlayerInput.h"
#include "Components/SlateWrapperTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "OnyxFunctionLibrary.generated.h"

class AActor;
class UObject;
class UActorComponent;

UCLASS(Blueprintable)
class MAINE_API UOnyxFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnyxFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector SubtractIntVectors(const FIntVector& A, const FIntVector& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator RInterpCappedTo(const FRotator& Current, const FRotator& Target, float DeltaTime, float Alpha, float MaxSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool RangeContains(const FFloatRange& Range, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle RandomElementRowHandle(const TArray<FDataTableRowHandle>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLocString RandomElementLocString(const TArray<FLocString>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 RandomElementInt(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomElementFloat(const TArray<float>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 KeyToNumberZeroBased(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 KeyToNumberOneBased(const FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputChord KeyMappingToChord(const FInputActionKeyMapping& Mapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString JoinStringsRemoveEmpty(const FString& A, const FString& B, const FString& Separator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHandled(const FEventReply& Reply);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAxisPressKey(const FKey& Key);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetStaticMeshSocketTransform(AActor* Actor, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* GetSelfOrOuterActor(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputChord GetPointerEventChord(const FPointerEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputChord GetKeyEventChord(const FKeyEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTagContainer GetGameplayTagChildren(FGameplayTag Tag, bool bIncludeSelf);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetComponentByClassSafe(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FGameplayTag> GameplayTagArrayMatchOrder(const TArray<FGameplayTag>& Source, UPARAM(Ref) TArray<FGameplayTag>& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatIntToFit(int32 Value, int32 MaxCharacters);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FindDeltaAngleRadians(float A1, float A2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FindDeltaAngleDegrees(float A1, float A2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* CoalesceClass(UClass* A, UClass* B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector AddIntVectors(const FIntVector& A, const FIntVector& B);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=InputChord -FallbackName=InputChord
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector -FallbackName=IntVector
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=KeyEvent -FallbackName=KeyEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERelativeTransformSpace -FallbackName=ERelativeTransformSpace
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "OnyxFunctionLibrary.generated.h"

class AActor;
class UObject;
class UActorComponent;

UCLASS(BlueprintType)
class MAINE_API UOnyxFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnyxFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static FIntVector SubtractIntVectors(const FIntVector& A, const FIntVector& B);
    
    UFUNCTION(BlueprintPure)
    static FRotator RInterpCappedTo(const FRotator& Current, const FRotator& Target, float DeltaTime, float Alpha, float MaxSpeed);
    
    UFUNCTION(BlueprintPure)
    static bool RangeContains(const FFloatRange& Range, float Value);
    
    UFUNCTION(BlueprintPure)
    static FDataTableRowHandle RandomElementRowHandle(const TArray<FDataTableRowHandle>& Array);
    
    UFUNCTION(BlueprintPure)
    static FLocString RandomElementLocString(const TArray<FLocString>& Array);
    
    UFUNCTION(BlueprintPure)
    static int32 RandomElementInt(const TArray<int32>& Array);
    
    UFUNCTION(BlueprintPure)
    static float RandomElementFloat(const TArray<float>& Array);
    
    UFUNCTION(BlueprintPure)
    static int32 KeyToNumberZeroBased(const FKey& Key);
    
    UFUNCTION(BlueprintPure)
    static int32 KeyToNumberOneBased(const FKey& Key);
    
    UFUNCTION(BlueprintPure)
    static FInputChord KeyMappingToChord(const FInputActionKeyMapping& Mapping);
    
    UFUNCTION(BlueprintPure)
    static FString JoinStringsRemoveEmpty(const FString& A, const FString& B, const FString& Separator);
    
    UFUNCTION(BlueprintPure)
    static bool IsHandled(const FEventReply& Reply);
    
    UFUNCTION(BlueprintPure)
    static bool IsAxisPressKey(const FKey& Key);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetStaticMeshSocketTransform(AActor* Actor, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
    
    UFUNCTION(BlueprintPure)
    static AActor* GetSelfOrOuterActor(UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static FInputChord GetPointerEventChord(const FPointerEvent& Event);
    
    UFUNCTION(BlueprintPure)
    static FInputChord GetKeyEventChord(const FKeyEvent& Event);
    
    UFUNCTION(BlueprintPure)
    static FGameplayTagContainer GetGameplayTagChildren(FGameplayTag Tag, bool bIncludeSelf);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* GetComponentByClassSafe(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintPure)
    static TArray<FGameplayTag> GameplayTagArrayMatchOrder(const TArray<FGameplayTag>& Source, UPARAM(Ref) TArray<FGameplayTag>& Target);
    
    UFUNCTION(BlueprintPure)
    static FText FormatIntToFit(int32 Value, int32 MaxCharacters);
    
    UFUNCTION(BlueprintPure)
    static float FindDeltaAngleRadians(float A1, float A2);
    
    UFUNCTION(BlueprintPure)
    static float FindDeltaAngleDegrees(float A1, float A2);
    
    UFUNCTION(BlueprintPure)
    static UClass* CoalesceClass(UClass* A, UClass* B);
    
    UFUNCTION(BlueprintPure)
    static FIntVector AddIntVectors(const FIntVector& A, const FIntVector& B);
    
};


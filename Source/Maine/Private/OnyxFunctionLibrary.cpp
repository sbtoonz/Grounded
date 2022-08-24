#include "OnyxFunctionLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class UObject;
class UActorComponent;

FIntVector UOnyxFunctionLibrary::SubtractIntVectors(const FIntVector& A, const FIntVector& B) {
    return FIntVector{};
}

FRotator UOnyxFunctionLibrary::RInterpCappedTo(const FRotator& Current, const FRotator& Target, float DeltaTime, float Alpha, float MaxSpeed) {
    return FRotator{};
}

bool UOnyxFunctionLibrary::RangeContains(const FFloatRange& Range, float Value) {
    return false;
}

FDataTableRowHandle UOnyxFunctionLibrary::RandomElementRowHandle(const TArray<FDataTableRowHandle>& Array) {
    return FDataTableRowHandle{};
}

FLocString UOnyxFunctionLibrary::RandomElementLocString(const TArray<FLocString>& Array) {
    return FLocString{};
}

int32 UOnyxFunctionLibrary::RandomElementInt(const TArray<int32>& Array) {
    return 0;
}

float UOnyxFunctionLibrary::RandomElementFloat(const TArray<float>& Array) {
    return 0.0f;
}

int32 UOnyxFunctionLibrary::KeyToNumberZeroBased(const FKey& Key) {
    return 0;
}

int32 UOnyxFunctionLibrary::KeyToNumberOneBased(const FKey& Key) {
    return 0;
}

FInputChord UOnyxFunctionLibrary::KeyMappingToChord(const FInputActionKeyMapping& Mapping) {
    return FInputChord{};
}

FString UOnyxFunctionLibrary::JoinStringsRemoveEmpty(const FString& A, const FString& B, const FString& Separator) {
    return TEXT("");
}

bool UOnyxFunctionLibrary::IsHandled(const FEventReply& Reply) {
    return false;
}

bool UOnyxFunctionLibrary::IsAxisPressKey(const FKey& Key) {
    return false;
}

FTransform UOnyxFunctionLibrary::GetStaticMeshSocketTransform(AActor* Actor, FName SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) {
    return FTransform{};
}

AActor* UOnyxFunctionLibrary::GetSelfOrOuterActor(UObject* Object) {
    return NULL;
}

FInputChord UOnyxFunctionLibrary::GetPointerEventChord(const FPointerEvent& Event) {
    return FInputChord{};
}

FInputChord UOnyxFunctionLibrary::GetKeyEventChord(const FKeyEvent& Event) {
    return FInputChord{};
}

FGameplayTagContainer UOnyxFunctionLibrary::GetGameplayTagChildren(FGameplayTag Tag, bool bIncludeSelf) {
    return FGameplayTagContainer{};
}

UActorComponent* UOnyxFunctionLibrary::GetComponentByClassSafe(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return NULL;
}

TArray<FGameplayTag> UOnyxFunctionLibrary::GameplayTagArrayMatchOrder(const TArray<FGameplayTag>& Source, TArray<FGameplayTag>& Target) {
    return TArray<FGameplayTag>();
}

FText UOnyxFunctionLibrary::FormatIntToFit(int32 Value, int32 MaxCharacters) {
    return FText::GetEmpty();
}

float UOnyxFunctionLibrary::FindDeltaAngleRadians(float A1, float A2) {
    return 0.0f;
}

float UOnyxFunctionLibrary::FindDeltaAngleDegrees(float A1, float A2) {
    return 0.0f;
}

UClass* UOnyxFunctionLibrary::CoalesceClass(UClass* A, UClass* B) {
    return NULL;
}

FIntVector UOnyxFunctionLibrary::AddIntVectors(const FIntVector& A, const FIntVector& B) {
    return FIntVector{};
}

UOnyxFunctionLibrary::UOnyxFunctionLibrary() {
}


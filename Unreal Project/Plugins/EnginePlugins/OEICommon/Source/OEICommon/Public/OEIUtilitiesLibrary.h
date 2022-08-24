#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "OEIUtilitiesLibrary.generated.h"

class UWorld;
class AActor;

UCLASS(BlueprintType)
class OEICOMMON_API UOEIUtilitiesLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEIUtilitiesLibrary();
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLoadedSubLevels(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteConsoleCommand(const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesMapExist(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    static void CameraLookAtActor(const TArray<AActor*>& Actors, FVector& OutCameraPos, FRotator& OutCameraRot);
    
};


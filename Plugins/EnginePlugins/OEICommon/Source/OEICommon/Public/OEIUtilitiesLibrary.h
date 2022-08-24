#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "OEIUtilitiesLibrary.generated.h"

class UWorld;
class AActor;

UCLASS(Blueprintable)
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


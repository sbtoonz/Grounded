#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OEIPlayUtilsSubsystem.generated.h"

UCLASS(Blueprintable)
class OEIPLAYUTILS_API UOEIPlayUtilsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectConsoleCommandListsBasePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserConsoleCommandListsBasePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BeginPlayCommandsFileName;
    
    UOEIPlayUtilsSubsystem();
    UFUNCTION(BlueprintCallable)
    void OnWorldBeginPlay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteConsoleCommandsFromFile(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteBeginPlayCommands();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisplayAspectRatio(bool Enable);
    
};


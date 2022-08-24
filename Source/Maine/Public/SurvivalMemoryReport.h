#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SurvivalMemoryReport.generated.h"

UCLASS(Blueprintable)
class USurvivalMemoryReport : public UObject {
    GENERATED_BODY()
public:
    USurvivalMemoryReport();
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateUnusedCollisionReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateStreamingTextureReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateSolidColorTextureReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateNonStreamingTextureReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateMemoryReport(int32 FullReport);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateIncompressibleTexturesReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateHISMAReport();
    
};


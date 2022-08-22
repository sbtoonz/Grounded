#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SurvivalMemoryReport.generated.h"

UCLASS()
class USurvivalMemoryReport : public UObject {
    GENERATED_BODY()
public:
    USurvivalMemoryReport();
    UFUNCTION(Exec)
    void GenerateUnusedCollisionReport();
    
    UFUNCTION(Exec)
    void GenerateStreamingTextureReport();
    
    UFUNCTION(Exec)
    void GenerateSolidColorTextureReport();
    
    UFUNCTION(Exec)
    void GenerateNonStreamingTextureReport();
    
    UFUNCTION(Exec)
    void GenerateMemoryReport(int32 FullReport);
    
    UFUNCTION(Exec)
    void GenerateIncompressibleTexturesReport();
    
    UFUNCTION(Exec)
    void GenerateHISMAReport();
    
};


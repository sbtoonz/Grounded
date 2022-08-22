#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "HUDMarkerParameters.generated.h"

USTRUCT(BlueprintType)
struct FHUDMarkerParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool bShowDistance;
    
    UPROPERTY(BlueprintReadWrite)
    float Lifetime;
    
    UPROPERTY(BlueprintReadWrite)
    int32 IconVariant;
    
    UPROPERTY(BlueprintReadWrite)
    int32 ColorVariant;
    
    UPROPERTY(BlueprintReadWrite)
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite)
    FColor Color;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    FDataTableRowHandle Quest;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    FDataTableRowHandle AdditionalData;
    
    MAINE_API FHUDMarkerParameters();
};


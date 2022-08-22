#pragma once
#include "CoreMinimal.h"
#include "PerkTier.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIGlobalVariables -ObjectName=GlobalVariableReference -FallbackName=GlobalVariableReference
#include "PerkData.generated.h"

class UPlayerStatConfig;
class UTexture2D;

USTRUCT(BlueprintType)
struct MAINE_API FPerkData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString LocalizedDescription;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPlayerStatConfig* Stat;
    
    UPROPERTY(EditAnywhere)
    FGlobalVariableReference GlobalVariable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FPerkTier> Tiers;
    
    FPerkData();
};


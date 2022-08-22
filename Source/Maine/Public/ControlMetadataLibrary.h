#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAxisKeyMapping -FallbackName=InputAxisKeyMapping
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnyControlMapping.h"
#include "ControlMetadata.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputActionKeyMapping -FallbackName=InputActionKeyMapping
#include "ControlMetadataLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UControlMetadataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UControlMetadataLibrary();
    UFUNCTION(BlueprintPure)
    static FLocString GetControlDisplayName(const FControlMetadata& MetaData, bool bDisplayingForGamepad);
    
    UFUNCTION(BlueprintPure)
    static int32 GetConflictCategoryMask(const FControlMetadata& MetaData);
    
    UFUNCTION(BlueprintPure)
    static FAnyControlMapping AxisMappingToAnyMapping(const FInputAxisKeyMapping& InMapping);
    
    UFUNCTION(BlueprintPure)
    static FAnyControlMapping ActionMappingToAnyMapping(const FInputActionKeyMapping& InMapping);
    
};


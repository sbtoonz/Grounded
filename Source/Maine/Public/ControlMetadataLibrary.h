#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ControlMetadata.h"
#include "GameFramework/PlayerInput.h"
#include "AnyControlMapping.h"
#include "GameFramework/PlayerInput.h"
#include "ControlMetadataLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UControlMetadataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UControlMetadataLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLocString GetControlDisplayName(const FControlMetadata& MetaData, bool bDisplayingForGamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetConflictCategoryMask(const FControlMetadata& MetaData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAnyControlMapping AxisMappingToAnyMapping(const FInputAxisKeyMapping& InMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAnyControlMapping ActionMappingToAnyMapping(const FInputActionKeyMapping& InMapping);
    
};


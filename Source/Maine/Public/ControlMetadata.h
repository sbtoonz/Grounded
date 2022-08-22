#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "EBindableControlCategory.h"
#include "EControlConflictContext.h"
#include "ControlMetadata.generated.h"

USTRUCT(BlueprintType)
struct FControlMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString DisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString GamepadOverrideDisplayName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FLocString Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ReverseActionName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRebindableKeyboard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bRebindableGamepad;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<EControlConflictContext> ConflictCategories;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EBindableControlCategory Category;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 OrderInUI;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideForKeyboard;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideForGamepad;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FString FeatureGate;
    
    MAINE_API FControlMetadata();
};


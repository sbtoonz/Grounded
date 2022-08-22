#pragma once
#include "CoreMinimal.h"
#include "EInteractionType.h"
#include "EInteractionChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "InteractableFunctionLibrary.generated.h"

class UObject;
class AActor;
class UItem;

UCLASS(BlueprintType)
class MAINE_API UInteractableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractableFunctionLibrary();
    UFUNCTION(BlueprintPure)
    static bool ShowInteractionInterface(const UObject* Interactable, EInteractionChannel Channel, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    static bool ShouldShowAnyInteractionInterface(const UObject* Interactable, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintCallable)
    static void SendInteractError(UObject* Source, AActor* InstigatedBy, const FText& Warning);
    
    UFUNCTION(BlueprintPure)
    static bool IsAnyInteractionEnabled(const UObject* Interactable, const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    static UItem* GetInteractItem(const AActor* InstigatedBy);
    
    UFUNCTION(BlueprintPure)
    static EInteractionType GetFirstEnabledPrimaryInteractionType(const UObject* Interactable, const AActor* InstigatedBy);
    
};


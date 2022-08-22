#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableReferenceConditional.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIText -ObjectName=LocString -FallbackName=LocString
#include "ETerminalWidgetState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIScripting -ObjectName=ELogicalOperator -FallbackName=ELogicalOperator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "TerminalConditional.generated.h"

class UConditionalToggleComponent;

USTRUCT(BlueprintType)
struct FTerminalConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ConditionalStateName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalVariableReferenceConditional> GlobalVariableConditionals;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ELogicalOperator ConditionalLogic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ETerminalWidgetState WidgetState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StateDisablesInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalVariableReferenceConditional> GlobalValuesSetOnInteract;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDataTableRowHandle> RequiredItemsToSetGlobalValues;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLocString InteractionText;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UConditionalToggleComponent* ToggleComponent;
    
    MAINE_API FTerminalConditional();
};


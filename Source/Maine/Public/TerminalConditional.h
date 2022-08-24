#pragma once
#include "CoreMinimal.h"
#include "GlobalVariableReferenceConditional.h"
#include "ELogicalOperator.h"
#include "ETerminalWidgetState.h"
#include "Engine/DataTable.h"
#include "LocString.h"
#include "TerminalConditional.generated.h"

class UConditionalToggleComponent;

USTRUCT(BlueprintType)
struct FTerminalConditional {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConditionalStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalVariableReferenceConditional> GlobalVariableConditionals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELogicalOperator ConditionalLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETerminalWidgetState WidgetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StateDisablesInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalVariableReferenceConditional> GlobalValuesSetOnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> RequiredItemsToSetGlobalValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString InteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UConditionalToggleComponent* ToggleComponent;
    
    MAINE_API FTerminalConditional();
};


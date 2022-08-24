#pragma once
#include "CoreMinimal.h"
#include "EExpressionComponentType.generated.h"

UENUM()
enum class EExpressionComponentType : uint8 {
    ScriptCall,
    Expression,
};


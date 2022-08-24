#pragma once
#include "CoreMinimal.h"
#include "EPFJson.generated.h"

UENUM()
namespace EPFJson {
    enum Type {
        None,
        Null,
        String,
        Number,
        Boolean,
        Array,
        Object,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "EJiraIssueType.generated.h"

UENUM()
enum class EJiraIssueType {
    Bug = 0x1,
    Task = 0x29CD,
    Unknown = 0xFFFF,
};


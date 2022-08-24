#pragma once
#include "CoreMinimal.h"
#include "ComponentLiteData.h"
#include "Engine/DataTable.h"
#include "TeamComponentLiteData.generated.h"

UCLASS(Blueprintable)
class MAINE_API UTeamComponentLiteData : public UComponentLiteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DefaultTeamRowHandle;
    
    UTeamComponentLiteData();
};


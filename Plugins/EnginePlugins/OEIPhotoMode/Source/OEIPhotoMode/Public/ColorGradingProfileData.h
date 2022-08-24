#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ColorGradingProfile.h"
#include "ColorGradingProfileData.generated.h"

UCLASS(Blueprintable)
class OEIPHOTOMODE_API UColorGradingProfileData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColorGradingProfile> Profiles;
    
    UColorGradingProfileData();
    UFUNCTION(BlueprintCallable)
    bool IsValidIndex(int32 Index);
    
};


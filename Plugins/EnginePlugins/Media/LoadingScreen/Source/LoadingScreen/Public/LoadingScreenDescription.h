#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoviePlayer.h"
#include "LocString.h"
#include "Widgets/Layout/SScaleBox.h"
#include "LoadingScreenDescription.generated.h"

USTRUCT(BlueprintType)
struct LOADINGSCREEN_API FLoadingScreenDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumLoadingScreenDisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCompleteWhenLoadingCompletes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMoviesAreSkippable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForManualStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForLevelStreamingToComplete;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMoviePlaybackType> PlaybackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MoviePaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUIOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocString LoadingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> Images;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EStretch::Type> ImageStretch;
    
    FLoadingScreenDescription();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "OEIMediaPlayerInterface.generated.h"

UINTERFACE(MinimalAPI)
class UOEIMediaPlayerInterface : public UInterface {
    GENERATED_BODY()
};

class IOEIMediaPlayerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void OnMovieLoaded(const FString& OpenedUrl) PURE_VIRTUAL(OnMovieLoaded,);
    
    UFUNCTION()
    virtual void OnMovieFinished_Impl() PURE_VIRTUAL(OnMovieFinished_Impl,);
    
};


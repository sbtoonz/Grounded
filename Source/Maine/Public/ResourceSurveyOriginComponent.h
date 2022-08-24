#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PersistentInterface.h"
#include "ResourceSurveyOriginComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UResourceSurveyOriginComponent : public USceneComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScanRadius;
    
public:
    UResourceSurveyOriginComponent();
    
    // Fix for true pure virtual functions not being implemented
};


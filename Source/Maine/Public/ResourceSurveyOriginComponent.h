#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "PersistentInterface.h"
#include "ResourceSurveyOriginComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UResourceSurveyOriginComponent : public USceneComponent, public IPersistentInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float ScanRadius;
    
public:
    UResourceSurveyOriginComponent();
    
    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "BuildingHealthWidget.generated.h"

class UCanvasPanel;
class UProgressBar;
class AActor;
class UHealthComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MAINE_API UBuildingHealthWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCanvasPanel* HealthHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UProgressBar* HealthBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HideDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowingBar;
    
public:
    UBuildingHealthWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowBar();
    
    UFUNCTION(BlueprintCallable)
    void HideBar();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetHealthBarColor(float HealthRatio);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FLinearColor GetFragileBarColor(float FragileRatio);
    
};


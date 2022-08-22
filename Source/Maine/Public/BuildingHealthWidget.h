#pragma once
#include "CoreMinimal.h"
#include "GameUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BuildingHealthWidget.generated.h"

class UCanvasPanel;
class UProgressBar;
class AActor;
class UHealthComponent;

UCLASS(Abstract, EditInlineNew)
class MAINE_API UBuildingHealthWidget : public UGameUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UCanvasPanel* HealthHolder;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UProgressBar* HealthBar;
    
    UPROPERTY(BlueprintReadWrite)
    float HideDelay;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite)
    bool bShowingBar;
    
public:
    UBuildingHealthWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void ShowBar();
    
    UFUNCTION(BlueprintCallable)
    void HideBar();
    
    UFUNCTION(BlueprintImplementableEvent)
    FLinearColor GetHealthBarColor(float HealthRatio);
    
    UFUNCTION(BlueprintImplementableEvent)
    FLinearColor GetFragileBarColor(float FragileRatio);
    
};


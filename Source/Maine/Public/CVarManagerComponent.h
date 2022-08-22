#pragma once
#include "CoreMinimal.h"
#include "ECVarCapturePredicate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CVarStackFrame.h"
#include "CVarManagerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCVarManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FCVarStackFrame> CVarStack;
    
    UCVarManagerComponent();
    UFUNCTION(BlueprintCallable)
    void SetCVarInt(const FString& CVar, int32 Value, ECVarCapturePredicate Predicate);
    
    UFUNCTION(BlueprintCallable)
    void SetCVarFloat(const FString& CVar, float Value, ECVarCapturePredicate Predicate);
    
    UFUNCTION(BlueprintCallable)
    void SetCVarBool(const FString& CVar, bool Value);
    
    UFUNCTION(BlueprintCallable)
    void PushFrame();
    
    UFUNCTION(BlueprintCallable)
    void PopFrame();
    
};


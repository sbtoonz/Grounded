#pragma once
#include "CoreMinimal.h"
#include "ECVarCapturePredicate.h"
#include "Components/ActorComponent.h"
#include "CVarStackFrame.h"
#include "CVarManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UCVarManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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


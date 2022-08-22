#pragma once
#include "CoreMinimal.h"
#include "WindowLock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "WindowLocksChangedEventDelegate.h"
#include "InterfaceManagerComponent.generated.h"

class AActor;
class UWindowWidget;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UInterfaceManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWindowLocksChangedEvent OnWindowLocksChanged;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_OpenExclusiveWindows)
    TArray<FWindowLock> OpenExclusiveWindows;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftClassPtr<UWindowWidget>> ExclusiveWindows;
    
public:
    UInterfaceManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnRep_OpenExclusiveWindows();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWindowLocked(const TSoftClassPtr<UWindowWidget>& Window) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetWindowLocker(const TSoftClassPtr<UWindowWidget>& Window) const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WindowLocksChangedEventDelegate.h"
#include "WindowLock.h"
#include "InterfaceManagerComponent.generated.h"

class AActor;
class UWindowWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAINE_API UInterfaceManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWindowLocksChangedEvent OnWindowLocksChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OpenExclusiveWindows, meta=(AllowPrivateAccess=true))
    TArray<FWindowLock> OpenExclusiveWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UWindowWidget>> ExclusiveWindows;
    
public:
    UInterfaceManagerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_OpenExclusiveWindows();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindowLocked(const TSoftClassPtr<UWindowWidget>& Window) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetWindowLocker(const TSoftClassPtr<UWindowWidget>& Window) const;
    
};


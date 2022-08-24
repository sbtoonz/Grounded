#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CDOFunctionLibrary.generated.h"

class UObject;
class USceneComponent;
class AActor;
class UActorComponent;

UCLASS(Blueprintable)
class MAINE_API UCDOFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCDOFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDefaultObject(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USceneComponent* GetRootComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetDefaultComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UActorComponent*> FindDefaultComponentsByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindDefaultComponentByName(const AActor* Actor, FName ComponentName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* FindDefaultComponentByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
};


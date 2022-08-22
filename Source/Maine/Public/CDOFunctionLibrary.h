#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CDOFunctionLibrary.generated.h"

class USceneComponent;
class UObject;
class AActor;
class UActorComponent;

UCLASS(BlueprintType)
class MAINE_API UCDOFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCDOFunctionLibrary();
    UFUNCTION(BlueprintPure)
    bool IsDefaultObject(const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    static USceneComponent* GetRootComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* GetDefaultComponent(const UActorComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static TArray<UActorComponent*> FindDefaultComponentsByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* FindDefaultComponentByName(const AActor* Actor, FName ComponentName);
    
    UFUNCTION(BlueprintPure)
    static UActorComponent* FindDefaultComponentByClass(const AActor* Actor, const TSubclassOf<UActorComponent> ComponentClass);
    
};


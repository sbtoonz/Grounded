#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LODActorStatics.generated.h"

UCLASS(BlueprintType)
class MAINE_API ULODActorStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULODActorStatics();
    UFUNCTION(BlueprintCallable)
    static void LODActorSaveBlueprintVectorArray(TArray<FVector> inArray);
    
    UFUNCTION(BlueprintCallable)
    static void LODActorSaveBlueprintVector(FVector InVector);
    
    UFUNCTION(BlueprintCallable)
    static void LODActorSaveBlueprintInt(int32 inInt);
    
    UFUNCTION(BlueprintCallable)
    static void LODActorSaveBlueprintFloat(float InFloat);
    
    UFUNCTION(BlueprintCallable)
    static void LODActorSaveBlueprintBool(bool InBool);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> LODActorRestoreBlueprintVectorArray();
    
    UFUNCTION(BlueprintCallable)
    static FVector LODActorRestoreBlueprintVector();
    
    UFUNCTION(BlueprintCallable)
    static int32 LODActorRestoreBlueprintInt();
    
    UFUNCTION(BlueprintCallable)
    static float LODActorRestoreBlueprintFloat();
    
    UFUNCTION(BlueprintCallable)
    static bool LODActorRestoreBlueprintBool();
    
};


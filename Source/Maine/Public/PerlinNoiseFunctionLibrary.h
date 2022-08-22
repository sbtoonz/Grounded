#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "PerlinNoise.h"
#include "PerlinNoiseFunctionLibrary.generated.h"

UCLASS(BlueprintType)
class MAINE_API UPerlinNoiseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerlinNoiseFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetPerlinNoiseSeed(UPARAM(Ref) FPerlinNoise& Noise, int32 NewSeed);
    
    UFUNCTION(BlueprintPure)
    static float SamplePerlinNoise1D(UPARAM(Ref) FPerlinNoise& Noise, float Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPerlinNoiseSeed(UPARAM(Ref) FPerlinNoise& Noise);
    
};


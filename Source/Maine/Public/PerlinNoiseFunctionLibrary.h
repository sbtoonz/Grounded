#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PerlinNoise.h"
#include "PerlinNoiseFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MAINE_API UPerlinNoiseFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPerlinNoiseFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetPerlinNoiseSeed(UPARAM(Ref) FPerlinNoise& Noise, int32 NewSeed);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float SamplePerlinNoise1D(UPARAM(Ref) FPerlinNoise& Noise, float Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetPerlinNoiseSeed(UPARAM(Ref) FPerlinNoise& Noise);
    
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "LocString.h"
#include "OEITextLibrary.generated.h"

UCLASS(BlueprintType)
class OEITEXT_API UOEITextLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEITextLibrary();
    UFUNCTION(BlueprintPure)
    static FLocString MakeLocString(int32 StringTableID, int32 StringID);
    
    UFUNCTION(BlueprintPure)
    static FString GetLocStringText(const FLocString& LocString);
    
};


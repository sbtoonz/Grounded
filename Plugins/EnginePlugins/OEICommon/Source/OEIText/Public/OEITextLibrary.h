#pragma once
#include "CoreMinimal.h"
#include "LocString.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OEITextLibrary.generated.h"

UCLASS(Blueprintable)
class OEITEXT_API UOEITextLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOEITextLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLocString MakeLocString(int32 StringTableID, int32 StringID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetLocStringText(const FLocString& LocString);
    
};


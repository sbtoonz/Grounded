#pragma once
#include "CoreMinimal.h"
#include "EPFJson.h"
#include "UObject/Object.h"
#include "PlayFabJsonValue.generated.h"

class UPlayFabJsonValue;
class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabJsonValue : public UObject {
    GENERATED_BODY()
public:
    UPlayFabJsonValue();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTypeString() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPFJson::Type> GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayFabJsonValue* ConstructJsonValueString(UObject* WorldContextObject, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayFabJsonValue* ConstructJsonValueObject(UObject* WorldContextObject, UPlayFabJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayFabJsonValue* ConstructJsonValueNumber(UObject* WorldContextObject, float Number);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayFabJsonValue* ConstructJsonValueBool(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPlayFabJsonValue* ConstructJsonValueArray(UObject* WorldContextObject, const TArray<UPlayFabJsonValue*>& inArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString AsString() const;
    
    UFUNCTION(BlueprintCallable)
    UPlayFabJsonObject* AsObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float AsNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AsBool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPlayFabJsonValue*> AsArray() const;
    
};


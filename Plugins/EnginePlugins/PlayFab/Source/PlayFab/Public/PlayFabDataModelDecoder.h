#pragma once
#include "CoreMinimal.h"
#include "DataInitiateFileUploadsResponse.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataDeleteFilesResponse.h"
#include "DataSetObjectsResponse.h"
#include "DataFinalizeFileUploadsResponse.h"
#include "DataGetObjectsResponse.h"
#include "DataGetFilesResponse.h"
#include "DataAbortFileUploadsResponse.h"
#include "PlayFabDataModelDecoder.generated.h"

class UPlayFabJsonObject;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabDataModelDecoder : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPlayFabDataModelDecoder();
    UFUNCTION(BlueprintCallable)
    static FDataSetObjectsResponse decodeSetObjectsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FDataInitiateFileUploadsResponse decodeInitiateFileUploadsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FDataGetObjectsResponse decodeGetObjectsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FDataGetFilesResponse decodeGetFilesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FDataFinalizeFileUploadsResponse decodeFinalizeFileUploadsResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FDataDeleteFilesResponse decodeDeleteFilesResponseResponse(UPlayFabJsonObject* response);
    
    UFUNCTION(BlueprintCallable)
    static FDataAbortFileUploadsResponse decodeAbortFileUploadsResponseResponse(UPlayFabJsonObject* response);
    
};


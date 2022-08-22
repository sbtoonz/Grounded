#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEIFlowCharts -ObjectName=ConversationReference -FallbackName=ConversationReference
#include "InspectData.generated.h"

class AActor;
class UStaticMesh;
class UMaterialInterface;
class USkeletalMesh;
class UTexture;

USTRUCT(BlueprintType)
struct FInspectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<AActor> InspectModelOverrideSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStaticMesh> InspectStaticMeshOverrideSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<USkeletalMesh> InspectSkeletalMeshOverrideSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UTexture> InspectModel2DTextureOverrideSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<UMaterialInterface*> InspectMaterialsOverride;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ModelScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FConversationReference Conversation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ConversationStartNode;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool InspectKeyItemOnPickup;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bAllowYRotation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bShowSkyLight;
    
    MAINE_API FInspectData();
};


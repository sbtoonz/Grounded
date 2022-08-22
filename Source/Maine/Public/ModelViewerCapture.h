#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EEquipmentSlot.h"
#include "ModelViewerCapture.generated.h"

class UStaticMesh;
class USkeletalMesh;
class UMaterialInterface;
class UTexture;

UCLASS()
class MAINE_API AModelViewerCapture : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    uint8 bAutoRotate: 1;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 bAllowRotationY: 1;
    
    UPROPERTY(BlueprintReadWrite)
    float StartingRotationX;
    
    UPROPERTY(BlueprintReadWrite)
    float StartingRotationY;
    
public:
    AModelViewerCapture();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewStaticMesh(UStaticMesh* Mesh, const TArray<UMaterialInterface*>& Materials, float Scale, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewSkeletalMesh(USkeletalMesh* Mesh, const TArray<UMaterialInterface*>& Materials, float Scale, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewBlueprint(TSubclassOf<AActor> BlueprintClass, float Scale, FVector Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ViewArmorMesh(USkeletalMesh* Mesh, const TArray<UMaterialInterface*>& Materials, float Scale, FVector Offset, EEquipmentSlot Slot, bool bUsePet);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void View2DTexture(UTexture* Texture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowSkyLight(bool bShow);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowOverheadSpot(bool bShow);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInspectionStaticMesh(UStaticMesh* Mesh);
    
    UFUNCTION(BlueprintCallable)
    void SetInspectionItemData(const FDataTableRowHandle& ItemDataHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetInspectionBuildingData(const FDataTableRowHandle& BuildingDataHandle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeRotation(bool bInAutoRotate, bool bInAllowRotationY, float InStartingRotationX, float InStartingRotationY);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Cleanup();
    
};


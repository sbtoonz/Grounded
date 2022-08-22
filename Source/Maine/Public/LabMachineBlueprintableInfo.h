#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LabMachineBlueprintableInfo.generated.h"

USTRUCT(BlueprintType)
struct FLabMachineBlueprintableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetDoodadsTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetOneDoodadsBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetPanelTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetOnePanelBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetTwoFrontPanelTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetTwoInsetDoodadsTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetTwoFrontPanelBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetTwoInsetDoodadsBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CabinetDoor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 TopPiece;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 ConsolePlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 ConsoleButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 ConsoleFrontPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 ConsoleDoodads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasMonitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 CollisionDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 VariantType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FlipCabinet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlinkingLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ManuallyOverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LightsOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CabinetDoorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanHaveDoodadsOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanHaveDoodadsTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanHaveDoodadsThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanHaveDoodadsFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CanHaveDoodadsFive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CabinetPanelTrimTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CabinetOnePanelTrimBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CabinetTwoPanelTrimTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool CabinetTwoPanelTrimBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasCabinet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HasConsoleA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ConsolePanelTrim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool FlipConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TableBaseVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool EmissiveStrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor EmissiveStripColor;
    
    MAINE_API FLabMachineBlueprintableInfo();
};


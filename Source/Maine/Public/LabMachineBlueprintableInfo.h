#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LabMachineBlueprintableInfo.generated.h"

USTRUCT(BlueprintType)
struct FLabMachineBlueprintableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 CabinetDoodadsTop;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetOneDoodadsBottom;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetPanelTop;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetOnePanelBottom;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetTwoFrontPanelTop;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetTwoInsetDoodadsTop;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetTwoFrontPanelBottom;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetTwoInsetDoodadsBottom;
    
    UPROPERTY(EditAnywhere)
    uint8 CabinetDoor;
    
    UPROPERTY(EditAnywhere)
    uint8 TopPiece;
    
    UPROPERTY(EditAnywhere)
    uint8 ConsolePlate;
    
    UPROPERTY(EditAnywhere)
    uint8 ConsoleButtons;
    
    UPROPERTY(EditAnywhere)
    uint8 ConsoleFrontPanel;
    
    UPROPERTY(EditAnywhere)
    uint8 ConsoleDoodads;
    
    UPROPERTY(EditAnywhere)
    uint8 CollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasMonitor;
    
    UPROPERTY(EditAnywhere)
    uint8 CollisionDisabled;
    
    UPROPERTY(EditAnywhere)
    uint8 VariantType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlipCabinet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlinkingLights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ManuallyOverrideMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LightsOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CabinetDoorA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHaveDoodadsOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHaveDoodadsTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHaveDoodadsThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHaveDoodadsFour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanHaveDoodadsFive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CabinetPanelTrimTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CabinetOnePanelTrimBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CabinetTwoPanelTrimTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CabinetTwoPanelTrimBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCabinet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasConsoleA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ConsolePanelTrim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FlipConsole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TableBaseVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EmissiveStrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmissiveStripColor;
    
    MAINE_API FLabMachineBlueprintableInfo();
};


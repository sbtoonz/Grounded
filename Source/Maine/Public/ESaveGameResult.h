#pragma once
#include "CoreMinimal.h"
#include "ESaveGameResult.generated.h"

UENUM()
enum class ESaveGameResult : uint8 {
    Success,
    Restricted,
    FileWritingFailure,
    UnableToSaveCompanionStates,
    PlayerNotAvailable,
    AsyncSaveTask_Begun,
    AsyncSaveTask_Failed_DeviceFull,
    AsyncSaveTask_FailedDeletingStaleTargetDir,
    AsyncSaveTask_FailedCreatingTargetDir,
    AsyncSaveTask_StorageUninitialized,
    AsyncSaveTask_FailedStorageContainer,
    AsyncSaveTask_Suspended,
    AsyncSaveTask_NoMetadata,
    AsyncSaveTask_BufferAccessFailed,
    AsyncSaveTask_BufferMaximumReached,
    AsyncSaveTask_FailedPopulatingSaveFileMap,
    AsyncSaveTask_Delayed,
    AsyncSaveTask_FailedScreenshotWaitTimeout,
    AsyncSaveTask_FailedSaveStateCompression,
};


#include "PersistentUtilsStatics.h"

class USaveWriter;
class USaveReader;

void UPersistentUtilsStatics::BlueprintWritePersistentInt(USaveWriter* Writer, int32 Value) {
}

void UPersistentUtilsStatics::BlueprintWritePersistentBool(USaveWriter* Writer, bool Value) {
}

int32 UPersistentUtilsStatics::BlueprintReadPersistentInt(USaveReader* Reader) {
    return 0;
}

bool UPersistentUtilsStatics::BlueprintReadPersistentBool(USaveReader* Reader) {
    return false;
}

UPersistentUtilsStatics::UPersistentUtilsStatics() {
}


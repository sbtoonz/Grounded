#include "ControlMetadata.h"

FControlMetadata::FControlMetadata() {
    this->bRebindableKeyboard = false;
    this->bRebindableGamepad = false;
    this->Category = EBindableControlCategory::Default;
    this->OrderInUI = 0;
    this->bHideForKeyboard = false;
    this->bHideForGamepad = false;
}


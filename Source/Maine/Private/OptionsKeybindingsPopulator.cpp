#include "OptionsKeybindingsPopulator.h"

UOptionsKeybindingsPopulator::UOptionsKeybindingsPopulator() {
    this->ControlListBox = NULL;
    this->ChildClass = NULL;
    this->Category = EBindableControlCategory::Default;
    this->bGamepadControls = false;
}


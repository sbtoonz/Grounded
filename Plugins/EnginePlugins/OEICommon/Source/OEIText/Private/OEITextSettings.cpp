#include "OEITextSettings.h"

UOEITextSettings::UOEITextSettings() {
    this->DefaultLanguageCode = TEXT("ENUS");
    this->DefaultVOLanguageCode = TEXT("ENUS");
    this->bSupportsDialects = true;
    this->SupportedVOLanguageCodes.AddDefaulted(1);
}


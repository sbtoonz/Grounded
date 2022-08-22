#include "SpeakerFunctionLibrary.h"

FString USpeakerFunctionLibrary::GetSpeakerBundleVOPrefix(const FSpeakerBundle& Bundle) {
    return TEXT("");
}

FString USpeakerFunctionLibrary::GetSpeakerBundleObjectName(const FSpeakerBundle& Bundle) {
    return TEXT("");
}

bool USpeakerFunctionLibrary::GetSpeakerBundleIsUniqueNPC(const FSpeakerBundle& Bundle) {
    return false;
}

FGuid USpeakerFunctionLibrary::GetSpeakerBundleID(const FSpeakerBundle& Bundle) {
    return FGuid{};
}

EOEIGender USpeakerFunctionLibrary::GetSpeakerBundleGender(const FSpeakerBundle& Bundle) {
    return EOEIGender::Male;
}

FLocString USpeakerFunctionLibrary::GetSpeakerBundleDisplayName(const FSpeakerBundle& Bundle) {
    return FLocString{};
}

FGuid USpeakerFunctionLibrary::GetSpeakerBundleChatterFileID(const FSpeakerBundle& Bundle) {
    return FGuid{};
}

USpeakerFunctionLibrary::USpeakerFunctionLibrary() {
}


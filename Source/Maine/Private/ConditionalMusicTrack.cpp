#include "ConditionalMusicTrack.h"

FConditionalMusicTrack::FConditionalMusicTrack() {
    this->MusicTrack = NULL;
    this->GlobalVariableComparisonOperator = EComparisonOperator::Equals;
    this->GlobalVariableCompareValue = 0;
}


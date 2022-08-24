#include "StatBlockConfig.h"

UStatBlockConfig::UStatBlockConfig() {
    this->BlockType = EBlockType::PerfectBlock;
    this->bTrackCurrentInARowOnly = false;
}


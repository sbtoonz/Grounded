#include "TalkNode.h"

FTalkNode::FTalkNode() {
    this->EmotionStrength = 0.00f;
    this->EmotionDelay = 0.00f;
    this->bHasGenericSpeaker = false;
    this->bHasVO = false;
    this->bPersistEmotion = false;
    this->bIsCheckpoint = false;
    this->CheckpointBranchID = 0;
    this->bMergeSequenceWithNextNode = false;
    this->bUsesSequence = false;
    this->TimelineHash = 0;
}


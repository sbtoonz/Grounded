#pragma once
#include "CoreMinimal.h"
#include "CharacterPetChangedDelegateDelegate.generated.h"

class ASurvivalPlayerCharacter;
class ASurvivalCreature;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterPetChangedDelegate, ASurvivalPlayerCharacter*, Sender, ASurvivalCreature*, Pet);


#include "Waypoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OEICommon -ObjectName=ObsidianIDComponent -FallbackName=ObsidianIDComponent

class AWaypoint;

void AWaypoint::SetNextWaypoint(AWaypoint* InWaypoint) {
}

AWaypoint::AWaypoint() {
    this->WaypointType = EWaypointType::Patrol;
    this->NextWaypoint = NULL;
    this->Duration = 0.00f;
    this->EmergeVariation = 0;
    this->Anim = NULL;
    this->ChatterDelay = 0.00f;
    this->ObsidianIDComponent = CreateDefaultSubobject<UObsidianIDComponent>(TEXT("ObsidianIDComponent"));
}


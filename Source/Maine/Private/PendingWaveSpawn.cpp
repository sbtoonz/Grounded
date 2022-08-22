#include "PendingWaveSpawn.h"

FPendingWaveSpawn::FPendingWaveSpawn() {
    this->SpawnTarget = NULL;
    this->SpawnRequestID = 0;
    this->SpawnRequestReceived = false;
    this->SpawnRequestFailed = false;
    this->WaveStartRequestID = 0;
    this->WaveStartRequestReceived = false;
    this->WaveStartRequestFailed = false;
    this->MaxMoveSpeedForWave = 0.00f;
}


#include "ManagedRenderTarget.h"

FManagedRenderTarget::FManagedRenderTarget() {
    this->PublisherRequestedUnregister = false;
    this->RenderTargetInfo = NULL;
    this->RenderTarget = NULL;
}


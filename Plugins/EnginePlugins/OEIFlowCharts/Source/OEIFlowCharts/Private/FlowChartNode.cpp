#include "FlowChartNode.h"

FFlowChartNode::FFlowChartNode() {
    this->NodeId = 0;
    this->ContainerNodeID = 0;
    this->NodeType = EFlowChartNodeType::Talk;
    this->ConditionalIndex = 0;
}


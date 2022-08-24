#include "LocStringTokenValue.h"

FLocStringTokenValue::FLocStringTokenValue() {
    this->TokenType = EStringTokenValueType::LocString;
    this->AsInteger = 0;
    this->AsFloat = 0.00f;
}


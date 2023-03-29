#ifndef MOCK_TOY_H
#define MOCK_TOY_H

#include <gmock/gmock.h>

#include "toy.h"

class MockToy : public Toy {

public:
    MOCK_METHOD(int, play, (int time), (override));
    MOCK_METHOD(bool, ring, (), (override));
};

#endif

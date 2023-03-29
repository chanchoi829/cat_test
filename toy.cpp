#include "toy.h"

Toy::Toy() {
    battery = 10;
}

int Toy::play(int time){
    --battery;
    return time * 2;
}

bool Toy::ring() {
    return battery > 0;
}

#include "cat.h"
#include "toy.h"

#include <iostream>

Cat::Cat(Toy *toy) {
    ball = toy;
    age = 2;
    height = 5;
    weight = 10;
    isSick = false;
    asleep = false;
    meal = 10;
}

void Cat::putToSleep() { 
    asleep = true;
}

void Cat::wake(){
    asleep= false;
    //meow();
    if(ball->ring()){
        meow();
        meow();
    }
}

void Cat::meow() {
    age++; 
    std::cout << "MEOW" << std::endl;
    //weight -= ball->play(1);
}

void Cat::eat(int mg) {
    if(!isSick && !asleep && (meal > 0)){
        weight += mg;
        meal += 3;
    }

    // throwUp();
    // weight += mg;
    // meal += 3;
    // throwUp();
    // weight += mg;
    // meal += 3;
 
}

int Cat::throwUp(){
    if(isSick){
        meal -= 5;
        return 5;
    }
    else{
        meal -= 1;
        return 1;
    }
}

int Cat::getAge(){
    return age;
}
int Cat::getHeight(){
    return height;
}
int Cat::getWeight(){
    return weight;
}
bool Cat::getSick(){
    return isSick;
}
bool Cat::getSleep(){
    return asleep;
}

void Cat::setSick(){
    isSick = true;
}


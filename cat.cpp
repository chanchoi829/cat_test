#include "cat.h"

#include <iostream>

Cat::Cat() {
    int age = 2;
    int height = 5;
    int weight = 10;
    bool isSick = false;
    bool asleep = false;
    int meal = 10;
}

void Cat::putToSleep() { 
    asleep = true;
}

void Cat::wake(){
    asleep= false;
    meow();
}

void Cat::meow() {
    age++; 
    std::cout << "MEOW" << std::endl;
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


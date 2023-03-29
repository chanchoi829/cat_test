#ifndef CAT_H
#define CAT_H

class Toy;

class Cat {

public:
    Toy* ball;
    Cat(Toy *toy);
    void putToSleep();
    void wake();
    void meow();
    void eat(int mg);
    int throwUp();

    int getAge();
    int getHeight();
    int getWeight();
    bool getSick();
    bool getSleep();
    void setSick();

private:

    int age;
    int height;
    int weight;
    bool isSick;
    bool asleep;
    int meal;
};

#endif

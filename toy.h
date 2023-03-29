#ifndef TOY_H
#define TOY_H

class Toy {

public:
    Toy();
    virtual ~Toy() {}

    virtual int play(int time) = 0;
    virtual bool ring() = 0;

private:
   int battery;
};

#endif
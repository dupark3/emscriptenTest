#ifndef GUARD_func_h
#define GUARD_func_h

#include <string>


class Player{
public:
    Player() : name(), age(0) { }
    Player(std::string n, int a) : name(n), age(a) { }
    
    int getAge();
    std::string getName();

private:
    std::string name;
    int age;
    
};

#endif
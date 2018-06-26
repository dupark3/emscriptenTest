#include <iostream>
#include <string>

#include "func.h"

using namespace std;

int main(){
    cout << "Enter your name: ";
    string s;
    cin >> s;
    cout << "Enter your age: ";
    int age;
    cin >> age;

    Player player(s, age);

    cout << "Hello, " << player.getName() << "! You are " << player.getAge() << " years old!" << endl;

    return 0;
}
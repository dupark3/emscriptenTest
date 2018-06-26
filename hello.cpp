#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter your name: ";
    string s;
    cin >> s;
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Hello, " << s << "! You are " << age << " years old!" << endl;

    return 0;
}
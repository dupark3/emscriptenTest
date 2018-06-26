#include <fstream> // ifstream
#include <iostream>
#include <string>

#include "func.h"

using namespace std;

int main(){
    
    string s;
    cin >> s;
    
    int age;
    cin >> age;

    Player player(s, age);

    ifstream file;
    file.open("words.txt");

    if (!file){
        cerr << "Unable to open periodic table file";
        std::exit(1); // throw exception here instead?
    }

    string word;

    while(file >> word){
        cout << word << endl;
    }

    cout << "Hello, " << player.getName() << "! You are " << player.getAge() << " years old!" << endl;

    return 0;
}
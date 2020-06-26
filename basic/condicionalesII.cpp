/*
    Condicionales II en C++
    Uso del else if
*/

#include "iostream"

using namespace std;

int main(){
    // Declaracion de variables
    unsigned short int age = 0;

    //Request age to user
    cout << "Enter your age: ";
    cin >> age;

    if(age > 0 && age < 120){

        if(age < 15)
            cout << "You are a boy" << endl;
        else if(age > 14 && age < 31)
            cout << "You're an adolescent" << endl;
        else if(age > 30 && age <= 60)
            cout << "You're an adult" << endl;
        else 
            cout << "You're a great person :)" << endl;

    } else{
        cout << "Hahaha, really?" << endl;
    }

    return 0;
}
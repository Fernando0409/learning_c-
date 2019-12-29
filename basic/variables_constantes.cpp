/*
    Manejo de variables y constantes en C++
    ademas del uso de operadores aritmeticos 
    basicos
*/

#include "iostream"
using namespace std;    // Para llamar a las funciones de la biblioteca iostream

int main(){

    /**************************** Variables **************************/

    /*
        Sintaxis para declarar una variable (algo que su valor puede cambiar)
        modificador + tipo de dato + nombre de variable;
                            or
        modificador + tipo de dato + nombre de variable = valor de la variable;
    */


    // Caso 1 - Definir variables y depues asignar
    unsigned int age; 
    age = 19;

    double bigNum;
    bigNum = 1000000000;

    float weight;
    weight = 84.32;

    cout << "The value of age is: " << age << endl;
    cout << "The value of bigNum is: " << bigNum << endl;
    cout << "The value of weight is: " << weight << endl; 

    // Caso 2 - Definir variables y asignarles un valor
    short int pagesBook = 512;
    float speedCar = 255.30;
    long double bigNum2 = 2000000000000; // Dos billones, México
    
    cout << "The value of pagesBook is: " << pagesBook << endl;
    cout << "The value of speedCar is: " << speedCar << endl;
    cout << "The value of bigNum is: " << bigNum2 << endl;

    return 0;
}

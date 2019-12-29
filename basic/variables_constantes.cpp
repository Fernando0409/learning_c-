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

        El modificador puede ser omitido, no es necesario a menos de que se considere
        necesario
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
    bool sheLovesYou = false;
    
    cout << "The value of pagesBook is: " << pagesBook << endl;
    cout << "The value of speedCar is: " << speedCar << endl;
    cout << "The value of bigNum is: " << bigNum2 << endl;
    cout << "Does she love? " << sheLovesYou << endl;
    
    /*************************** Constantes *******************************/

    /*
        Sintaxis de las constantes -> que su valor no puede modificarse
        const + tipo de dato + nombre de la constante = valor de la constante
    */

    const float PI = 3.14159265359;
    const int SPEED_LIGHT = 299792458;
    const double AVOGADRO_NUMBER = 6.02214076; // En realidad es 6.02214076 x 10^23   

    cout << "Value of PI: " << PI << endl;
    cout << "The speed light is: " << SPEED_LIGHT << endl;
    cout << "The Avogadro's number is: " << AVOGADRO_NUMBER << endl;

    return 0;
}

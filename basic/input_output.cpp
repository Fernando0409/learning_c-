/*
    Entrada y salida de datos 
    en C++ con las intrucciones
    cin & cout respectivamente
*/

#include "iostream"
#include "string"

using namespace std;

int main(){

/******************************* Instruccion cout - Output *******************************************/

    // Ejemplo 1 - Imprimo una cadena de texto y salto de linea con endl (end line, creo xD)
    cout << "La instruccion cout ayuda a imprimir texto" << endl;

    // Ejemplo 2 - Imprimir varios elementos de diferente tipo
    float height = 1.85;
    string name = "Manuel";

    // Output -> Manuel mide 1.85m 
    cout << name << " mide " << height << "m" << endl;

    height = 2.00;  // Actualizamos el valor de la variable
    cout << name << " ahora mide " << height << "m \n" <<endl;

/****************************** Instruccion cin - Input ***********************************************/

    cout << "Instruccion cin - Input, ayuda a ingresar datos" << endl;

    // Ejemplo 1 - Pedir nombre y pais de residencia

    string nameUser;    // Declaramos las variables en donde guardaremos los datos 
    string country;     // del usuario, vacias porque el usuario va a ingresar sus datos personales

    cout << "Enter your name: "; 
    cin >> nameUser;

    cout << "Enter your country: ";
    cin >> country;

    cout << "Merry Christmas from " << country << " by " << nameUser << "\n" <<endl;
    

    // Ejemplo 2 - Pedir dia de nacimiento y mes

    short int birthdaysDay;
    string month;

    cout << "Enter your birthdays day: ";
    cin >> birthdaysDay; 

    cout << "Enter the month of your birthday: ";
    cin >> month;

    cout << nameUser << " born in " << month << ", " << birthdaysDay << endl;

    return 0;
}

/* 
    Como se puede ver la instruccion cin 
    nos permite ingresar datos de cualquier tipo
    sin tener que especificar a comparacion de otros
    lenguajes de programacion como C y Java
*/
/*  Condiciones en C++
    Aprendiendo a usar el condicional if-else
*/

#include "iostream"
#include "string"

using namespace std;

int main(){
    // Declaracion de variables 
    short int result = 0;
    string password;

    cout << "Ejemplo 1" << endl;

    cout << "How many is 105 + 32? ";
    cin >> result;

    if(result == 105 + 32){
        cout << "Respuesta correcta" << endl;
    } else {
        cout << "Respuesta incorrecta" << endl;
    }

    cout << "Ejemplo 2" << endl;

    cout << "Ingresa tu contraseña: ";
    cin >> password;

    if(password == "fer"){
        cout << "Bienvenido!" << endl;
    } else{
        cout << "Contraseña invalida" << endl;
    }

    cout << "Fin del programa";
    
    return 0;
}
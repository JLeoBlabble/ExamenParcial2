#include <iostream>                     //Para poder usar "cout" y "cin"
#include "Ejercicio1.h"                 //Para poder usar las funciones de "Ejercicio1.h"
using namespace std;                    //Para no tener que escribir "std::" delante de "cout" y "cin"

int main() {                            //Función principal
    averiguarNumero::definirNum();      //Llamamos a la función "definirNum" del namespace "averiguarNumero"
    return 0;
}
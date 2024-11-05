#ifndef EJERCICIO1_H
#define EJERCICIO1_H
using namespace std;                                    //Para no tener que usar "std::"

namespace averiguarNumero {                             //Crear un namespace
    void definirNum();                                  //Declaración función "definirNum"

};

namespace averiguarNumero {
    inline void definirNum() {                          //Definición función. El "inline" es para que no llame a la funcón, sino que copie el código y lo utilice aquí
        int numIntroducido;                             //Variable para el número introducido
        cout << "Introduzca un número entero: ";
        cin >> numIntroducido;

        if (numIntroducido > 0) {                       //Comprobar si es positivo
            cout << "El número es positivo" << endl;
        } else if (numIntroducido < 0) {                //Comprobar si es negativo
            cout << "El número es negativo" << endl;
        } else {                                        //Es cero
            cout << "El número es cero" << endl;
        }
    }
}

#endif //EJERCICIO1_H

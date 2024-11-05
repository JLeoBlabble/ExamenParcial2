#ifndef EJERCICIO2_H
#define EJERCICIO2_H
using namespace std;

namespace diaSemana {                                       //Creamos un namespace para la función listaDias
    void listaDias();
};

namespace diaSemana {
    inline void listaDias() {                               //Función con la selección de dias. Utilizamos inline para que se ejecute más rápido
        int dia;                                            //Variable del dia escogido
        cout << "Ingrese un número del 1 al 7: ";
        cin >> dia;

        switch (dia) {                                      //Utiliza switch en vez de "for" o "if", para imprmir el dia de la semana
            case 1:
                cout << "Lunes" << endl;
            break;
            case 2:
                cout << "Martes" << endl;
            break;
            case 3:
                cout << "Miércoles" << endl;
            break;
            case 4:
                cout << "Jueves" << endl;
            break;
            case 5:
                cout << "Viernes" << endl;
            break;
            case 6:
                cout << "Sábado" << endl;
            break;
            case 7:
                cout << "Domingo" << endl;
            break;
            default:
                cout << "Número inválido. Por favor ingrese un número del 1 al 7." << endl; //Mensaje de default por si el usuario no mete un número del 1-7
            break;
        }

    }
}

#endif //EJERCICIO2_H

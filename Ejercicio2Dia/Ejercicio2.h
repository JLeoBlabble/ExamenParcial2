#ifndef EJERCICIO2_H
#define EJERCICIO2_H
using namespace std;

namespace diaSemana {
    void listaDias();
};

namespace diaSemana {
    inline void listaDias() {
        int dia;
        cout << "Ingrese un número del 1 al 7: ";
        cin >> dia;

        switch (dia) {
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
                cout << "Número inválido. Por favor ingrese un número del 1 al 7." << endl;
            break;
        }

    }
}

#endif //EJERCICIO2_H

#ifndef EJERCICIO1_H
#define EJERCICIO1_H
using namespace std;

class averiguarNumero {
public:
    static void definirNum();

};

inline void definirNum() {
    int numIntroducido;
    cout << "Introduzca un número entero: ";
    cin >> numIntroducido;

    if (numIntroducido > 0) {
        cout << "El número es positivo" << endl;
    } else if (numIntroducido < 0) {
        cout << "El número es negativo" << endl;
    } else {
        cout << "El número es cero" << endl;
    }
}

#endif //EJERCICIO1_H

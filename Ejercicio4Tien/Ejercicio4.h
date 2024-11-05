#ifndef EJERCICIO4_H
#define EJERCICIO4_H
using namespace std;

namespace productos {
    void precioTotal();
}

namespace productos {
    inline void precioTotal() {
        float precios[3];
        for (int i = 0; i < 3; ++i) {
            cout << "Introduzca el precio del producto " << (i + 1) << ": ";
            cin >> precios[i];
        }

        float total;
        if (precios[0] <= precios[1] && precios[0] <= precios[2]) {
            total = precios[1] + precios[2];
        } else if (precios[1] <= precios[0] && precios[1] <= precios[2]) {
            total = precios[0] + precios[2];
        } else {
            total = precios[0] + precios[1];
        }

        cout << "Tienes que pagar: " << total << " euros" << endl;
        }
    }


#endif //EJERCICIO4_H

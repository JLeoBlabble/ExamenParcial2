#ifndef EJERCICIO4_H
#define EJERCICIO4_H
using namespace std;

namespace productos {
    void precioTotal();
}

namespace productos {
    inline void precioTotal() {
        float precios[3];                                       //Crear lista (3 productos en total)
        for (int i = 0; i < 3; ++i) {                           //Un for para introducir los tres precios de los productos
            cout << "Introduzca el precio del producto " << (i + 1) << ": ";
            cin >> precios[i];
        }

        float total;
        if (precios[0] <= precios[1] && precios[0] <= precios[2]) {     //Comparar el precio del primer producto con los otros
            total = precios[1] + precios[2];
        } else if (precios[1] <= precios[0] && precios[1] <= precios[2]) {  //Comparar el precio del segundo con los demás
            total = precios[0] + precios[2];
        } else {
            total = precios[0] + precios[1];                            //Si el 1er y 2ndo productos son más caros, se suma sus precios
        }

        cout << "Tienes que pagar: " << total << " euros" << endl;
        }
    }


#endif //EJERCICIO4_H

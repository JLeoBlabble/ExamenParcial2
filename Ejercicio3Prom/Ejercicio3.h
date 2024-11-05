#ifndef EJERCICIO3_H
#define EJERCICIO3_H
using namespace std;

namespace promedio {                                       //Creamos un namespace para la función calcularPromedio
    void calcularPromedio();
};

namespace promedio {
    inline void calcularPromedio() {
        int cantidadEjs = 8;
        float calificaciones[cantidadEjs];
        float sumaTotal = 0.0;

        for (int i = 0; i < cantidadEjs; i++) {
            cout << "Ingrese la calificación del ejercicio " << i + 1 << ": ";
            cin >> calificaciones[i];
            sumaTotal += calificaciones[i];
        }

        float promedioCalif = sumaTotal / cantidadEjs;
        cout << "El promedio de las calificaciones es: " << promedioCalif << endl;
    }


}


#endif //EJERCICIO3_H

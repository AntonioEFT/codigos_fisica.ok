#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    float v, v0, a, t, x;

    cout << "Selecciona la opcion que quieras calcular:\n";
    cout << "1. Velocidad final (v)\n";
    cout << "2. Distancia (x)\n";
    cout << "3. Aceleracion (a)\n";
    cout << "4. Tiempo (t)\n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa la velocidad inicial en m/s: ";
            cin >> v0;
            cout << "Ingresa la aceleracion en m/s^2: ";
            cin >> a;
            cout << "Ingresa el tiempo en s: ";
            cin >> t;
            v = v0 + a*t;
            cout << "La velocidad final es: " << v << " m/s.\n";
            break;
        case 2:
            cout << "Ingresa la velocidad inicial en m/s: ";
            cin >> v0;
            cout << "Ingresa la aceleracion en m/s^2: ";
            cin >> a;
            cout << "Ingresa el tiempo en s: ";
            cin >> t;
            x = v0*t + 0.5*a*t*t;
            cout << "La distancia es: " << x << " m.\n";
            break;
        case 3:
            cout << "Ingresa la velocidad final en m/s: ";
            cin >> v;
            cout << "Ingresa la velocidad inicial en m/s: ";
            cin >> v0;
            cout << "Ingresa la distancia en m: ";
            cin >> x;
            a = (v*v - v0*v0) / (2*x);
            cout << "La aceleracion es: " << a << " m/s^2.\n";
            break;
        case 4:
            cout << "Ingresa la velocidad final en m/s: ";
            cin >> v;
            cout << "Ingresa la velocidad inicial en m/s: ";
            cin >> v0;
            cout << "Ingresa la aceleracion en m/s^2: ";
            cin >> a;
            if (a != 0) {
                t = (v - v0) / a;
                cout << "El tiempo es: " << t << " s.\n";
            } else {
                cout << "Aceleracion no puede ser cero cuando se calcula el tiempo.\n";
            }
            break;
        default:
            cout << "Opcion invalida.\n";
    }

    return 0;
}




#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    short shortt;
    int intt;
    long longg;
    float floatt;
    double doublee;
    char charr;
    bool booll;

    // Solicitar datos al usuario con validación
    cout << "Dame un short: ";
    while (!(cin >> shortt)) {
        // Limpiar el estado del flujo de entrada
        cin.clear();
        // Descartar la entrada incorrecta
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada no válida. Inténtalo de nuevo: ";
    }

    // Verificar si el dato está dentro del rango permitido
    if (shortt < -32768 || shortt > 32767) {
        cout << "El dato proporcionado está fuera del rango permitido." << endl;
        return 1; // Salir del programa con código de error
    }

    // Repetir el proceso para otros tipos de datos...
    // ...

    // Mensaje de éxito
    cout << "Todos los datos fueron ingresados correctamente." << endl;

    return 0; // Salir del programa con éxito
}

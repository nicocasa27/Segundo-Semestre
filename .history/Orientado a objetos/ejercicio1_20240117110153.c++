//Realizado por nicolas casnueva

#include <iostream>

using namespace std;

int main() {
 
    short shortt;
    int intt;
    long longg;
    float floatt;
    double doublee;
    char charr;
    bool booll;

    cout << "Dame un short: ";
    while (!(cin >> shortt)) {
        cin.clear();
        cout << "Entrada no válida. Inténtalo de nuevo: ";
    }
   
    if (shortt < -32768 || shortt > 32767) {
        cout << "El dato proporcionado está fuera del rango permitido." << endl;
        return 1; 
    }

    // Repetir el proceso para otros tipos de datos...
    // ...

cout << "Dame un int: ";
while (!(cin >> intt)) {
    cin.clear();
    cout << "Entrada no valida: ";
}

if (intt < -2147483648 || intt > 2147483647) {
    cout << "El datos esta fuera de rango";
    return 1;
}


cout << " Dame un long : ";
while (!(cin >> longg)) {
    cin.clear();
    cout << "Entrada no valida :  ";
}

if (longg < -2147483648 || longg > 2147483647) {
    cout << "El dato esta fuera de rango  : " ;
}


cout << "Dame un float : ";
while(!(cin >> floatt)) {
    cin.clear();
    cout << "Entrada no valida : " ;

}

if (floatt <3.4E-38 || 3.4E38) {
    cout << "El dato esta fuera de rango : " 
}

    // Mensaje de éxito
    cout << "Todos los datos fueron ingresados correctamente." << endl;

    return 0; // Salir del programa con éxito
}

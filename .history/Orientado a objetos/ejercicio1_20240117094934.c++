// Ejercicio
// Elaborar un programa que te pida cada tipo de datos y que si no es correcto no te lo acepte

// #include <iostream>

// using namespace std;
// int main()
// {
//      cout << "Hola mundo\n";


//      return 0;
// }





////////////////////




#include <iostream>

int main() {
    // Variables para almacenar diferentes tipos de datos
    int entero;
    float decimal;
    char caracter;

    // Solicitar al usuario un entero
    std::cout << "Ingrese un número entero: ";
    while (!(std::cin >> entero)) {
        std::cout << "Entrada inválida. Intente nuevamente: ";
        std::cin.clear();  // Limpiar el estado de error
        std::cin.ignore(10000, '\n');  // Ignorar caracteres hasta la nueva línea
    }

    // Solicitar al usuario un número decimal
    std::cout << "Ingrese un número decimal: ";
    while (!(std::cin >> decimal)) {
        std::cout << "Entrada inválida. Intente nuevamente: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    // Solicitar al usuario un caracter
    std::cout << "Ingrese un caracter: ";
    while (!(std::cin >> caracter)) {
        std::cout << "Entrada inválida. Intente nuevamente: ";
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    // Mostrar los valores ingresados
    std::cout << "Usted ingresó los siguientes valores:" << std::endl;
    std::cout << "Entero: " << entero << std::endl;
    std::cout << "Decimal: " << decimal << std::endl;
    std::cout << "Caracter: " << caracter << std::endl;

    return 0;
}

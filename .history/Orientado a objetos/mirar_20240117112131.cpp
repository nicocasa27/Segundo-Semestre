#include <iostream>
#include <cctype> 

int main() {
    std::string input;

    std::cout << "Ingresa solo letras: ";
    std::cin >> input;

   
    for (char c : input) {
        if (!std::isalpha(c)) {
            std::cerr << "Error: La entrada contiene números u otros caracteres no alfabéticos." << std::endl;
            return 1; // Salir del programa con código de error
        }
    }

    // Si llegamos aquí, la entrada solo contiene letras
    std::cout << "Entrada válida: " << input << std::endl;

    return 0;
}

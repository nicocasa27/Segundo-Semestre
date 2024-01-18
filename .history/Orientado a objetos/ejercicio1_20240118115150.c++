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
    return 1;
}


cout << "Dame un float : ";
while(!(cin >> floatt)) {
    cin.clear();
    cout << "Entrada no valida : " ;

}

if (floatt <3.4E-38 || floatt > -3.4E38) {
    cout << "El dato esta fuera de rango : ";
    return 1;
}


cout << "Dame un double : "; 
while (!(cin >> doublee)) {
    cin.clear();
    cout << "Entrada no valida : ";

}
    
    if (doublee <1.7E-308 || doublee > -1.7E308) {
        cout << "El dato esta fuera de rango";
        return 1;
    }

        cout << "Dame un caracter: ";
        while (!(std::cin >> charr || std::cin. ))







// std::cout << "Dame un caracter: ";
//     while (!(std::cin >> charr) || std::cin.peek() != '\n') {
//         std::cin.clear();
//         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//         std::cout << "Entrada no válida. Ingresa solo un caracter: ";
//     }

//     if (!std::isalpha(charr)) {
//         std::cerr << "No puede tener números" << std::endl;
//         return 1;
//     }








    // cout << "Dame un caracter : ";
    // while (!(cin >> charr)) {
    //     cin.clear();
    //     cout << "Entrada no valida : ";

    // }

    // for (char c: std ::string(1, charr)) {
    //     if (!std::isalpha(c)) {
    //         std::cerr <<"No puede tener numeros" << std::endl;
    //         return 1;
    //     }
        
    // }
   


//     char charr;

//     std::cout << "Ingresa solo letras: ";
//     std::cin >> charr;

//     for (char c : std::string(1, charr)) {
//         if (!std::isalpha(c)) {
//             std::cerr << "Error: La entrada contiene números u otros caracteres no alfabéticos." << std::endl;
//             return 1;
//         }
//     }

//     std::cout << "Entrada válida: " << charr << std::endl;

//     return 0;
// }




    // Mensaje de éxito
    cout << "Todos los datos fueron ingresados correctamente." << endl;

    return 0; // Salir del programa con éxito
}

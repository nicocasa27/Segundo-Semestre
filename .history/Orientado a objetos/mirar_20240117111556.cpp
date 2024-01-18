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
    
    



    // Mensaje de éxito
    cout << "Todos los datos fueron ingresados correctamente." << endl;

    return 0; // Salir del programa con éxito
}






int userDecision; // This variable will store the users decision.
cout << "What kind of trip would you like?\n" << "Enter '1' for a round-trip or '2' for a one-way trip: ";
cin >> userDecision;
while(cin.fail() || userDecision != 1 || userDecision != 2){ // This while loop checks if what the user entered is char,alpha or any other invalid value other than 1 or 2.
      cout << "\n\n" << "Invalid Entry!\n" << "You can only enter '1' or '2': ";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cin >> userDecision;
}
// Ejercicio
// Elaborar un programa que te pida cada tipo de datos y que si no es correcto no te lo acepte




#include <iostream>

using namespace std;
int main()
{
    short shortt;
    int intt;
    long longg;
    float floatt;
    double doublee;
    char charr;
    bool booll;
    unsigned char bytee;
    


    cout << "Hola";
    cout <<"Dame un short porfavor";
    cin >> shortt;

    if (shortt < -32768 && shortt > 32767) {
        cout <<"El dato proporcionado es incorrecto" << endl;

    }



     return 0;
}

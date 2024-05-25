#include <iostream>

using namespace std;  

bool esPalindromo(int numero) {
    int original = numero;
    int invertido = 0;

 
    while (numero > 0) {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    return original == invertido;
}

int main() {
    int numero;

    cout << "Ingrese un número: ";
    while (!(cin >> numero)) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, ingrese un número válido: ";
    }


    if (esPalindromo(numero)) {
        cout << "El número " << numero << " es un palíndromo." << endl;
    } else {
        cout << "El número " << numero << " no es un palíndromo." << endl;
    }

    return 0;
}

LOL

#include <iostream>
#include <vector>
#include <limits>

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

vector<vector<int>> crearMatrizCuadrada(int tamano) {
    vector<vector<int>> matriz(tamano, vector<int>(tamano, 0));
    return matriz;
}

void imprimirMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << " ";
        }
        cout << endl;
    }
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

    int tamano;
    cout << "Ingrese el tamaño de la matriz cuadrada: ";
    while (!(cin >> tamano) || tamano <= 0) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida. Por favor, ingrese un tamaño válido (un número positivo): ";
    }

    vector<vector<int>> matriz = crearMatrizCuadrada(tamano);
    cout << "Matriz cuadrada de tamaño " << tamano << "x" << tamano << ":\n";
    imprimirMatriz(matriz);

    return 0;
}

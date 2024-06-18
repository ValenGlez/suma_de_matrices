#include <iostream>

using namespace std;

void sumarMatrices(int** matriz1, int** matriz2, int** resultado, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void mostrarMatriz(int** matriz, int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;

    cout << "Ingrese el numero de filas de las matrices: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas de las matrices: ";
    cin >> columnas;

    int** matriz1 = new int*[filas];
    int** matriz2 = new int*[filas];
    int** resultado = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        matriz1[i] = new int[columnas];
        matriz2[i] = new int[columnas];
        resultado[i] = new int[columnas];
    }

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cin >> matriz2[i][j];
        }
    }

    sumarMatrices(matriz1, matriz2, resultado, filas, columnas);

    cout << "La suma de matrices da:" << endl;
    mostrarMatriz(resultado, filas, columnas);



    return 0;
}

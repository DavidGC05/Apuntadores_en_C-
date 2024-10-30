#include <iostream>
using namespace std;

int main() {
	// Arreglos y apuntadores
	int largoArreglo;
	
	cout << "Introduce largo del arreglo: ";
	cin >> largoArreglo;
	
	int *numeros = new int [largoArreglo];
	
	for(int i = 0; i < largoArreglo; i++){
		cout << "Introduce el valor ["<< i << "]: " << endl;
		cin >> numeros [i];
	}
	cout << endl<< "Valores Guardados:" << endl;
	for(int i = 0; i < largoArreglo; i++){
		cout << "Valor arreglo ["<< i << "]: " << numeros[i] << endl;
	}
	
	delete [] numeros;
	return 0;
}


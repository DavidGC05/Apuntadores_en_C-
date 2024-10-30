#include <iostream>
using namespace std;

int main() {
	// Apuntadores de memoria
	int a = 10;
	// Declaramos variable apuntador con:
	int *b = &a;
	
	// Impresion de datos
	cout << "Varable b(D. de memoria): " << b << endl;
	cout << "Varable a: " << a << endl;
	cout << "Apuntador *b: " << *b << endl;
	cout << "D. de memoria de a: " << &a << endl;
	// Modificacion de variable a con apuntador *b:
	*b = 20;
	cout << "Variable 'a' modificada con *b: " << a;
	return 0;
}


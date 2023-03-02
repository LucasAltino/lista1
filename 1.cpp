#include <iostream>

using namespace std;

float soma(float a, float b){
	return a + b;
}

float multi(float a, float b){
	return a * b;
}

float sub(float a, float b){
	return a - b;
}

float div(float a, float b){
	return a / b;
}


main() {
	setlocale(LC_ALL, "portuguese");
	float numero, numero2;
	int op;
	
	cout << "Informe o primeiro número: ";
	cin >> numero;
	
	cout << "Informe o segundo número: ";
	cin >> numero2;

	do {
		cout << "\n\nSelecione uma opcão\n";
		cout << "1- Somar\n";
		cout << "2- Subtrair\n";
		cout << "3- Multiplicar\n";
		cout << "4- Dividir\n";
		cin >> op;
		
		switch (op) {
			case 1: 
				
				cout << "\nOpção 1 selecionada - Somar.\nResultado: ";
				cout << soma(numero, numero2);
				break;
			case 2:
				cout << "\nOpção 2 selecionada - Subtrair.\nResultado: ";
				cout << sub(numero, numero2);
				break;
			case 3:
				cout << "\nOpção 3 selecionada - Multiplicar.\nResultado: ";
				cout << multi(numero, numero2);
				break;
			case 4:
				cout << "\nOpção 4 selecionada -Dividir.\nResultado: ";
				cout << div(numero, numero2);
				break;
			default:
				cout << "\nOpção Inválida\n";
				break;
		}
	}while (op !=4);
	
}

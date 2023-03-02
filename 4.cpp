#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	string nome;
	
	
	cout << "Olá, digite seu nome:\n";
	cin >> nome;
	
	cout << "\n" << nome << ", digite a sua idade: ";
	cin >> idade;
	if (idade <= 0) {
		cout << "Idade inválida";
	} else if (idade >= 1 && idade <= 18) {
		cout << "\n" << nome << ", você é menor de idade";
	} else if (idade >= 18 && idade <= 65) {
		cout << "\n" << nome << ", você é adulto";
	} else {
		cout <<"\n" << nome <<  ", você é idoso";
	}
}

#include <iostream>

using namespace std;

main() {
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	string nome;
	
	
	cout << "Ol�, digite seu nome:\n";
	cin >> nome;
	
	cout << "\n" << nome << ", digite a sua idade: ";
	cin >> idade;
	if (idade <= 0) {
		cout << "Idade inv�lida";
	} else if (idade >= 1 && idade <= 18) {
		cout << "\n" << nome << ", voc� � menor de idade";
	} else if (idade >= 18 && idade <= 65) {
		cout << "\n" << nome << ", voc� � adulto";
	} else {
		cout <<"\n" << nome <<  ", voc� � idoso";
	}
}

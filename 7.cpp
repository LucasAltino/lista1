#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL, "portuguese");
	string nome;
	int salario, novo, diferenca;
	
	cout << "Olá, digite seu nome:\n";
	cin >> nome;
	
	cout << "\n" << nome << ", digite o seu salário: ";
	cin >> salario;
	
	if (salario <= 1500){
		
		novo= salario * 1.10;
		diferenca= (novo-salario);
		
		cout << "\n""Seu novo salário é " << novo;
		cout << "\n""Sua diferença salarial é de " << diferenca;
		
	}else if (salario > 1500){
		novo= salario * 1.05;
		diferenca= (novo-salario);
		cout << "\n"	"Seu novo salário é " << novo;
		cout << "\n""Sua diferença salarial é de " << diferenca;
	}
}

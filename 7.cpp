#include <iostream>
using namespace std;

main (){
	setlocale(LC_ALL, "portuguese");
	string nome;
	int salario, novo, diferenca;
	
	cout << "Ol�, digite seu nome:\n";
	cin >> nome;
	
	cout << "\n" << nome << ", digite o seu sal�rio: ";
	cin >> salario;
	
	if (salario <= 1500){
		
		novo= salario * 1.10;
		diferenca= (novo-salario);
		
		cout << "\n""Seu novo sal�rio � " << novo;
		cout << "\n""Sua diferen�a salarial � de " << diferenca;
		
	}else if (salario > 1500){
		novo= salario * 1.05;
		diferenca= (novo-salario);
		cout << "\n"	"Seu novo sal�rio � " << novo;
		cout << "\n""Sua diferen�a salarial � de " << diferenca;
	}
}

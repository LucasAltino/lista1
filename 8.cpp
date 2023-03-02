#include<iostream>
using namespace std;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float cigarro, idade, tempo, media;
	
	cout << "Digite a sua idade: ";
	cin >> idade;
	
	cout << "Digite quantos cigarros por dia você costuma fumar: ";
	cin >> cigarro;
	
	media = cigarro/144;
	tempo = (idade * 365 * media);

	cout << "\n""Você perdeu " << tempo << " dias de sua vida";
	
}

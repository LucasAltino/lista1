#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");
    int i;
    float notas, soma=0, media;
    cout<<"Digite suas 3 notas (nessa mesma linha com espaço entre elas): ";
    for(i=0; i<3; i++)
    {
        cin>>notas;
        soma = soma+notas;
    }
    media = soma/3;
    cout<<"\nResultado: ";
    if(media>=7 && media<=10)
        cout<<"Aprovado";
    else if(media>=5 && media<6.9)
        cout<<"Recuperação";
    else if(media>=0 && media<4.9)
        cout<<"Reprovado";

    else
        cout<<"Inválido";
    cout<<endl;
    return 0;
}

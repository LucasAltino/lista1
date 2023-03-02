#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
    int numero,v,soma=0,result;

    cout << ("Digite um número: ");
    cin >> numero;

    for(result=numero;numero!=0;numero=numero/10){
        v=numero % 10;
        soma=soma+(v*v*v);
    }
    if(soma==result)
        cout << "\n" << result << " é um número de Armstrong";
    else
        cout << "\n" << result << " não é um número de Armstrong";
}

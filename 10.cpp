#include <iostream>
using namespace std;

main (){
	 int num1, num2, num3, temp;

    cout << "Numero 1: ";
    cin >> num1;

    cout << "Numero 2: ";
    cin >> num2;

    cout << "Numero 3: ";
    cin >> num3;

    if(num2 > num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num3 > num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num3 > num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    cout <<num1<<" > "<<num2<<" > "<<num3<<endl;
}

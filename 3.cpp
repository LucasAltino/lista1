#include <iostream>
using namespace std;

int main() {
	
  setlocale(LC_ALL,"Portuguese");
  int i, n;
  bool primo = true;

  cout << "Digite um n�mero: ";
  cin >> n;
  
  
  if (n == 0 || n == 1) {
    primo = false;
  }

  for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
      primo = false;
      break;
    }
  }

  if (primo)
    cout << n << " � um n�mero primo";
  else
    cout << n << " n�o � um n�mero primo";

  return 0;
}


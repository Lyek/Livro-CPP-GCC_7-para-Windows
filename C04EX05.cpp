//C04EX05.CPP
//utilizando la�o p�s-teste c/ fluxo verdadeiro //
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int N, I = 1, R;

  cout << "Entre  o valor da tabuada: "; cin >> N;
  cin.ignore(80, '\n');
  cout << "\n";

  do
    {
      R = N * I;
      cout << setw(2) << N << " X ";
      cout << setw(2) << I << " = ";
      cout << setw(2) << R << endl;
      I = ++I;
    }
  while (I <= 10);
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

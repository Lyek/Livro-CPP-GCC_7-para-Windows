//C04EX02.CPP
/** Tabuada com la�o pr�-teste e la�o de repeti��o*/
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  int N, I, R;
  char RESP;

  RESP = 'S';
  while (RESP == 'S' or RESP =='s')
    {
      cout << "Entre  o valor da tabuada: "; cin >> N;
      cin.ignore(80, '\n');
      cout << "\n";
      I = 1;
      while (I <=10)
        {
          R = N * I;
          cout << setw(2) << N << " X ";
          cout << setw(2) << I << " = ";
          cout << setw(2) << R << endl;
          I = ++I;
        }
      cout << endl;
      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] p/ SIM | qualquer letra p/ NAO: ";
      cin.get(RESP);
      cin.ignore();
    }
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}

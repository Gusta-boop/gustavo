#include <iostream>
#include <string>
using namespace std;
//declaramos prototipos de funcion
int invertir(int num);

int main()
{
	int num, resultado;
	cout << "introduce un numero entero"
		cin >> num
		resultado = invertir(num);
	cout << "numero original: " << num << endl;
	cout << "numero invertido: " << resultado << endl;
	system("pause");
	return 0;

}
//declaramos la funcion
int invertir(int num)
{
	int inverso = 0, cifra;
	while (num != 0)
	{
		cifra = num % 10;
		inverso = inverso * 10 + cifra;
			num = num / 10;
	}
	return inverso;
}
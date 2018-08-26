/*Escriba un programa que lea dos enteros y determine si el primero es un múltiplo del segundo, y que
imprima el resultado (Sugerencia: utilice el operador de módulo)*/
#include <iostream>

using namespace std;

int main()
{
	int num1, num2;
	
	cout  <<  "introduzca el primer numero"  <<endl;
	cin  >>  num1;
	cout  <<  "introduzca el segundo numero"  <<endl;
	cin  >>  num2;
	
	if	(num2%num1==0)
		cout <<  "el numero "  << num2  <<  " es multiplo del numero "  << num1;
	else
		cout <<  "el numero "  << num2  <<  " no es multiplo del numero "  << num1;

return 0;	 
}

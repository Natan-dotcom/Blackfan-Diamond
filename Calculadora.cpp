#include <iostream>
#include <tchar.h>
/* ENTRADA: dois n�meros reais
PROCESSAMENTO: funcoes que calculam soma, subtra��o, multiplica��o e divis�o
SA�DA:  (num1 + num2,  num1 � num2, num1 * num2, num1/num2)
*/
float soma(float num1, float num2);
float subtra��o(float num1, float num2);
float multiplica��o(float num1, float num2);
float divis�o(float num1, float num2);

int main()
{
	float N�mero,N�mero2;
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite o primeiro n�mero = ";
	std::cin >> N�mero;
	std::cout << "Digite o segundo n�mero = ";
	std::cin >> N�mero2; 
	std::cout << "\n********Resultado das Opera��es**********" << "\n";
	std::cout << N�mero << " e " << N�mero2 << "\n";
	std::cout << "Soma = " << soma(N�mero, N�mero2) << "\n";
	std::cout << "Subtra��o = " << subtra��o(N�mero, N�mero2) << "\n";
	std::cout << "Multiplica��o = " << multiplica��o(N�mero, N�mero2) << "\n";
	std::cout << "Divis�o = " << divis�o(N�mero, N�mero2) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2)
{
	return num1 + num2;
}
float subtra��o(float num1, float num2)
{
	return num1 - num2;
}
float multiplica��o(float num1, float num2)
{
	return num1 * num2;
}
float divis�o(float num1, float num2)
{
	return num1 / num2;
}
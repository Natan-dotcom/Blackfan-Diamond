#include <iostream>
#include <tchar.h>
/* ENTRADA: dois números reais
PROCESSAMENTO: funcoes que calculam soma, subtração, multiplicação e divisão
SAÍDA:  (num1 + num2,  num1 – num2, num1 * num2, num1/num2)
*/
float soma(float num1, float num2);
float subtração(float num1, float num2);
float multiplicação(float num1, float num2);
float divisão(float num1, float num2);

int main()
{
	float Número,Número2;
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite o primeiro número = ";
	std::cin >> Número;
	std::cout << "Digite o segundo número = ";
	std::cin >> Número2; 
	std::cout << "\n********Resultado das Operações**********" << "\n";
	std::cout << Número << " e " << Número2 << "\n";
	std::cout << "Soma = " << soma(Número, Número2) << "\n";
	std::cout << "Subtração = " << subtração(Número, Número2) << "\n";
	std::cout << "Multiplicação = " << multiplicação(Número, Número2) << "\n";
	std::cout << "Divisão = " << divisão(Número, Número2) << "\n";
	system("PAUSE");
	return 0;
}

float soma(float num1, float num2)
{
	return num1 + num2;
}
float subtração(float num1, float num2)
{
	return num1 - num2;
}
float multiplicação(float num1, float num2)
{
	return num1 * num2;
}
float divisão(float num1, float num2)
{
	return num1 / num2;
}
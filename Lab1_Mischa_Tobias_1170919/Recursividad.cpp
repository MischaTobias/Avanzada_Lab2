#include "Recursividad.h"



Recursividad::Recursividad()
{
}

int Recursividad::Fibonacci(int num) {
	if (num == 1 || num == 2) {
		return 1;
	}
	else {
		return Fibonacci(num - 1) + Fibonacci(num - 2);
	}
}

int Recursividad::Factorial(int num) {
	if (num == 1 || num == 0) {
		return 1;
	}
	else {
		return num * Factorial((num - 1));
	}
}

int Recursividad::Potencia(int num, int pot) {
	if (pot == 1) {
		return num;
	}
	else if(pot == 0){
		return 1;
	}
	else {
		return num * Potencia(num, pot - 1);
	}
}

System::String^ Recursividad::Binario(int num) {
	if (num == 1) {
		return "1";
	}
	else {
		return (Binario(num/2) + System::Convert::ToString((num%2)));
	}
}

System::String^ Recursividad::CambiarBase(int num, int basedestino) {
	int currentNum = num % basedestino;
	System::String^ letters = "ABCDEF";
	System::String^ let = "";
	if (currentNum >= 10){
		currentNum -= 10;
		let = letters[currentNum].ToString();
	}
	else {
		let = currentNum.ToString();
	}
	int newNum = num / basedestino;
	if (num < basedestino) {
		return System::Convert::ToString(let);
	}
	return (CambiarBase(newNum, basedestino) + let);
}

int Recursividad::ConvertDecimal(System::String^ num1, int num, int num2, int baseactual) {
	//num1->Split();
	char currentChar;
	int currentValue;
	for (int i = 0; i < num1->Length; i++)
	{
		//if (num1[i] != ".")
		currentChar = num1[i];
		if (currentChar >= 'A'){
			currentValue = currentChar - 'A' + 10;
		}
		else {
			currentValue = currentChar - '0';
		}

		num2 = System::Convert::ToInt32(currentValue);
		num += num2 * Potencia(baseactual, num1->Length - 1 - i);
	}

	return num;
}

bool Recursividad::Palindromo(System::String^ palabra, int pos) {
	if (palabra[pos] == palabra[palabra->Length-(pos+1)])
	{
		if (pos > palabra->Length / 2) {
			return true;
		}
		else {
			return (true && Palindromo(palabra, pos + 1));
		}
	}
	else {
		return false;
	}
}

int Recursividad::Multiplicacion(int num, int num2) {
	if (num == 0 || num2 == 0) {
		return 0;
	}
	else if (num2 == 1) {
		return num;
	}
	else {
		return num + Multiplicacion(num, num2 - 1);
	}
}
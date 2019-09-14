#pragma once
ref class Recursividad
{
public:
	Recursividad();
public:
	int Fibonacci(int num);
	int Factorial(int num);
	int Potencia(int num, int pow);
	////void obtenerTextoArchivo(System::String^ruta);
	System::String^ Binario(int num);
	System::String^ CambiarBase(int num, int basedestino);
	int ConvertDecimal(System::String^ num1, int num, int baseactual);
	int Multiplicacion(int num, int num2);
	bool Palindromo(System::String^ palabra, int pos);
};


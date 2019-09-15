#pragma once
#include "Recursividad.h"

namespace Lab1MischaTobias1170919 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnFactorial;
	protected:
	private: System::Windows::Forms::Button^  btnFibonacci;
	private: System::Windows::Forms::Label^  lblIngresarNumero;
	private: System::Windows::Forms::TextBox^  txtNum;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lblResultado;
	private: System::Windows::Forms::Button^  btnBinario;
	private: System::Windows::Forms::Button^  btnPalíndromas;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtPalabra;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TextBox^  txtNumMult1;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtNumMult2;
	private: System::Windows::Forms::Label^  lblResultadoMultiplicacion;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  btnMultiplicacion;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  lblResConversion;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  btnConvertirBase;
	private: System::Windows::Forms::TextBox^  txtBaseDestino;
	private: System::Windows::Forms::TextBox^  txtBaseActual;
	private: System::Windows::Forms::TextBox^  txtNumConvertir;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  lblResPalindromo;
	private: System::Windows::Forms::Label^  label13;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnFactorial = (gcnew System::Windows::Forms::Button());
			this->btnFibonacci = (gcnew System::Windows::Forms::Button());
			this->lblIngresarNumero = (gcnew System::Windows::Forms::Label());
			this->txtNum = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblResultado = (gcnew System::Windows::Forms::Label());
			this->btnBinario = (gcnew System::Windows::Forms::Button());
			this->btnPalíndromas = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtPalabra = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lblResPalindromo = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblResConversion = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnConvertirBase = (gcnew System::Windows::Forms::Button());
			this->txtBaseDestino = (gcnew System::Windows::Forms::TextBox());
			this->txtBaseActual = (gcnew System::Windows::Forms::TextBox());
			this->txtNumConvertir = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblResultadoMultiplicacion = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnMultiplicacion = (gcnew System::Windows::Forms::Button());
			this->txtNumMult2 = (gcnew System::Windows::Forms::TextBox());
			this->txtNumMult1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnFactorial
			// 
			this->btnFactorial->Location = System::Drawing::Point(27, 137);
			this->btnFactorial->Name = L"btnFactorial";
			this->btnFactorial->Size = System::Drawing::Size(154, 31);
			this->btnFactorial->TabIndex = 0;
			this->btnFactorial->Text = L"Factorial";
			this->btnFactorial->UseVisualStyleBackColor = true;
			this->btnFactorial->Click += gcnew System::EventHandler(this, &MyForm::btnFactorial_Click);
			// 
			// btnFibonacci
			// 
			this->btnFibonacci->Location = System::Drawing::Point(27, 189);
			this->btnFibonacci->Name = L"btnFibonacci";
			this->btnFibonacci->Size = System::Drawing::Size(154, 30);
			this->btnFibonacci->TabIndex = 1;
			this->btnFibonacci->Text = L"Fibonacci";
			this->btnFibonacci->UseVisualStyleBackColor = true;
			this->btnFibonacci->Click += gcnew System::EventHandler(this, &MyForm::btnFibonacci_Click);
			// 
			// lblIngresarNumero
			// 
			this->lblIngresarNumero->AutoSize = true;
			this->lblIngresarNumero->Location = System::Drawing::Point(24, 47);
			this->lblIngresarNumero->Name = L"lblIngresarNumero";
			this->lblIngresarNumero->Size = System::Drawing::Size(143, 13);
			this->lblIngresarNumero->TabIndex = 2;
			this->lblIngresarNumero->Text = L"Por favor ingrese un número:";
			// 
			// txtNum
			// 
			this->txtNum->Location = System::Drawing::Point(206, 47);
			this->txtNum->Name = L"txtNum";
			this->txtNum->Size = System::Drawing::Size(154, 20);
			this->txtNum->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Resultado: ";
			// 
			// lblResultado
			// 
			this->lblResultado->AutoSize = true;
			this->lblResultado->Location = System::Drawing::Point(269, 77);
			this->lblResultado->Name = L"lblResultado";
			this->lblResultado->Size = System::Drawing::Size(10, 13);
			this->lblResultado->TabIndex = 5;
			this->lblResultado->Text = L"-";
			// 
			// btnBinario
			// 
			this->btnBinario->Location = System::Drawing::Point(27, 243);
			this->btnBinario->Name = L"btnBinario";
			this->btnBinario->Size = System::Drawing::Size(154, 31);
			this->btnBinario->TabIndex = 6;
			this->btnBinario->Text = L"Transformar a número binario";
			this->btnBinario->UseVisualStyleBackColor = true;
			this->btnBinario->Click += gcnew System::EventHandler(this, &MyForm::btnBinario_Click);
			// 
			// btnPalíndromas
			// 
			this->btnPalíndromas->Location = System::Drawing::Point(248, 190);
			this->btnPalíndromas->Name = L"btnPalíndromas";
			this->btnPalíndromas->Size = System::Drawing::Size(154, 31);
			this->btnPalíndromas->TabIndex = 7;
			this->btnPalíndromas->Text = L"Palíndromas";
			this->btnPalíndromas->UseVisualStyleBackColor = true;
			this->btnPalíndromas->Click += gcnew System::EventHandler(this, &MyForm::btnPalíndromas_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Por favor ingrese una palabra";
			// 
			// txtPalabra
			// 
			this->txtPalabra->Location = System::Drawing::Point(248, 164);
			this->txtPalabra->Name = L"txtPalabra";
			this->txtPalabra->Size = System::Drawing::Size(154, 20);
			this->txtPalabra->TabIndex = 9;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(512, 418);
			this->tabControl1->TabIndex = 10;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnBinario);
			this->tabPage1->Controls->Add(this->btnFactorial);
			this->tabPage1->Controls->Add(this->btnFibonacci);
			this->tabPage1->Controls->Add(this->lblIngresarNumero);
			this->tabPage1->Controls->Add(this->txtNum);
			this->tabPage1->Controls->Add(this->lblResultado);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(504, 392);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Laboratorio 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->lblResPalindromo);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->lblResConversion);
			this->tabPage2->Controls->Add(this->label12);
			this->tabPage2->Controls->Add(this->btnConvertirBase);
			this->tabPage2->Controls->Add(this->txtBaseDestino);
			this->tabPage2->Controls->Add(this->txtBaseActual);
			this->tabPage2->Controls->Add(this->txtNumConvertir);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->lblResultadoMultiplicacion);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->btnMultiplicacion);
			this->tabPage2->Controls->Add(this->txtNumMult2);
			this->tabPage2->Controls->Add(this->txtNumMult1);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->btnPalíndromas);
			this->tabPage2->Controls->Add(this->txtPalabra);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(504, 392);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Tarea1";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm::tabPage2_Click);
			// 
			// lblResPalindromo
			// 
			this->lblResPalindromo->AutoSize = true;
			this->lblResPalindromo->Location = System::Drawing::Point(80, 199);
			this->lblResPalindromo->Name = L"lblResPalindromo";
			this->lblResPalindromo->Size = System::Drawing::Size(10, 13);
			this->lblResPalindromo->TabIndex = 30;
			this->lblResPalindromo->Text = L"-";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(11, 199);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 13);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Resultado: ";
			// 
			// lblResConversion
			// 
			this->lblResConversion->AutoSize = true;
			this->lblResConversion->Location = System::Drawing::Point(398, 284);
			this->lblResConversion->Name = L"lblResConversion";
			this->lblResConversion->Size = System::Drawing::Size(13, 13);
			this->lblResConversion->TabIndex = 28;
			this->lblResConversion->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(377, 258);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Resultado:";
			// 
			// btnConvertirBase
			// 
			this->btnConvertirBase->Location = System::Drawing::Point(146, 336);
			this->btnConvertirBase->Name = L"btnConvertirBase";
			this->btnConvertirBase->Size = System::Drawing::Size(154, 31);
			this->btnConvertirBase->TabIndex = 26;
			this->btnConvertirBase->Text = L"Convertir";
			this->btnConvertirBase->UseVisualStyleBackColor = true;
			this->btnConvertirBase->Click += gcnew System::EventHandler(this, &MyForm::btnConvertirBase_Click);
			// 
			// txtBaseDestino
			// 
			this->txtBaseDestino->Location = System::Drawing::Point(146, 310);
			this->txtBaseDestino->Name = L"txtBaseDestino";
			this->txtBaseDestino->Size = System::Drawing::Size(154, 20);
			this->txtBaseDestino->TabIndex = 25;
			// 
			// txtBaseActual
			// 
			this->txtBaseActual->Location = System::Drawing::Point(146, 284);
			this->txtBaseActual->Name = L"txtBaseActual";
			this->txtBaseActual->Size = System::Drawing::Size(154, 20);
			this->txtBaseActual->TabIndex = 24;
			// 
			// txtNumConvertir
			// 
			this->txtNumConvertir->Location = System::Drawing::Point(146, 258);
			this->txtNumConvertir->Name = L"txtNumConvertir";
			this->txtNumConvertir->Size = System::Drawing::Size(154, 20);
			this->txtNumConvertir->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(11, 310);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Ingrese la base destino:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(11, 287);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Ingrese su base actual:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(11, 261);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(98, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Ingrese un número:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(11, 236);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(185, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Conversión de base m a base n";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 142);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Palabras Palíndromas";
			// 
			// lblResultadoMultiplicacion
			// 
			this->lblResultadoMultiplicacion->AutoSize = true;
			this->lblResultadoMultiplicacion->Location = System::Drawing::Point(324, 40);
			this->lblResultadoMultiplicacion->Name = L"lblResultadoMultiplicacion";
			this->lblResultadoMultiplicacion->Size = System::Drawing::Size(13, 13);
			this->lblResultadoMultiplicacion->TabIndex = 17;
			this->lblResultadoMultiplicacion->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(306, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Resultado:";
			// 
			// btnMultiplicacion
			// 
			this->btnMultiplicacion->Location = System::Drawing::Point(51, 102);
			this->btnMultiplicacion->Name = L"btnMultiplicacion";
			this->btnMultiplicacion->Size = System::Drawing::Size(154, 27);
			this->btnMultiplicacion->TabIndex = 15;
			this->btnMultiplicacion->Text = L"Calcular Multiplicación";
			this->btnMultiplicacion->UseVisualStyleBackColor = true;
			this->btnMultiplicacion->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplicacion_Click);
			// 
			// txtNumMult2
			// 
			this->txtNumMult2->Location = System::Drawing::Point(146, 66);
			this->txtNumMult2->Name = L"txtNumMult2";
			this->txtNumMult2->Size = System::Drawing::Size(85, 20);
			this->txtNumMult2->TabIndex = 14;
			// 
			// txtNumMult1
			// 
			this->txtNumMult1->Location = System::Drawing::Point(146, 40);
			this->txtNumMult1->Name = L"txtNumMult1";
			this->txtNumMult1->Size = System::Drawing::Size(85, 20);
			this->txtNumMult1->TabIndex = 13;
			this->txtNumMult1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 73);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Ingrese otro número:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(98, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Ingrese un número:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(11, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Multiplicación como suma";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(629, 496);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btnFibonacci_Click(System::Object^  sender, System::EventArgs^  e) {
	//Declaración Stopwatch
		Stopwatch^ stopwatch = gcnew Stopwatch();
		stopwatch->Start();
	//Ejecución Fibonacci
	int num = System::Convert::ToInt32(txtNum->Text);
	Recursividad^ recursividadOBj = gcnew Recursividad();
	lblResultado->Text = System::Convert::ToString(recursividadOBj->Fibonacci(num));
	stopwatch->Stop();
	System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(stopwatch->Elapsed));
}
private: System::Void btnFactorial_Click(System::Object^  sender, System::EventArgs^  e) {
	int num = System::Convert::ToInt32(txtNum->Text);
	Recursividad^ recursividadOBj = gcnew Recursividad();
	lblResultado->Text = System::Convert::ToString(recursividadOBj->Factorial(num));
}
private: System::Void btnBinario_Click(System::Object^  sender, System::EventArgs^  e) {
	int num = System::Convert::ToInt32(txtNum->Text);
	Recursividad^ recursividadOBj = gcnew Recursividad();
	lblResultado->Text = System::Convert::ToString(recursividadOBj->Binario(num));
}
private: System::Void btnPalíndromas_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ palabra = System::Convert::ToString(txtPalabra->Text);
	Recursividad^ recursividadOBJ = gcnew Recursividad();
	if (recursividadOBJ->Palindromo(palabra, 0)){
		lblResPalindromo->Text = "Si es un palíndromo.";
	}
	else {
		lblResPalindromo->Text = "No es un palíndromo.";
	}

	////Leer archivo
	//System::String^ ruta = txtRuta->Text;
	//StreamReader^ streamReader = gcnew StreamReader("...//repos//Lab1_Mischa_Tobias_//1170919" + ruta);
	//String^ contenidoArchivo = streamReader->ReadToEnd();
	//streamReader->Close();
	////Escribir Archivo
	//StreamWriter^ streamWriter = gcnew StreamWriter("..//Archivos//resultado.csv");
	//streamWriter->WriteLine("Texto que quieren escribir");
	//streamWriter->Close();
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnMultiplicacion_Click(System::Object^  sender, System::EventArgs^  e) {
	//Sumas Multiplicación
	int num = System::Convert::ToInt32(txtNumMult1->Text);
	int num2 = System::Convert::ToInt32(txtNumMult2->Text);
	Recursividad^ recursividadObj = gcnew Recursividad();
	lblResultadoMultiplicacion->Text = System::Convert::ToString(recursividadObj->Multiplicacion(num, num2));
}
private: System::Void btnConvertirBase_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ numconversion = System::Convert::ToString(txtNumConvertir->Text);
	int baseactual = System::Convert::ToInt32(txtBaseActual->Text);
	int basedestino = System::Convert::ToInt32(txtBaseDestino->Text);
	Recursividad^ recursividadOBj = gcnew Recursividad();
	int num1 = recursividadOBj->ConvertDecimal(numconversion, 0, 0, baseactual);

	if (basedestino == 10) {
		lblResConversion->Text = System::Convert::ToString(num1);
	}	else {
		lblResConversion->Text = recursividadOBj->CambiarBase(num1, basedestino);
	}
}
};
}

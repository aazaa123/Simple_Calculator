#pragma once
#include <msclr\marshal_cppstd.h>
#include "..\CalculatorLogic\CalculatorLogic.h"

namespace FirstGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  num7;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  num8;
	private: System::Windows::Forms::Button^  num9;
	private: System::Windows::Forms::Button^  opPlus;
	private: System::Windows::Forms::Button^  num4;
	private: System::Windows::Forms::Button^  num5;
	private: System::Windows::Forms::Button^  num6;
	private: System::Windows::Forms::Button^  opMinus;
	private: System::Windows::Forms::Button^  num1;
	private: System::Windows::Forms::Button^  num2;
	private: System::Windows::Forms::Button^  num3;
	private: System::Windows::Forms::Button^  opTimes;
	private: System::Windows::Forms::Button^  opDivide;
	private: System::Windows::Forms::Button^  opEquals;
	private: System::Windows::Forms::Button^  num0;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  opClear;
	private: System::Windows::Forms::Button^  memory;
	private: System::Windows::Forms::Button^  opPower;
	private: System::Windows::Forms::Button^  memoryRecall;


			 //Two variables that are used for keeping track of the userinput and 
			 //keep track of the memory data the user wants to keep track of
			 System::String^ input;
			 System::String^ userMemory;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->opPlus = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->opMinus = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->opTimes = (gcnew System::Windows::Forms::Button());
			this->opDivide = (gcnew System::Windows::Forms::Button());
			this->opEquals = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->opClear = (gcnew System::Windows::Forms::Button());
			this->memory = (gcnew System::Windows::Forms::Button());
			this->opPower = (gcnew System::Windows::Forms::Button());
			this->memoryRecall = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// num7
			// 
			this->num7->Location = System::Drawing::Point(12, 77);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(50, 36);
			this->num7->TabIndex = 0;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = true;
			this->num7->Click += gcnew System::EventHandler(this, &MyForm::num7_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(274, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->ReadOnly = true;  //Makes the textbox read only, meaning the user is not able to type 
			//into the textbox and only inputs from the buttons will be able to enter into the textbox.
			// 
			// num8
			// 
			this->num8->Location = System::Drawing::Point(68, 77);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(50, 36);
			this->num8->TabIndex = 2;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = true;
			this->num8->Click += gcnew System::EventHandler(this, &MyForm::num8_Click);
			// 
			// num9
			// 
			this->num9->Location = System::Drawing::Point(124, 77);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(50, 36);
			this->num9->TabIndex = 3;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = true;
			this->num9->Click += gcnew System::EventHandler(this, &MyForm::num9_Click);
			// 
			// opPlus
			// 
			this->opPlus->Enabled = false; //Disables the button meaning it can not be used straight away
			this->opPlus->Location = System::Drawing::Point(180, 77);
			this->opPlus->Name = L"opPlus";
			this->opPlus->Size = System::Drawing::Size(50, 36);
			this->opPlus->TabIndex = 4;
			this->opPlus->Text = L"+";
			this->opPlus->UseVisualStyleBackColor = true;
			this->opPlus->Click += gcnew System::EventHandler(this, &MyForm::opPlus_Click);
			// 
			// num4
			// 
			this->num4->Location = System::Drawing::Point(12, 119);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(50, 36);
			this->num4->TabIndex = 5;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = true;
			this->num4->Click += gcnew System::EventHandler(this, &MyForm::num4_Click);
			// 
			// num5
			// 
			this->num5->Location = System::Drawing::Point(68, 119);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(50, 36);
			this->num5->TabIndex = 6;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = true;
			this->num5->Click += gcnew System::EventHandler(this, &MyForm::num5_Click);
			// 
			// num6
			// 
			this->num6->Location = System::Drawing::Point(124, 119);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(50, 36);
			this->num6->TabIndex = 7;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = true;
			this->num6->Click += gcnew System::EventHandler(this, &MyForm::num6_Click);
			// 
			// opMinus
			// 
			this->opMinus->Enabled = false;	//Disables the button meaning it can not be used straight away
			this->opMinus->Location = System::Drawing::Point(180, 119);
			this->opMinus->Name = L"opMinus";
			this->opMinus->Size = System::Drawing::Size(50, 36);
			this->opMinus->TabIndex = 8;
			this->opMinus->Text = L"-";
			this->opMinus->UseVisualStyleBackColor = true;
			this->opMinus->Click += gcnew System::EventHandler(this, &MyForm::opMinus_Click);
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(12, 161);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(50, 36);
			this->num1->TabIndex = 9;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = true;
			this->num1->Click += gcnew System::EventHandler(this, &MyForm::num1_Click);
			// 
			// num2
			// 
			this->num2->Location = System::Drawing::Point(68, 161);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(50, 36);
			this->num2->TabIndex = 10;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = true;
			this->num2->Click += gcnew System::EventHandler(this, &MyForm::num2_Click);
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(124, 161);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(50, 36);
			this->num3->TabIndex = 11;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = true;
			this->num3->Click += gcnew System::EventHandler(this, &MyForm::num3_Click);
			// 
			// opTimes
			// 
			this->opTimes->Enabled = false;	//Disables the button meaning it can not be used straight away
			this->opTimes->Location = System::Drawing::Point(180, 161);
			this->opTimes->Name = L"opTimes";
			this->opTimes->Size = System::Drawing::Size(50, 36);
			this->opTimes->TabIndex = 12;
			this->opTimes->Text = L"*";
			this->opTimes->UseVisualStyleBackColor = true;
			this->opTimes->Click += gcnew System::EventHandler(this, &MyForm::opTimes_Click);
			// 
			// opDivide
			// 
			this->opDivide->Enabled = false;	//Disables the button meaning it can not be used straight away
			this->opDivide->Location = System::Drawing::Point(180, 203);
			this->opDivide->Name = L"opDivide";
			this->opDivide->Size = System::Drawing::Size(50, 36);
			this->opDivide->TabIndex = 16;
			this->opDivide->Text = L"/";
			this->opDivide->UseVisualStyleBackColor = true;
			this->opDivide->Click += gcnew System::EventHandler(this, &MyForm::opDivide_Click);
			// 
			// opEquals
			// 
			this->opEquals->Enabled = false;	//Disables the button meaning it can not be used straight away
			this->opEquals->Location = System::Drawing::Point(236, 203);
			this->opEquals->Name = L"opEquals";
			this->opEquals->Size = System::Drawing::Size(50, 36);
			this->opEquals->TabIndex = 15;
			this->opEquals->Text = L"=";
			this->opEquals->UseVisualStyleBackColor = true;
			this->opEquals->Click += gcnew System::EventHandler(this, &MyForm::opEquals_Click);
			// 
			// num0
			// 
			this->num0->Location = System::Drawing::Point(12, 203);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(106, 36);
			this->num0->TabIndex = 17;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = true;
			this->num0->Click += gcnew System::EventHandler(this, &MyForm::num0_Click);
			// 
			// opClear
			// 
			this->opClear->Location = System::Drawing::Point(236, 77);
			this->opClear->Name = L"opClear";
			this->opClear->Size = System::Drawing::Size(50, 36);
			this->opClear->TabIndex = 18;
			this->opClear->Text = L"Clear";
			this->opClear->UseVisualStyleBackColor = true;
			this->opClear->Click += gcnew System::EventHandler(this, &MyForm::opClear_Click);
			// 
			// memory
			// 
			this->memory->Enabled = false;	//Disables the button meaning it can not be used straight away
			this->memory->Location = System::Drawing::Point(236, 119);
			this->memory->Name = L"memory";
			this->memory->Size = System::Drawing::Size(50, 36);
			this->memory->TabIndex = 19;
			this->memory->Text = L"Mem";
			this->memory->UseVisualStyleBackColor = true;
			this->memory->Click += gcnew System::EventHandler(this, &MyForm::memory_Click);
			// 
			// opPower
			// 
			this->opPower->Enabled = false;	//Disables the button meaning it can not be used straight away
			this->opPower->Location = System::Drawing::Point(124, 203);
			this->opPower->Name = L"opPower";
			this->opPower->Size = System::Drawing::Size(50, 36);
			this->opPower->TabIndex = 20;
			this->opPower->Text = L"^";
			this->opPower->UseVisualStyleBackColor = true;
			this->opPower->Click += gcnew System::EventHandler(this, &MyForm::opPower_Click);
			this->opPower->Enabled = false;
			// 
			// memoryRecall
			// 
			this->memoryRecall->Enabled = true;
			this->memoryRecall->Location = System::Drawing::Point(236, 161);
			this->memoryRecall->Name = L"memoryRecall";
			this->memoryRecall->Size = System::Drawing::Size(50, 36);
			this->memoryRecall->TabIndex = 21;
			this->memoryRecall->Text = L"MR";
			this->memoryRecall->UseVisualStyleBackColor = true;
			this->memoryRecall->Click += gcnew System::EventHandler(this, &MyForm::memoryRecall_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(301, 252);
			this->Controls->Add(this->memoryRecall);
			this->Controls->Add(this->opPower);
			this->Controls->Add(this->memory);
			this->Controls->Add(this->opClear);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->opDivide);
			this->Controls->Add(this->opEquals);
			this->Controls->Add(this->opTimes);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->opMinus);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->opPlus);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->num7);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void num1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Adds the text that is on the button to the input then displays the full input on the string
		//It then calls the function disableNumb which turns off all the numbers and turns on all the operators
		this->input += this->num1->Text;
		this->textBox1->Text = this->input;
		disableNumb();

	}
	private: System::Void num2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num2->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num3->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num4->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num5->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num6->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num7->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num8->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num9->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void num0_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->num0->Text;
		this->textBox1->Text = this->input;
		disableNumb();
	}
	private: System::Void opPlus_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//calls enableNumb which disables all operators and enables all the numbers
		this->input += this->opPlus->Text;
		this->textBox1->Text = this->input;
		enableNumb();
	}
	private: System::Void opMinus_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->opMinus->Text;
		this->textBox1->Text = this->input;
		enableNumb();
	}
	private: System::Void opTimes_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->opTimes->Text;
		this->textBox1->Text = this->input;
		enableNumb();
	}
	private: System::Void opDivide_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->input += this->opDivide->Text;
		this->textBox1->Text = this->input;
		divDisable();
	}
	private: System::Void opEquals_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//The input string that has been provided gets turned into a unmanaged string from a managed string 
		//This is so the program is able to be calculated through the use of the cpp file, 
		//The managed string is used by the clr elements of the GUI while the unmanged are used by the calculator logic.
		System::String^ managed = input;
		std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);

		//Creates a version of the calculator class called calc then passes the unmanaged input string to the Calculator 
		//Once the logic has been completed an answer is returned that can be displayed in the textbox.
		CalculatorLogic calc;
		float answer = calc.Calculator(unmanaged);
		this->textBox1->Text = answer + "";
		memory->Enabled = true;

	}
	private: System::Void opClear_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Makes the input variable blank and makes the text within the textbox blank then re-enables all the numbers
		this->input = "";
		this->textBox1->Text = "";
		enableNumb();
	}

	private: System::Void memory_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		//Stores all the text that is in the textbox on the calculator in a variable called userMemory
		userMemory = this->textBox1->Text;
	}
	private: System::Void opPower_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->input += this->opPower->Text;
		this->textBox1->Text = this->input;
		enableNumb();
	}
	private: System::Void memoryRecall_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Puts the value that is in userMemory into the textbox 
		this->textBox1->Text = userMemory;
		disableAll();

	}
			 //Enables all the numbers and disables all of the operators
			 void enableNumb()
			 {
				 num0->Enabled = true;
				 num1->Enabled = true;
				 num2->Enabled = true;
				 num3->Enabled = true;
				 num4->Enabled = true;
				 num5->Enabled = true;
				 num6->Enabled = true;
				 num7->Enabled = true;
				 num8->Enabled = true;
				 num9->Enabled = true;
				 memoryRecall->Enabled = true;
				 memory->Enabled = false;
				 opMinus->Enabled = false;
				 opTimes->Enabled = false;
				 opDivide->Enabled = false;
				 opPlus->Enabled = false;
				 opEquals->Enabled = false;
				 opPower->Enabled = false;
			 }
			 //Enables all the operators and disables all of the numbers
			 void disableNumb()
			 {
				 num0->Enabled = false;
				 num1->Enabled = false;
				 num2->Enabled = false;
				 num3->Enabled = false;
				 num4->Enabled = false;
				 num5->Enabled = false;
				 num6->Enabled = false;
				 num7->Enabled = false;
				 num8->Enabled = false;
				 num9->Enabled = false;
				 memoryRecall->Enabled = false;
				 opMinus->Enabled = true;
				 opTimes->Enabled = true;
				 opDivide->Enabled = true;
				 opPlus->Enabled = true;
				 opEquals->Enabled = true;
				 opPower->Enabled = true;
				 
			 }
			 //Enables all of the numbers and disables all of the operators
			 //It however disables 0 as dividing by 0 is not mathamatically possible.
			 void divDisable()
			 {
				 num0->Enabled = false;
				 num1->Enabled = true;
				 num2->Enabled = true;
				 num3->Enabled = true;
				 num4->Enabled = true;
				 num5->Enabled = true;
				 num6->Enabled = true;
				 num7->Enabled = true;
				 num8->Enabled = true;
				 num9->Enabled = true;
				 opMinus->Enabled = false;
				 opTimes->Enabled = false;
				 opDivide->Enabled = false;
				 opPlus->Enabled = false;
				 opEquals->Enabled = false;
				 opPower->Enabled = false;
			 }
			 //Disables all operators and all numbers
			 void disableAll()
			 {
				 num0->Enabled = false;
				 num1->Enabled = false;
				 num2->Enabled = false;
				 num3->Enabled = false;
				 num4->Enabled = false;
				 num5->Enabled = false;
				 num6->Enabled = false;
				 num7->Enabled = false;
				 num8->Enabled = false;
				 num9->Enabled = false;
				 opMinus->Enabled = false;
				 opTimes->Enabled = false;
				 opDivide->Enabled = false;
				 opPlus->Enabled = false;
				 opEquals->Enabled = false;
				 opPower->Enabled = false;
			 }
};
}

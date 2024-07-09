#pragma once

#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <cliext/list>  // Include the CLI extensions list

namespace CaidenCalculator {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Collections::Generic; // for List<T>
	using namespace msclr::interop;
	using namespace cliext;  // Use the CLI extensions namespace
	

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//buttonValues = gcnew List<String^>(); // Initialize List
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtDisplay;
	protected:

	protected:

	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ num8;
	private: System::Windows::Forms::Button^ num9;
	protected:



	private: System::Windows::Forms::Button^ num4;
	private: System::Windows::Forms::Button^ num5;
	private: System::Windows::Forms::Button^ num6;



	private: System::Windows::Forms::Button^ num1;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num3;


	private: System::Windows::Forms::Button^ num0;

	private: System::Windows::Forms::Button^ decimal;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ addition;

	private: System::Windows::Forms::Button^ mult;
	private: System::Windows::Forms::Button^ Equals;
	private: System::Windows::Forms::Button^ ClearEntry;
	private: System::Windows::Forms::Button^ sub;
	private: System::Windows::Forms::Button^ div;
	private: System::Windows::Forms::Button^ percent;
	private: System::Windows::Forms::TabControl^ Tabs;

	private: System::Windows::Forms::TabPage^ Calculator;
	private: System::Windows::Forms::TabPage^ TraceLogicTab;
	private: System::Windows::Forms::Button^ TraceOn;
	private: System::Windows::Forms::Button^ TraceOff;
	private: System::Windows::Forms::TextBox^ TraceLogicText;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TextBox^ DecisionText;
	private: System::Windows::Forms::Button^ negative;

















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->addition = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->Equals = (gcnew System::Windows::Forms::Button());
			this->ClearEntry = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->percent = (gcnew System::Windows::Forms::Button());
			this->Tabs = (gcnew System::Windows::Forms::TabControl());
			this->Calculator = (gcnew System::Windows::Forms::TabPage());
			this->negative = (gcnew System::Windows::Forms::Button());
			this->TraceOn = (gcnew System::Windows::Forms::Button());
			this->TraceOff = (gcnew System::Windows::Forms::Button());
			this->TraceLogicTab = (gcnew System::Windows::Forms::TabPage());
			this->TraceLogicText = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->DecisionText = (gcnew System::Windows::Forms::TextBox());
			this->Tabs->SuspendLayout();
			this->Calculator->SuspendLayout();
			this->TraceLogicTab->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Montserrat Medium", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(31, 208);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->txtDisplay->Size = System::Drawing::Size(1100, 150);
			this->txtDisplay->TabIndex = 0;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtDisplay->WordWrap = false;
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num7->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(44, 424);
			this->num7->MinimumSize = System::Drawing::Size(150, 150);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(150, 150);
			this->num7->TabIndex = 1;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num8->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(239, 424);
			this->num8->MinimumSize = System::Drawing::Size(150, 150);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(150, 150);
			this->num8->TabIndex = 2;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num9->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(439, 424);
			this->num9->MinimumSize = System::Drawing::Size(150, 150);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(150, 150);
			this->num9->TabIndex = 3;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num4->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(44, 632);
			this->num4->MinimumSize = System::Drawing::Size(150, 150);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(150, 150);
			this->num4->TabIndex = 4;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num5->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(239, 632);
			this->num5->MinimumSize = System::Drawing::Size(150, 150);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(150, 150);
			this->num5->TabIndex = 5;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num6->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(439, 632);
			this->num6->MinimumSize = System::Drawing::Size(150, 150);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(150, 150);
			this->num6->TabIndex = 6;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num1->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(44, 823);
			this->num1->MinimumSize = System::Drawing::Size(150, 150);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(150, 150);
			this->num1->TabIndex = 7;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num2->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(239, 823);
			this->num2->MinimumSize = System::Drawing::Size(150, 150);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(150, 150);
			this->num2->TabIndex = 8;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num3->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(439, 823);
			this->num3->MinimumSize = System::Drawing::Size(150, 150);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(150, 150);
			this->num3->TabIndex = 9;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->num0->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->Location = System::Drawing::Point(44, 1041);
			this->num0->MinimumSize = System::Drawing::Size(150, 150);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(150, 150);
			this->num0->TabIndex = 10;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &MainForm::EnterNumber);
			// 
			// decimal
			// 
			this->decimal->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->decimal->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->Location = System::Drawing::Point(239, 1041);
			this->decimal->MinimumSize = System::Drawing::Size(150, 150);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(150, 150);
			this->decimal->TabIndex = 11;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = false;
			this->decimal->Click += gcnew System::EventHandler(this, &MainForm::EnterDecimal);
			// 
			// Clear
			// 
			this->Clear->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Clear->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Clear->Location = System::Drawing::Point(728, 424);
			this->Clear->MinimumSize = System::Drawing::Size(150, 150);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(150, 150);
			this->Clear->TabIndex = 12;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = false;
			this->Clear->Click += gcnew System::EventHandler(this, &MainForm::Clear_Click);
			// 
			// addition
			// 
			this->addition->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->addition->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addition->Location = System::Drawing::Point(728, 632);
			this->addition->MinimumSize = System::Drawing::Size(150, 150);
			this->addition->Name = L"addition";
			this->addition->Size = System::Drawing::Size(150, 150);
			this->addition->TabIndex = 13;
			this->addition->Text = L"+";
			this->addition->UseVisualStyleBackColor = false;
			this->addition->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// mult
			// 
			this->mult->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->mult->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mult->Location = System::Drawing::Point(728, 836);
			this->mult->MinimumSize = System::Drawing::Size(150, 150);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(150, 150);
			this->mult->TabIndex = 14;
			this->mult->Text = L"*";
			this->mult->UseVisualStyleBackColor = false;
			this->mult->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// Equals
			// 
			this->Equals->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Equals->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Equals->Location = System::Drawing::Point(728, 1041);
			this->Equals->MinimumSize = System::Drawing::Size(150, 150);
			this->Equals->Name = L"Equals";
			this->Equals->Size = System::Drawing::Size(150, 150);
			this->Equals->TabIndex = 15;
			this->Equals->Text = L"=";
			this->Equals->UseVisualStyleBackColor = false;
			this->Equals->Click += gcnew System::EventHandler(this, &MainForm::Equals_Click);
			// 
			// ClearEntry
			// 
			this->ClearEntry->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClearEntry->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearEntry->Location = System::Drawing::Point(950, 424);
			this->ClearEntry->MinimumSize = System::Drawing::Size(150, 150);
			this->ClearEntry->Name = L"ClearEntry";
			this->ClearEntry->Size = System::Drawing::Size(150, 150);
			this->ClearEntry->TabIndex = 16;
			this->ClearEntry->Text = L"CE";
			this->ClearEntry->UseVisualStyleBackColor = false;
			this->ClearEntry->Click += gcnew System::EventHandler(this, &MainForm::CurrentEntryClick);
			// 
			// sub
			// 
			this->sub->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->sub->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sub->Location = System::Drawing::Point(950, 632);
			this->sub->MinimumSize = System::Drawing::Size(150, 150);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(150, 150);
			this->sub->TabIndex = 17;
			this->sub->Text = L"-";
			this->sub->UseVisualStyleBackColor = false;
			this->sub->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// div
			// 
			this->div->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->div->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->div->Location = System::Drawing::Point(950, 836);
			this->div->MinimumSize = System::Drawing::Size(150, 150);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(150, 150);
			this->div->TabIndex = 18;
			this->div->Text = L"/";
			this->div->UseVisualStyleBackColor = false;
			this->div->Click += gcnew System::EventHandler(this, &MainForm::EnterOperator);
			// 
			// percent
			// 
			this->percent->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->percent->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->percent->Location = System::Drawing::Point(950, 1041);
			this->percent->MinimumSize = System::Drawing::Size(150, 150);
			this->percent->Name = L"percent";
			this->percent->Size = System::Drawing::Size(150, 150);
			this->percent->TabIndex = 19;
			this->percent->Text = L"%";
			this->percent->UseVisualStyleBackColor = false;
			this->percent->Click += gcnew System::EventHandler(this, &MainForm::EnterPercent);
			// 
			// Tabs
			// 
			this->Tabs->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Tabs->Controls->Add(this->Calculator);
			this->Tabs->Controls->Add(this->TraceLogicTab);
			this->Tabs->Controls->Add(this->tabPage1);
			this->Tabs->Location = System::Drawing::Point(43, 21);
			this->Tabs->MinimumSize = System::Drawing::Size(1173, 1352);
			this->Tabs->Name = L"Tabs";
			this->Tabs->SelectedIndex = 0;
			this->Tabs->Size = System::Drawing::Size(1173, 1352);
			this->Tabs->TabIndex = 20;
			// 
			// Calculator
			// 
			this->Calculator->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Calculator->Controls->Add(this->negative);
			this->Calculator->Controls->Add(this->TraceOn);
			this->Calculator->Controls->Add(this->TraceOff);
			this->Calculator->Controls->Add(this->Equals);
			this->Calculator->Controls->Add(this->percent);
			this->Calculator->Controls->Add(this->txtDisplay);
			this->Calculator->Controls->Add(this->div);
			this->Calculator->Controls->Add(this->num7);
			this->Calculator->Controls->Add(this->mult);
			this->Calculator->Controls->Add(this->sub);
			this->Calculator->Controls->Add(this->num8);
			this->Calculator->Controls->Add(this->num9);
			this->Calculator->Controls->Add(this->addition);
			this->Calculator->Controls->Add(this->num4);
			this->Calculator->Controls->Add(this->ClearEntry);
			this->Calculator->Controls->Add(this->num5);
			this->Calculator->Controls->Add(this->num6);
			this->Calculator->Controls->Add(this->num1);
			this->Calculator->Controls->Add(this->Clear);
			this->Calculator->Controls->Add(this->num2);
			this->Calculator->Controls->Add(this->num0);
			this->Calculator->Controls->Add(this->decimal);
			this->Calculator->Controls->Add(this->num3);
			this->Calculator->Location = System::Drawing::Point(10, 47);
			this->Calculator->Name = L"Calculator";
			this->Calculator->Padding = System::Windows::Forms::Padding(3);
			this->Calculator->Size = System::Drawing::Size(1153, 1295);
			this->Calculator->TabIndex = 0;
			this->Calculator->Text = L"Calculator";
			// 
			// negative
			// 
			this->negative->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->negative->Font = (gcnew System::Drawing::Font(L"Myriad Pro", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->negative->Location = System::Drawing::Point(439, 1041);
			this->negative->MinimumSize = System::Drawing::Size(150, 150);
			this->negative->Name = L"negative";
			this->negative->Size = System::Drawing::Size(150, 150);
			this->negative->TabIndex = 22;
			this->negative->Text = L"+/-";
			this->negative->UseVisualStyleBackColor = false;
			this->negative->Click += gcnew System::EventHandler(this, &MainForm::negative_Click);
			// 
			// TraceOn
			// 
			this->TraceOn->BackColor = System::Drawing::Color::DarkGray;
			this->TraceOn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TraceOn->Location = System::Drawing::Point(564, 90);
			this->TraceOn->MinimumSize = System::Drawing::Size(200, 50);
			this->TraceOn->Name = L"TraceOn";
			this->TraceOn->Size = System::Drawing::Size(250, 50);
			this->TraceOn->TabIndex = 21;
			this->TraceOn->Text = L"Intro Trace On";
			this->TraceOn->UseVisualStyleBackColor = false;
			this->TraceOn->Click += gcnew System::EventHandler(this, &MainForm::TraceOnClicked);
			// 
			// TraceOff
			// 
			this->TraceOff->BackColor = System::Drawing::Color::LightGray;
			this->TraceOff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TraceOff->Location = System::Drawing::Point(850, 90);
			this->TraceOff->MinimumSize = System::Drawing::Size(200, 50);
			this->TraceOff->Name = L"TraceOff";
			this->TraceOff->Size = System::Drawing::Size(250, 50);
			this->TraceOff->TabIndex = 20;
			this->TraceOff->Text = L"Intro Trace Off";
			this->TraceOff->UseVisualStyleBackColor = false;
			this->TraceOff->Click += gcnew System::EventHandler(this, &MainForm::TraceOffClicked);
			// 
			// TraceLogicTab
			// 
			this->TraceLogicTab->BackColor = System::Drawing::Color::LightGray;
			this->TraceLogicTab->Controls->Add(this->TraceLogicText);
			this->TraceLogicTab->Location = System::Drawing::Point(10, 47);
			this->TraceLogicTab->Name = L"TraceLogicTab";
			this->TraceLogicTab->Padding = System::Windows::Forms::Padding(3);
			this->TraceLogicTab->Size = System::Drawing::Size(1153, 1295);
			this->TraceLogicTab->TabIndex = 1;
			this->TraceLogicTab->Text = L"Trace Logic";
			// 
			// TraceLogicText
			// 
			this->TraceLogicText->Location = System::Drawing::Point(61, 56);
			this->TraceLogicText->Multiline = true;
			this->TraceLogicText->Name = L"TraceLogicText";
			this->TraceLogicText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->TraceLogicText->Size = System::Drawing::Size(1010, 1156);
			this->TraceLogicText->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->DecisionText);
			this->tabPage1->Location = System::Drawing::Point(10, 47);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1153, 1295);
			this->tabPage1->TabIndex = 2;
			this->tabPage1->Text = L"Decision Tab";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// DecisionText
			// 
			this->DecisionText->Location = System::Drawing::Point(20, 21);
			this->DecisionText->Multiline = true;
			this->DecisionText->Name = L"DecisionText";
			this->DecisionText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->DecisionText->Size = System::Drawing::Size(1109, 1245);
			this->DecisionText->TabIndex = 0;
			this->DecisionText->Text = resources->GetString(L"DecisionText.Text");
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1252, 1421);
			this->Controls->Add(this->Tabs);
			this->MinimumSize = System::Drawing::Size(1280, 1500);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Tabs->ResumeLayout(false);
			this->Calculator->ResumeLayout(false);
			this->Calculator->PerformLayout();
			this->TraceLogicTab->ResumeLayout(false);
			this->TraceLogicTab->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		double firstDigit, secondDigit, result;	//used for calculating the two numbers
		String^ operators;	//used to keep track of the operator used
		String^ displaytxt;		//string for textDisplay->Text
		list<int>^ decisionPoints = gcnew list<int>();	//used to number the decision points used
		bool isTraceOn = true;	//flag for if the messages need to be printed to trace logic tab
		int deciCount = 0;	//count to keep track of the number of decison points being reached
		bool operatorEntered = false;	//flag used to make sure only one operator is being entered at a time

	//*********** ENTER NUMBER ***********
	//appends any number to display
	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
			Button^ Numbers = safe_cast<Button^>(sender);
			txtDisplay->Text = txtDisplay->Text + Numbers->Text;
			decisionPoints->push_back(12);
			deciCount++;
		}

	//*********** ENTER OPERATOR *********** 
	//used for all operators
	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		if (operatorEntered) {
			txtDisplay->Text = "Error"; // Display error if an operator is already entered
			decisionPoints->push_back(22);
			deciCount++;
			if (isTraceOn)
			{
				TraceLogicText->Text += "Error: You can only use one operation at a time.\r\n";
				TraceLogicText->Text += "----------------------------------------------------------------------";
				TraceLogicText->Text += "\r\n";
				TraceLogicText->Text += "----------------------------------------------------------------------";
				TraceLogicText->Text += "\r\n";
				decisionPoints->push_back(26);
				deciCount++;
			}
			return;
		}

		Button^ NumOp = safe_cast<Button^>(sender);
		txtDisplay->Text = txtDisplay->Text + NumOp->Text;
		operators = NumOp->Text;
		operatorEntered = true; // sets flag to show that an operator has already been used
		decisionPoints->push_back(13);
		deciCount++;
	}

	//*********** ENTER DECIMAL ***********
	//handles the decimal button
	private: System::Void EnterDecimal(System::Object^ sender, System::EventArgs^ e) {
			txtDisplay->Text = txtDisplay->Text  +  ".";
			decisionPoints->push_back(14);
			deciCount++;
	}

	//*********** ENTER PERCENT ***********
	//handles percent
	private: System::Void EnterPercent(System::Object^ sender, System::EventArgs^ e) {
		decisionPoints->push_back(15);
		deciCount++;
		//handles instance with more than one percent preset
		if (!txtDisplay->Text->Contains("%"))
		{
			txtDisplay->Text = txtDisplay->Text + "%";
			decisionPoints->push_back(1);
			deciCount++;
		}
		else
		{
			decisionPoints->push_back(1);
			deciCount++;
			if (isTraceOn)
			{
				TraceLogicText->Text += "Error: more than one percent present\r\n";
				decisionPoints->push_back(2);
				deciCount++;
			}
			txtDisplay->Text = "Error";
		}
	}

	// *********** EQUALS_CLICK ***********
	//	this function handles calculations and also prints statement to trace logic tab
	private: System::Void Equals_Click(System::Object^ sender, System::EventArgs^ e) {

		displaytxt = txtDisplay->Text;
		String^ first_digit_string = "";	//used to get first number
		String^ second_digit_string = "";   //used to get second number
		bool isPercent = false;			//flag for if a percent is used
		operatorEntered = false;		//set to false to enable you to perform operations on the solution without having to clear

		decisionPoints->push_back(16);
		deciCount++;

		//saves the first and second digit being calculated
		for (int i = 0; i < displaytxt->Length; i++)
		{
			if (displaytxt[i] == System::Convert::ToChar(operators))
			{
				//handles first digit being negative edge case
				if (i == 0)
				{
					decisionPoints->push_back(21);
					deciCount++;
					continue;
				}
				decisionPoints->push_back(3);
				deciCount++;
				for (int j = 0; j < i; j++)
				{
					//error handler for percent usage
					if (displaytxt[j] == System::Convert::ToChar("%"))
					{
						txtDisplay->Text = "Error";
						decisionPoints->push_back(27);
						deciCount++;
						if (isTraceOn)
						{
							TraceLogicText->Text += "Format Error: <number> <operator> <number><percent button>\r\n";
							TraceLogicText->Text += "----------------------------------------------------------------------";
							TraceLogicText->Text += "\r\n";
							TraceLogicText->Text += "----------------------------------------------------------------------";
							TraceLogicText->Text += "\r\n";
							decisionPoints->push_back(28);
							deciCount++;
						}	
						return;
					}
					first_digit_string += displaytxt[j];	//gets first digit
				}
				for (int k = i+1; k < displaytxt->Length; k++)
				{
					//doesn't include correctly used percentage in second number (flags to be calculated later)
					if (displaytxt[k] == System::Convert::ToChar("%") && k == (displaytxt->Length)-1)
					{
						isPercent = true;
						decisionPoints->push_back(4);
						deciCount++;
						continue;
					}
					//error handler for percent usage in second number
					else if ((displaytxt[k] == System::Convert::ToChar("%")))
					{
						decisionPoints->push_back(29);
						deciCount++;
						txtDisplay->Text = "Error";
						if (isTraceOn)
						{
							TraceLogicText->Text += "Format Error: <number> <operator> <number><percent button>\r\n";
							TraceLogicText->Text += "----------------------------------------------------------------------";
							TraceLogicText->Text += "\r\n";
							TraceLogicText->Text += "----------------------------------------------------------------------";
							TraceLogicText->Text += "\r\n";
							decisionPoints->push_back(28);
							deciCount++;
						}
						return;

					}
					else 
					{
						second_digit_string += displaytxt[k];	//gets second number
					}
				
				}
			}
			else
			{
				continue;
			}
			break;
		}
		firstDigit = System::Convert::ToDouble(first_digit_string);	//type cast first number to double

		secondDigit = System::Convert::ToDouble(second_digit_string);	//type cast second number to double

		// Adjust secondDigit if percent is present
		if (isPercent) {
			secondDigit = firstDigit * (secondDigit / 100.0);
			decisionPoints->push_back(5);
			deciCount++;
		}
		// addition
		if (operators == "+")
		{
			result = firstDigit + secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			decisionPoints->push_back(6);
			deciCount++;
		}
		// subtraction
		else if (operators == "-")
		{
			result = firstDigit - secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			decisionPoints->push_back(7);
			deciCount++;
		}
		//multiplication
		else if (operators == "*")
		{
			result = firstDigit * secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			decisionPoints->push_back(8);
			deciCount++;
		}
		//division by zero error handler
		else if (operators == "/" && secondDigit == 0)
		{
			txtDisplay->Text = "Error";
			if (isTraceOn)
			{
				TraceLogicText->Text += "Error: Division by Zero\r\n";
				TraceLogicText->Text += "----------------------------------------------------------------------";
				TraceLogicText->Text += "\r\n";
				TraceLogicText->Text += "----------------------------------------------------------------------";
				TraceLogicText->Text += "\r\n";
				decisionPoints->push_back(25);
				deciCount++;
			}
			decisionPoints->push_back(23);
			deciCount++;
			return;
		}
		//division
		else if (operators == "/")
		{
			result = firstDigit / secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
			decisionPoints->push_back(9);
			deciCount++;
		}
		else
		{
			txtDisplay->Text = "Error";
			decisionPoints->push_back(10);
			deciCount++;
		}

		//trace logic answer summary
		if (isTraceOn)
		{
			decisionPoints->push_back(11);
			deciCount++;

			TraceLogicText->Text += "first number entered: ";
			TraceLogicText->Text += first_digit_string;
			TraceLogicText->Text += "\r\n";

			TraceLogicText->Text += "operator entered:\t";
			TraceLogicText->Text += operators;
			TraceLogicText->Text += "\r\n";

			TraceLogicText->Text += "second number entered: ";
			TraceLogicText->Text += second_digit_string;
			TraceLogicText->Text += "\r\n";

			TraceLogicText->Text += "Answer = ";
			TraceLogicText->Text += result;
			TraceLogicText->Text += "\r\n";
			TraceLogicText->Text += "\r\n";
			TraceLogicText->Text += "Answer Summary:";
			TraceLogicText->Text += "\r\n";
			TraceLogicText->Text += "Number of Decision Points: ";

			//number of decisions 
			TraceLogicText->Text += (deciCount);
			TraceLogicText->Text += "\r\n";
			TraceLogicText->Text += "Order of Decisions Used: ";

			//decision list
			for each (int value in decisionPoints)
			{
				TraceLogicText->Text += "DP";
				TraceLogicText->Text += value;
				TraceLogicText->Text += ", ";
			}
			TraceLogicText->Text = TraceLogicText->Text->Substring(0, TraceLogicText->Text->Length - 2);//deletes last comma in list
			TraceLogicText->Text += "\r\n";
			TraceLogicText->Text += "----------------------------------------------------------------------";
			TraceLogicText->Text += "\r\n";
			TraceLogicText->Text += "----------------------------------------------------------------------";
			TraceLogicText->Text += "\r\n";
		}
		

	}
	//*********** CURRENT_ENTRY_CLICK ***********
	//clears current entry and resets temporary values used in previous calculation
	private: System::Void CurrentEntryClick(System::Object^ sender, System::EventArgs^ e) {
		firstDigit = NULL;
		secondDigit = NULL;
		operators = "";
		operatorEntered = false;
		txtDisplay->Text = "";
		decisionPoints->push_back(17);
		deciCount++;
		
	}
	//*********** CLEAR_CLICK ***********
	//clears current entry and resets state of calculator including trace logic tab
	private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
		TraceLogicText->Text = "Current State: On, Waiting for user input: \r\n";
		txtDisplay->Text = "";
		firstDigit = NULL;
		secondDigit = NULL;
		operators = "";
		operatorEntered = false;
		deciCount = 0;
		decisionPoints->clear();
		
		decisionPoints->push_back(18);
		deciCount++;
	}
	//*********** TRACE_ON_CLICKED ***********
	//turns on trace logic tab
	private: System::Void TraceOnClicked(System::Object^ sender, System::EventArgs^ e) {
		this->TraceOn->BackColor = System::Drawing::Color::DarkGray;
		this->TraceOff->BackColor = System::Drawing::Color::LightGray;
		isTraceOn = true;
		TraceLogicText->Text = "Current State: On, Waiting for user input: \r\n";
		TraceLogicText->Text += "---------------------------------------------------------------------- \r\n";
		decisionPoints->push_back(19);
		deciCount++;
	}

	//*********** TRACE_OFF_CLICKED ***********
	//turns off trace logic tab
	private: System::Void TraceOffClicked(System::Object^ sender, System::EventArgs^ e) {
		this->TraceOff->BackColor = System::Drawing::Color::DarkGray;
		this->TraceOn->BackColor = System::Drawing::Color::LightGray;
		isTraceOn = false;
		TraceLogicText->Text = "Current State: Off, Click Intro Trace On button for this tab to function\r\n ";
		TraceLogicText->Text += "---------------------------------------------------------------------- \r\n";
		decisionPoints->push_back(20);
		deciCount++;
	}
	//*********** MAINFORM_LOAD ***********
	// runs this code when form loads
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		TraceLogicText->Text += "Current State: On, Waiting for user input: \r\n";
		TraceLogicText->Text += "---------------------------------------------------------------------- \r\n";
	}
	//*********** NEGATIVE_CLICK ***********
	// handles negative button being clicked
	private: System::Void negative_Click(System::Object^ sender, System::EventArgs^ e) {
		txtDisplay->Text = txtDisplay->Text + "-";
		decisionPoints->push_back(24);
		deciCount++;
	}

	//private: System::Void txtDisplay_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// Auto-scroll to the end of the text
		//txtDisplay->SelectionStart = this->txtDisplay->Text->Length;
		//txtDisplay->ScrollToCaret();
	//}
};
}

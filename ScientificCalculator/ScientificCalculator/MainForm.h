#include "CalcHandler.h"
#include <string>
#pragma once

namespace ScientificCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  op2;
	private: System::Windows::Forms::Label^  op1;
	private: System::Windows::Forms::GroupBox^  dBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  iBox;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;







	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->iBox = (gcnew System::Windows::Forms::GroupBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dBox = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->op2 = (gcnew System::Windows::Forms::Label());
			this->op1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->iBox->SuspendLayout();
			this->dBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(579, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(104, 109);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->iBox);
			this->groupBox1->Controls->Add(this->dBox);
			this->groupBox1->Controls->Add(this->op2);
			this->groupBox1->Controls->Add(this->op1);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Location = System::Drawing::Point(579, 127);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(104, 244);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Operations";
			// 
			// iBox
			// 
			this->iBox->Controls->Add(this->textBox6);
			this->iBox->Controls->Add(this->label7);
			this->iBox->Controls->Add(this->textBox4);
			this->iBox->Controls->Add(this->textBox5);
			this->iBox->Controls->Add(this->label8);
			this->iBox->Controls->Add(this->label9);
			this->iBox->Location = System::Drawing::Point(6, 116);
			this->iBox->Name = L"iBox";
			this->iBox->Size = System::Drawing::Size(92, 116);
			this->iBox->TabIndex = 57;
			this->iBox->TabStop = false;
			this->iBox->Text = L"Integration";
			this->iBox->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(50, 77);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(33, 20);
			this->textBox6->TabIndex = 56;
			this->textBox6->Text = L"0";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 52);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 16);
			this->label7->TabIndex = 55;
			this->label7->Text = L"L Lim";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(50, 52);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(33, 20);
			this->textBox4->TabIndex = 53;
			this->textBox4->Text = L"1";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(50, 29);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(33, 20);
			this->textBox5->TabIndex = 52;
			this->textBox5->Text = L"1";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(2, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(41, 16);
			this->label8->TabIndex = 54;
			this->label8->Text = L"U Lim";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(6, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 16);
			this->label9->TabIndex = 57;
			this->label9->Text = L"offset";
			// 
			// dBox
			// 
			this->dBox->Controls->Add(this->label6);
			this->dBox->Controls->Add(this->textBox3);
			this->dBox->Controls->Add(this->textBox2);
			this->dBox->Controls->Add(this->label5);
			this->dBox->Location = System::Drawing::Point(6, 121);
			this->dBox->Name = L"dBox";
			this->dBox->Size = System::Drawing::Size(92, 117);
			this->dBox->TabIndex = 52;
			this->dBox->TabStop = false;
			this->dBox->Text = L"Derivative";
			this->dBox->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 52);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(29, 23);
			this->label6->TabIndex = 55;
			this->label6->Text = L"x=";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(50, 52);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(33, 20);
			this->textBox3->TabIndex = 53;
			this->textBox3->Text = L"1";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(50, 29);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(33, 20);
			this->textBox2->TabIndex = 52;
			this->textBox2->Text = L"0";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(2, 30);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 54;
			this->label5->Text = L"offset=";
			// 
			// op2
			// 
			this->op2->AutoSize = true;
			this->op2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->op2->Location = System::Drawing::Point(2, 90);
			this->op2->Name = L"op2";
			this->op2->Size = System::Drawing::Size(17, 19);
			this->op2->TabIndex = 47;
			this->op2->Text = L"0";
			// 
			// op1
			// 
			this->op1->AutoSize = true;
			this->op1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->op1->Location = System::Drawing::Point(2, 33);
			this->op1->Name = L"op1";
			this->op1->Size = System::Drawing::Size(17, 19);
			this->op1->TabIndex = 46;
			this->op1->Text = L"0";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(34, 63);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 33);
			this->pictureBox3->TabIndex = 45;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(209, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"0";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1, 303);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Trignometric and Calculus Functions _____";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(147, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(295, 23);
			this->textBox1->TabIndex = 5;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(147, 37);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(295, 41);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(128, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(209, 248);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(290, 248);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(128, 219);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(209, 219);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(290, 219);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 12;
			this->button7->Text = L"6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(128, 190);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 13;
			this->button8->Text = L"7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(209, 190);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 14;
			this->button9->Text = L"8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(290, 190);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 15;
			this->button10->Text = L"9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(128, 161);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 16;
			this->button11->Text = L"CE";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MainForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(209, 161);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 17;
			this->button12->Text = L"C";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MainForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(290, 161);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 18;
			this->button13->Text = L"<-";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MainForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(381, 161);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 19;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MainForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(381, 190);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 23);
			this->button15->TabIndex = 20;
			this->button15->Text = L"X";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MainForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(381, 219);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 23);
			this->button16->TabIndex = 21;
			this->button16->Text = L"-";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MainForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(381, 248);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(75, 23);
			this->button17->TabIndex = 22;
			this->button17->Text = L"+";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MainForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(128, 277);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 23;
			this->button18->Text = L"pi";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MainForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(290, 277);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 24;
			this->button19->Text = L".";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(381, 277);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 25;
			this->button20->Text = L"=";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MainForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(381, 127);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(75, 23);
			this->button21->TabIndex = 29;
			this->button21->Text = L"1/x";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MainForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(290, 127);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(75, 23);
			this->button22->TabIndex = 28;
			this->button22->Text = L"^2";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MainForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(209, 127);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(75, 23);
			this->button23->TabIndex = 27;
			this->button23->Text = L"sqr";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MainForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(128, 127);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(75, 23);
			this->button24->TabIndex = 26;
			this->button24->Text = L"%";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MainForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(374, 324);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(75, 23);
			this->button25->TabIndex = 33;
			this->button25->Text = L"^";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MainForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(293, 324);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(75, 23);
			this->button26->TabIndex = 32;
			this->button26->Text = L"tan";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MainForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(131, 324);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(75, 23);
			this->button27->TabIndex = 31;
			this->button27->Text = L"sin";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MainForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(212, 324);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(75, 23);
			this->button28->TabIndex = 30;
			this->button28->Text = L"cos";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MainForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(374, 354);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(75, 23);
			this->button29->TabIndex = 37;
			this->button29->Text = L"e^x";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MainForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(293, 354);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(75, 23);
			this->button30->TabIndex = 36;
			this->button30->Text = L"|x|";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MainForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(131, 354);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(75, 23);
			this->button31->TabIndex = 35;
			this->button31->Text = L"integ";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MainForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(212, 354);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(75, 23);
			this->button32->TabIndex = 34;
			this->button32->Text = L"dy/dx";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MainForm::button32_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(1, 380);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 15);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Statistical Functions _____";
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(579, 393);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(104, 220);
			this->listBox1->TabIndex = 41;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(535, 374);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 15);
			this->label3->TabIndex = 42;
			this->label3->Text = L"History _____";
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(374, 401);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(75, 23);
			this->button33->TabIndex = 46;
			this->button33->Text = L"Variance";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MainForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(293, 401);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(75, 23);
			this->button34->TabIndex = 45;
			this->button34->Text = L"Median";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MainForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(131, 401);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(75, 23);
			this->button35->TabIndex = 44;
			this->button35->Text = L"Mean";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MainForm::button35_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(212, 401);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(75, 23);
			this->button36->TabIndex = 43;
			this->button36->Text = L"Mode";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MainForm::button36_Click);
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(212, 430);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(139, 23);
			this->button37->TabIndex = 47;
			this->button37->Text = L"Standard Deviation";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MainForm::button37_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Lucida Bright", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1, 462);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 15);
			this->label4->TabIndex = 48;
			this->label4->Text = L"Matrix Functions _____";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(695, 625);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->iBox->ResumeLayout(false);
			this->iBox->PerformLayout();
			this->dBox->ResumeLayout(false);
			this->dBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBox1->AppendText("X");
		opSel = true;
		this->pictureBox3->Load("OpImgs/mulS.png");
	}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	this->listBox1->Items->Add("aabb");
	this->pictureBox3->Load("StartUp.png");


	
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
	this->op1->Text = ", Separated";
	this->op2->Text = "Variance";
	this->textBox1->Text = "Variance(";
}
private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//this->textBox1->Text = "1";
		this->textBox1->AppendText("1");
		if (opSel == false) {
			this->op1->Text = this->op1->Text +"1";
		}
		else if (opSel == true) {
			this->op2->Text = this->op2->Text +"1";
		}
	

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("2");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"2";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"2";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("3");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"3";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"3";
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("4");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"4";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"4";
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("5");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"5";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"5";
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("6");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"6";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"6";
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("7");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"7";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"7";
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("8");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"8";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"8";
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("9");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"9";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"9";
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("+");
	opSel = true;
	this->pictureBox3->Load("OpImgs/addS.png");
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	opSel = false;
	
	String^ ttext;
	ttext = this->textBox1->Text;
	this->listBox1->Items->Add(this->textBox1->Text);
	if (this->textBox1->Text->Contains("d(")) {
		this->textBox1->Text = process(this->textBox1->Text,Convert::ToDouble(this->textBox2->Text), Convert::ToDouble(this->textBox3->Text));
	}
	else if (this->textBox1->Text->Contains("Integ(")) {
		this->textBox1->Text = process(this->textBox1->Text, Convert::ToDouble(this->textBox5->Text), Convert::ToDouble(this->textBox4->Text), Convert::ToDouble(this->textBox6->Text));
	}
	else if (ttext->Contains("Mean(")|| ttext->Contains("Mode(")|| ttext->Contains("Median(")|| ttext->Contains("Variance(")||ttext->Contains("StdDev(")) {
		this->textBox1->Text = processStat(this->textBox1->Text);
	}

	else {
		this->textBox1->Text = process(this->textBox1->Text);
	}
	
	
	
	
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("0");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"0";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"0";
	}
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText(".");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +".";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +".";
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("3.14");
	if (opSel == false) {
		this->op1->Text = this->op1->Text +"?=3.14";
	}
	else if (opSel == true) {
		this->op2->Text = this->op2->Text +"?=3.14";
	}
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("/");
	opSel = true;
	this->pictureBox3->Load("OpImgs/divS.png");

	
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("-");
	opSel = true;
	this->pictureBox3->Load("OpImgs/minS.png");
}
void clearAll() {
	this->textBox1->Text = "";
	opSel = false;
	this->op1->Text = "0";
	this->op2->Text = "0";
	this->dBox->Visible = false;
	this->iBox->Visible = false;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("sqr(");
	this->op1->Text = this->textBox1->Text;

	opSel = false;
	this->pictureBox3->Load("OpImgs/sqrS.png");
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	this->op1->Text = "x=" + this->textBox1->Text;
	this->textBox1->Text = "sin(";
	opSel = false;
	this->op2->Text = "radians";
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	this->op1->Text = "x=" + this->textBox1->Text;
	this->textBox1->Text = "cos(";
	opSel = false;
	this->op2->Text = "radians";
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	this->op1->Text = "x=" + this->textBox1->Text;
	this->textBox1->Text = "tan(";
	opSel = false;
	this->op2->Text = "radians";
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->AppendText("^");
	opSel = true;
	this->pictureBox3->Load("OpImgs/mulS.png");
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	this->op1->Text = "x=" + this->textBox1->Text;
	this->textBox1->Text = "inv(";
	opSel = false;
	this->op2->Text = "1/x";
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = this->textBox1->Text +("^2");
	opSel = false;
	
	this->pictureBox3->Load("OpImgs/mulS.png");
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

	this->textBox1->Text = this->textBox1->Text->Remove(this->textBox1->Text->Length-1);
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "mod(";
	opSel = false;

	this->pictureBox3->Load("OpImgs/mulS.png");
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	this->textBox1->Text = "exp(";
	opSel = false;

	this->pictureBox3->Load("OpImgs/mulS.png");
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
	this->dBox->Visible = true;
	this->iBox->Visible = false;
	this->op1->Text = ", Separated Coef";
	this->op2->Text = "Props";
	this->textBox1->Text = "d(";
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
	this->dBox->Visible = false;
	this->iBox->Visible = true;
	this->op1->Text = ", Separated Coef";
	this->op2->Text = "Props";
	this->textBox1->Text = "Integ(";
}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
	this->op1->Text = ", Separated";
	this->op2->Text = "Mean";
	this->textBox1->Text = "Mean(";
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
	this->op1->Text = ", Separated";
	this->op2->Text = "Mode";
	this->textBox1->Text = "Mode(";
}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
	this->op1->Text = ", Separated";
	this->op2->Text = "Median";
	this->textBox1->Text = "Median(";
}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	clearAll();
	this->op1->Text = ", Separated";
	this->op2->Text = "StdDev";
	this->textBox1->Text = "StdDev(";
}
};
}

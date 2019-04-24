#pragma once
#include "MyForm1.h"
#include "Hashing.h"
#include"graphs.h"
#include<string>
#include <cstdlib>
#include <ctime>
#include "tries.h"

//#include "stdafx.h"
graph g;
edge_node*z;
node *date_time;
list l;
int count3;
TrieNode *t=getNode();
hashing h;
pass p;
namespace Project2 {

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RichTextBox^  richTextBox7;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;










	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::ComboBox^  curr_city;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::ComboBox^  date;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;






	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;







	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::GroupBox^  groupBox10;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::GroupBox^  groupBox11;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::GroupBox^  groupBox12;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->curr_city = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->date = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(1288, 158);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 72, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(5, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1221, 127);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SnH Air Lines Ticketing System";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->curr_city);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(12, 175);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(325, 281);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(232, 22);
			this->textBox2->TabIndex = 10;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox2_KeyDown);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(77, 210);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 33);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Submit";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// curr_city
			// 
			this->curr_city->AllowDrop = true;
			this->curr_city->CausesValidation = false;
			this->curr_city->FormattingEnabled = true;
			this->curr_city->Location = System::Drawing::Point(16, 174);
			this->curr_city->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->curr_city->Name = L"curr_city";
			this->curr_city->Size = System::Drawing::Size(232, 24);
			this->curr_city->TabIndex = 4;
			this->curr_city->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::curr_city_SelectedIndexChanged);
			this->curr_city->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::curr_city_KeyDown);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(5, 84);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(228, 46);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Select Your City";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(69, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 46);
			this->label2->TabIndex = 0;
			this->label2->Text = L"DEPARTURE";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox3.BackgroundImage")));
			this->groupBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->groupBox3->Location = System::Drawing::Point(1307, 12);
			this->groupBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox3->Size = System::Drawing::Size(225, 158);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox4->Controls->Add(this->groupBox9);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(343, 175);
			this->groupBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox4->Size = System::Drawing::Size(301, 281);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox9->Controls->Add(this->button5);
			this->groupBox9->Controls->Add(this->comboBox2);
			this->groupBox9->Controls->Add(this->label13);
			this->groupBox9->Controls->Add(this->label14);
			this->groupBox9->Location = System::Drawing::Point(-11, 0);
			this->groupBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox9->Size = System::Drawing::Size(325, 281);
			this->groupBox9->TabIndex = 3;
			this->groupBox9->TabStop = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(76, 210);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(148, 33);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Submit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(32, 145);
			this->comboBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(192, 24);
			this->comboBox2->TabIndex = 4;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(21, 84);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(228, 46);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Select Your City";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(53, 18);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(195, 46);
			this->label14->TabIndex = 0;
			this->label14->Text = L"DESTINATION";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(52, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 46);
			this->label5->TabIndex = 2;
			this->label5->Text = L"DESTINATION";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->label10);
			this->groupBox5->Controls->Add(this->button1);
			this->groupBox5->Controls->Add(this->date);
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Location = System::Drawing::Point(651, 175);
			this->groupBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox5->Size = System::Drawing::Size(296, 281);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm::groupBox5_Enter);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(156, 84);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 46);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Time";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(21, 84);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(140, 46);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Date And";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(71, 210);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 33);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// date
			// 
			this->date->FormattingEnabled = true;
			this->date->Location = System::Drawing::Point(19, 145);
			this->date->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->date->Name = L"date";
			this->date->Size = System::Drawing::Size(200, 24);
			this->date->TabIndex = 4;
			this->date->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::date_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(279, 46);
			this->label3->TabIndex = 3;
			this->label3->Text = L"AVAILABLE FLIGHTS";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox6->Controls->Add(this->button7);
			this->groupBox6->Controls->Add(this->button2);
			this->groupBox6->Controls->Add(this->textBox5);
			this->groupBox6->Controls->Add(this->label21);
			this->groupBox6->Controls->Add(this->label20);
			this->groupBox6->Controls->Add(this->label19);
			this->groupBox6->Controls->Add(this->textBox4);
			this->groupBox6->Controls->Add(this->textBox3);
			this->groupBox6->Controls->Add(this->label22);
			this->groupBox6->Controls->Add(this->textBox1);
			this->groupBox6->Location = System::Drawing::Point(953, 175);
			this->groupBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox6->Size = System::Drawing::Size(579, 641);
			this->groupBox6->TabIndex = 4;
			this->groupBox6->TabStop = false;
			this->groupBox6->Enter += gcnew System::EventHandler(this, &MyForm::groupBox6_Enter);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(102, 469);
			this->button7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(417, 57);
			this->button7->TabIndex = 21;
			this->button7->Text = L"Admin login";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(222, 304);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 57);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Confirm booking";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->HideSelection = false;
			this->textBox5->Location = System::Drawing::Point(24, 249);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(409, 22);
			this->textBox5->TabIndex = 20;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(16, 195);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(399, 46);
			this->label21->TabIndex = 19;
			this->label21->Text = L"Enter Your Credit Card Num";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(223, 6);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(46, 46);
			this->label20->TabIndex = 18;
			this->label20->Text = L"To";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(6, 6);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(88, 46);
			this->label19->TabIndex = 17;
			this->label19->Text = L"From";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(14, 84);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 58);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(222, 84);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 58);
			this->textBox3->TabIndex = 15;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(390, 6);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(75, 46);
			this->label22->TabIndex = 14;
			this->label22->Text = L"Fare";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(398, 84);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 58);
			this->textBox1->TabIndex = 13;
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox7->Controls->Add(this->label18);
			this->groupBox7->Controls->Add(this->label17);
			this->groupBox7->Controls->Add(this->label16);
			this->groupBox7->Controls->Add(this->label15);
			this->groupBox7->Controls->Add(this->richTextBox5);
			this->groupBox7->Controls->Add(this->label6);
			this->groupBox7->Controls->Add(this->richTextBox4);
			this->groupBox7->Controls->Add(this->richTextBox3);
			this->groupBox7->Controls->Add(this->richTextBox2);
			this->groupBox7->Controls->Add(this->richTextBox1);
			this->groupBox7->Controls->Add(this->label4);
			this->groupBox7->Location = System::Drawing::Point(15, 462);
			this->groupBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox7->Size = System::Drawing::Size(544, 354);
			this->groupBox7->TabIndex = 5;
			this->groupBox7->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(271, 126);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(52, 25);
			this->label18->TabIndex = 12;
			this->label18->Text = L"PP#";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(8, 125);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(50, 25);
			this->label17->TabIndex = 11;
			this->label17->Text = L"Ph#";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(271, 55);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(115, 25);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Last Name";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(8, 59);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(116, 25);
			this->label15->TabIndex = 9;
			this->label15->Text = L"First Name";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(144, 245);
			this->richTextBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ReadOnly = true;
			this->richTextBox5->Size = System::Drawing::Size(235, 42);
			this->richTextBox5->TabIndex = 7;
			this->richTextBox5->Text = L"ID#";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(115, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(287, 46);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Unique ID Generated\r\n";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(276, 152);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(232, 42);
			this->richTextBox4->TabIndex = 5;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(13, 152);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(235, 42);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(276, 82);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(232, 42);
			this->richTextBox2->TabIndex = 3;
			this->richTextBox2->Text = L"";
			this->richTextBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(13, 86);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(235, 42);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(5, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(325, 46);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Enter Your Details Here";
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox8->Controls->Add(this->textBox12);
			this->groupBox8->Controls->Add(this->label31);
			this->groupBox8->Controls->Add(this->label30);
			this->groupBox8->Controls->Add(this->label29);
			this->groupBox8->Controls->Add(this->label28);
			this->groupBox8->Controls->Add(this->label27);
			this->groupBox8->Controls->Add(this->label26);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Controls->Add(this->textBox11);
			this->groupBox8->Controls->Add(this->textBox10);
			this->groupBox8->Controls->Add(this->textBox9);
			this->groupBox8->Controls->Add(this->textBox8);
			this->groupBox8->Controls->Add(this->textBox7);
			this->groupBox8->Controls->Add(this->textBox6);
			this->groupBox8->Controls->Add(this->button3);
			this->groupBox8->Controls->Add(this->richTextBox7);
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Location = System::Drawing::Point(563, 462);
			this->groupBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox8->Size = System::Drawing::Size(385, 354);
			this->groupBox8->TabIndex = 7;
			this->groupBox8->TabStop = false;
			this->groupBox8->Enter += gcnew System::EventHandler(this, &MyForm::groupBox8_Enter);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(81, 277);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(259, 42);
			this->textBox12->TabIndex = 30;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(1, 274);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(74, 25);
			this->label31->TabIndex = 29;
			this->label31->Text = L"Status";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(235, 208);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(38, 25);
			this->label30->TabIndex = 28;
			this->label30->Text = L"To";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(112, 208);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(50, 25);
			this->label29->TabIndex = 27;
			this->label29->Text = L"Ph#";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(2, 207);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(52, 25);
			this->label28->TabIndex = 26;
			this->label28->Text = L"PP#";
			this->label28->Click += gcnew System::EventHandler(this, &MyForm::label28_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(235, 152);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(61, 25);
			this->label27->TabIndex = 25;
			this->label27->Text = L"From";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(112, 152);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(86, 25);
			this->label26->TabIndex = 24;
			this->label26->Text = L"L.Name";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(2, 154);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 25);
			this->label9->TabIndex = 23;
			this->label9->Text = L"F.Name";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(240, 235);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(100, 22);
			this->textBox11->TabIndex = 22;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(240, 182);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 21;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(2, 235);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 20;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(117, 235);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 19;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(117, 182);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(2, 182);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 22);
			this->textBox6->TabIndex = 17;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(252, 108);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 33);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Submit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// richTextBox7
			// 
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox7->Location = System::Drawing::Point(6, 108);
			this->richTextBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(232, 42);
			this->richTextBox7->TabIndex = 10;
			this->richTextBox7->Text = L"";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 64);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(155, 46);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Enter PP#";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(5, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(317, 46);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Check Your Status Here";
			// 
			// groupBox10
			// 
			this->groupBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"groupBox10.BackgroundImage")));
			this->groupBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->groupBox10->Controls->Add(this->groupBox12);
			this->groupBox10->Controls->Add(this->label35);
			this->groupBox10->Controls->Add(this->button8);
			this->groupBox10->Location = System::Drawing::Point(0, 0);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(961, 823);
			this->groupBox10->TabIndex = 8;
			this->groupBox10->TabStop = false;
			this->groupBox10->Enter += gcnew System::EventHandler(this, &MyForm::groupBox10_Enter);
			// 
			// groupBox12
			// 
			this->groupBox12->BackColor = System::Drawing::SystemColors::Highlight;
			this->groupBox12->Location = System::Drawing::Point(6, 256);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(22, 287);
			this->groupBox12->TabIndex = 6;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"S N H A I R L I N E S";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label35->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::Snow;
			this->label35->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"label35.Image")));
			this->label35->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->label35->Location = System::Drawing::Point(4, 9);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(330, 46);
			this->label35->TabIndex = 7;
			this->label35->Text = L"SnH Air Lines Pvt.Ltd";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkTurquoise;
			this->button8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Snow;
			this->button8->Location = System::Drawing::Point(197, 651);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(595, 76);
			this->button8->TabIndex = 6;
			this->button8->Text = L"Book Your Ticket Now.";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// groupBox11
			// 
			this->groupBox11->BackColor = System::Drawing::Color::DarkTurquoise;
			this->groupBox11->Controls->Add(this->button6);
			this->groupBox11->Controls->Add(this->textBox14);
			this->groupBox11->Controls->Add(this->label34);
			this->groupBox11->Controls->Add(this->label33);
			this->groupBox11->Controls->Add(this->label32);
			this->groupBox11->Controls->Add(this->textBox13);
			this->groupBox11->Location = System::Drawing::Point(953, 0);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(601, 823);
			this->groupBox11->TabIndex = 0;
			this->groupBox11->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::GhostWhite;
			this->button6->Location = System::Drawing::Point(211, 361);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(202, 76);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Login";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(26, 259);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(535, 22);
			this->textBox14->TabIndex = 4;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(18, 213);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(150, 46);
			this->label34->TabIndex = 3;
			this->label34->Text = L"Password";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(18, 122);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(172, 46);
			this->label33->TabIndex = 2;
			this->label33->Text = L"User Name";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 22.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(202, 30);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(197, 46);
			this->label32->TabIndex = 1;
			this->label32->Text = L"Admin Login";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(26, 175);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(535, 22);
			this->textBox13->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1536, 822);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"SnH ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox5_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^pp=(richTextBox7->Text);
			 msclr::interop::marshal_context context;
			 string ppp=context.marshal_as<string>(pp);
			 int n=stoi(ppp);
			 p=h.retrivequadratic(n);
			 String^o;
			 o=gcnew String((p.first).c_str());
			 textBox6->Text=o;
			 o=gcnew String((p.last).c_str());
			 textBox7->Text=o;
			 o=gcnew String((p.phone).c_str());
			 textBox8->Text=o;
			 textBox9->Text=pp;
			 //o=gcnew String((p.id).c_str());
			 //textBox7->Text=o;
			 o=gcnew String((p.from).c_str());
			 textBox10->Text=o;
			 o=gcnew String((p.to).c_str());
			 textBox11->Text=o;
			 bool is=g.is_avail(p.from,p.to);
			 if(is){
				 textBox12->Text="your flight is confirmed";
			 }
			 else{
				textBox12->Text="your flight has been cancelled or delayed";
			 }
		 }
private: System::Void groupBox6_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 comboBox2->Items->Clear();
			 msclr::interop::marshal_context context;
			 String^ from=curr_city->Text;
			 string from1=context.marshal_as<string>(from);
			 stack available=g.available_flights(from1);
			 
			 int count=0;
			 while(!available.is_empty()){
				 count++;
				 z=available.pop();
				 from1=z->pt_vertex->city;
				 from=gcnew String(from1.c_str());
				 comboBox2->Items->Add(from);
			 }
			 if(count==0)
			 comboBox2->Items->Add("NO FLIGHT AVAILABLE");
			 
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void date_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 date->Items->Clear();
			String^ from=curr_city->Text;
			String^ to=comboBox2->Text;
			msclr::interop::marshal_context context;
			string from1=context.marshal_as<string>(from);
			string to1=context.marshal_as<string>(to);
			l=g.return_timing(from1,to1);
			date_time=l.returning_Head();
			node*temp=date_time;
			String^mont;
			String^ye;
			String^da;
			String^ ti;
			if(temp->next==NULL){
				mont=temp->month.ToString();
				ye=temp->year.ToString();
				da=temp->date.ToString();
				ti=gcnew String(temp->time.c_str());
				String^comp_date=da+"/"+mont+"/"+ye+" "+ti;
				//comboBox1->Items->Add(comp_date);
				date->Items->Add(comp_date);
			}
			while(temp->next!=NULL){
				//temp=date_time->date;
				mont=temp->month.ToString();
				ye=temp->year.ToString();
				da=temp->date.ToString();
				ti=gcnew String(temp->time.c_str());
				String^comp_date=da+"/"+mont+"/"+ye+" "+ti;
				//comboBox1->Items->Add(comp_date);
				date->Items->Add(comp_date);
				temp=temp->next;
			}
			
		 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			textBox4->Text=curr_city->Text;
			textBox3->Text=comboBox2->Text;
			msclr::interop::marshal_context context;
			string name=context.marshal_as<string>(richTextBox1->Text);
			string lastname=context.marshal_as<string>(richTextBox2->Text);
			string phonenumber=context.marshal_as<string>(richTextBox3->Text);
			string passport=context.marshal_as<string>(richTextBox4->Text);
			string id=context.marshal_as<string>(richTextBox5->Text);
			string from=context.marshal_as<string>(curr_city->Text);
			string to=context.marshal_as<string>(comboBox2->Text);
			string credit_c=context.marshal_as<string>(textBox5->Text);
			srand(time(0));
			int min = 100000;
			int max = 200000;
			int num = (min + (rand() % (int)(max - min + 1)));
		
			ifstream op;
			op.open("passengers.txt");
			string e1,g2, b,c,d,x,u;
			int z;
			int chk=0;
			while(!op.eof())
			{
				op>>e1>>g2>>b>>c>>d>>x>>z>>u;
				if(x==passport)
				{chk=1;
					MessageBox::Show("Error ::Id has been already created");
		}
			}
			op.close();
			if(chk==0){
			 ofstream out;
			 out.open("passengers.txt",ios::app);
			 if(out.is_open()){
				 out <<from <<" "<<to<<" "<<name << " "<<lastname<<" "<<phonenumber<<" "<<passport<<" "<< num <<" "<< credit_c <<endl;
				 out.close();
			 }
			
			string a = to_string(num);
			richTextBox5->Text=context.marshal_as<String^>(a);
			MessageBox::Show("Id has been created");
		}
			
		 }
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context context;
			 string from=context.marshal_as<string>(curr_city->Text);
			 string to=context.marshal_as<string>(comboBox2->Text);
			 int fare=g.return_fare(from,to);
			 textBox1->Text=fare.ToString();
		 }



private: System::Void curr_city_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 
			}
private: System::Void textBox2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(e->KeyValue==13){
				 curr_city->Items->Clear();
				msclr::interop::marshal_context context;
				string st=context.marshal_as<string>(textBox2->Text);
				String^ z;
				int n=prefix(t,st);
				while(!q.is_empty()){
				string s=q.Dequeue();
				z=gcnew String(s.c_str());
				curr_city->Items->Add(z);
			 }
			 }
		 }
private: System::Void curr_city_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 
		 }
private: System::Void label28_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox8_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox13->Text=="admin" && textBox14->Text=="admin")
			 {
				 MyForm1 f;
				f.ShowDialog();
			 }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			ifstream vertecs;
			string cities;
			String ^c;
			string from,to,time;
			int fare,date,month,year;
			comboBox2->Items->Add("NO FLIGHT AVAILABLE");
			vertecs.open("verteces.txt");
			if(vertecs.is_open()){
				while(!vertecs.eof()){
				getline(vertecs,cities); 
				g.ADD_city(cities);
				count3++;
				c=gcnew String(cities.c_str());
				//curr_city->Items->Add(c);
				insert(t,cities);
				}
				vertecs.close();
			}
			vertecs.open("edges.txt");
			if(vertecs.is_open()){
				while(!vertecs.eof()){
					vertecs>>from>>to>>fare>>date>>month>>year>>time;
					g.ADD_vertex(from,to,fare,date,month,year,time);
				}
				vertecs.close();
			}
			ifstream pasenger;
			string first_name,last_name,f,t1;
			string phn_no,cc;
				int pp=0,id=0;
			pasenger.open("passengers.txt");
			int i=0;
			while(!pasenger.eof())
			{
				getline(pasenger,f);
					i++;
			}
			pasenger.close();
			pasenger.open("passengers.txt");
			int j=0;
			if(pasenger.is_open()){
				while(j<i)
				{
					pasenger>>f>>t1>>first_name>>last_name;
					pasenger>>phn_no>>pp>>id>>cc;
					pass p1;
					p1.first=first_name;
					p1.last=last_name;
					p1.from=f;
					p1.to=t1;
					p1.id=id;
					p1.phone=phn_no;
					p1.passport=pp;
					p1.cc=cc;
					h.insertqudratic(p1);
					j++;
				}
				pasenger.close();
			}
			this->groupBox10->Hide();
			this->groupBox11->Hide();
		 }
private: System::Void button7_Click_1(System::Object^  sender, System::EventArgs^  e) {
			this->groupBox10->Show();
			this->groupBox11->Show();
			ifstream vertecs;
			string cities;
			String ^c;
			string from,to,time;
			int fare,date,month,year;
			comboBox2->Items->Add("NO FLIGHT AVAILABLE");
			vertecs.open("verteces.txt");
			if(vertecs.is_open()){
				while(!vertecs.eof()){
				getline(vertecs,cities); 
				g.ADD_city(cities);
				count3++;
				c=gcnew String(cities.c_str());
				//curr_city->Items->Add(c);
				insert(t,cities);
				}
				vertecs.close();
			}
			vertecs.open("edges.txt");
			if(vertecs.is_open()){
				while(!vertecs.eof()){
					vertecs>>from>>to>>fare>>date>>month>>year>>time;
					g.ADD_vertex(from,to,fare,date,month,year,time);
				}
				vertecs.close();
			}
			ifstream pasenger;
			string first_name,last_name,f,t1;
			string phn_no,cc;
				int pp=0,id=0;
			pasenger.open("passengers.txt");
			int i=0;
			while(!pasenger.eof())
			{
				getline(pasenger,f);
					i++;
			}
			pasenger.close();
			pasenger.open("passengers.txt");
			int j=0;
			if(pasenger.is_open()){
				while(j<i)
				{
					pasenger>>f>>t1>>first_name>>last_name;
					pasenger>>phn_no>>pp>>id>>cc;
					pass p1;
					p1.first=first_name;
					p1.last=last_name;
					p1.from=f;
					p1.to=t1;
					p1.id=id;
					p1.phone=phn_no;
					p1.passport=pp;
					p1.cc=cc;
					h.insertqudratic(p1);
					j++;
				}
				pasenger.close();
			}
			 
			 
		 }
private: System::Void groupBox10_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}











































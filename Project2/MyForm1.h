#pragma once
#include "graphs.h"

#include <msclr\marshal_cppstd.h>
#include <fstream>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		
		MyForm1(void)
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
		~MyForm1()
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
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::GroupBox^  groupBox8;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::RichTextBox^  add_flight_to;

	private: System::Windows::Forms::RichTextBox^  add_flight_from;
	private: System::Windows::Forms::RichTextBox^  dd;



	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::RichTextBox^  cancel_flight_dest;

	private: System::Windows::Forms::RichTextBox^  cancel_flight_curr;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RichTextBox^  richTextBox4;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox5;
	private: System::Windows::Forms::RichTextBox^  richTextBox6;
	private: System::Windows::Forms::RichTextBox^  richTextBox7;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::GroupBox^  groupBox13;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::RichTextBox^  richTextBox8;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::GroupBox^  groupBox15;
	private: System::Windows::Forms::RichTextBox^  richTextBox9;
	private: System::Windows::Forms::Label^  label19;


	private: System::ComponentModel::IContainer^  components;

	private:

		/// <summary>
		/// Required designer variable.
		/// </summary>
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->add_flight_to = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->add_flight_from = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->dd = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->cancel_flight_dest = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->cancel_flight_curr = (gcnew System::Windows::Forms::RichTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->groupBox10);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1018, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox1_Enter);
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox10->Controls->Add(this->button3);
			this->groupBox10->Location = System::Drawing::Point(563, 12);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(449, 82);
			this->groupBox10->TabIndex = 3;
			this->groupBox10->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(150, 25);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 33);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Edit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 48, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(499, 84);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Welcome to Editor";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox2->Controls->Add(this->add_flight_to);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Location = System::Drawing::Point(178, 206);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(175, 184);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox2_Enter);
			// 
			// add_flight_to
			// 
			this->add_flight_to->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->add_flight_to->Location = System::Drawing::Point(6, 102);
			this->add_flight_to->Name = L"add_flight_to";
			this->add_flight_to->Size = System::Drawing::Size(163, 42);
			this->add_flight_to->TabIndex = 9;
			this->add_flight_to->Text = L"";
			this->add_flight_to->TextChanged += gcnew System::EventHandler(this, &MyForm1::add_flight_to_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(175, 46);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Destination";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Location = System::Drawing::Point(524, 118);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(506, 82);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(160, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(195, 46);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cancel Flight";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox4->Controls->Add(this->groupBox13);
			this->groupBox4->Controls->Add(this->add_flight_from);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(12, 206);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(160, 184);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox4_Enter);
			// 
			// add_flight_from
			// 
			this->add_flight_from->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->add_flight_from->Location = System::Drawing::Point(6, 102);
			this->add_flight_from->Name = L"add_flight_from";
			this->add_flight_from->Size = System::Drawing::Size(148, 42);
			this->add_flight_from->TabIndex = 9;
			this->add_flight_from->Text = L"";
			this->add_flight_from->TextChanged += gcnew System::EventHandler(this, &MyForm1::add_flight_from_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(13, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 46);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Departure";
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Location = System::Drawing::Point(12, 117);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(506, 83);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(164, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 46);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Add Flight";
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox6->Controls->Add(this->label13);
			this->groupBox6->Controls->Add(this->label12);
			this->groupBox6->Controls->Add(this->label11);
			this->groupBox6->Controls->Add(this->label8);
			this->groupBox6->Controls->Add(this->richTextBox4);
			this->groupBox6->Controls->Add(this->richTextBox2);
			this->groupBox6->Controls->Add(this->richTextBox1);
			this->groupBox6->Controls->Add(this->dd);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Location = System::Drawing::Point(359, 206);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(159, 184);
			this->groupBox6->TabIndex = 5;
			this->groupBox6->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(123, 53);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 46);
			this->label13->TabIndex = 16;
			this->label13->Text = L"t";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(82, 53);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(35, 46);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Y";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(35, 53);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 46);
			this->label11->TabIndex = 14;
			this->label11->Text = L"m";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(6, 53);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 46);
			this->label8->TabIndex = 13;
			this->label8->Text = L"d";
			// 
			// richTextBox4
			// 
			this->richTextBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox4->Location = System::Drawing::Point(123, 102);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(30, 33);
			this->richTextBox4->TabIndex = 12;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(82, 102);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(35, 33);
			this->richTextBox2->TabIndex = 11;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(43, 102);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(33, 33);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// dd
			// 
			this->dd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dd->Location = System::Drawing::Point(6, 102);
			this->dd->Name = L"dd";
			this->dd->Size = System::Drawing::Size(31, 33);
			this->dd->TabIndex = 9;
			this->dd->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 46);
			this->label6->TabIndex = 3;
			this->label6->Text = L"date &Time";
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox7->Controls->Add(this->cancel_flight_dest);
			this->groupBox7->Controls->Add(this->label10);
			this->groupBox7->Location = System::Drawing::Point(689, 206);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(171, 184);
			this->groupBox7->TabIndex = 6;
			this->groupBox7->TabStop = false;
			// 
			// cancel_flight_dest
			// 
			this->cancel_flight_dest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cancel_flight_dest->Location = System::Drawing::Point(6, 102);
			this->cancel_flight_dest->Name = L"cancel_flight_dest";
			this->cancel_flight_dest->Size = System::Drawing::Size(163, 42);
			this->cancel_flight_dest->TabIndex = 10;
			this->cancel_flight_dest->Text = L"";
			this->cancel_flight_dest->TextChanged += gcnew System::EventHandler(this, &MyForm1::richTextBox4_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(2, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(175, 46);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Destination";
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox8->Controls->Add(this->cancel_flight_curr);
			this->groupBox8->Controls->Add(this->label7);
			this->groupBox8->Location = System::Drawing::Point(524, 206);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(161, 184);
			this->groupBox8->TabIndex = 7;
			this->groupBox8->TabStop = false;
			// 
			// cancel_flight_curr
			// 
			this->cancel_flight_curr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cancel_flight_curr->Location = System::Drawing::Point(11, 102);
			this->cancel_flight_curr->Name = L"cancel_flight_curr";
			this->cancel_flight_curr->Size = System::Drawing::Size(148, 42);
			this->cancel_flight_curr->TabIndex = 10;
			this->cancel_flight_curr->Text = L"";
			this->cancel_flight_curr->TextChanged += gcnew System::EventHandler(this, &MyForm1::richTextBox5_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(141, 46);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Departure";
			// 
			// groupBox11
			// 
			this->groupBox11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox11->Controls->Add(this->button2);
			this->groupBox11->Location = System::Drawing::Point(12, 462);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(506, 112);
			this->groupBox11->TabIndex = 10;
			this->groupBox11->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(179, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 33);
			this->button2->TabIndex = 9;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// groupBox12
			// 
			this->groupBox12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox12->Controls->Add(this->button1);
			this->groupBox12->Location = System::Drawing::Point(524, 462);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(506, 112);
			this->groupBox12->TabIndex = 11;
			this->groupBox12->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(179, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 33);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Edit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox9->Controls->Add(this->label9);
			this->groupBox9->Controls->Add(this->label14);
			this->groupBox9->Controls->Add(this->label15);
			this->groupBox9->Controls->Add(this->label16);
			this->groupBox9->Controls->Add(this->richTextBox3);
			this->groupBox9->Controls->Add(this->richTextBox5);
			this->groupBox9->Controls->Add(this->richTextBox6);
			this->groupBox9->Controls->Add(this->richTextBox7);
			this->groupBox9->Controls->Add(this->label17);
			this->groupBox9->Location = System::Drawing::Point(864, 206);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(166, 184);
			this->groupBox9->TabIndex = 12;
			this->groupBox9->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(123, 53);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 46);
			this->label9->TabIndex = 16;
			this->label9->Text = L"t";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(82, 53);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(35, 46);
			this->label14->TabIndex = 15;
			this->label14->Text = L"Y";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(35, 53);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(44, 46);
			this->label15->TabIndex = 14;
			this->label15->Text = L"m";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(6, 53);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 46);
			this->label16->TabIndex = 13;
			this->label16->Text = L"d";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(123, 102);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(30, 33);
			this->richTextBox3->TabIndex = 12;
			this->richTextBox3->Text = L"";
			// 
			// richTextBox5
			// 
			this->richTextBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox5->Location = System::Drawing::Point(82, 102);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->Size = System::Drawing::Size(35, 33);
			this->richTextBox5->TabIndex = 11;
			this->richTextBox5->Text = L"";
			// 
			// richTextBox6
			// 
			this->richTextBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox6->Location = System::Drawing::Point(43, 102);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(33, 33);
			this->richTextBox6->TabIndex = 10;
			this->richTextBox6->Text = L"";
			// 
			// richTextBox7
			// 
			this->richTextBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox7->Location = System::Drawing::Point(6, 102);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(31, 33);
			this->richTextBox7->TabIndex = 9;
			this->richTextBox7->Text = L"";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(11, 18);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(142, 46);
			this->label17->TabIndex = 3;
			this->label17->Text = L"date &Time";
			// 
			// groupBox13
			// 
			this->groupBox13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox13->Controls->Add(this->button4);
			this->groupBox13->Location = System::Drawing::Point(142, 190);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(506, 60);
			this->groupBox13->TabIndex = 17;
			this->groupBox13->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(179, 40);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 33);
			this->button4->TabIndex = 9;
			this->button4->Text = L"ADD";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// groupBox14
			// 
			this->groupBox14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox14->Controls->Add(this->richTextBox8);
			this->groupBox14->Controls->Add(this->label18);
			this->groupBox14->Location = System::Drawing::Point(12, 396);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(506, 60);
			this->groupBox14->TabIndex = 13;
			this->groupBox14->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(6, 11);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(75, 46);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Fare";
			// 
			// richTextBox8
			// 
			this->richTextBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox8->Location = System::Drawing::Point(87, 11);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->Size = System::Drawing::Size(148, 42);
			this->richTextBox8->TabIndex = 10;
			this->richTextBox8->Text = L"";
			// 
			// groupBox15
			// 
			this->groupBox15->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox15->Controls->Add(this->richTextBox9);
			this->groupBox15->Controls->Add(this->label19);
			this->groupBox15->Location = System::Drawing::Point(524, 393);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(506, 60);
			this->groupBox15->TabIndex = 14;
			this->groupBox15->TabStop = false;
			// 
			// richTextBox9
			// 
			this->richTextBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox9->Location = System::Drawing::Point(87, 11);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->Size = System::Drawing::Size(148, 42);
			this->richTextBox9->TabIndex = 10;
			this->richTextBox9->Text = L"";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Mistral", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(6, 11);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(75, 46);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Fare";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1051, 586);
			this->Controls->Add(this->groupBox15);
			this->Controls->Add(this->groupBox14);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox12);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox12->ResumeLayout(false);
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox9_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context context;
			 string from=context.marshal_as<string>(add_flight_from->Text);
			 string to=context.marshal_as<string>(add_flight_to->Text);
			 string d=context.marshal_as<string>(dd->Text);
			 string m=context.marshal_as<string>(richTextBox1->Text);
			 string y=context.marshal_as<string>(richTextBox2->Text);
			 string t=context.marshal_as<string>(richTextBox4->Text);
			 string fare=context.marshal_as<string>(richTextBox8->Text);
			 ofstream vertecs_out;
			 ifstream vertecs_in;
			 string s;
			 int count1=0,count2=0;
			 vertecs_in.open("verteces.txt");
			 if(vertecs_in.is_open()){
				 while (!vertecs_in.eof())
				 {
					 vertecs_in>>s;
					 if(s==from){
						 count1++;
					 }
					 if(s==to){
						count2++;
					 }
				 }
				 vertecs_in.close();
			 }
			 if(count1==0 || count2==0){
				 vertecs_out.open("verteces.txt",ios::app);
				 if(count1==0){
					 vertecs_out<<from<<endl;
				 }
				 else{
					 vertecs_out<<to<<endl;
				 }
				 vertecs_out.close();
			 }
			 ofstream edges;
			 edges.open("edges.txt",ios::app);
			 if(edges.is_open()){
				 edges<<from<<" "<<to<<" "<<fare<<" "<<d<<" "<<m<<" "<<y<<" "<<t<<endl;
			 }
			 edges.close();
		 }
private: System::Void add_flight_to_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void add_flight_from_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void richTextBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context context;
			 string from=context.marshal_as<string>(cancel_flight_curr->Text);
			 string to=context.marshal_as<string>(cancel_flight_dest->Text);
			 string d=context.marshal_as<string>(richTextBox7->Text);
			 string m=context.marshal_as<string>(richTextBox6->Text);
			 string y=context.marshal_as<string>(richTextBox5->Text);
			 string t=context.marshal_as<string>(richTextBox3->Text);
			 string fare=context.marshal_as<string>(richTextBox9->Text);
			 string compare=from+" "+to+" "+fare+" "+d+" "+m+" "+y+" "+t;
			 string one,two;
			 ifstream edge;
			 edge.open("edges.txt");
			 if(edge.is_open()){
				while(!edge.eof()){
					getline(edge,one);
					if(one!=compare){
						two+=one;
						two+="\n";
					}
				}
				edge.close();
			 }
			 ofstream edge_write;
			 edge_write.open("edges.txt");
			 if(edge_write.is_open()){
				edge_write<<two;
			 }
			edge_write.close();
		 }
};
}

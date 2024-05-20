#pragma once
#include <fstream>
#include <string>
#include "Account.h"
#include <msclr/marshal_cppstd.h>
#include <Windows.h>
#include <gdiplus.h>
#include "graph.h"
#include <cstdlib>
#include <shellapi.h>
#include <msclr/marshal_cppstd.h>
using namespace msclr::interop;
#pragma comment(lib,"Gdiplus.lib")
graph g(0);
Account acc;

namespace wslny {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

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
			acc.put(g.adj_list);
			if (components)
			{
				delete components;
			}
			
		}
	private: System::Windows::Forms::Panel^ panel1;
	
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker2;
	private: System::Windows::Forms::Panel^ panel2;
		   
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Panel^ panel11;

	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Button^ button9;


	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel14;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label19;



	private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Label^ label25;


private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox3;




	private: System::ComponentModel::IContainer^ components;



























	protected:

	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->backgroundWorker2 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(188, 130);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel1->Size = System::Drawing::Size(840, 441);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button2->CausesValidation = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(134, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Sign in";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Location = System::Drawing::Point(46, 245);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(337, 61);
			this->panel4->TabIndex = 6;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(9, 19);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(328, 19);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"Password";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &MyForm::textBox2_Click);
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(46, 156);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(337, 61);
			this->panel3->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(9, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 19);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Username";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->Click += gcnew System::EventHandler(this, &MyForm::textBox1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label3->Location = System::Drawing::Point(124, 82);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(174, 60);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Sign in";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(450, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(390, 441);
			this->panel2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->CausesValidation = false;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button1->Location = System::Drawing::Point(131, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 47);
			this->button1->TabIndex = 3;
			this->button1->Text = L" Sign Up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 274);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 20);
			this->label2->TabIndex = 2;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(54, 254);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Easiest way to find your way";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-173, -34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(774, 459);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// backgroundWorker2
			// 
			this->backgroundWorker2->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm::backgroundWorker2_DoWork);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button3);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Controls->Add(this->panel7);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->panel8);
			this->panel5->Location = System::Drawing::Point(191, 130);
			this->panel5->Name = L"panel5";
			this->panel5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel5->Size = System::Drawing::Size(840, 441);
			this->panel5->TabIndex = 7;
			this->panel5->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button3->CausesValidation = false;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(134, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 47);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Register";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel6->Controls->Add(this->textBox3);
			this->panel6->Location = System::Drawing::Point(46, 245);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(337, 61);
			this->panel6->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(9, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(328, 19);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"Password";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->Click += gcnew System::EventHandler(this, &MyForm::textBox3_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Controls->Add(this->textBox4);
			this->panel7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel7->Location = System::Drawing::Point(46, 156);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(337, 61);
			this->panel7->TabIndex = 5;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(9, 20);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(328, 19);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Username";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox4->Click += gcnew System::EventHandler(this, &MyForm::textBox4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label4->Location = System::Drawing::Point(110, 82);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(206, 60);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Register";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel8->Controls->Add(this->button4);
			this->panel8->Controls->Add(this->pictureBox2);
			this->panel8->Controls->Add(this->label5);
			this->panel8->Controls->Add(this->label6);
			this->panel8->Location = System::Drawing::Point(450, 0);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(390, 441);
			this->panel8->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->CausesValidation = false;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(128)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(102, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(211, 67);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Already have an account";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(-173, -34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(774, 459);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 20);
			this->label5->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(54, 254);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(323, 29);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Easiest way to find your way";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel9->Controls->Add(this->panel12);
			this->panel9->Controls->Add(this->panel13);
			this->panel9->Controls->Add(this->panel10);
			this->panel9->Controls->Add(this->label23);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1224, 681);
			this->panel9->TabIndex = 8;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel9_Paint_1);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel12->Controls->Add(this->pictureBox7);
			this->panel12->Controls->Add(this->pictureBox6);
			this->panel12->Controls->Add(this->label25);
			this->panel12->Location = System::Drawing::Point(0, 0);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(1224, 681);
			this->panel12->TabIndex = 1;
			this->panel12->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel12_Paint);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(683, 288);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(348, 161);
			this->pictureBox7->TabIndex = 3;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(149, 286);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(286, 170);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 2;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(128, 82);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(959, 121);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Choose a graph type";
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->panel13->Controls->Add(this->panel14);
			this->panel13->Controls->Add(this->button10);
			this->panel13->Controls->Add(this->label11);
			this->panel13->Controls->Add(this->label10);
			this->panel13->Controls->Add(this->label9);
			this->panel13->Controls->Add(this->textBox7);
			this->panel13->Controls->Add(this->textBox6);
			this->panel13->Controls->Add(this->textBox5);
			this->panel13->Controls->Add(this->label8);
			this->panel13->Controls->Add(this->label7);
			this->panel13->Controls->Add(this->pictureBox10);
			this->panel13->Location = System::Drawing::Point(185, 122);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(1038, 558);
			this->panel13->TabIndex = 4;
			this->panel13->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel13_Paint);
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->panel15);
			this->panel14->Controls->Add(this->pictureBox5);
			this->panel14->Controls->Add(this->label16);
			this->panel14->Controls->Add(this->label15);
			this->panel14->Controls->Add(this->label14);
			this->panel14->Controls->Add(this->button11);
			this->panel14->Controls->Add(this->label13);
			this->panel14->Controls->Add(this->textBox9);
			this->panel14->Controls->Add(this->label12);
			this->panel14->Controls->Add(this->textBox8);
			this->panel14->Controls->Add(this->label24);
			this->panel14->Location = System::Drawing::Point(2, 0);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1037, 559);
			this->panel14->TabIndex = 11;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->panel16);
			this->panel15->Controls->Add(this->button13);
			this->panel15->Controls->Add(this->button12);
			this->panel15->Location = System::Drawing::Point(-2, 0);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(1039, 556);
			this->panel15->TabIndex = 9;
			// 
			// panel16
			// 
			this->panel16->Controls->Add(this->panel17);
			this->panel16->Controls->Add(this->button14);
			this->panel16->Controls->Add(this->label17);
			this->panel16->Controls->Add(this->textBox10);
			this->panel16->Controls->Add(this->pictureBox9);
			this->panel16->Location = System::Drawing::Point(0, 209);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(1036, 346);
			this->panel16->TabIndex = 2;
			// 
			// panel17
			// 
			this->panel17->Controls->Add(this->pictureBox8);
			this->panel17->Controls->Add(this->button15);
			this->panel17->Controls->Add(this->label19);
			this->panel17->Controls->Add(this->label18);
			this->panel17->Controls->Add(this->textBox12);
			this->panel17->Controls->Add(this->textBox11);
			this->panel17->Location = System::Drawing::Point(3, 0);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1036, 350);
			this->panel17->TabIndex = 3;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(716, 119);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(250, 56);
			this->pictureBox8->TabIndex = 14;
			this->pictureBox8->TabStop = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(293, 253);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(207, 61);
			this->button15->TabIndex = 6;
			this->button15->Text = L"Delete";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label19->Location = System::Drawing::Point(144, 186);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(42, 32);
			this->label19->TabIndex = 5;
			this->label19->Text = L"To";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label18->Location = System::Drawing::Point(113, 87);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(73, 32);
			this->label18->TabIndex = 4;
			this->label18->Text = L"From";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(192, 174);
			this->textBox12->Multiline = true;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(448, 47);
			this->textBox12->TabIndex = 4;
			this->textBox12->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox12_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(192, 75);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(448, 47);
			this->textBox11->TabIndex = 3;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(296, 189);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(207, 61);
			this->button14->TabIndex = 2;
			this->button14->Text = L"Delete ";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label17->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label17->Location = System::Drawing::Point(116, 93);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 32);
			this->label17->TabIndex = 1;
			this->label17->Text = L"City";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(192, 84);
			this->textBox10->Multiline = true;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(448, 47);
			this->textBox10->TabIndex = 0;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(708, 85);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(238, 47);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 15;
			this->pictureBox9->TabStop = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(654, 105);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(207, 61);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Delete road";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(116, 105);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(207, 61);
			this->button12->TabIndex = 0;
			this->button12->Text = L"Delete city";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(304, 181);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(732, 371);
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label16->Location = System::Drawing::Point(8, 265);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 20);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Bfs:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label15->Location = System::Drawing::Point(8, 229);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(57, 20);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Floyd:";
			this->label15->Click += gcnew System::EventHandler(this, &MyForm::label15_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label14->Location = System::Drawing::Point(8, 164);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 20);
			this->label14->TabIndex = 5;
			this->label14->Text = L"Dijkstra:";
			// 
			// button11
			// 
			this->button11->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button11->Location = System::Drawing::Point(390, 102);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(170, 49);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Display";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label13->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label13->Location = System::Drawing::Point(486, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(143, 30);
			this->label13->TabIndex = 3;
			this->label13->Text = L"Destination";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(637, 25);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(274, 47);
			this->textBox9->TabIndex = 2;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label12->Location = System::Drawing::Point(12, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 30);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Source";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(125, 25);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(274, 47);
			this->textBox8->TabIndex = 0;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label24->Location = System::Drawing::Point(8, 197);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(78, 20);
			this->label24->TabIndex = 10;
			this->label24->Text = L"Bellman:";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(318, 370);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(117, 45);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Add";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label11->Location = System::Drawing::Point(159, 272);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 30);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Cost";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label10->Location = System::Drawing::Point(170, 173);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(40, 30);
			this->label10->TabIndex = 8;
			this->label10->Text = L"To";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Adobe Gothic Std B", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->label9->Location = System::Drawing::Point(170, 71);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 30);
			this->label9->TabIndex = 7;
			this->label9->Text = L"From";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(254, 262);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(250, 50);
			this->textBox7->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(256, 164);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(250, 50);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(253, 62);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(250, 50);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(215, 153);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L" ";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(220, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 20);
			this->label7->TabIndex = 2;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(672, 166);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(241, 50);
			this->pictureBox10->TabIndex = 13;
			this->pictureBox10->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel10->Controls->Add(this->button9);
			this->panel10->Controls->Add(this->button6);
			this->panel10->Controls->Add(this->button5);
			this->panel10->Controls->Add(this->panel11);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel10->Location = System::Drawing::Point(0, 0);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(185, 681);
			this->panel10->TabIndex = 0;
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Top;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button9->Location = System::Drawing::Point(0, 288);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(185, 83);
			this->button9->TabIndex = 5;
			this->button9->Text = L"Delete";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button6
			// 
			this->button6->Dock = System::Windows::Forms::DockStyle::Top;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button6->Location = System::Drawing::Point(0, 205);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(185, 83);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Shortest path";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button5->Location = System::Drawing::Point(0, 122);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(185, 83);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Add";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->panel11->Controls->Add(this->pictureBox4);
			this->panel11->Controls->Add(this->pictureBox3);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(0, 0);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(185, 122);
			this->panel11->TabIndex = 0;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(42, 52);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(157, 77);
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(49, 46);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Berlin Sans FB Demi", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(478, 20);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(238, 73);
			this->label23->TabIndex = 0;
			this->label23->Text = L"label23";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AccessibleRole = System::Windows::Forms::AccessibleRole::Sound;
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1224, 681);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(5);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in -Wslny";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::otherclick);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			pictureBox9->Visible = false;
			pictureBox10->Visible = false;
			pictureBox8->Visible = false;
			panel13->Visible = false;
			panel15->Visible = false;
			panel16->Visible = false;
			panel17->Visible = false;
			panel14->Visible = false;
			panel9->Visible = false;
			panel12->Visible = false;
			pictureBox6->Visible = false;
			pictureBox7->Visible = false;
		}
#pragma endregion
		
		
	
  
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void otherclick(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
	}
	if (textBox4->Text == "") {
		textBox4->Text = "Username";
	}

	if (textBox2->Text == "") {
		textBox2->Text = "Password";
	}
	if (textBox3->Text == "") {
		textBox3->Text = "Password";
	}
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Username") {
		textBox1->Text = "";
	}
	if (textBox2->Text == "") {
		textBox2->Text = "Password";
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Password") {
		textBox2->Text = "";
	}
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
	}	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->BringToFront();
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Password") {
		textBox2->Text = "";
	}
	if (textBox1->Text == "") {
		textBox1->Text = "Username";
	}
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	panel5->SendToBack();
}



private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string name;
	std::string pass;
	if (textBox1->Text == ""  || textBox1->Text == "Username") {
		MessageBox::Show("Please enter a valid username.");
	}
	else if (textBox2->Text == "" ) {
		MessageBox::Show("Please enter a valid password.");
	}
	else {
		 name = marshal_as<std::string>(textBox1->Text);
		pass = marshal_as<std::string>(textBox2->Text);
		bool Validation = acc.login(name, pass);
		if (Validation == 0) {
			MessageBox::Show("Invalid username or password.");
		}
		else {
			name = marshal_as<std::string>(textBox1->Text);
			pass = marshal_as<std::string>(textBox2->Text);
			bool x = acc.gtype;
		
			g.graph_set(acc.getgraph(name,pass,x), x);
			System::Threading::Thread::Sleep(500);
			panel9->Visible = true;
			button5->PerformClick();
		}
	}

}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == "" || textBox4->Text == "Username") {
		MessageBox::Show("Please enter a valid username.");
	}
	else if (textBox3->Text == "") {
		MessageBox::Show("Please enter a valid password.");
	}
	else {
		
		System::Threading::Thread::Sleep(500);
		button4->PerformClick();
		panel12->Visible = true;
		pictureBox6->Visible = true;
		pictureBox7->Visible = true;
		panel9->Visible = true;
		button5->PerformClick();
	}
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == "Username") {
		textBox4->Text = "";
	}
	if (textBox3->Text == "") {
		textBox3->Text = "Password";
	}
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox3->Text == "Password") {
		textBox3->Text = "";
	}
	if (textBox4->Text == "") {
		textBox4->Text = "Username";
	}
}


private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void backgroundWorker2_DoWork(System::Object^ sender, System::ComponentModel::DoWorkEventArgs^ e) {
}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
		static_cast<System::Int32>(static_cast<System::Byte>(50)));
}

private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   void uncheckbuttons(Button^ myButton) {
		   array<Button^, 1>^ buttonArray = gcnew array<Button^, 1>(3);
		   buttonArray[0] = button5;
		   buttonArray[1] = button6;
		   buttonArray[2] = button9;
		   for (int i = 0; i < 3; i++) {
			   if (buttonArray[i] == myButton)
				   continue;
			   buttonArray[i]->BackColor= System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				   static_cast<System::Int32>(static_cast<System::Byte>(30)));
			   buttonArray[i]->ForeColor= System::Drawing::Color::White;

		   }
		 
		 

	}
	 
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// uncheck every button
	uncheckbuttons(button5);
	//check
	button5->BackColor= System::Drawing::Color::White;
	button5->ForeColor=System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
		static_cast<System::Int32>(static_cast<System::Byte>(30)));
	panel13->Visible = true;
	panel15->Visible = false;
	panel16->Visible = false;
	panel17->Visible = false;
	panel14->Visible = false;
	pictureBox8->Visible = false;
	pictureBox9->Visible = false;
	label14->Text = "Dijkstra:";
	label15->Text = "Floyd:";
	label16->Text = "Bfs:";
	label24->Text = "Bellman:";
	label23->Text = "Add a path";
	pictureBox5->Image = nullptr;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	// uncheck every button
	uncheckbuttons(button6);
	//check
	button6->BackColor = System::Drawing::Color::White;
	button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
		static_cast<System::Int32>(static_cast<System::Byte>(30)));
	panel15->Visible = false;
	panel16->Visible = false;
	panel17->Visible = false;
	panel14->Visible = true;
	pictureBox10->Visible = false;

	pictureBox8->Visible = false;
	pictureBox9->Visible = false;
	label24->Visible = true;
	label14->Text = "Dijkstra:";
	label15->Text = "Floyd:";
	label16->Text = "Bfs:";
	label24->Text = "Bellman:";
	label23->Text = "Display path";
}


private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	// uncheck every button
	uncheckbuttons(button9);
	//uncheck every panel
	panel14->Visible = true;
	label2-> Visible = false;
	panel15->Visible = true;
	pictureBox8->Visible = false;
	label14->Text = "Dijkstra:";
	label15->Text = "Floyd:";
	label16->Text = "Bfs:";
	label24->Text = "Bellman:";
	label24->Visible = false;
	label23->Text = "Display objects";
	pictureBox5->Image = nullptr;
	

	//check
	button9->BackColor = System::Drawing::Color::White;
	button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
		static_cast<System::Int32>(static_cast<System::Byte>(30)));
}
private: System::Void panel12_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel9->Visible = false;
}
private: System::Void pictureBox4_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	

	
}
private: System::Void panel9_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
	   
private: System::Void panel13_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ text = textBox5->Text;
	std::string str = marshal_as<std::string>(text);
	String^ text2 = textBox6->Text;
	std::string str2 = marshal_as<std::string>(text2);
	String^ text3 = textBox7->Text;
	int num = System::Int32::Parse(text3);

	g.addDir(str,str2,num);
	pictureBox10->Visible = true;
	pictureBox10->Image = pictureBox10->Image;



}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox8->Visible = false;

}
private: System::Void textBox12_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox8->Visible = false;

}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	panel16->Visible = true;
	panel17->Visible = true;
	pictureBox8->Visible = false;
	pictureBox9->Visible = false;


}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	panel17->Visible = false;
	panel16->Visible = true;
	pictureBox9->Visible = false;
	pictureBox8->Visible = false;

}





private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	g.counter++;
	pictureBox5->Image = nullptr;
	
	String^ text = textBox8->Text;
	std::string str = marshal_as<std::string>(text);
	String^ text2 = textBox9->Text;
	std::string str2 = marshal_as<std::string>(text2);
	int result1 = g.bfs(str, str2);
	int result2 = g.dijkstra(str,str2,g.counter);
	int result3 = g.floyd_warshall(str, str2,g.adj_list.size());
	int result4 = g.Bellman_Ford(str, str2);
	String^ resultstr1 = "Bfs: Shortest number of roads are " + result1.ToString();
	label16->Text = resultstr1;
	if (result2 == -1) {
		String^ resultstr1 = "Dijkstra: There is no path.";
		label14->Text = resultstr1;
	}
	else {
		String^ resultstr1 = "Dijkstra: Minimum cost are " + result2.ToString();
		label14->Text = resultstr1;
	}
	String^ resultstr4 = "Floyd: Minimum cost are " + result3.ToString();
	label15->Text = resultstr4;
	
	String^ resultstr5 = "Bellman: Minimum cost are " + result4.ToString();
	label24->Text = resultstr5;
	std::string Myname = "graph_image";
	if (result2 == -1)
		return;
	else{
		
	Myname += std::to_string(g.counter);
	Myname += ".png";
	
	std::string imagePath = Myname;
	// Run the Python script to generate a new image file

	STARTUPINFOA si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;

	LPSTR cmdline = "python gra.py";

	if (!CreateProcessA(NULL, cmdline, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi))
	{
		std::cerr << "Error: CreateProcess failed (" << GetLastError() << ")" << std::endl;
		return;
	}

	// Wait for the Python script to finish running
	WaitForSingleObject(pi.hProcess, INFINITE);

	// Close the process and thread handles
	CloseHandle(pi.hProcess);
	CloseHandle(pi.hThread);

	// Load the new image file into the PictureBox control
	System::Drawing::Image^ image = System::Drawing::Image::FromFile(gcnew System::String(imagePath.c_str()));
	pictureBox5->Image = image;
	}


}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	pictureBox10->Visible = false;
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	pictureBox10->Visible = false;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox8->Visible = true;
	pictureBox8->Image=pictureBox8->Image;
	String^ text = textBox11->Text;
	std::string str = marshal_as<std::string>(text);
	String^ text2 = textBox12->Text;
	std::string str2 = marshal_as<std::string>(text2);
	g.delete_road(str, str2);	

}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox9->Visible = true;
	pictureBox9->Image = pictureBox9->Image;
	String^ text = textBox10->Text;
	std::string str = marshal_as<std::string>(text);
	g.delete_city(str);
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	pictureBox9->Visible = false;

}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel12->Visible = false;
	g.DIR(1);
	std::string name = marshal_as<std::string>(textBox4->Text);
	std::string pass = marshal_as<std::string>(textBox3->Text);
	acc.registerUser(name, pass,1);
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel12->Visible = false;
	g.DIR(0);
	std::string name = marshal_as<std::string>(textBox4->Text);
	std::string pass = marshal_as<std::string>(textBox3->Text);
	acc.registerUser(name, pass, 0);
}
private: System::Void panel18_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel12->Visible = false;
	g.DIR(0);
	std::string name = marshal_as<std::string>(textBox4->Text);
	std::string pass = marshal_as<std::string>(textBox3->Text);
	acc.registerUser(name, pass, 0);
}

};

}

#pragma once
#include <vector>
#include <time.h>
#include <Windows.h>
#include "Dibujar.h"
//#include "Enemigo.h"
#include "Personaje.h"
#include "Mision.h"
#include "Cnpc.h"
#include "Item.h"
#include "MegaItem.h"
#include "Mapa.h"
#include "Jefe.h"
#include "ArrEnemigos.h"
#include "CargaTodo.h"
#include "ArrItems.h"
namespace juego_final {

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
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  buttonvida;
	private: System::Windows::Forms::Button^  buttonenergia;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  buttonene1;
	private: System::Windows::Forms::Button^  buttonene3;
	private: System::Windows::Forms::Button^  buttonene2;
	private: System::Windows::Forms::Button^  buttonene4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::ListBox^  listBox7;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		CDibujar *objdibu;
		CEnemigo *objene;
		CPersonaje *objper;
		CJefe *objChief;
		ArrEnemigos *objArrEne;
		CMapa *objmapa;
		CPersonaje *jugador;
		Bitmap^ imgEnemigos;
		CMision *unaMision;
		CItem *unItem;
		CCargaTodo *objCargar;
		CArrItems *VecItems;
		ArbolAVL<CMision*> *ArbolitoJarcor;
		System::Drawing::Font^ drawFont;
		SolidBrush^ drawBrush;

	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::ImageList^  imageList1;
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
	private: System::Windows::Forms::PictureBox^  pictureBox7;
			 //CMision *prueba;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->buttonvida = (gcnew System::Windows::Forms::Button());
			this->buttonenergia = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->buttonene1 = (gcnew System::Windows::Forms::Button());
			this->buttonene3 = (gcnew System::Windows::Forms::Button());
			this->buttonene2 = (gcnew System::Windows::Forms::Button());
			this->buttonene4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(59, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1250, 400);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1021, 436);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"vida:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1011, 463);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ataque:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1006, 496);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"defensa:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1009, 523);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"energia:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1019, 410);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"level:";
			// 
			// buttonvida
			// 
			this->buttonvida->Location = System::Drawing::Point(1009, 555);
			this->buttonvida->Name = L"buttonvida";
			this->buttonvida->Size = System::Drawing::Size(50, 50);
			this->buttonvida->TabIndex = 7;
			this->buttonvida->UseVisualStyleBackColor = true;
			// 
			// buttonenergia
			// 
			this->buttonenergia->Location = System::Drawing::Point(1065, 555);
			this->buttonenergia->Name = L"buttonenergia";
			this->buttonenergia->Size = System::Drawing::Size(50, 50);
			this->buttonenergia->TabIndex = 8;
			this->buttonenergia->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1009, 555);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1065, 555);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(1058, 410);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 17);
			this->listBox1->TabIndex = 11;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(1058, 436);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(120, 17);
			this->listBox2->TabIndex = 12;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(1058, 463);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(120, 17);
			this->listBox3->TabIndex = 13;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(1058, 496);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(120, 17);
			this->listBox4->TabIndex = 14;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(1058, 523);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(120, 17);
			this->listBox5->TabIndex = 15;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(20, 430);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 56);
			this->button1->TabIndex = 16;
			this->button1->Text = L"atacar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(20, 510);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(256, 56);
			this->button2->TabIndex = 17;
			this->button2->Text = L"descansar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(20, 580);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button3->Size = System::Drawing::Size(256, 23);
			this->button3->TabIndex = 18;
			this->button3->Text = L"guardar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// buttonene1
			// 
			this->buttonene1->Location = System::Drawing::Point(390, 420);
			this->buttonene1->Name = L"buttonene1";
			this->buttonene1->Size = System::Drawing::Size(50, 50);
			this->buttonene1->TabIndex = 19;
			this->buttonene1->UseVisualStyleBackColor = true;
			this->buttonene1->Visible = false;
			// 
			// buttonene3
			// 
			this->buttonene3->Location = System::Drawing::Point(390, 550);
			this->buttonene3->Name = L"buttonene3";
			this->buttonene3->Size = System::Drawing::Size(50, 50);
			this->buttonene3->TabIndex = 20;
			this->buttonene3->UseVisualStyleBackColor = true;
			this->buttonene3->Visible = false;
			// 
			// buttonene2
			// 
			this->buttonene2->Location = System::Drawing::Point(760, 420);
			this->buttonene2->Name = L"buttonene2";
			this->buttonene2->Size = System::Drawing::Size(50, 50);
			this->buttonene2->TabIndex = 21;
			this->buttonene2->UseVisualStyleBackColor = true;
			this->buttonene2->Visible = false;
			// 
			// buttonene4
			// 
			this->buttonene4->Location = System::Drawing::Point(760, 550);
			this->buttonene4->Name = L"buttonene4";
			this->buttonene4->Size = System::Drawing::Size(50, 50);
			this->buttonene4->TabIndex = 22;
			this->buttonene4->UseVisualStyleBackColor = true;
			this->buttonene4->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(426, 115);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(450, 100);
			this->pictureBox5->TabIndex = 23;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(886, 115);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(150, 100);
			this->pictureBox6->TabIndex = 24;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 180;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(1009, 612);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(50, 17);
			this->listBox6->TabIndex = 25;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(1065, 611);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(50, 17);
			this->listBox7->TabIndex = 26;
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(24, 238);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1256, 73);
			this->pictureBox7->TabIndex = 27;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"mapa1.png");
			this->imageList1->Images->SetKeyName(1, L"mapa2.png");
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::NavajoWhite;
			this->button4->Location = System::Drawing::Point(161, 106);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 28;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(327, 106);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 50);
			this->button5->TabIndex = 29;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(501, 106);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 50);
			this->button6->TabIndex = 30;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(683, 106);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 50);
			this->button7->TabIndex = 31;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(848, 106);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 50);
			this->button8->TabIndex = 32;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(1004, 106);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 33;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1184, 106);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 34;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(161, 294);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 50);
			this->button11->TabIndex = 35;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(327, 294);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 50);
			this->button12->TabIndex = 36;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(483, 294);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 50);
			this->button13->TabIndex = 37;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(683, 294);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 50);
			this->button14->TabIndex = 38;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Visible = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(848, 294);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(50, 50);
			this->button15->TabIndex = 39;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(1012, 294);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(50, 50);
			this->button16->TabIndex = 40;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(1184, 294);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 50);
			this->button17->TabIndex = 41;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Visible = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1292, 732);
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
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->buttonene4);
			this->Controls->Add(this->buttonene2);
			this->Controls->Add(this->buttonene3);
			this->Controls->Add(this->buttonene1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->buttonenergia);
			this->Controls->Add(this->buttonvida);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"UPC_Nightmare";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::movimiento);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::parar);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int indice = 0;
		int botn = 0;
		int posx = 1209;
		int posy = 12 + 75 + 51;
		int dx = 0;
		int dy = 0;
		int cont = 0;
		int contdecont = 0;
		System::Drawing::Rectangle esprait;
		System::Drawing::Rectangle zona2;
		int semilla_maestra;
		int controlar_IL;
		int decision_enemigo;
		float PuntX, PuntY;
		int dominio_mundial;
		int validacion_global;

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//CPersonaje objpersonaje;
		Graphics^ g = this->CreateGraphics();
		objmapa = new CMapa();
		CEnemigo objEnemigo;
		objper = new CPersonaje();
		objArrEne = new ArrEnemigos();
		unItem = new CItem();
		unaMision = new CMision();
		objCargar = new CCargaTodo();
		VecItems = new CArrItems();
		
		drawFont = gcnew System::Drawing::Font("RF Brushed", 16);
		drawBrush = gcnew SolidBrush(Color::DarkSlateGray);
	/*	button4->ForeColor = Color::Transparent;
		button4->BackColor = Color::Transparent;*/
	
		listBox1->Items->Add(objper->getnivel());
		listBox2->Items->Add(objper->getvida());
		listBox3->Items->Add(objper->getataque());
		listBox4->Items->Add(objper->getdefensa());
		listBox5->Items->Add(objper->getenergia());
		listBox6->Items->Add(objper->getpocionvida());
		listBox7->Items->Add(objper->getpocionenergia());
		//this->Size = SystemInformation()
		KeyPreview = true;
		//delete imgTransparente;
		
		zona2 = System::Drawing::Rectangle(59, 12, 1250, 400);
		esprait = System::Drawing::Rectangle(0, 0, 50, 50);
		srand(time_t(NULL));
		semilla_maestra = rand() % 20000;

		VecItems->setItem(objCargar->CargarItems(semilla_maestra));

		imgEnemigos = gcnew Bitmap(pictureBox7->Image);
		imgEnemigos->MakeTransparent(imgEnemigos->GetPixel(1, 1));

		for (int i = 0; i < 14; i++){
			objEnemigo.generar_enemigo(objmapa->getx(), objmapa->gety(), i, objmapa->getminimo(), objmapa->getmaximo(), semilla_maestra);
			objArrEne->AgregarEnemigo(objEnemigo);
			semilla_maestra++;
		}
		jugador = new CPersonaje();

//		ArbolitoJarcor = objCargar->CargarMisiones(semilla_maestra);
		/*controlar_IL = 0;
		pictureBox1->Image = imageList1->Images[controlar_IL];*/

		dominio_mundial = -1;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		CDibujar objdibu1;
		CDibujar *objdibu2;
		Graphics^G = this->CreateGraphics();
		int Gancho = (int)G->VisibleClipBounds.Width;
		int Glargo = (int)G->VisibleClipBounds.Height;
		Bitmap^ imgTransparente = gcnew Bitmap(pictureBox5->Image);
		Bitmap^ img = gcnew Bitmap(pictureBox1->Image);

		imgTransparente->MakeTransparent(imgTransparente->GetPixel(1, 1));

		BufferedGraphicsContext^Espacio = BufferedGraphicsManager::Current;////Comentar esta Linea Para Solo Garphics
		Espacio->MaximumBuffer = System::Drawing::Size(Gancho + 1, Glargo + 1);
		
		BufferedGraphics^Buffer = Espacio->Allocate(G, zona2);////Comentar esta Linea Para Solo Garphics

		//G->DrawImage(img, 356, 397, esprait, GraphicsUnit::Pixel);
		objdibu1.PintarMapa(img, Buffer->Graphics, 0);
		objdibu2->pintarenemigos(imgEnemigos, Buffer->Graphics, objArrEne);
		

		posx = posx + dx;
		posy = posy + dy;

		objdibu1.pintar(imgTransparente, Buffer->Graphics, posx, posy, indice, botn);
		
		indice++;
		if (indice == 9){
			indice = 0;
		}
		timer1->Enabled = false;
		Buffer->Render(G);////Comentar esta Linea Para Solo Garphics
		delete imgTransparente;
		delete Buffer;////Comentar esta Linea Para Solo Garphics
		delete Espacio;////Comentar esta Linea Para Solo Garphics
		delete G;

	}


	private: System::Void movimiento(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		CEnemigo objEnemigo;
		switch (e->KeyCode){
		case Keys::A:
			if (posx > 109){
				timer1->Enabled = true;
				botn = 0;
				dx = -50;
				dy = 0;
			}
			else{
				if (objmapa->getx()>0 && posy<237 && posy>12 + 175){
					posx = 750;
					semilla_maestra++;
					objmapa->cruzandopuerta(-1, 0, objArrEne, objEnemigo, objmapa, semilla_maestra);
					semilla_maestra += 14;
				}
			}
			break;

		case Keys::W:
			if (posy > 87){
				timer1->Enabled = true;
				botn = 0;
				dy = -50;
				dx = 0;

			}
			else{
				if (objmapa->gety()>0 && posx<675 && posx>575){
					posy = 312;
					semilla_maestra += 14;
					objmapa->cruzandopuerta(0, -1, objArrEne, objEnemigo, objmapa, semilla_maestra);

				}
			}

			break;
		case Keys::D:
			if (posx < 1209){
				timer1->Enabled = true;
				botn = 1;
				dx = 50;
				dy = 0;
			}
			else{
				if (objmapa->getx()<40 && posy<12 + 75 + 150 && posy>12 + 175){
					posx = 400;
					semilla_maestra += 14;
					objmapa->cruzandopuerta(1, 0, objArrEne, objEnemigo, objmapa, semilla_maestra);
				}
			}
			break;
		case Keys::S:
			if (posy < 312){
				timer1->Enabled = true;
				botn = 1;
				dy = 50;
				dx = 0;
			}
			else{
				if (objmapa->gety()<40 && posx<675 && posx>575){
					posy = 87;
					semilla_maestra += 14;
					objmapa->cruzandopuerta(0, 1, objArrEne, objEnemigo, objmapa, semilla_maestra);
				}
			}
			break;
		case Keys::F:
			button1->PerformClick();
			break;
		default:
			break;
		}

		

	}
	private: System::Void parar(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		timer1->Enabled = false;
		timer2->Enabled = false;
		CDibujar objdibu1;
		CDibujar *objdibu2;
		Graphics^G = this->CreateGraphics();
		BufferedGraphicsContext^Espacio = BufferedGraphicsManager::Current;////Comentar esta Linea Para Solo Garphics
		BufferedGraphics^Buffer = Espacio->Allocate(G, zona2);////Comentar esta Linea Para Solo Garphics
		
		Bitmap^ imgTransparente = gcnew Bitmap(pictureBox6->Image);
		Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
		//objdibu1.PintarMapa(img, Buffer->Graphics, 0);
		/*imgTransparente->MakeTransparent(imgTransparente->GetPixel(5, 5));
		imgTransparente->MakeTransparent(imgTransparente->GetPixel(2, 2));
		imgTransparente->MakeTransparent(imgTransparente->GetPixel(3, 3));
		imgTransparente->MakeTransparent(imgTransparente->GetPixel(4, 4));*/
		
		objdibu1.PintarMapa(img, Buffer->Graphics, 0);

		objdibu2->pintarenemigos(imgEnemigos, Buffer->Graphics, objArrEne);
		if (botn == 0) {
			objdibu1.pintar(imgTransparente, Buffer->Graphics, posx, posy, 0, 1);
		}
		if (botn == 1) {
			objdibu1.pintar(imgTransparente, Buffer->Graphics, posx, posy, 0, 0);
		}
		
		Buffer->Render(G);////Comentar esta Linea Para Solo Garphics
		delete imgTransparente;
		delete Buffer;////Comentar esta Linea Para Solo Garphics
		delete Espacio;////Comentar esta Linea Para Solo Garphics
		delete G;
	}
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Graphics ^d = this->CreateGraphics();
		timer1->Enabled = false;
		timer2->Enabled = true;
		bool validar = false;
		switch (dominio_mundial)
		{
		case 1:
			objper->Atacar(objArrEne, 0, 161, 100,validar);
			objArrEne->getEnemigo(0).Es_Atacado(objper->getataque());
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(161, 100);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = 1;
			}
			break;
		case 2:
			objper->Atacar(objArrEne, 1, 327, 106,validar);
			objArrEne->getEnemigo(1).Es_Atacado(objper->getataque());
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(327, 106);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 3:
			objper->Atacar(objArrEne, 2, 501, 106, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(501, 106);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 4:
			objper->Atacar(objArrEne, 3, 683, 106, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(683, 106);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 5:
			objper->Atacar(objArrEne, 4, 848, 106, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(848, 106);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 6:
			objper->Atacar(objArrEne, 5, 1004, 106, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(1004, 106);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 7:
			objper->Atacar(objArrEne, 6, 1184, 106, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(1184, 106);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 8:
			objper->Atacar(objArrEne, 7, 161, 294, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(161, 294);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 9:
			objper->Atacar(objArrEne, 8, 327, 294, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(327, 294);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 10:
			objper->Atacar(objArrEne, 9, 483, 294, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(483, 294);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 11:
			objper->Atacar(objArrEne, 10, 683, 294, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(683, 294);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 12:
			objper->Atacar(objArrEne, 11, 848, 294, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(848, 294);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 13:
			objper->Atacar(objArrEne, 12, 1012, 294, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(1012, 294);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		case 14:
			objper->Atacar(objArrEne, 13, 1184, 294, validar);
			if (validar == true){
				String ^dano = ("-" + Convert::ToString(objper->getataque()));
				PointF posicion = PointF(1184, 294);
				d->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(100);
				delete d;
				validar = false;
				dominio_mundial = -1;
			}
			break;
		default:
			break;
		}

	}*/
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		if (dominio_mundial != -1){
			CDibujar objdibu1;
			CDibujar *objdibu2;
			Graphics^G = this->CreateGraphics();
			BufferedGraphicsContext^Espacio = BufferedGraphicsManager::Current;////Comentar esta Linea Para Solo Garphics
			BufferedGraphics^Buffer = Espacio->Allocate(G, zona2);////Comentar esta Linea Para Solo Garphics
			Bitmap^ img = gcnew Bitmap(pictureBox1->Image);
			objdibu1.PintarMapa(img, Buffer->Graphics, 0);
			Bitmap^ imgTransparente = gcnew Bitmap(pictureBox6->Image);
			//imgTransparente->MakeTransparent(imgTransparente->GetPixel(1, 1));


			objdibu2->pintarenemigos(imgEnemigos, Buffer->Graphics, objArrEne);


			if (cont == 0) {
				if (botn == 0) {
					objdibu1.pintar(imgTransparente, Buffer->Graphics, posx, posy, 0, 1);
				}
				if (botn == 1) {
					objdibu1.pintar(imgTransparente, Buffer->Graphics, posx, posy, 0, 0);
				}
				if (contdecont == 1) {
					timer2->Enabled = false;
				}
				contdecont++;
			}
			if (timer2->Enabled == true) {
				if (cont == 1) {
					if (botn == 0) {
						objdibu1.pintar(imgTransparente, Buffer->Graphics, posx, posy, 1, 1);
						objdibu1.pintar(imgTransparente, Buffer->Graphics, posx - 50, posy, 2, 1);
					}
					if (botn == 1) {
						objdibu1.pintar(imgTransparente, Buffer->Graphics, posx, posy, 1, 0);
						objdibu1.pintar(imgTransparente, Buffer->Graphics, posx + 50, posy, 2, 0);
					}

				}


				cont++;
				if (cont == 2) {
					cont = 0;
				}
			}
			else {
				cont = 0; contdecont = 0;
			}

			Buffer->Render(G);////Comentar esta Linea Para Solo Garphics
			delete imgTransparente;
			delete Buffer;////Comentar esta Linea Para Solo Garphics
			delete Espacio;////Comentar esta Linea Para Solo Garphics
			delete G;
		}
		
	}
	
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	Graphics^ g = this->CreateGraphics();
	listBox1->Items->Clear();
	listBox2->Items->Clear();
	listBox3->Items->Clear();
	listBox4->Items->Clear();
	listBox5->Items->Clear();
	listBox6->Items->Clear();
	listBox7->Items->Clear();
	
	listBox1->Items->Add(objper->getnivel());
	listBox2->Items->Add(objper->getvida());
	listBox3->Items->Add(objper->getataque());
	listBox4->Items->Add(objper->getdefensa());
	listBox5->Items->Add(objper->getenergia());
	listBox6->Items->Add(objper->getpocionvida());
	listBox7->Items->Add(objper->getpocionenergia());
	for (int i = 0; i <= 13; i++){
		if (objArrEne->getEnemigo(i).getmuerto() == false){
			
			if (objArrEne->getEnemigo(i).ColisionRango(posx,posy)==true){
				objper->atacado(objArrEne->getEnemigo(i).atacar());
				String ^dano = ("-" + Convert::ToString(objArrEne->getEnemigo(i).atacar()));
				PointF posicion = PointF(posx, posy);
				g->DrawString(dano, drawFont, drawBrush, posicion);
				Sleep(200);
				delete g;
			}
		}
	}


}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Graphics ^d = this->CreateGraphics();
			timer1->Enabled = false;
				timer2->Enabled = true;
				bool validar = false;

				for (int i = 0; i < 14; i++) {
					if ((((PuntX > 145 + (175 * (objArrEne->getEnemigo(i).getpos()))) && (PuntX <= 201 + (175 * (objArrEne->getEnemigo(i).getpos())))) || (PuntX > 149 + (175 * ((objArrEne->getEnemigo(i).getpos()) - 7)) && PuntX <= 201 + (175 * ((objArrEne->getEnemigo(i).getpos()) - 7))) && (PuntY == 100 || PuntY == 300))) {
						validar = true;
						objper->Atacar(objArrEne, i, posx, posy, validar);
						objArrEne->getEnemigo(i).Es_Atacado(objper->getataque());
						String ^dano = ("-" + Convert::ToString(objper->getataque()));
						PointF posi = PointF(PuntX, PuntY);
						d->DrawString(dano, drawFont, drawBrush, posi);
						//Sleep(100);
						delete d;
						break;
					}
				}
				validacion_global = validar;

		}
 private: System::Void click(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 PuntX = e->X;
			 //MessageBox::Show(Convert::ToString(PuntX));

			 PuntY = e->Y;
 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 1;

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 2;
}

private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 3;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 4;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 5;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 6;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 7;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 8;
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 9;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 10;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 11;
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 12;
	MessageBox::Show("ola ke ase");
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 13;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	dominio_mundial = 14;
}
};
}

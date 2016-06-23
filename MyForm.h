#pragma once
#include <vector>
#include <time.h>
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
	private: System::Windows::Forms::PictureBox^  pictureBox2;
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
		CEnemigo *objEnemigo;
		CJefe *objChief;
		ArrEnemigos *objArrEne;
		CMapa *objmapa;
		
	private: System::Windows::Forms::Timer^  timer3;
			 CMision *prueba;
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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->pictureBox1->Location = System::Drawing::Point(13, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1238, 378);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(356, 397);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(620, 445);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
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
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1300, 740);
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
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"UPC_Nightmare";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::movimiento);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::parar);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int indice = 0;
		int botn = 0;
		int posx = 400;
		int posy = 400;
		int dx = 0;
		int dy = 0;
		int cont = 0;
		int contdecont = 0;
		Rectangle esprait;
		Rectangle zona2;
		

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		//CPersonaje objpersonaje;
		Graphics^ g = this->CreateGraphics();
		objmapa = new CMapa();
		objEnemigo = new CEnemigo();
		objper = new CPersonaje();
		objArrEne = new ArrEnemigos();
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
		zona2 = Rectangle(356,397 , 620, 445);
		esprait = Rectangle(0, 0, 50, 50);

		srand(time_t(NULL));
		int semilla_maestra = rand() % 20000;
		for (int i = 0; i < 14; i++){
			objEnemigo->generar_enemigo(objmapa->getx(), objmapa->gety(), i, objmapa, semilla_maestra);
			objArrEne->AgregarEnemigo(objEnemigo);
		}
		
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		CDibujar objdibu1;
		Graphics^G = this->CreateGraphics();
		int Gancho = (int)G->VisibleClipBounds.Width;
		int Glargo = (int)G->VisibleClipBounds.Height;
		Bitmap^ imgTransparente = gcnew Bitmap(pictureBox5->Image);
		Bitmap^ img = gcnew Bitmap(pictureBox2->Image);

		imgTransparente->MakeTransparent(imgTransparente->GetPixel(1, 1));

		BufferedGraphicsContext^Espacio = BufferedGraphicsManager::Current;////Comentar esta Linea Para Solo Garphics
		Espacio->MaximumBuffer = System::Drawing::Size(Gancho + 1, Glargo + 1);
		
		BufferedGraphics^Buffer = Espacio->Allocate(G, zona2);////Comentar esta Linea Para Solo Garphics

		//G->DrawImage(img, 356, 397, esprait, GraphicsUnit::Pixel);
		objdibu1.PintarMapa(img, Buffer->Graphics, 0);
		

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
		
		switch (e->KeyCode){
		case Keys::A:
			if (posx > 400){
				timer1->Enabled = true;
				botn = 0;
				dx = -10;
				dy = 0;
			}
			break;

		case Keys::W:
				if (posy > 500){
					timer1->Enabled = true;
					botn = 0;
					dy = -10;
					dx = 0;

				}
		
			break;
		case Keys::D:
			if (posx < 750){
				timer1->Enabled = true;
				botn = 1;
				dx = 10;
				dy = 0;
			}
			break;
		case Keys::S:
			if (posy < 650){
				timer1->Enabled = true;
				botn = 1;
				dy = 10;
				dx = 0;
			}
			break;
		default:
			break;
		}
		
	}
	private: System::Void parar(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		timer1->Enabled = false;
		timer2->Enabled = false;
		CDibujar objdibu1;
		
		Graphics^G = this->CreateGraphics();
		BufferedGraphicsContext^Espacio = BufferedGraphicsManager::Current;////Comentar esta Linea Para Solo Garphics
		BufferedGraphics^Buffer = Espacio->Allocate(G, zona2);////Comentar esta Linea Para Solo Garphics
		
		Bitmap^ imgTransparente = gcnew Bitmap(pictureBox6->Image);
		Bitmap^ img = gcnew Bitmap(pictureBox2->Image);
		objdibu1.PintarMapa(img, Buffer->Graphics, 0);
		/*imgTransparente->MakeTransparent(imgTransparente->GetPixel(5, 5));
		imgTransparente->MakeTransparent(imgTransparente->GetPixel(2, 2));
		imgTransparente->MakeTransparent(imgTransparente->GetPixel(3, 3));
		imgTransparente->MakeTransparent(imgTransparente->GetPixel(4, 4));*/
		
		objdibu1.PintarMapa(img, Buffer->Graphics, 0);
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
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Enabled = false;
		timer2->Enabled = true;
		/*Graphics^F = this->CreateGraphics();
		BufferedGraphicsContext^Espacio = BufferedGraphicsManager::Current;////Comentar esta Linea Para Solo Garphics
		BufferedGraphics^Buffer = Espacio->Allocate(F, this->ClientRectangle);////Comentar esta Linea Para Solo Garphics
		
		Bitmap^ imgTransparente = gcnew Bitmap(pictureBox7->Image);
		Rectangle dibujo = Rectangle(0, 0, pictureBox7->Width, pictureBox7->Height);
		Buffer->Graphics->DrawImage(imgTransparente, 0, 0, dibujo, GraphicsUnit::Pixel);
		Buffer->Render(F);
		//delete imgTransparente;
		delete Buffer;
		delete Espacio;
		delete F;*/
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		CDibujar objdibu1;

		Graphics^G = this->CreateGraphics();
		BufferedGraphicsContext^Espacio = BufferedGraphicsManager::Current;////Comentar esta Linea Para Solo Garphics
		BufferedGraphics^Buffer = Espacio->Allocate(G, zona2);////Comentar esta Linea Para Solo Garphics
		Bitmap^ img = gcnew Bitmap(pictureBox2->Image);
		objdibu1.PintarMapa(img, Buffer->Graphics, 0);
		Bitmap^ imgTransparente = gcnew Bitmap(pictureBox6->Image);
		//imgTransparente->MakeTransparent(imgTransparente->GetPixel(1, 1));
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
	
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {

}
};
}

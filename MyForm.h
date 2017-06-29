#pragma once
#include "Analizador.h"
#include <msclr/marshal_cppstd.h>

namespace CalculadoraFinal {

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
	private: 
		CAnalizador *oAnalizador = new CAnalizador();
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
	private: System::Windows::Forms::TextBox^  txtBox;
	protected:

	private: System::Windows::Forms::Button^  btnMas;
	private: System::Windows::Forms::Button^  btnMenos;
	private: System::Windows::Forms::Button^  btnPOR;



	private: System::Windows::Forms::Button^  btnDivision;
	private: System::Windows::Forms::Button^  btnIgual;



	private: System::Windows::Forms::Button^  btnBorrar;


	private: System::Windows::Forms::GroupBox^  gbxNumeros;
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn6;



	private: System::Windows::Forms::Button^  btn5;

	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn3;


	private: System::Windows::Forms::Button^  btn2;

	private: System::Windows::Forms::Button^  btn1;


	private: System::Windows::Forms::Button^  btnPunto;

	private: System::Windows::Forms::Button^  btn0;

	private: System::Windows::Forms::Button^  btn9;

	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btnSignos;


	private: System::Windows::Forms::GroupBox^  gbxOperadores;
	private: System::Windows::Forms::GroupBox^  gbxSignos;
	private: System::Windows::Forms::Button^  btnParentesisC;
	private: System::Windows::Forms::Button^  btnParentesisA;
	private: System::Windows::Forms::Button^  btnCorcheteC;
	private: System::Windows::Forms::Button^  btnCorcheteA;
	private: System::Windows::Forms::Button^  btnLlaveC;
	private: System::Windows::Forms::Button^  btnLlaveA;
	private: System::Windows::Forms::Button^  btnNumeros;


	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tbcCalculadora;
	private: System::Windows::Forms::TabPage^  tbcAnalizador;
	private: System::Windows::Forms::Button^  btnLimpiar;
	private: System::Windows::Forms::ListBox^  lstAnalizador;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  btnExe;
	private: System::Windows::Forms::GroupBox^  gbxVariables3;

	private: System::Windows::Forms::Button^  btnW;











	private: System::Windows::Forms::Button^  btnV;

	private: System::Windows::Forms::Button^  btnU;
private: System::Windows::Forms::Button^  btnX;
private: System::Windows::Forms::Button^  btnZ;



private: System::Windows::Forms::Button^  btnY;






private: System::Windows::Forms::Button^  btnVariables;
private: System::Windows::Forms::Button^  btnAtrasVar;
private: System::Windows::Forms::GroupBox^  gbxVariables1;
private: System::Windows::Forms::Button^  btnAdelanteVar;



private: System::Windows::Forms::Button^  btnT;

private: System::Windows::Forms::Button^  btnS;

private: System::Windows::Forms::Button^  btnQ;
private: System::Windows::Forms::Button^  btnR;


private: System::Windows::Forms::Button^  btnP;

private: System::Windows::Forms::Button^  btnO;

private: System::Windows::Forms::Button^  btnM;
private: System::Windows::Forms::Button^  btnN;


private: System::Windows::Forms::Button^  btnL;

private: System::Windows::Forms::Button^  btnC;

private: System::Windows::Forms::Button^  btnB;

private: System::Windows::Forms::Button^  btnA;
private: System::Windows::Forms::Button^  btnD;
private: System::Windows::Forms::Button^  btnF;



private: System::Windows::Forms::Button^  btnE;
private: System::Windows::Forms::Button^  btnH;


private: System::Windows::Forms::Button^  btnG;
private: System::Windows::Forms::Button^  btnI;
private: System::Windows::Forms::Button^  btnK;



private: System::Windows::Forms::Button^  btnJ;


private: System::Windows::Forms::Button^  btmMenor;
private: System::Windows::Forms::Button^  btnMayor;

private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  solveToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
private: System::Windows::Forms::Label^  lblSolve;
private: System::Windows::Forms::ToolStripMenuItem^  compareToolStripMenuItem;
private: System::Windows::Forms::Label^  lblComparar;































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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->btnMas = (gcnew System::Windows::Forms::Button());
			this->btnMenos = (gcnew System::Windows::Forms::Button());
			this->btnPOR = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnIgual = (gcnew System::Windows::Forms::Button());
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->gbxNumeros = (gcnew System::Windows::Forms::GroupBox());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnPunto = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->gbxVariables1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAdelanteVar = (gcnew System::Windows::Forms::Button());
			this->btnT = (gcnew System::Windows::Forms::Button());
			this->btnS = (gcnew System::Windows::Forms::Button());
			this->btnQ = (gcnew System::Windows::Forms::Button());
			this->btnR = (gcnew System::Windows::Forms::Button());
			this->btnP = (gcnew System::Windows::Forms::Button());
			this->btnO = (gcnew System::Windows::Forms::Button());
			this->btnM = (gcnew System::Windows::Forms::Button());
			this->btnN = (gcnew System::Windows::Forms::Button());
			this->btnL = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnB = (gcnew System::Windows::Forms::Button());
			this->btnA = (gcnew System::Windows::Forms::Button());
			this->btnD = (gcnew System::Windows::Forms::Button());
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnE = (gcnew System::Windows::Forms::Button());
			this->btnH = (gcnew System::Windows::Forms::Button());
			this->btnG = (gcnew System::Windows::Forms::Button());
			this->btnI = (gcnew System::Windows::Forms::Button());
			this->btnK = (gcnew System::Windows::Forms::Button());
			this->btnJ = (gcnew System::Windows::Forms::Button());
			this->gbxVariables3 = (gcnew System::Windows::Forms::GroupBox());
			this->btnAtrasVar = (gcnew System::Windows::Forms::Button());
			this->btnW = (gcnew System::Windows::Forms::Button());
			this->btnV = (gcnew System::Windows::Forms::Button());
			this->btnU = (gcnew System::Windows::Forms::Button());
			this->btnX = (gcnew System::Windows::Forms::Button());
			this->btnZ = (gcnew System::Windows::Forms::Button());
			this->btnY = (gcnew System::Windows::Forms::Button());
			this->gbxSignos = (gcnew System::Windows::Forms::GroupBox());
			this->btmMenor = (gcnew System::Windows::Forms::Button());
			this->btnMayor = (gcnew System::Windows::Forms::Button());
			this->btnParentesisC = (gcnew System::Windows::Forms::Button());
			this->btnParentesisA = (gcnew System::Windows::Forms::Button());
			this->btnCorcheteC = (gcnew System::Windows::Forms::Button());
			this->btnCorcheteA = (gcnew System::Windows::Forms::Button());
			this->btnLlaveC = (gcnew System::Windows::Forms::Button());
			this->btnLlaveA = (gcnew System::Windows::Forms::Button());
			this->btnSignos = (gcnew System::Windows::Forms::Button());
			this->gbxOperadores = (gcnew System::Windows::Forms::GroupBox());
			this->btnExe = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnNumeros = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tbcCalculadora = (gcnew System::Windows::Forms::TabPage());
			this->lblComparar = (gcnew System::Windows::Forms::Label());
			this->lblSolve = (gcnew System::Windows::Forms::Label());
			this->btnVariables = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tbcAnalizador = (gcnew System::Windows::Forms::TabPage());
			this->lstAnalizador = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compareToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gbxNumeros->SuspendLayout();
			this->gbxVariables1->SuspendLayout();
			this->gbxVariables3->SuspendLayout();
			this->gbxSignos->SuspendLayout();
			this->gbxOperadores->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tbcCalculadora->SuspendLayout();
			this->tbcAnalizador->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtBox
			// 
			resources->ApplyResources(this->txtBox, L"txtBox");
			this->txtBox->Name = L"txtBox";
			// 
			// btnMas
			// 
			this->btnMas->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnMas, L"btnMas");
			this->btnMas->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnMas->Name = L"btnMas";
			this->btnMas->UseVisualStyleBackColor = false;
			this->btnMas->Click += gcnew System::EventHandler(this, &MyForm::btnMas_Click);
			// 
			// btnMenos
			// 
			this->btnMenos->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnMenos, L"btnMenos");
			this->btnMenos->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnMenos->Name = L"btnMenos";
			this->btnMenos->UseVisualStyleBackColor = false;
			this->btnMenos->Click += gcnew System::EventHandler(this, &MyForm::btnMenos_Click);
			// 
			// btnPOR
			// 
			this->btnPOR->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnPOR, L"btnPOR");
			this->btnPOR->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPOR->Name = L"btnPOR";
			this->btnPOR->UseVisualStyleBackColor = false;
			this->btnPOR->Click += gcnew System::EventHandler(this, &MyForm::btnX_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnDivision, L"btnDivision");
			this->btnDivision->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->UseVisualStyleBackColor = false;
			this->btnDivision->Click += gcnew System::EventHandler(this, &MyForm::btnDivision_Click);
			// 
			// btnIgual
			// 
			this->btnIgual->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnIgual, L"btnIgual");
			this->btnIgual->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnIgual->Name = L"btnIgual";
			this->btnIgual->UseVisualStyleBackColor = false;
			this->btnIgual->Click += gcnew System::EventHandler(this, &MyForm::btnIgual_Click);
			// 
			// btnBorrar
			// 
			this->btnBorrar->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnBorrar, L"btnBorrar");
			this->btnBorrar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->UseVisualStyleBackColor = false;
			this->btnBorrar->Click += gcnew System::EventHandler(this, &MyForm::btnBorrar_Click);
			// 
			// gbxNumeros
			// 
			this->gbxNumeros->Controls->Add(this->btn9);
			this->gbxNumeros->Controls->Add(this->btn8);
			this->gbxNumeros->Controls->Add(this->btn7);
			this->gbxNumeros->Controls->Add(this->btn6);
			this->gbxNumeros->Controls->Add(this->btn5);
			this->gbxNumeros->Controls->Add(this->btn4);
			this->gbxNumeros->Controls->Add(this->btn3);
			this->gbxNumeros->Controls->Add(this->btn2);
			this->gbxNumeros->Controls->Add(this->btn1);
			this->gbxNumeros->Controls->Add(this->btnPunto);
			this->gbxNumeros->Controls->Add(this->btn0);
			resources->ApplyResources(this->gbxNumeros, L"gbxNumeros");
			this->gbxNumeros->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->gbxNumeros->Name = L"gbxNumeros";
			this->gbxNumeros->TabStop = false;
			// 
			// btn9
			// 
			this->btn9->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn9, L"btn9");
			this->btn9->Name = L"btn9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn8, L"btn8");
			this->btn8->Name = L"btn8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn7, L"btn7");
			this->btn7->Name = L"btn7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn6, L"btn6");
			this->btn6->Name = L"btn6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn5, L"btn5");
			this->btn5->Name = L"btn5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn4, L"btn4");
			this->btn4->Name = L"btn4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn3
			// 
			this->btn3->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn3, L"btn3");
			this->btn3->Name = L"btn3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn2, L"btn2");
			this->btn2->Name = L"btn2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn1, L"btn1");
			this->btn1->Name = L"btn1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btnPunto
			// 
			resources->ApplyResources(this->btnPunto, L"btnPunto");
			this->btnPunto->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPunto->Name = L"btnPunto";
			this->btnPunto->UseVisualStyleBackColor = false;
			this->btnPunto->Click += gcnew System::EventHandler(this, &MyForm::btnPunto_Click);
			// 
			// btn0
			// 
			this->btn0->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btn0, L"btn0");
			this->btn0->Name = L"btn0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// gbxVariables1
			// 
			this->gbxVariables1->Controls->Add(this->btnAdelanteVar);
			this->gbxVariables1->Controls->Add(this->btnT);
			this->gbxVariables1->Controls->Add(this->btnS);
			this->gbxVariables1->Controls->Add(this->btnQ);
			this->gbxVariables1->Controls->Add(this->btnR);
			this->gbxVariables1->Controls->Add(this->btnP);
			this->gbxVariables1->Controls->Add(this->btnO);
			this->gbxVariables1->Controls->Add(this->btnM);
			this->gbxVariables1->Controls->Add(this->btnN);
			this->gbxVariables1->Controls->Add(this->btnL);
			this->gbxVariables1->Controls->Add(this->btnC);
			this->gbxVariables1->Controls->Add(this->btnB);
			this->gbxVariables1->Controls->Add(this->btnA);
			this->gbxVariables1->Controls->Add(this->btnD);
			this->gbxVariables1->Controls->Add(this->btnF);
			this->gbxVariables1->Controls->Add(this->btnE);
			this->gbxVariables1->Controls->Add(this->btnH);
			this->gbxVariables1->Controls->Add(this->btnG);
			this->gbxVariables1->Controls->Add(this->btnI);
			this->gbxVariables1->Controls->Add(this->btnK);
			this->gbxVariables1->Controls->Add(this->btnJ);
			resources->ApplyResources(this->gbxVariables1, L"gbxVariables1");
			this->gbxVariables1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->gbxVariables1->Name = L"gbxVariables1";
			this->gbxVariables1->TabStop = false;
			// 
			// btnAdelanteVar
			// 
			resources->ApplyResources(this->btnAdelanteVar, L"btnAdelanteVar");
			this->btnAdelanteVar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdelanteVar->Name = L"btnAdelanteVar";
			this->btnAdelanteVar->UseVisualStyleBackColor = false;
			this->btnAdelanteVar->Click += gcnew System::EventHandler(this, &MyForm::btnAdelanteVar_Click);
			// 
			// btnT
			// 
			resources->ApplyResources(this->btnT, L"btnT");
			this->btnT->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnT->Name = L"btnT";
			this->btnT->UseVisualStyleBackColor = false;
			this->btnT->Click += gcnew System::EventHandler(this, &MyForm::btnT_Click);
			// 
			// btnS
			// 
			resources->ApplyResources(this->btnS, L"btnS");
			this->btnS->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnS->Name = L"btnS";
			this->btnS->UseVisualStyleBackColor = false;
			this->btnS->Click += gcnew System::EventHandler(this, &MyForm::btnS_Click);
			// 
			// btnQ
			// 
			resources->ApplyResources(this->btnQ, L"btnQ");
			this->btnQ->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnQ->Name = L"btnQ";
			this->btnQ->UseVisualStyleBackColor = false;
			this->btnQ->Click += gcnew System::EventHandler(this, &MyForm::btnQ_Click);
			// 
			// btnR
			// 
			resources->ApplyResources(this->btnR, L"btnR");
			this->btnR->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnR->Name = L"btnR";
			this->btnR->UseVisualStyleBackColor = false;
			this->btnR->Click += gcnew System::EventHandler(this, &MyForm::btnR_Click);
			// 
			// btnP
			// 
			resources->ApplyResources(this->btnP, L"btnP");
			this->btnP->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnP->Name = L"btnP";
			this->btnP->UseVisualStyleBackColor = false;
			this->btnP->Click += gcnew System::EventHandler(this, &MyForm::btnP_Click);
			// 
			// btnO
			// 
			resources->ApplyResources(this->btnO, L"btnO");
			this->btnO->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnO->Name = L"btnO";
			this->btnO->UseVisualStyleBackColor = false;
			this->btnO->Click += gcnew System::EventHandler(this, &MyForm::btnO_Click);
			// 
			// btnM
			// 
			resources->ApplyResources(this->btnM, L"btnM");
			this->btnM->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnM->Name = L"btnM";
			this->btnM->UseVisualStyleBackColor = false;
			this->btnM->Click += gcnew System::EventHandler(this, &MyForm::btnM_Click);
			// 
			// btnN
			// 
			resources->ApplyResources(this->btnN, L"btnN");
			this->btnN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnN->Name = L"btnN";
			this->btnN->UseVisualStyleBackColor = false;
			this->btnN->Click += gcnew System::EventHandler(this, &MyForm::btnN_Click);
			// 
			// btnL
			// 
			resources->ApplyResources(this->btnL, L"btnL");
			this->btnL->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnL->Name = L"btnL";
			this->btnL->UseVisualStyleBackColor = false;
			this->btnL->Click += gcnew System::EventHandler(this, &MyForm::btnL_Click);
			// 
			// btnC
			// 
			this->btnC->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnC, L"btnC");
			this->btnC->Name = L"btnC";
			this->btnC->UseVisualStyleBackColor = false;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnB
			// 
			this->btnB->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnB, L"btnB");
			this->btnB->Name = L"btnB";
			this->btnB->UseVisualStyleBackColor = false;
			this->btnB->Click += gcnew System::EventHandler(this, &MyForm::btnB_Click);
			// 
			// btnA
			// 
			this->btnA->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnA, L"btnA");
			this->btnA->Name = L"btnA";
			this->btnA->UseVisualStyleBackColor = false;
			this->btnA->Click += gcnew System::EventHandler(this, &MyForm::btnA_Click);
			// 
			// btnD
			// 
			this->btnD->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnD, L"btnD");
			this->btnD->Name = L"btnD";
			this->btnD->UseVisualStyleBackColor = false;
			this->btnD->Click += gcnew System::EventHandler(this, &MyForm::btnD_Click);
			// 
			// btnF
			// 
			this->btnF->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnF, L"btnF");
			this->btnF->Name = L"btnF";
			this->btnF->UseVisualStyleBackColor = false;
			this->btnF->Click += gcnew System::EventHandler(this, &MyForm::btnF_Click);
			// 
			// btnE
			// 
			this->btnE->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnE, L"btnE");
			this->btnE->Name = L"btnE";
			this->btnE->UseVisualStyleBackColor = false;
			this->btnE->Click += gcnew System::EventHandler(this, &MyForm::btnE_Click);
			// 
			// btnH
			// 
			this->btnH->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnH, L"btnH");
			this->btnH->Name = L"btnH";
			this->btnH->UseVisualStyleBackColor = false;
			this->btnH->Click += gcnew System::EventHandler(this, &MyForm::btnH_Click);
			// 
			// btnG
			// 
			this->btnG->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnG, L"btnG");
			this->btnG->Name = L"btnG";
			this->btnG->UseVisualStyleBackColor = false;
			this->btnG->Click += gcnew System::EventHandler(this, &MyForm::btnG_Click);
			// 
			// btnI
			// 
			this->btnI->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnI, L"btnI");
			this->btnI->Name = L"btnI";
			this->btnI->UseVisualStyleBackColor = false;
			this->btnI->Click += gcnew System::EventHandler(this, &MyForm::btnI_Click);
			// 
			// btnK
			// 
			resources->ApplyResources(this->btnK, L"btnK");
			this->btnK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnK->Name = L"btnK";
			this->btnK->UseVisualStyleBackColor = false;
			this->btnK->Click += gcnew System::EventHandler(this, &MyForm::btnK_Click);
			// 
			// btnJ
			// 
			this->btnJ->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnJ, L"btnJ");
			this->btnJ->Name = L"btnJ";
			this->btnJ->UseVisualStyleBackColor = false;
			this->btnJ->Click += gcnew System::EventHandler(this, &MyForm::btnJ_Click);
			// 
			// gbxVariables3
			// 
			this->gbxVariables3->Controls->Add(this->btnAtrasVar);
			this->gbxVariables3->Controls->Add(this->btnW);
			this->gbxVariables3->Controls->Add(this->btnV);
			this->gbxVariables3->Controls->Add(this->btnU);
			this->gbxVariables3->Controls->Add(this->btnX);
			this->gbxVariables3->Controls->Add(this->btnZ);
			this->gbxVariables3->Controls->Add(this->btnY);
			resources->ApplyResources(this->gbxVariables3, L"gbxVariables3");
			this->gbxVariables3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->gbxVariables3->Name = L"gbxVariables3";
			this->gbxVariables3->TabStop = false;
			// 
			// btnAtrasVar
			// 
			resources->ApplyResources(this->btnAtrasVar, L"btnAtrasVar");
			this->btnAtrasVar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAtrasVar->Name = L"btnAtrasVar";
			this->btnAtrasVar->UseVisualStyleBackColor = false;
			this->btnAtrasVar->Click += gcnew System::EventHandler(this, &MyForm::btnAtrasVar_Click);
			// 
			// btnW
			// 
			this->btnW->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnW, L"btnW");
			this->btnW->Name = L"btnW";
			this->btnW->UseVisualStyleBackColor = false;
			this->btnW->Click += gcnew System::EventHandler(this, &MyForm::btnW_Click);
			// 
			// btnV
			// 
			this->btnV->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnV, L"btnV");
			this->btnV->Name = L"btnV";
			this->btnV->UseVisualStyleBackColor = false;
			this->btnV->Click += gcnew System::EventHandler(this, &MyForm::btnV_Click);
			// 
			// btnU
			// 
			this->btnU->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnU, L"btnU");
			this->btnU->Name = L"btnU";
			this->btnU->UseVisualStyleBackColor = false;
			this->btnU->Click += gcnew System::EventHandler(this, &MyForm::btnU_Click);
			// 
			// btnX
			// 
			this->btnX->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnX, L"btnX");
			this->btnX->Name = L"btnX";
			this->btnX->UseVisualStyleBackColor = false;
			this->btnX->Click += gcnew System::EventHandler(this, &MyForm::btnX_Click_1);
			// 
			// btnZ
			// 
			this->btnZ->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnZ, L"btnZ");
			this->btnZ->Name = L"btnZ";
			this->btnZ->UseVisualStyleBackColor = false;
			this->btnZ->Click += gcnew System::EventHandler(this, &MyForm::btnZ_Click);
			// 
			// btnY
			// 
			this->btnY->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnY, L"btnY");
			this->btnY->Name = L"btnY";
			this->btnY->UseVisualStyleBackColor = false;
			this->btnY->Click += gcnew System::EventHandler(this, &MyForm::btnY_Click);
			// 
			// gbxSignos
			// 
			this->gbxSignos->Controls->Add(this->btmMenor);
			this->gbxSignos->Controls->Add(this->btnMayor);
			this->gbxSignos->Controls->Add(this->btnParentesisC);
			this->gbxSignos->Controls->Add(this->btnParentesisA);
			this->gbxSignos->Controls->Add(this->btnIgual);
			this->gbxSignos->Controls->Add(this->btnCorcheteC);
			this->gbxSignos->Controls->Add(this->btnCorcheteA);
			this->gbxSignos->Controls->Add(this->btnLlaveC);
			this->gbxSignos->Controls->Add(this->btnLlaveA);
			resources->ApplyResources(this->gbxSignos, L"gbxSignos");
			this->gbxSignos->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->gbxSignos->Name = L"gbxSignos";
			this->gbxSignos->TabStop = false;
			// 
			// btmMenor
			// 
			this->btmMenor->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btmMenor, L"btmMenor");
			this->btmMenor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btmMenor->Name = L"btmMenor";
			this->btmMenor->UseVisualStyleBackColor = false;
			this->btmMenor->Click += gcnew System::EventHandler(this, &MyForm::btmMenor_Click);
			// 
			// btnMayor
			// 
			this->btnMayor->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnMayor, L"btnMayor");
			this->btnMayor->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnMayor->Name = L"btnMayor";
			this->btnMayor->UseVisualStyleBackColor = false;
			this->btnMayor->Click += gcnew System::EventHandler(this, &MyForm::btnMayor_Click);
			// 
			// btnParentesisC
			// 
			this->btnParentesisC->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnParentesisC, L"btnParentesisC");
			this->btnParentesisC->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnParentesisC->Name = L"btnParentesisC";
			this->btnParentesisC->UseVisualStyleBackColor = false;
			this->btnParentesisC->Click += gcnew System::EventHandler(this, &MyForm::btnParentesisC_Click);
			// 
			// btnParentesisA
			// 
			this->btnParentesisA->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnParentesisA, L"btnParentesisA");
			this->btnParentesisA->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnParentesisA->Name = L"btnParentesisA";
			this->btnParentesisA->UseVisualStyleBackColor = false;
			this->btnParentesisA->Click += gcnew System::EventHandler(this, &MyForm::btnParentesisA_Click);
			// 
			// btnCorcheteC
			// 
			this->btnCorcheteC->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnCorcheteC, L"btnCorcheteC");
			this->btnCorcheteC->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnCorcheteC->Name = L"btnCorcheteC";
			this->btnCorcheteC->UseVisualStyleBackColor = false;
			this->btnCorcheteC->Click += gcnew System::EventHandler(this, &MyForm::btnCorcheteC_Click);
			// 
			// btnCorcheteA
			// 
			this->btnCorcheteA->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnCorcheteA, L"btnCorcheteA");
			this->btnCorcheteA->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnCorcheteA->Name = L"btnCorcheteA";
			this->btnCorcheteA->UseVisualStyleBackColor = false;
			this->btnCorcheteA->Click += gcnew System::EventHandler(this, &MyForm::btnCorcheteA_Click);
			// 
			// btnLlaveC
			// 
			this->btnLlaveC->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnLlaveC, L"btnLlaveC");
			this->btnLlaveC->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnLlaveC->Name = L"btnLlaveC";
			this->btnLlaveC->UseVisualStyleBackColor = false;
			this->btnLlaveC->Click += gcnew System::EventHandler(this, &MyForm::btnLlaveC_Click);
			// 
			// btnLlaveA
			// 
			this->btnLlaveA->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnLlaveA, L"btnLlaveA");
			this->btnLlaveA->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnLlaveA->Name = L"btnLlaveA";
			this->btnLlaveA->UseVisualStyleBackColor = false;
			this->btnLlaveA->Click += gcnew System::EventHandler(this, &MyForm::btnLlaveA_Click);
			// 
			// btnSignos
			// 
			this->btnSignos->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnSignos, L"btnSignos");
			this->btnSignos->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSignos->Name = L"btnSignos";
			this->btnSignos->UseVisualStyleBackColor = false;
			this->btnSignos->Click += gcnew System::EventHandler(this, &MyForm::btnSignos_Click);
			// 
			// gbxOperadores
			// 
			this->gbxOperadores->Controls->Add(this->btnExe);
			this->gbxOperadores->Controls->Add(this->btnLimpiar);
			this->gbxOperadores->Controls->Add(this->btnBorrar);
			this->gbxOperadores->Controls->Add(this->btnPOR);
			this->gbxOperadores->Controls->Add(this->btnDivision);
			this->gbxOperadores->Controls->Add(this->btnMas);
			this->gbxOperadores->Controls->Add(this->btnMenos);
			resources->ApplyResources(this->gbxOperadores, L"gbxOperadores");
			this->gbxOperadores->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->gbxOperadores->Name = L"gbxOperadores";
			this->gbxOperadores->TabStop = false;
			// 
			// btnExe
			// 
			this->btnExe->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnExe, L"btnExe");
			this->btnExe->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnExe->Name = L"btnExe";
			this->btnExe->UseVisualStyleBackColor = false;
			this->btnExe->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnLimpiar, L"btnLimpiar");
			this->btnLimpiar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
			// 
			// btnNumeros
			// 
			this->btnNumeros->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnNumeros, L"btnNumeros");
			this->btnNumeros->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnNumeros->Name = L"btnNumeros";
			this->btnNumeros->UseVisualStyleBackColor = false;
			this->btnNumeros->Click += gcnew System::EventHandler(this, &MyForm::btnNumeros_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tbcCalculadora);
			this->tabControl1->Controls->Add(this->tbcAnalizador);
			resources->ApplyResources(this->tabControl1, L"tabControl1");
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			// 
			// tbcCalculadora
			// 
			this->tbcCalculadora->BackColor = System::Drawing::Color::Transparent;
			this->tbcCalculadora->Controls->Add(this->lblComparar);
			this->tbcCalculadora->Controls->Add(this->lblSolve);
			this->tbcCalculadora->Controls->Add(this->gbxVariables1);
			this->tbcCalculadora->Controls->Add(this->btnVariables);
			this->tbcCalculadora->Controls->Add(this->label3);
			this->tbcCalculadora->Controls->Add(this->label2);
			this->tbcCalculadora->Controls->Add(this->gbxNumeros);
			this->tbcCalculadora->Controls->Add(this->textBox1);
			this->tbcCalculadora->Controls->Add(this->btnSignos);
			this->tbcCalculadora->Controls->Add(this->txtBox);
			this->tbcCalculadora->Controls->Add(this->btnNumeros);
			this->tbcCalculadora->Controls->Add(this->gbxOperadores);
			this->tbcCalculadora->Controls->Add(this->gbxSignos);
			this->tbcCalculadora->Controls->Add(this->gbxVariables3);
			resources->ApplyResources(this->tbcCalculadora, L"tbcCalculadora");
			this->tbcCalculadora->Name = L"tbcCalculadora";
			// 
			// lblComparar
			// 
			resources->ApplyResources(this->lblComparar, L"lblComparar");
			this->lblComparar->BackColor = System::Drawing::SystemColors::Window;
			this->lblComparar->Name = L"lblComparar";
			// 
			// lblSolve
			// 
			resources->ApplyResources(this->lblSolve, L"lblSolve");
			this->lblSolve->BackColor = System::Drawing::SystemColors::Window;
			this->lblSolve->Name = L"lblSolve";
			// 
			// btnVariables
			// 
			this->btnVariables->Cursor = System::Windows::Forms::Cursors::Hand;
			resources->ApplyResources(this->btnVariables, L"btnVariables");
			this->btnVariables->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnVariables->Name = L"btnVariables";
			this->btnVariables->UseVisualStyleBackColor = false;
			this->btnVariables->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// textBox1
			// 
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			// 
			// tbcAnalizador
			// 
			this->tbcAnalizador->Controls->Add(this->lstAnalizador);
			resources->ApplyResources(this->tbcAnalizador, L"tbcAnalizador");
			this->tbcAnalizador->Name = L"tbcAnalizador";
			this->tbcAnalizador->UseVisualStyleBackColor = true;
			// 
			// lstAnalizador
			// 
			this->lstAnalizador->BackColor = System::Drawing::SystemColors::Window;
			resources->ApplyResources(this->lstAnalizador, L"lstAnalizador");
			this->lstAnalizador->FormattingEnabled = true;
			this->lstAnalizador->Name = L"lstAnalizador";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->label1, L"label1");
			this->label1->ForeColor = System::Drawing::SystemColors::Info;
			this->label1->Name = L"label1";
			this->label1->UseMnemonic = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->solveToolStripMenuItem,
					this->exitToolStripMenuItem, this->compareToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			resources->ApplyResources(this->fileToolStripMenuItem, L"fileToolStripMenuItem");
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			// 
			// solveToolStripMenuItem
			// 
			this->solveToolStripMenuItem->Name = L"solveToolStripMenuItem";
			resources->ApplyResources(this->solveToolStripMenuItem, L"solveToolStripMenuItem");
			this->solveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::solveToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			resources->ApplyResources(this->exitToolStripMenuItem, L"exitToolStripMenuItem");
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// compareToolStripMenuItem
			// 
			this->compareToolStripMenuItem->Name = L"compareToolStripMenuItem";
			resources->ApplyResources(this->compareToolStripMenuItem, L"compareToolStripMenuItem");
			this->compareToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::compareToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->gbxNumeros->ResumeLayout(false);
			this->gbxVariables1->ResumeLayout(false);
			this->gbxVariables3->ResumeLayout(false);
			this->gbxSignos->ResumeLayout(false);
			this->gbxOperadores->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tbcCalculadora->ResumeLayout(false);
			this->tbcCalculadora->PerformLayout();
			this->tbcAnalizador->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool solve = false;
		bool comparar = false;

private: System::Void btnSignos_Click(System::Object^  sender, System::EventArgs^  e) {
	btnNumeros->Visible = true;
	gbxSignos->Visible = true;
	btnSignos->Visible = false;
	gbxNumeros->Visible = false;
	gbxVariables1->Visible = false;
	gbxVariables3->Visible = false;
}
private: System::Void btnNumeros_Click(System::Object^  sender, System::EventArgs^  e) {
	btnNumeros->Visible = false;
	gbxSignos->Visible = false;
	btnSignos->Visible = true;
	gbxNumeros->Visible = true;
	gbxVariables1->Visible = false;
	gbxVariables3->Visible = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "0";
}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "1";
}
private: System::Void btnPunto_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + ".";
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "2";
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "3";
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "6";
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "5";
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "4";
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "7";
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "8";
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "9";
}
private: System::Void btnX_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "*";
}
private: System::Void btnDivision_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "/";
}
private: System::Void btnMas_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "+";
}
private: System::Void btnMenos_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "-";
}
private: System::Void btnBorrar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtBox->Text->Length > 0)
	{
		txtBox->Text = txtBox->Text->Remove(txtBox->Text->Length - 1);
	}
}
private: System::Void btnLimpiar_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Clear();
	label3->Text = "";
	txtBox->Clear();
	lstAnalizador->Items->Clear();
}
private: System::Void btnParentesisA_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "(";
}
private: System::Void btnParentesisC_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + ")";
}
private: System::Void btnCorcheteA_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "[";
}
private: System::Void btnCorcheteC_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "]";
}
private: System::Void btnLlaveA_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "{";
}
private: System::Void btnLlaveC_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "}";
}
private: System::Void btnIgual_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "=";
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	lblSolve->Visible = false;
	lblComparar->Visible = false;
	lstAnalizador->Items->Clear();
	char *expresion = new char[100];
	sprintf(expresion, "%s", txtBox->Text);
	oAnalizador->setExpresion(expresion);

	String ^miExpresion = gcnew String(oAnalizador->getExpresion());
	String ^letrita;
	label3->Text = "";
	string infijo, posfijo, identificador;
	string almacen2;
	string incognita;
	stack<string>pila;
	stack<double>resultado;
	char identificador2;
	char c;
	char almacen;
	double A, B;
	double* aux;
	int q = 1;
	int cOperacional = 0;
	int cLetra = 0;
	bool Egramatical = false;
	bool agrupacion = false;
	bool multiplica = false;
	bool multiplicaLetra = false;
	bool leeCaracter = false;
	bool valor = false;
	bool decimal = false;
	bool oRelacional = false;
	
	int t = 0;
	infijo.clear();
	posfijo.clear();
	identificador.clear();
	while (!pila.empty())
	{
		pila.pop();
	}
	while (!resultado.empty())
	{
		resultado.pop();
	}
	std::string convertedMiExpresion = msclr::interop::marshal_as<std::string>(miExpresion);

	infijo = convertedMiExpresion;

	if (solve)
	{
		lstAnalizador->Items->Add("\nResolviendo la expresión...\n");
		for (int i = 0; i < infijo.size(); i++)
		{
			if (infijo[i] >= 97 && infijo[i] <= 122)
			{
				cLetra++;
			}
		}
		for (int i = 0; i < infijo.size(); i++)
		{
			if (infijo[i] == '=')
			{
				int b = i;
				int k = i;
				for (int j = 0; j < infijo.size() - i; j++, b++)
				{
					infijo[j] = infijo[b];

				}
			}
			miExpresion = gcnew String(infijo.c_str());
		}
	}
	if (cLetra > 1)
		lstAnalizador->Items->Add("\nError: más de 2 variables en la ecuación.");
	if (!comparar)
	{
		for (int i = 0; i < infijo.size(); i++)
		{
			if (infijo[i] == '<' || infijo[i] == '>' || infijo[i] == '=')
			{
				oRelacional = true;
			}
		}
	}
	if (oAnalizador->parentesis_Balanceados(oAnalizador->getExpresion()))
	{
		if (miExpresion->Length == 0) {
			lstAnalizador->Items->Add("No se ha ingresado expresión.\n");
			t = 1;
		}
		else if (oAnalizador->noPresentaSignosDeAgrupacion(oAnalizador->getExpresion()))
		{
			lstAnalizador->Items->Add("La expresion no presenta signos de agrupación.\n");
		}
		else
		{
			lstAnalizador->Items->Add("Los signos de agrupación están balacneados.\n");
		}
		for (int i = 0; i < infijo.size(); i += q)
		{
			agrupacion = false;
			q = 1;
			c = infijo[i];
			identificador.clear();
			identificador += c;
			if (c == ' ')continue;
			lstAnalizador->Items->Add("analizando caracter de la expresión: " + miExpresion[i]);
			//si es numero validado
			if (c >= '0' && c <= '9')
			{
				int j = 1;
				//Analizar si es decimal o entero
					while ((infijo[i + j] >= '0' && infijo[i + j] <= '9') || infijo[i + j] == '.')
					{
						if (infijo[i + j] == '.')
						{
							if (infijo[i + j + 1] < '0' || infijo[i + j + 1] > '9')
							{
								lstAnalizador->Items->Add("\nError gramatical después del punto.");
								t = 1;
								textBox1->Text = "Error";
								Egramatical = true;
							}
							else
							{
								decimal = true;
							}
						}
						j++;
					}
					char* au;
					if (multiplica)
					{
						au = new char[j + 1];
						au[j] = '*';
					}
					else
						au = new char[j];
					au[0] = infijo[i];
					j = 1;
					while ((infijo[i + j] >= '0' && infijo[i + j] <= '9') || infijo[i + j] == '.')
					{
						au[j] = infijo[i + j];
						j++;
					}
					if (!Egramatical)
					{
						string num = "";
						for (int i = 0; i < j; i++) { num += au[i]; }
						String ^miNumerito = gcnew String(num.c_str());
						if (decimal) {
							if (infijo[i + 1] == '.')
							{
								lstAnalizador->Items->Add("\nExisten " + (j - 2) + " decimal(es) delante." + " El número: " + miNumerito
									+ " es número decimal: pasar a posfijo");
							}
							else {
								lstAnalizador->Items->Add("\nExisten " + (j - 2) + " números(s) delante." + " El número: " + miNumerito
									+ " es número decimal: pasar a posfijo");
							}
						}
						else
						{
							lstAnalizador->Items->Add("\nExisten " + (j - 1) + " número(s) delante." + " El número: " + miNumerito
								+ " es número entero de " + j + " cifra(s): pasar a posfijo");
						}
						posfijo = posfijo + " " + au[0];
						for (int k = 1; k < j; k++)
						{
							posfijo = posfijo + au[k];
						}
						if (multiplica)
						{
							posfijo = posfijo + au[j];
						}
						multiplica = false;
						decimal = false;
						q = j;
						continue;
					}
			}
			//si se lee ( // validado
			if (identificador == "(" || identificador == "[" || identificador == "{")
			{
				if (i > 0)
				{
					if (infijo[i - 1] >= '0' && infijo[i - 1] <= '9' && identificador == "(")
					{
						identificador = "*(";
					}
					if (infijo[i - 1] >= '0' && infijo[i - 1] <= '9' && identificador == "[")
					{
						identificador = "*[";
					}
				}
				lstAnalizador->Items->Add("\nEs un signo de agrupación.");
				lstAnalizador->Items->Add("\npasar a la pila.");
				pila.push(identificador);
				agrupacion = true;
				//Retorna al inicio del loop sin ejecutar el resto del codigo
				continue;
			}
			//si lee ) // validado
			if (identificador == ")" || identificador == "}" || identificador == "]") //validado
			{
				lstAnalizador->Items->Add("\nEs un signo de agrupación.");
				if (i + 1 <= infijo.size())
				{
					if (infijo[i + 1] >= '0' && infijo[i + 1] <= '9' && (identificador == ")" || identificador == "]"))
					{
						multiplica = true;
					}
				}
				while (!pila.empty() && (pila.top() != "(" && pila.top() != "[" && pila.top() != "{"))
				{
					string num = pila.top();
					String ^miSignoDeAgrupacion = gcnew String(num.c_str());
					lstAnalizador->Items->Add("\npasar operador " + miSignoDeAgrupacion + " de la pila a posfijo");
					posfijo = posfijo + " " + pila.top();
					pila.pop();
				}
				if (!pila.empty())
					pila.pop();
				agrupacion = true;
			}
			//si es operador aritmético
			if (!agrupacion) //validado
			{
				if (infijo[i] == '+' || infijo[i] == '-' || infijo[i] == '*' || infijo[i] == '/')
				{
					if (infijo[i + 1] != ' ')
					{
						if (infijo[i + 1] != '(' && (infijo[i + 1]<'0' || infijo[i + 1]>'9') && (infijo[i + 1] < 97 && infijo[i + 1] > 122)
							|| ((infijo[i + 1] == '+' || infijo[i + 1] == '-' || infijo[i + 1] == '*' || infijo[i + 1] == '/') ||
							(infijo[i + 1] == '=' || infijo[i + 1] == '<' || infijo[i + 1] == '>')))
						{
							textBox1->Text = "Error";
							lstAnalizador->Items->Add("\nError de operadores");
							t = 1;
						}
						if (i + 1 == infijo.size() && (infijo[i] == '*' || infijo[i] == '/'))
						{
							textBox1->Text = "Error";
							lstAnalizador->Items->Add("\nError gramatical.");
							t = 1;
						}
					}
				}
			}
			if (t != 1)
			{
				if (oAnalizador->EsOperadorAritmetico(identificador))
				{
					lstAnalizador->Items->Add("\nes operador aritmético: ");
					while (!pila.empty() && oAnalizador->precedente(pila.top()) >= oAnalizador->precedente((identificador)))
					{
						string num2 = pila.top();
						String ^miSignoDeAgrupacion2 = gcnew String(num2.c_str());
						lstAnalizador->Items->Add("\npasar operador " + miSignoDeAgrupacion2 + " de la pila posfijo");
						posfijo = posfijo + " " + pila.top();
						pila.pop();
					}
					pila.push(identificador);
					string ope = pila.top();
					String ^miOperador = gcnew String(ope.c_str());
					lstAnalizador->Items->Add("\colocar " + miOperador + " en la pila ");
					continue;
				}
			}
			//si es una letra // validado
			if (infijo[i] >= 97 && infijo[i] <= 122)
			{
				lstAnalizador->Items->Add("\nEl caracter corresponde a una letra.");
				if (infijo[i + 1] != ' ' && i + 1 != infijo.size())
				{
					if (infijo[i + 1] != '+' && infijo[i + 1] != '-' && infijo[i + 1] != '*' && infijo[i + 1] != '/' &&
						infijo[i + 1] != '<' && infijo[i + 1] != '>' && infijo[i + 1] != '=' && (infijo[i+1] < 97 || infijo[i+1] > 122))
					{
						lstAnalizador->Items->Add("\nError gramatical.");
						textBox1->Text = "Error";
						t = 1;
					}
				}
				if (!solve)
				{
					leeCaracter = true;
				}
				else
				{
					letrita = gcnew String(identificador.c_str());
					lstAnalizador->Items->Add("\npasar " + letrita + " a posfijo. ");
					posfijo = posfijo + " " + identificador;
					continue;
				}
			}
			//si es operador relacional
			if (oAnalizador->EsOperadorRelacional(identificador)) //validado
			{
				cOperacional++;
				if (infijo[i + 1] != ' ')
				{
						if (infijo[i + 1] == '<' || infijo[i + 1] == '>' || infijo[i + 1] == '=' ||
							(infijo[i + 1] == '+' || infijo[i + 1] == '-' || infijo[i + 1] == '*' || infijo[i + 1] == '/'))
						{
							lstAnalizador->Items->Add("\nError gramatical.");
							t = 1;
						}
				}
				if (i + 1 == infijo.size())
				{
					lstAnalizador->Items->Add("\nError gramatical.");
					textBox1->Text = "Error";
					t = 1;
				}
				if (cOperacional >= 2)
				{
					lstAnalizador->Items->Add("\nError gramatical.");
					t = 1;
				}
				lstAnalizador->Items->Add("\nEl caracter corresponde a un operador relacional.");
			}
			if (t != 1)
			{
				if (oAnalizador->EsOperadorRelacional(identificador))
				{

					while (!pila.empty())
					{
						string num2 = pila.top();
						String ^miSignoDeAgrupacion2 = gcnew String(num2.c_str());
						lstAnalizador->Items->Add("\npasar operador " + miSignoDeAgrupacion2 + " de la pila posfijo");
						posfijo = posfijo + " " + pila.top();
						pila.pop();
					}
						pila.push(identificador);
						string ope = pila.top();
						String ^miOperador = gcnew String(ope.c_str());
						lstAnalizador->Items->Add("\colocar " + miOperador + " en la pila ");
						continue;
				}
			}
		}
		//extraer cualquier operador restante
		while (!pila.empty())
		{
			string ope2 = pila.top();
			String ^miOperador2 = gcnew String(ope2.c_str());
			if (t != 1 && t != 2)
				lstAnalizador->Items->Add("\npasar operador " + miOperador2 + " de la pila a posfijo ");
			posfijo = posfijo + " " + pila.top();
			pila.pop();	
		}
		//imprimier posfijo
		String ^miPosfi = gcnew String(posfijo.c_str());
		if (t != 1 && t != 2 && !leeCaracter && !oRelacional)
			lstAnalizador->Items->Add("\nPosfijo es: " + miPosfi);
		q = 1;
		if (t != 1 && t != 2 && !leeCaracter && !oRelacional)
			lstAnalizador->Items->Add("\nevaluando la expresion ");
		if (solve)
		{
			for (int i = 0; i < posfijo.size(); i += q)
			{
				if (posfijo[i] == '+' || posfijo[i] == '-' || posfijo[i] == '*' || posfijo[i] == '/')
				{
					if ((posfijo[i + 2] >= '0' && posfijo[i + 2] <= '9') && (posfijo[i + 4] >= '0' && posfijo[i + 4] <= '9'))
					{
						lstAnalizador->Items->Add("\nLa posicion es: " + i);
					}
				}
			}
		}
		else
		{
			for (int i = 0; i < posfijo.size(); i += q)
			{
				A = 0;
				B = 0;
				q = 1;
				c = posfijo[i];
				identificador.clear();
				identificador += c;
				//si lee un numero
				if (c >= '0'&& c <= '9')
				{
					char* au;
					int j = 1;
					//validación para numeros de más de una cifra
					while ((posfijo[i + j] >= '0' && posfijo[i + j] <= '9') || posfijo[i + j] == '.')
					{
						j++;
					}
					au = new char[j];
					au[0] = posfijo[i];

					j = 1;
					while ((posfijo[i + j] >= '0' && posfijo[i + j] <= '9') || posfijo[i + j] == '.')
					{
						au[j] = posfijo[i + j];
						j++;
					}
					resultado.push(atof(au));
					q = j;
					continue;
				}
				// if solve
				if (c >= 97 && c <= 122) //si lee una letra 
				{
					int j = 1;
					aux = new double[j];
					aux[0] = posfijo[i];
					incognita = c;
					lstAnalizador->Items->Add("\nau es igual a " + aux[0]);
					resultado.push(aux[0]);
					q = j;
					if (posfijo[i + 2] == '+' || posfijo[i + 2] == '-' || posfijo[i + 2] == '*' || posfijo[i + 2] == '/')
					{
						identificador2 = posfijo[i + 2];
					}
					continue;
				}
				//Si lee un operador aritmético o relacional
				if (oAnalizador->EsOperadorAritmetico(identificador) || oAnalizador->EsOperadorRelacional(identificador))
				{
					String ^operador = gcnew String(identificador.c_str());
					if (!resultado.empty())
					{
						B = B + resultado.top();
						resultado.pop();
					}
					else
					{
						if (!leeCaracter && !comparar && !solve && infijo[infijo.size() - 1] != '+' && infijo[infijo.size() - 1] != '-'
							&& infijo[infijo.size() - 1] != '*' && infijo[infijo.size() - 1] != '/')
						{
							lstAnalizador->Items->Add("\nArgumentos insuficientes para '" + operador + "'");
							Egramatical = true;
						}
					}
					if (!resultado.empty()) {
						A = A + resultado.top();
						resultado.pop();
					}
					else {
						if (!leeCaracter && !comparar && !solve && infijo[infijo.size() - 1] != '+' && infijo[infijo.size() - 1] != '-'
							&& infijo[infijo.size() - 1] != '*' && infijo[infijo.size() - 1] != '/')
						{
							lstAnalizador->Items->Add("\nArgumentos insuficientes para '" + operador + "'");
							Egramatical = true;
						}
					}
					String ^miID = gcnew String(identificador.c_str());
					if (t != 1 && !leeCaracter && !oRelacional)
						lstAnalizador->Items->Add("\nOperar: " + A + " " + miID + " " + B);
					if (identificador == "+") {
						A += B;
						resultado.push(A);
					}
					else if (identificador == "-") {
						A -= B;
						resultado.push(A);
					}
					else if (identificador == "*") {
						A *= B;
						resultado.push(A);
					}
					else if (identificador == "/") {
						if (B == 0)
						{
							if (t != 1 && !leeCaracter)
								lstAnalizador->Items->Add("\nERROR en Division por 0");
						}
						A /= B;
						resultado.push(A);
					}
					if (comparar)
					{
						if (identificador == "<")
						{
							lstAnalizador->Items->Add("Realizando la comparación...");
							valor = A < B ? true : false;
						}
						else if (identificador == "=")
						{
							lstAnalizador->Items->Add("Realizando la comparación...");
							valor = A == B ? true : false;
						}
						else if (identificador == ">")
						{
							lstAnalizador->Items->Add("Realizando la comparación...");
							valor = A > B ? true : false;
						}
					}
				}
			}
		}
	}
	else
	{
		lstAnalizador->Items->Add("¡Error en los signos de agrupación!");
		for (int i = 0; i < infijo.size(); i++)
		{
			switch (infijo[i])
			{
			case '(': lstAnalizador->Items->Add("\nUn paréntesis se abre en la posición: " + i); break;
			case ')': lstAnalizador->Items->Add("\nUn paréntesis se cierra en la posición: " + i); break;
			case '[': lstAnalizador->Items->Add("\nUn corchete se abre en la posición: " + i); break;
			case ']': lstAnalizador->Items->Add("\nUn corchete se cierra en la posición: " + i); break;
			case '{': lstAnalizador->Items->Add("\nUna llave se abre en la posición: " + i); break;
			case '}': lstAnalizador->Items->Add("\nUn llave se cierra en la posición: " + i); break;
			}
		}	
	}
	if (oRelacional && !Egramatical && cOperacional <= 1 && t != 1 && t != 2)
	{
		lstAnalizador->Items->Add("El resultado es: " + miExpresion);
		textBox1->Text = miExpresion;
		label3->Text = "¡Fórmula bien formada!";
		lstAnalizador->Items->Add("\nEsta cadena de caracteres cumple con las reglas de la gramática formal.");
		oRelacional = false;
		return;
	}
	if (!Egramatical && !solve)
	{
		if (comparar && !leeCaracter && cOperacional <= 1)
		{
			String ^v;
			if (valor) {
				v = "Verdadero";
			}
			else
				v = "Falso";

			lstAnalizador->Items->Add("El resultado es: " + v);
		}
		if (!resultado.empty() && t != 1 && t != 2 && !comparar && cOperacional <= 1)
		{
			if (!leeCaracter && !oRelacional)
				lstAnalizador->Items->Add("El resultado es: " + resultado.top());
			else if (leeCaracter)
			{
				lstAnalizador->Items->Add("El resultado es: " + miExpresion);
				textBox1->Text = miExpresion;
			}
			label3->Text = "¡Fórmula bien formada!";
			lstAnalizador->Items->Add("\nEsta cadena de caracteres cumple con las reglas de la gramática formal.");
			if (!leeCaracter)
				textBox1->Text = resultado.top().ToString();
		}
		else if ((!leeCaracter || t == 2 && t == 1) && !comparar && !oRelacional)
			textBox1->Text = "Error";
		else if ((leeCaracter || t == 2 && t == 1) && comparar)
			textBox1->Text = "Error";
		else if (cOperacional >= 2)
			textBox1->Text = "Error";
		if (((leeCaracter && t != 2) || comparar) && t != 1)
		{
			if (leeCaracter && !comparar && oRelacional)
			{
				label3->Text = "¡Fórmula bien formada!";
				textBox1->Text = miExpresion;
				lstAnalizador->Items->Add("El resultado es: " + miExpresion);
				lstAnalizador->Items->Add("\nEsta cadena de caracteres cumple con las reglas de la gramática formal.");
			}
			else if (leeCaracter && comparar)
			{
				lstAnalizador->Items->Add("El resultado es: " + miExpresion);
				label3->Text = "¡Fórmula bien formada!";
				textBox1->Text = miExpresion;
			}
			else if (!leeCaracter && comparar)
			{
				String ^v;
				if (valor) {
					v = "Verdadero";
				}
				else
					v = "Falso";

				label3->Text = "¡Fórmula bien formada!";
				textBox1->Text = v;
				lstAnalizador->Items->Add("\nEsta cadena de caracteres cumple con las reglas de la gramática formal.");
			}
		}
	}
	if (miExpresion->Length == 0)
		textBox1->Text = "";
	solve = false;
	comparar = false;
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	if (btnNumeros->Visible == true)
	{
		btnSignos->Visible = false;
		gbxSignos->Visible = false;
		gbxNumeros->Visible = false;
	}
	if (btnSignos->Visible == true)
	{
		btnNumeros->Visible = false;
		gbxNumeros->Visible = false;
		gbxSignos->Visible = false;
	}
	gbxVariables1->Visible = true;
}
private: System::Void btnU_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "u";
}
private: System::Void btnA_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "a";
}
private: System::Void btnB_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "b";
}
private: System::Void btnC_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "c";
}
private: System::Void btnD_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "d";
}
private: System::Void btnE_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "e";
}
private: System::Void btnF_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "f";
}
private: System::Void btnG_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "g";
}
private: System::Void btnH_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "h";
}
private: System::Void btnI_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "i";
}
private: System::Void btnJ_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "j";
}
private: System::Void btnK_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "k";
}
private: System::Void btnL_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "l";
}
private: System::Void btnM_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "m";
}
private: System::Void btnN_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "n";
}
private: System::Void btnO_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "o";
}
private: System::Void btnP_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "p";
}
private: System::Void btnQ_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "q";
}
private: System::Void btnR_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "r";
}
private: System::Void btnS_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "s";
}
private: System::Void btnT_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "t";
}
private: System::Void btnAdelanteVar_Click(System::Object^  sender, System::EventArgs^  e) {
	gbxVariables1->Visible = false;
	gbxVariables3->Visible = true;
}
private: System::Void btnV_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "v";
}
private: System::Void btnW_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "w";
}
private: System::Void btnX_Click_1(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "x";
}
private: System::Void btnY_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "y";
}
private: System::Void btnZ_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "z";
}
private: System::Void btnAtrasVar_Click(System::Object^  sender, System::EventArgs^  e) {
	gbxVariables1->Visible = true;
	gbxVariables3->Visible = false;
}
private: System::Void btnMayor_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + ">";
}
private: System::Void btmMenor_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "<";
}
private: System::Void btnMenoroIgual_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + "<=";
}
private: System::Void btmMayoroIgual_Click(System::Object^  sender, System::EventArgs^  e) {
	txtBox->Text = txtBox->Text + ">=";
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void solveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	lblSolve->Visible = true;
	solve = true;
	txtBox->Focus();
}
private: System::Void fileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void compareToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	comparar = true;
	lblComparar->Visible = true;
	txtBox->Focus();
}
};
}
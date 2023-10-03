#pragma once
#include "DetailPage.h"
#include "ViewDetails.h"
namespace RegistrationForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DetailPage
	/// </summary>
	public ref class DetailPage : public System::Windows::Forms::Form
	{
	public:
		DetailPage(void)
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
		~DetailPage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::Button^ btnGoNext;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbFirstName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbAge;
	private: System::Windows::Forms::TextBox^ tbEmail;


	private: System::Windows::Forms::TextBox^ tbLastName;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rdbAllergiesNo;
	private: System::Windows::Forms::RadioButton^ rdbAllergiesYes;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbSex;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbSymptoms;
	private: System::Windows::Forms::Button^ btnAddSymptom;
	private: System::Windows::Forms::Button^ btnAddAllergies;



	private: System::Windows::Forms::TextBox^ tbAllergies;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ userWarning;










































	protected:

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
			this->btnGoNext = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rdbAllergiesNo = (gcnew System::Windows::Forms::RadioButton());
			this->rdbAllergiesYes = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbSex = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->btnAddSymptom = (gcnew System::Windows::Forms::Button());
			this->btnAddAllergies = (gcnew System::Windows::Forms::Button());
			this->tbAllergies = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->userWarning = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnGoNext
			// 
			this->btnGoNext->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGoNext->Location = System::Drawing::Point(109, 446);
			this->btnGoNext->Name = L"btnGoNext";
			this->btnGoNext->Size = System::Drawing::Size(116, 40);
			this->btnGoNext->TabIndex = 19;
			this->btnGoNext->Text = L"Next";
			this->btnGoNext->UseVisualStyleBackColor = true;
			this->btnGoNext->Click += gcnew System::EventHandler(this, &DetailPage::btnGoNext_Click_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(75, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 21);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Patient Registration";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 21);
			this->label1->TabIndex = 20;
			this->label1->Text = L"First name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 21);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Last name";
			// 
			// tbFirstName
			// 
			this->tbFirstName->Location = System::Drawing::Point(131, 55);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(146, 20);
			this->tbFirstName->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 21);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Age";
			// 
			// tbAge
			// 
			this->tbAge->Location = System::Drawing::Point(131, 115);
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(146, 20);
			this->tbAge->TabIndex = 26;
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(131, 145);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(146, 20);
			this->tbEmail->TabIndex = 28;
			// 
			// tbLastName
			// 
			this->tbLastName->Location = System::Drawing::Point(131, 85);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(146, 20);
			this->tbLastName->TabIndex = 23;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rdbAllergiesNo);
			this->groupBox1->Controls->Add(this->rdbAllergiesYes);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(22, 261);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(255, 94);
			this->groupBox1->TabIndex = 24;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Allergies";
			// 
			// rdbAllergiesNo
			// 
			this->rdbAllergiesNo->AutoSize = true;
			this->rdbAllergiesNo->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdbAllergiesNo->Location = System::Drawing::Point(6, 55);
			this->rdbAllergiesNo->Name = L"rdbAllergiesNo";
			this->rdbAllergiesNo->Size = System::Drawing::Size(44, 21);
			this->rdbAllergiesNo->TabIndex = 1;
			this->rdbAllergiesNo->TabStop = true;
			this->rdbAllergiesNo->Text = L"No";
			this->rdbAllergiesNo->UseVisualStyleBackColor = true;
			// 
			// rdbAllergiesYes
			// 
			this->rdbAllergiesYes->AutoSize = true;
			this->rdbAllergiesYes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rdbAllergiesYes->Location = System::Drawing::Point(5, 28);
			this->rdbAllergiesYes->Name = L"rdbAllergiesYes";
			this->rdbAllergiesYes->Size = System::Drawing::Size(45, 21);
			this->rdbAllergiesYes->TabIndex = 0;
			this->rdbAllergiesYes->TabStop = true;
			this->rdbAllergiesYes->Text = L"Yes";
			this->rdbAllergiesYes->UseVisualStyleBackColor = true;
			this->rdbAllergiesYes->CheckedChanged += gcnew System::EventHandler(this, &DetailPage::rdbAllergiesYes_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 21);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Email";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 21);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Sex";
			// 
			// tbSex
			// 
			this->tbSex->Location = System::Drawing::Point(131, 175);
			this->tbSex->Name = L"tbSex";
			this->tbSex->Size = System::Drawing::Size(146, 20);
			this->tbSex->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 202);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 21);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Symptoms";
			// 
			// tbSymptoms
			// 
			this->tbSymptoms->Location = System::Drawing::Point(131, 205);
			this->tbSymptoms->Name = L"tbSymptoms";
			this->tbSymptoms->Size = System::Drawing::Size(146, 20);
			this->tbSymptoms->TabIndex = 34;
			// 
			// btnAddSymptom
			// 
			this->btnAddSymptom->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAddSymptom->Location = System::Drawing::Point(281, 205);
			this->btnAddSymptom->Name = L"btnAddSymptom";
			this->btnAddSymptom->Size = System::Drawing::Size(37, 20);
			this->btnAddSymptom->TabIndex = 35;
			this->btnAddSymptom->Text = L"Add";
			this->btnAddSymptom->UseVisualStyleBackColor = true;
			// 
			// btnAddAllergies
			// 
			this->btnAddAllergies->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAddAllergies->Enabled = false;
			this->btnAddAllergies->Location = System::Drawing::Point(281, 371);
			this->btnAddAllergies->Name = L"btnAddAllergies";
			this->btnAddAllergies->Size = System::Drawing::Size(37, 20);
			this->btnAddAllergies->TabIndex = 38;
			this->btnAddAllergies->Text = L"Add";
			this->btnAddAllergies->UseVisualStyleBackColor = true;
			// 
			// tbAllergies
			// 
			this->tbAllergies->Enabled = false;
			this->tbAllergies->Location = System::Drawing::Point(131, 371);
			this->tbAllergies->Name = L"tbAllergies";
			this->tbAllergies->Size = System::Drawing::Size(146, 20);
			this->tbAllergies->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(18, 368);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 21);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Allergies";
			// 
			// userWarning
			// 
			this->userWarning->AutoSize = true;
			this->userWarning->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userWarning->ForeColor = System::Drawing::Color::Red;
			this->userWarning->Location = System::Drawing::Point(19, 399);
			this->userWarning->Name = L"userWarning";
			this->userWarning->Size = System::Drawing::Size(84, 15);
			this->userWarning->TabIndex = 39;
			this->userWarning->Text = L"Get Well Soon!";
			this->userWarning->Visible = false;
			// 
			// DetailPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(323, 498);
			this->Controls->Add(this->userWarning);
			this->Controls->Add(this->btnAddAllergies);
			this->Controls->Add(this->tbAllergies);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->btnAddSymptom);
			this->Controls->Add(this->tbSymptoms);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbSex);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnGoNext);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Name = L"DetailPage";
			this->Text = L"DetailPage";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnGoNext_Click_1(System::Object^ sender, System::EventArgs^ e) {


	String^ firstName = tbFirstName->Text;
	String^ lastName = tbLastName->Text;
	String^ patientAge = tbAge->Text;
	String^ patientEmail = tbEmail->Text;
	String^ patientGender = tbSex->Text;
	String^ fullName = firstName + " " + lastName;
	String^ patientSymptoms = tbSymptoms->Text;
	String^ haveAllergies = "No";  // Declare the variable here

	if (rdbAllergiesYes->Checked) {
		haveAllergies = "Yes"; // Assign a value if 'Yes' is checked
		tbAllergies->Enabled = true;
		btnAddAllergies->Enabled = true;
	}
	else if (rdbAllergiesNo->Checked) {
		haveAllergies = "No"; // Assign a value if 'No' is checked
	}
	if (firstName != "" && patientAge != "" && patientGender != "") {
		this->Hide();
	ViewDetails^ userDetails = gcnew ViewDetails();
	userDetails->FullName = fullName;
	userDetails->PatientAge = patientAge;
	userDetails->PatientEmail = patientEmail;
	userDetails->PatientSex = patientGender;
	userDetails->HaveAllergies = haveAllergies; // Assign the value to userDetails

	userDetails->ShowDialog();
	}
	else {
		userWarning->Visible = true;
		userWarning->Text = "Please complete the form to proceed";
	}
}

private: System::Void rdbAllergiesYes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rdbAllergiesYes->Checked) {
		tbAllergies->Enabled = true;
		btnAddAllergies->Enabled = true;
	}
	else
	{
		tbAllergies->Enabled = false;
		btnAddAllergies->Enabled = false;
	}
}

};
}

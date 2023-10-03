#pragma once

namespace RegistrationForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewDetails
	/// </summary>
	public ref class ViewDetails : public System::Windows::Forms::Form
	{
	public:
		ViewDetails(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		property System::String^ FullName {
			System::String^ get() {
				return fullName;
			}
			void set(System::String^ value) {
				fullName = value;
				lbPatientName->Text = value;
				// You can update controls in the form with the received data if needed
			}
		}

		property System::String^ PatientAge {
			System::String^ get() {
				return patientAge;
			}
			void set(System::String^ value) {
				patientAge = value;
				lbPatientAge->Text = value;
				// You can update controls in the form with the received data if needed
			}
		}
		property System::String^ PatientEmail {
			System::String^ get() {
				return patientEmail;
			}
			void set(System::String^ value) {
				patientEmail = value;
				lbPatientEmail->Text = value;
				// You can update controls in the form with the received data if needed
			}
		}
		property System::String^ PatientSex {
			System::String^ get() {
				return patientSex;
			}
			void set(System::String^ value) {
				patientSex = value;
				lbPatientSex->Text = value;
				// You can update controls in the form with the received data if needed
			}
		}
		
		property System::String^ HaveAllergies {
			System::String^ get() {
				return haveAllergies;
			}
			void set(System::String^ value) {
				haveAllergies = value;
				lbHaveAllergies->Text = value;
				// You can update controls in the form with the received data if needed
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewDetails()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::String^ fullName;
		System::String^ patientAge;
		System::String^ patientEmail;
		System::String^ patientSex;
		System::String^ haveAllergies;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lbPatientName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbPatientAge;
	private: System::Windows::Forms::Label^ lbPatientEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbPatientSex;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lbHaveAllergies;

	private: System::Windows::Forms::Label^ justLabel;






























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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbPatientName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbPatientAge = (gcnew System::Windows::Forms::Label());
			this->lbPatientEmail = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbPatientSex = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lbHaveAllergies = (gcnew System::Windows::Forms::Label());
			this->justLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 21);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Patient\'s Name";
			// 
			// lbPatientName
			// 
			this->lbPatientName->AutoSize = true;
			this->lbPatientName->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPatientName->Location = System::Drawing::Point(12, 52);
			this->lbPatientName->Name = L"lbPatientName";
			this->lbPatientName->Size = System::Drawing::Size(108, 20);
			this->lbPatientName->TabIndex = 35;
			this->lbPatientName->Text = L"Patient\'s Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 21);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Patient\'s Age";
			// 
			// lbPatientAge
			// 
			this->lbPatientAge->AutoSize = true;
			this->lbPatientAge->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPatientAge->Location = System::Drawing::Point(12, 114);
			this->lbPatientAge->Name = L"lbPatientAge";
			this->lbPatientAge->Size = System::Drawing::Size(95, 20);
			this->lbPatientAge->TabIndex = 37;
			this->lbPatientAge->Text = L"Patient\'s Age";
			// 
			// lbPatientEmail
			// 
			this->lbPatientEmail->AutoSize = true;
			this->lbPatientEmail->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPatientEmail->Location = System::Drawing::Point(12, 176);
			this->lbPatientEmail->Name = L"lbPatientEmail";
			this->lbPatientEmail->Size = System::Drawing::Size(46, 20);
			this->lbPatientEmail->TabIndex = 41;
			this->lbPatientEmail->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 155);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 21);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Email";
			// 
			// lbPatientSex
			// 
			this->lbPatientSex->AutoSize = true;
			this->lbPatientSex->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPatientSex->Location = System::Drawing::Point(12, 238);
			this->lbPatientSex->Name = L"lbPatientSex";
			this->lbPatientSex->Size = System::Drawing::Size(32, 20);
			this->lbPatientSex->TabIndex = 45;
			this->lbPatientSex->Text = L"Sex";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 217);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 21);
			this->label8->TabIndex = 44;
			this->label8->Text = L"Sex";
			// 
			// lbHaveAllergies
			// 
			this->lbHaveAllergies->AutoSize = true;
			this->lbHaveAllergies->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHaveAllergies->Location = System::Drawing::Point(12, 300);
			this->lbHaveAllergies->Name = L"lbHaveAllergies";
			this->lbHaveAllergies->Size = System::Drawing::Size(67, 20);
			this->lbHaveAllergies->TabIndex = 49;
			this->lbHaveAllergies->Text = L"Allergies";
			// 
			// justLabel
			// 
			this->justLabel->AutoSize = true;
			this->justLabel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->justLabel->Location = System::Drawing::Point(12, 279);
			this->justLabel->Name = L"justLabel";
			this->justLabel->Size = System::Drawing::Size(111, 21);
			this->justLabel->TabIndex = 48;
			this->justLabel->Text = L"Any Allergies";
			// 
			// ViewDetails
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 498);
			this->Controls->Add(this->lbHaveAllergies);
			this->Controls->Add(this->justLabel);
			this->Controls->Add(this->lbPatientSex);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lbPatientEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lbPatientAge);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbPatientName);
			this->Controls->Add(this->label2);
			this->MinimumSize = System::Drawing::Size(339, 537);
			this->Name = L"ViewDetails";
			this->Text = L"ViewDetails";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


};
}

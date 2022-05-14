#pragma once
#include "UserData.h"
#include "Globals.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  ID;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::LinkLabel^  llsigup;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->llsigup = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// ID
			// 
			this->ID->Location = System::Drawing::Point(189, 118);
			this->ID->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(131, 24);
			this->ID->TabIndex = 2;
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(189, 167);
			this->pass->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(131, 24);
			this->pass->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(72, 233);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(203, 233);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(87, 28);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(14, 28);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(328, 47);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Log In";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llsigup
			// 
			this->llsigup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llsigup->LinkColor = System::Drawing::Color::Black;
			this->llsigup->Location = System::Drawing::Point(143, 281);
			this->llsigup->Name = L"llsigup";
			this->llsigup->Size = System::Drawing::Size(87, 28);
			this->llsigup->TabIndex = 7;
			this->llsigup->TabStop = true;
			this->llsigup->Text = L"Sign Up";
			this->llsigup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->llsigup->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(356, 320);
			this->Controls->Add(this->llsigup);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: UserData^ user = nullptr;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
			 String^ id = this->ID->Text;
			 String^ password = this->pass->Text;
			 if (id->Length == 0 || password->Length == 0) {
				 MessageBox::Show("Please enter ID and Password", "ID or Password Empty", MessageBoxButtons::OK);
				 return;
			 }
			 try {
				 String^ connString = "Data Source=DESKTOP-H5DN6T9;Initial Catalog=ChatApplication;Integrated Security=True";
				 SqlConnection sqlConn(connString);
				 sqlConn.Open();
				 String^ sqlQuery = "SELECT * FROM userr WHERE user_id=@id AND password_=@pass";
				 SqlCommand command(sqlQuery, % sqlConn);
				 command.Parameters->AddWithValue("@id", id);
				 command.Parameters->AddWithValue("@pass", password);

				 SqlDataReader^ reader = command.ExecuteReader();
				 if (reader->Read()) {
					 user = gcnew UserData;
					 user->UserId = reader->GetInt32(0);
					 user->Fname = reader->GetString(1);
					 user->Lname = reader->GetString(2);
					 user->MobileNum = reader->GetString(3);
					 user->password = reader->GetString(4);
					 user->desc_ = reader->GetString(5);
					 this->Close();
				 }
				 else {
					 MessageBox::Show("ID or Password is Incorrect", "ID or Password Error", MessageBoxButtons::OK);
				 }
			 }
			 catch (Exception^ e) {
				 MessageBox::Show("Failed to connect", "Database connection Error", MessageBoxButtons::OK);
			 }
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
public: bool switchToSignup = false;
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
	this->switchToSignup = true;
	this->Close();
}

};
}

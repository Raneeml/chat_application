#pragma once
#include "SqlRepo.h"
#include "UserData.h"
#include "SignUp.h"
#include "Globals.h"
#include "QueryFilter.h"
	


namespace Project3 {

	using namespace System;
	using namespace Globals;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Data::SqlClient;



	/// <summary>
	/// Summary for chatroom
	/// </summary>


	public ref class chatroom : public System::Windows::Forms::Form
	{



	public:

	
		chatroom(void)
		{	
	
			user = gcnew UserData();
			user = usersRepo->getItem(theUserID);
			ID = Globals::stdToCLI(to_string(user->UserId));
			fName = user->Fname;
			lName = user->Lname;
			desc = user->desc_;
			InitializeComponent();
			//
	


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		/// 

		~chatroom()
		{
			if (components)
			{
				delete components;
			}
		}






	private: UserData^ user;
	private:String^ ID;
	private:String^ fName;
	private:String^ lName;
	private:String^ desc;

	private: System::Windows::Forms::Panel^ pn_title_bar;
	protected:
	private: System::Windows::Forms::Button^ exit;
	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ pn_st_bar;

	private: System::Windows::Forms::ComboBox^ contacts;
	private: System::Windows::Forms::ComboBox^ story;



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ profile;
	private: System::Windows::Forms::Button^ DeleteChatRoom;


	private: System::Windows::Forms::Button^ AddChatRoom;
	private: System::Windows::Forms::Button^ chat;
	private: System::Windows::Forms::Panel^ pn_sphoto;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ add_chat;

	private: System::Windows::Forms::Panel^ pn_stext;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::Panel^ pn_shows;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ pn_chat;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pn_profile;

	private: System::Windows::Forms::Panel^ pn_new_contact;

	private: System::Windows::Forms::Panel^ pn_show_contact;

	private: System::Windows::Forms::Panel^ stories;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ pn_con;
	private: System::Windows::Forms::PictureBox^ profile_pic;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ description_label;
	private: System::Windows::Forms::TextBox^ fname_text;
	private: System::Windows::Forms::TextBox^ lname_text;
	private: System::Windows::Forms::TextBox^ id_text;
	private: System::Windows::Forms::Label^ fname_label;
	private: System::Windows::Forms::Label^ lname_label;
	private: System::Windows::Forms::Label^ ID_label;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Button^ change_photo_bu;
	private: System::Windows::Forms::OpenFileDialog^ ofd;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ deletee;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ edit;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ edit_delete;
	private: System::Windows::Forms::Button^ edit_delete2;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ choose;
	private: System::Windows::Forms::Button^ choose_;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Button^ Unselect;
	private: System::Windows::Forms::Button^ select;

	private: System::Windows::Forms::ListBox^ The_selected_membersers;
	private: System::Windows::Forms::Button^ button1;




























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 
		/// 






		void InitializeComponent(void)
		{
			


			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(chatroom::typeid));
			this->pn_title_bar = (gcnew System::Windows::Forms::Panel());
			this->chat = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->profile = (gcnew System::Windows::Forms::Button());
			this->story = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contacts = (gcnew System::Windows::Forms::ComboBox());
			this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
			this->DeleteChatRoom = (gcnew System::Windows::Forms::Button());
			this->AddChatRoom = (gcnew System::Windows::Forms::Button());
			this->pn_sphoto = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->add_chat = (gcnew System::Windows::Forms::Panel());
			this->The_selected_membersers = (gcnew System::Windows::Forms::ListBox());
			this->choose = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pn_stext = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pn_shows = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pn_chat = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pn_profile = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->change_photo_bu = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->description_label = (gcnew System::Windows::Forms::Label());
			this->fname_text = (gcnew System::Windows::Forms::TextBox());
			this->lname_text = (gcnew System::Windows::Forms::TextBox());
			this->id_text = (gcnew System::Windows::Forms::TextBox());
			this->fname_label = (gcnew System::Windows::Forms::Label());
			this->lname_label = (gcnew System::Windows::Forms::Label());
			this->ID_label = (gcnew System::Windows::Forms::Label());
			this->profile_pic = (gcnew System::Windows::Forms::PictureBox());
			this->pn_new_contact = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_show_contact = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->choose_ = (gcnew System::Windows::Forms::Button());
			this->edit_delete2 = (gcnew System::Windows::Forms::Button());
			this->edit_delete = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Unselect = (gcnew System::Windows::Forms::Button());
			this->select = (gcnew System::Windows::Forms::Button());
			this->deletee = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->stories = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pn_con = (gcnew System::Windows::Forms::Panel());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pn_title_bar->SuspendLayout();
			this->pn_nav_bar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pn_st_bar->SuspendLayout();
			this->pn_sphoto->SuspendLayout();
			this->add_chat->SuspendLayout();
			this->pn_stext->SuspendLayout();
			this->pn_shows->SuspendLayout();
			this->pn_chat->SuspendLayout();
			this->pn_profile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_pic))->BeginInit();
			this->pn_new_contact->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->pn_show_contact->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->stories->SuspendLayout();
			this->pn_con->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_title_bar
			// 
			this->pn_title_bar->Controls->Add(this->chat);
			this->pn_title_bar->Controls->Add(this->exit);
			this->pn_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_title_bar->Location = System::Drawing::Point(0, 0);
			this->pn_title_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_title_bar->Name = L"pn_title_bar";
			this->pn_title_bar->Size = System::Drawing::Size(827, 32);
			this->pn_title_bar->TabIndex = 1;
			// 
			// chat
			// 
			this->chat->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chat->Location = System::Drawing::Point(300, 0);
			this->chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chat->Name = L"chat";
			this->chat->Size = System::Drawing::Size(153, 32);
			this->chat->TabIndex = 1;
			this->chat->Text = L"Chat Room";
			this->chat->UseVisualStyleBackColor = true;
			this->chat->Click += gcnew System::EventHandler(this, &chatroom::chat_Click);
			// 
			// exit
			// 
			this->exit->AutoSize = true;
			this->exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit.BackgroundImage")));
			this->exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit->Dock = System::Windows::Forms::DockStyle::Left;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->exit->Location = System::Drawing::Point(0, 0);
			this->exit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(31, 32);
			this->exit->TabIndex = 0;
			this->exit->UseVisualStyleBackColor = true;
			this->exit->Click += gcnew System::EventHandler(this, &chatroom::exit_Click);
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pn_nav_bar->Controls->Add(this->pictureBox3);
			this->pn_nav_bar->Controls->Add(this->profile);
			this->pn_nav_bar->Controls->Add(this->story);
			this->pn_nav_bar->Controls->Add(this->pictureBox2);
			this->pn_nav_bar->Controls->Add(this->pictureBox1);
			this->pn_nav_bar->Controls->Add(this->contacts);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Right;
			this->pn_nav_bar->Location = System::Drawing::Point(722, 32);
			this->pn_nav_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(105, 559);
			this->pn_nav_bar->TabIndex = 2;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(4, 4);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(86, 80);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// profile
			// 
			this->profile->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profile->Location = System::Drawing::Point(0, 89);
			this->profile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profile->Name = L"profile";
			this->profile->Size = System::Drawing::Size(107, 29);
			this->profile->TabIndex = 4;
			this->profile->Text = L"My profile";
			this->profile->UseVisualStyleBackColor = true;
			this->profile->Click += gcnew System::EventHandler(this, &chatroom::profile_Click);
			// 
			// story
			// 
			this->story->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->story->FormattingEnabled = true;
			this->story->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"1- Story photo", L"2- Story text", L"3- show my story",
					L"4-show the stories"
			});
			this->story->Location = System::Drawing::Point(3, 355);
			this->story->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->story->Name = L"story";
			this->story->Size = System::Drawing::Size(90, 25);
			this->story->TabIndex = 3;
			this->story->Text = L"     story";
			this->story->SelectedIndexChanged += gcnew System::EventHandler(this, &chatroom::story_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(4, 269);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(89, 76);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(4, 145);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(89, 76);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// contacts
			// 
			this->contacts->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contacts->FormattingEnabled = true;
			this->contacts->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1-new contact", L"2-show my contacts" });
			this->contacts->Location = System::Drawing::Point(3, 227);
			this->contacts->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contacts->Name = L"contacts";
			this->contacts->Size = System::Drawing::Size(90, 25);
			this->contacts->TabIndex = 0;
			this->contacts->Text = L"contacts";
			this->contacts->SelectedIndexChanged += gcnew System::EventHandler(this, &chatroom::contacts_SelectedIndexChanged);
			// 
			// pn_st_bar
			// 
			this->pn_st_bar->Controls->Add(this->DeleteChatRoom);
			this->pn_st_bar->Controls->Add(this->AddChatRoom);
			this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_st_bar->Location = System::Drawing::Point(0, 542);
			this->pn_st_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_st_bar->Name = L"pn_st_bar";
			this->pn_st_bar->Size = System::Drawing::Size(722, 49);
			this->pn_st_bar->TabIndex = 3;
			// 
			// DeleteChatRoom
			// 
			this->DeleteChatRoom->Dock = System::Windows::Forms::DockStyle::Left;
			this->DeleteChatRoom->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteChatRoom->Location = System::Drawing::Point(0, 0);
			this->DeleteChatRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DeleteChatRoom->Name = L"DeleteChatRoom";
			this->DeleteChatRoom->Size = System::Drawing::Size(357, 49);
			this->DeleteChatRoom->TabIndex = 1;
			this->DeleteChatRoom->Text = L"Delete ChatRoom";
			this->DeleteChatRoom->UseVisualStyleBackColor = true;
			this->DeleteChatRoom->Visible = false;
			this->DeleteChatRoom->Click += gcnew System::EventHandler(this, &chatroom::DeleteChatRoom_Click);
			// 
			// AddChatRoom
			// 
			this->AddChatRoom->Dock = System::Windows::Forms::DockStyle::Right;
			this->AddChatRoom->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddChatRoom->Location = System::Drawing::Point(365, 0);
			this->AddChatRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddChatRoom->Name = L"AddChatRoom";
			this->AddChatRoom->Size = System::Drawing::Size(357, 49);
			this->AddChatRoom->TabIndex = 0;
			this->AddChatRoom->Text = L"Add ChatRoom";
			this->AddChatRoom->UseVisualStyleBackColor = true;
			this->AddChatRoom->Visible = false;
			this->AddChatRoom->Click += gcnew System::EventHandler(this, &chatroom::AddChatRoom_Click);
			// 
			// pn_sphoto
			// 
			this->pn_sphoto->Controls->Add(this->label4);
			this->pn_sphoto->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_sphoto->Location = System::Drawing::Point(0, 0);
			this->pn_sphoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_sphoto->Name = L"pn_sphoto";
			this->pn_sphoto->Size = System::Drawing::Size(722, 510);
			this->pn_sphoto->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(289, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 27);
			this->label4->TabIndex = 1;
			this->label4->Text = L"sphoto";
			// 
			// add_chat
			// 
			this->add_chat->Controls->Add(this->The_selected_membersers);
			this->add_chat->Controls->Add(this->choose);
			this->add_chat->Controls->Add(this->textBox6);
			this->add_chat->Controls->Add(this->comboBox1);
			this->add_chat->Controls->Add(this->label19);
			this->add_chat->Controls->Add(this->textBox5);
			this->add_chat->Controls->Add(this->label18);
			this->add_chat->Controls->Add(this->label17);
			this->add_chat->Controls->Add(this->label16);
			this->add_chat->Controls->Add(this->label2);
			this->add_chat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_chat->Location = System::Drawing::Point(0, 0);
			this->add_chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_chat->Name = L"add_chat";
			this->add_chat->Size = System::Drawing::Size(722, 510);
			this->add_chat->TabIndex = 7;
			this->add_chat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::add_chat_Paint);
			// 
			// The_selected_membersers
			// 
			this->The_selected_membersers->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->The_selected_membersers->FormattingEnabled = true;
			this->The_selected_membersers->ItemHeight = 19;
			this->The_selected_membersers->Location = System::Drawing::Point(261, 242);
			this->The_selected_membersers->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->The_selected_membersers->Name = L"The_selected_membersers";
			this->The_selected_membersers->ScrollAlwaysVisible = true;
			this->The_selected_membersers->Size = System::Drawing::Size(233, 80);
			this->The_selected_membersers->TabIndex = 9;
			this->The_selected_membersers->Visible = false;
			// 
			// choose
			// 
			this->choose->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choose->Location = System::Drawing::Point(261, 240);
			this->choose->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->choose->Name = L"choose";
			this->choose->Size = System::Drawing::Size(218, 29);
			this->choose->TabIndex = 8;
			this->choose->Text = L"Choose from your contacts";
			this->choose->UseVisualStyleBackColor = true;
			this->choose->Click += gcnew System::EventHandler(this, &chatroom::button1_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(261, 161);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(270, 20);
			this->textBox6->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1- one to one", L"2- Group" });
			this->comboBox1->Location = System::Drawing::Point(261, 207);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(270, 25);
			this->comboBox1->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(38, 205);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(167, 25);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Chatroom type :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(261, 112);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(270, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(34, 242);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(177, 25);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Group members :";
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label17->AutoSize = true;
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(34, 158);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(148, 25);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Chatroom ID :";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label16->AutoSize = true;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(34, 107);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(177, 25);
			this->label16->TabIndex = 1;
			this->label16->Text = L"Chatroom name :";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(249, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(241, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Add your new chatroom";
			// 
			// pn_stext
			// 
			this->pn_stext->Controls->Add(this->label3);
			this->pn_stext->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_stext->Location = System::Drawing::Point(0, 0);
			this->pn_stext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_stext->Name = L"pn_stext";
			this->pn_stext->Size = System::Drawing::Size(722, 510);
			this->pn_stext->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(289, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 27);
			this->label3->TabIndex = 1;
			this->label3->Text = L"stext";
			// 
			// pn_shows
			// 
			this->pn_shows->Controls->Add(this->label8);
			this->pn_shows->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_shows->Location = System::Drawing::Point(0, 0);
			this->pn_shows->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_shows->Name = L"pn_shows";
			this->pn_shows->Size = System::Drawing::Size(722, 510);
			this->pn_shows->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(289, 175);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(72, 27);
			this->label8->TabIndex = 1;
			this->label8->Text = L"shows";
			// 
			// pn_chat
			// 
			this->pn_chat->Controls->Add(this->label1);
			this->pn_chat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_chat->Location = System::Drawing::Point(0, 0);
			this->pn_chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_chat->Name = L"pn_chat";
			this->pn_chat->Size = System::Drawing::Size(722, 510);
			this->pn_chat->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(289, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"CHATROOM";
			// 
			// pn_profile
			// 
			this->pn_profile->Controls->Add(this->pictureBox4);
			this->pn_profile->Controls->Add(this->change_photo_bu);
			this->pn_profile->Controls->Add(this->richTextBox1);
			this->pn_profile->Controls->Add(this->description_label);
			this->pn_profile->Controls->Add(this->fname_text);
			this->pn_profile->Controls->Add(this->lname_text);
			this->pn_profile->Controls->Add(this->id_text);
			this->pn_profile->Controls->Add(this->fname_label);
			this->pn_profile->Controls->Add(this->lname_label);
			this->pn_profile->Controls->Add(this->ID_label);
			this->pn_profile->Controls->Add(this->profile_pic);
			this->pn_profile->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_profile->Location = System::Drawing::Point(0, 0);
			this->pn_profile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_profile->Name = L"pn_profile";
			this->pn_profile->Size = System::Drawing::Size(722, 510);
			this->pn_profile->TabIndex = 0;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(243, 207);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(49, 34);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// change_photo_bu
			// 
			this->change_photo_bu->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change_photo_bu->Location = System::Drawing::Point(302, 207);
			this->change_photo_bu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->change_photo_bu->Name = L"change_photo_bu";
			this->change_photo_bu->Size = System::Drawing::Size(215, 33);
			this->change_photo_bu->TabIndex = 9;
			this->change_photo_bu->Text = L"Change Photo";
			this->change_photo_bu->UseVisualStyleBackColor = true;
			this->change_photo_bu->Click += gcnew System::EventHandler(this, &chatroom::change_photo_bu_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(243, 408);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(335, 76);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = desc;
			// 
			// description_label
			// 
			this->description_label->AutoSize = true;
			this->description_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label->Location = System::Drawing::Point(44, 399);
			this->description_label->Name = L"description_label";
			this->description_label->Size = System::Drawing::Size(154, 27);
			this->description_label->TabIndex = 7;
			this->description_label->Text = L"Description :";
			// 
			// 

			// fname_text
			// 
			this->fname_text->Location = System::Drawing::Point(243, 315);
			this->fname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fname_text->Name = L"fname_text";
			this->fname_text->Size = System::Drawing::Size(274, 20);
			this->fname_text->TabIndex = 6;
			this->fname_text->Text = fName;
			this->fname_text->TextChanged += gcnew System::EventHandler(this, &chatroom::fname_text_TextChanged);
			// 
			// lname_text
			// 
			this->lname_text->Location = System::Drawing::Point(243, 361);
			this->lname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lname_text->Name = L"lname_text";
			this->lname_text->Text = lName;
			this->lname_text->Size = System::Drawing::Size(274, 20);
			this->lname_text->TabIndex = 5;
			// 
			// id_text
			// 
			this->id_text->Location = System::Drawing::Point(243, 270);
			this->id_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_text->Name = L"id_text";
			this->id_text->Text = ID;
			this->id_text->Size = System::Drawing::Size(274, 20);
			this->id_text->TabIndex = 4;
			this->id_text->TextChanged += gcnew System::EventHandler(this, &chatroom::id_text_TextChanged);
			// 
			// fname_label
			// 
			this->fname_label->AutoSize = true;
			this->fname_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname_label->Location = System::Drawing::Point(44, 307);
			this->fname_label->Name = L"fname_label";
			this->fname_label->Size = System::Drawing::Size(140, 27);
			this->fname_label->TabIndex = 3;
			this->fname_label->Text = L"First Name:";
			// 
			// lname_label
			// 
			this->lname_label->AutoSize = true;
			this->lname_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname_label->Location = System::Drawing::Point(44, 353);
			this->lname_label->Name = L"lname_label";
			this->lname_label->Size = System::Drawing::Size(136, 27);
			this->lname_label->TabIndex = 2;
			this->lname_label->Text = L"Last Name:";
			// 
			// ID_label
			// 
			this->ID_label->AutoSize = true;
			this->ID_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_label->Location = System::Drawing::Point(44, 262);
			this->ID_label->Name = L"ID_label";
			this->ID_label->Size = System::Drawing::Size(104, 27);
			this->ID_label->TabIndex = 1;
			this->ID_label->Text = L"User ID:";
			this->ID_label->Click += gcnew System::EventHandler(this, &chatroom::ID_label_Click);
			// 
			// profile_pic
			// 
			this->profile_pic->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->profile_pic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->profile_pic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->profile_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_pic.Image")));
			this->profile_pic->Location = System::Drawing::Point(246, 2);
			this->profile_pic->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profile_pic->Name = L"profile_pic";
			this->profile_pic->Size = System::Drawing::Size(274, 200);
			this->profile_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profile_pic->TabIndex = 0;
			this->profile_pic->TabStop = false;
			this->profile_pic->Click += gcnew System::EventHandler(this, &chatroom::profile_pic_Click);
			// 
			// pn_new_contact
			// 
			this->pn_new_contact->Controls->Add(this->button1);
			this->pn_new_contact->Controls->Add(this->label13);
			this->pn_new_contact->Controls->Add(this->textBox4);
			this->pn_new_contact->Controls->Add(this->textBox3);
			this->pn_new_contact->Controls->Add(this->textBox2);
			this->pn_new_contact->Controls->Add(this->textBox1);
			this->pn_new_contact->Controls->Add(this->label12);
			this->pn_new_contact->Controls->Add(this->label11);
			this->pn_new_contact->Controls->Add(this->label7);
			this->pn_new_contact->Controls->Add(this->label6);
			this->pn_new_contact->Controls->Add(this->pictureBox6);
			this->pn_new_contact->Controls->Add(this->pictureBox5);
			this->pn_new_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_new_contact->Location = System::Drawing::Point(0, 0);
			this->pn_new_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_new_contact->Name = L"pn_new_contact";
			this->pn_new_contact->Size = System::Drawing::Size(722, 510);
			this->pn_new_contact->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(303, 394);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 19);
			this->button1->TabIndex = 11;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chatroom::button1_Click_2);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(236, 30);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(306, 39);
			this->label13->TabIndex = 10;
			this->label13->Text = L"Add Your New Contact";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(294, 183);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(217, 20);
			this->textBox4->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(294, 242);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(217, 20);
			this->textBox3->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(294, 314);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(217, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(294, 116);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(217, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(147, 238);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(50, 26);
			this->label12->TabIndex = 5;
			this->label12->Text = L"ID :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(123, 308);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(153, 26);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Phone Number :";
			this->label11->Click += gcnew System::EventHandler(this, &chatroom::label11_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(147, 175);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(120, 26);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Last Name :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(147, 112);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 26);
			this->label6->TabIndex = 2;
			this->label6->Text = L"First Name :";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(21, 292);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(83, 70);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(21, 117);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(92, 85);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// pn_show_contact
			// 
			this->pn_show_contact->Controls->Add(this->flowLayoutPanel1);
			this->pn_show_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_show_contact->Location = System::Drawing::Point(0, 0);
			this->pn_show_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_show_contact->Name = L"pn_show_contact";
			this->pn_show_contact->Size = System::Drawing::Size(722, 510);
			this->pn_show_contact->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(722, 510);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->choose_);
			this->panel1->Controls->Add(this->edit_delete2);
			this->panel1->Controls->Add(this->edit_delete);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(715, 41);
			this->panel1->TabIndex = 0;
			// 
			// choose_
			// 
			this->choose_->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choose_->Location = System::Drawing::Point(525, 5);
			this->choose_->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->choose_->Name = L"choose_";
			this->choose_->Size = System::Drawing::Size(171, 28);
			this->choose_->TabIndex = 3;
			this->choose_->Text = L"Add_to my chatroom";
			this->choose_->UseVisualStyleBackColor = true;
			this->choose_->Visible = false;
			this->choose_->Click += gcnew System::EventHandler(this, &chatroom::choose__Click);
			// 
			// edit_delete2
			// 
			this->edit_delete2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_delete2->Location = System::Drawing::Point(592, 5);
			this->edit_delete2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_delete2->Name = L"edit_delete2";
			this->edit_delete2->Size = System::Drawing::Size(105, 28);
			this->edit_delete2->TabIndex = 2;
			this->edit_delete2->Text = L"Edit & Delete";
			this->edit_delete2->UseVisualStyleBackColor = true;
			this->edit_delete2->Visible = false;
			this->edit_delete2->Click += gcnew System::EventHandler(this, &chatroom::edit_delete2_Click);
			// 
			// edit_delete
			// 
			this->edit_delete->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_delete->Location = System::Drawing::Point(592, 5);
			this->edit_delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_delete->Name = L"edit_delete";
			this->edit_delete->Size = System::Drawing::Size(105, 28);
			this->edit_delete->TabIndex = 1;
			this->edit_delete->Text = L"Edit & Delete";
			this->edit_delete->UseVisualStyleBackColor = true;
			this->edit_delete->Click += gcnew System::EventHandler(this, &chatroom::edit_delete_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(49, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 27);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Your contacts";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->Unselect);
			this->panel2->Controls->Add(this->select);
			this->panel2->Controls->Add(this->deletee);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->edit);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(3, 47);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(715, 63);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::panel2_Paint);
			// 
			// Unselect
			// 
			this->Unselect->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect->Location = System::Drawing::Point(614, 15);
			this->Unselect->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect->Name = L"Unselect";
			this->Unselect->Size = System::Drawing::Size(97, 28);
			this->Unselect->TabIndex = 6;
			this->Unselect->Text = L"Unselect";
			this->Unselect->UseVisualStyleBackColor = true;
			this->Unselect->Visible = false;
			this->Unselect->Click += gcnew System::EventHandler(this, &chatroom::Unselect_Click);
			// 
			// select
			// 
			this->select->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select->Location = System::Drawing::Point(513, 13);
			this->select->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select->Name = L"select";
			this->select->Size = System::Drawing::Size(76, 31);
			this->select->TabIndex = 5;
			this->select->Text = L"select";
			this->select->UseVisualStyleBackColor = true;
			this->select->Visible = false;
			this->select->Click += gcnew System::EventHandler(this, &chatroom::select_Click);
			// 
			// deletee
			// 
			this->deletee->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletee->Location = System::Drawing::Point(614, 15);
			this->deletee->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deletee->Name = L"deletee";
			this->deletee->Size = System::Drawing::Size(82, 27);
			this->deletee->TabIndex = 3;
			this->deletee->Text = L"Delete";
			this->deletee->UseVisualStyleBackColor = true;
			this->deletee->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(110, 9);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(95, 19);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Last Name";
			// 
			// checkBox1
			// 
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(321, 21);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(17, 14);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox1_CheckedChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(31, 41);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(98, 17);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Phonr Number";
			// 
			// edit
			// 
			this->edit->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit->Location = System::Drawing::Point(513, 15);
			this->edit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(75, 27);
			this->edit->TabIndex = 2;
			this->edit->Text = L"Edit";
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Visible = false;
			this->edit->Click += gcnew System::EventHandler(this, &chatroom::button1_Click);
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 8);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 19);
			this->label9->TabIndex = 0;
			this->label9->Text = L"First Name";
			// 
			// stories
			// 
			this->stories->Controls->Add(this->label10);
			this->stories->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stories->Location = System::Drawing::Point(0, 0);
			this->stories->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stories->Name = L"stories";
			this->stories->Size = System::Drawing::Size(722, 510);
			this->stories->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(297, 183);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(133, 27);
			this->label10->TabIndex = 1;
			this->label10->Text = L"show stories";
			// 
			// pn_con
			// 
			this->pn_con->Controls->Add(this->pn_profile);
			this->pn_con->Controls->Add(this->pn_new_contact);
			this->pn_con->Controls->Add(this->pn_show_contact);
			this->pn_con->Controls->Add(this->pn_shows);
			this->pn_con->Controls->Add(this->pn_chat);
			this->pn_con->Controls->Add(this->add_chat);
			this->pn_con->Controls->Add(this->stories);
			this->pn_con->Controls->Add(this->pn_stext);
			this->pn_con->Controls->Add(this->pn_sphoto);
			this->pn_con->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con->Location = System::Drawing::Point(0, 32);
			this->pn_con->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_con->Name = L"pn_con";
			this->pn_con->Size = System::Drawing::Size(722, 510);
			this->pn_con->TabIndex = 4;
			// 
			// ofd
			// 
			this->ofd->FileName = L"openFileDialog1";
			// 
			// chatroom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(827, 591);
			this->Controls->Add(this->pn_con);
			this->Controls->Add(this->pn_st_bar);
			this->Controls->Add(this->pn_nav_bar);
			this->Controls->Add(this->pn_title_bar);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"chatroom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"chatroom";
			this->pn_title_bar->ResumeLayout(false);
			this->pn_title_bar->PerformLayout();
			this->pn_nav_bar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pn_st_bar->ResumeLayout(false);
			this->pn_sphoto->ResumeLayout(false);
			this->pn_sphoto->PerformLayout();
			this->add_chat->ResumeLayout(false);
			this->add_chat->PerformLayout();
			this->pn_stext->ResumeLayout(false);
			this->pn_stext->PerformLayout();
			this->pn_shows->ResumeLayout(false);
			this->pn_shows->PerformLayout();
			this->pn_chat->ResumeLayout(false);
			this->pn_chat->PerformLayout();
			this->pn_profile->ResumeLayout(false);
			this->pn_profile->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_pic))->EndInit();
			this->pn_new_contact->ResumeLayout(false);
			this->pn_new_contact->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->pn_show_contact->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->stories->ResumeLayout(false);
			this->stories->PerformLayout();
			this->pn_con->ResumeLayout(false);
			this->ResumeLayout(false);




			//UserData^ user= gcnew UserData();
			//user = usersRepo->getItem(theUserID);
			//int ID = user->UserId;
			//String^ fName = user->Fname;
			//String^ lName = user->Lname;
			//String^ description =user->desc_;

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void profile_Click(System::Object^ sender, System::EventArgs^ e) {
		AddChatRoom->Visible = false;
		DeleteChatRoom->Visible = false;
		pn_profile->BringToFront();
	}
	private: System::Void contacts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (contacts->SelectedIndex == 1) {
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			pn_show_contact->BringToFront();
		}
		else {
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			pn_new_contact->BringToFront();
		}
	}
	private: System::Void chat_Click(System::Object^ sender, System::EventArgs^ e) {
		AddChatRoom->Visible = true;
		DeleteChatRoom->Visible = true;
		pn_chat->BringToFront();
	}
	private: System::Void DeleteChatRoom_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void AddChatRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		add_chat->BringToFront();
	}

	private: System::Void delete_chat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void add_chat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void story_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (story->SelectedIndex == 0)
		{
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			pn_sphoto->BringToFront();
		}
		else if (story->SelectedIndex == 1)
		{
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			pn_stext->BringToFront();
		}
		else if (story->SelectedIndex == 2)
		{
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			pn_shows->BringToFront();
		}
		else
		{
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			stories->BringToFront();
		}



	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void change_photo_bu_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			profile_pic->ImageLocation = ofd->FileName;
			profile_pic->Image = System::Drawing::Image::FromFile(ofd->FileName);
		}
	}
	private: System::Void profile_pic_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ofd_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void edit_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		deletee->Visible = true;
		edit->Visible = true;
		edit_delete->Visible = false;
		edit_delete2->Visible = true;
	}
	private: System::Void edit_delete2_Click(System::Object^ sender, System::EventArgs^ e) {
		edit_delete2->Visible = false;
		edit_delete->Visible = true;
		deletee->Visible = false;
		edit->Visible = false;
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		edit_delete->Visible = false;
		choose_->Visible = true;
		select->Visible = true;
		Unselect->Visible = true;
		checkBox1->Visible = true;
		pn_show_contact->BringToFront();
	}
	private: System::Void choose__Click(System::Object^ sender, System::EventArgs^ e) {
		add_chat->BringToFront();
		The_selected_membersers->Visible = true;
		choose_->Visible = false;
		edit_delete->Visible = true;
		choose->Visible = false;
		select->Visible = false;
		Unselect->Visible = false;
		checkBox1->Visible = false;

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void select_Click(System::Object^ sender, System::EventArgs^ e) {
		checkBox1->Checked = true;
		The_selected_membersers->Items->Insert(0, label9->Text + " " + label15->Text);
	}
	private: System::Void Unselect_Click(System::Object^ sender, System::EventArgs^ e) {
		checkBox1->Checked = false;
		The_selected_membersers->Items->RemoveAt(0);
	}
	private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void id_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void ID_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fname_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   
};
}

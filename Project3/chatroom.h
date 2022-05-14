#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for chatroom
	/// </summary>


	public ref class chatroom : public System::Windows::Forms::Form
	{
	public:
		chatroom(void)
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
		~chatroom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pn_title_bar;
	protected:
	private: System::Windows::Forms::Button^  exit;
	private: System::Windows::Forms::Panel^  pn_nav_bar;
	private: System::Windows::Forms::Panel^  pn_st_bar;

	private: System::Windows::Forms::ComboBox^  contacts;
	private: System::Windows::Forms::ComboBox^  story;



	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  profile;
	private: System::Windows::Forms::Button^  DeleteChatRoom;


	private: System::Windows::Forms::Button^  AddChatRoom;
	private: System::Windows::Forms::Button^  chat;
	private: System::Windows::Forms::Panel^  pn_sphoto;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  add_chat;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  pn_stext;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  delete_chat;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  pn_shows;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  pn_chat;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  pn_profile;

	private: System::Windows::Forms::Panel^  pn_new_contact;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  pn_show_contact;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Panel^  stories;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Panel^  pn_con;
	private: System::Windows::Forms::PictureBox^  profile_pic;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  description_label;
	private: System::Windows::Forms::TextBox^  fname_text;
	private: System::Windows::Forms::TextBox^  lname_text;
	private: System::Windows::Forms::TextBox^  id_text;
	private: System::Windows::Forms::Label^  fname_label;
	private: System::Windows::Forms::Label^  lname_label;
	private: System::Windows::Forms::Label^  ID_label;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  change_photo_bu;
	private: System::Windows::Forms::OpenFileDialog^  ofd;


























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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pn_stext = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->delete_chat = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pn_show_contact = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			this->delete_chat->SuspendLayout();
			this->pn_shows->SuspendLayout();
			this->pn_chat->SuspendLayout();
			this->pn_profile->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_pic))->BeginInit();
			this->pn_new_contact->SuspendLayout();
			this->pn_show_contact->SuspendLayout();
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
			this->pn_nav_bar->Controls->Add(this->pictureBox3);
			this->pn_nav_bar->Controls->Add(this->profile);
			this->pn_nav_bar->Controls->Add(this->story);
			this->pn_nav_bar->Controls->Add(this->pictureBox2);
			this->pn_nav_bar->Controls->Add(this->pictureBox1);
			this->pn_nav_bar->Controls->Add(this->contacts);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Right;
			this->pn_nav_bar->Location = System::Drawing::Point(717, 32);
			this->pn_nav_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(110, 559);
			this->pn_nav_bar->TabIndex = 2;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(10, 5);
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
			this->story->Location = System::Drawing::Point(10, 353);
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
			this->pictureBox2->Location = System::Drawing::Point(10, 271);
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
			this->pictureBox1->Location = System::Drawing::Point(10, 145);
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
			this->contacts->Location = System::Drawing::Point(10, 227);
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
			this->pn_st_bar->Size = System::Drawing::Size(717, 49);
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
			this->DeleteChatRoom->Click += gcnew System::EventHandler(this, &chatroom::DeleteChatRoom_Click);
			// 
			// AddChatRoom
			// 
			this->AddChatRoom->Dock = System::Windows::Forms::DockStyle::Right;
			this->AddChatRoom->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddChatRoom->Location = System::Drawing::Point(360, 0);
			this->AddChatRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddChatRoom->Name = L"AddChatRoom";
			this->AddChatRoom->Size = System::Drawing::Size(357, 49);
			this->AddChatRoom->TabIndex = 0;
			this->AddChatRoom->Text = L"Add ChatRoom";
			this->AddChatRoom->UseVisualStyleBackColor = true;
			this->AddChatRoom->Click += gcnew System::EventHandler(this, &chatroom::AddChatRoom_Click);
			// 
			// pn_sphoto
			// 
			this->pn_sphoto->Controls->Add(this->label4);
			this->pn_sphoto->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_sphoto->Location = System::Drawing::Point(0, 0);
			this->pn_sphoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_sphoto->Name = L"pn_sphoto";
			this->pn_sphoto->Size = System::Drawing::Size(717, 510);
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
			this->add_chat->Controls->Add(this->label2);
			this->add_chat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_chat->Location = System::Drawing::Point(0, 0);
			this->add_chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_chat->Name = L"add_chat";
			this->add_chat->Size = System::Drawing::Size(717, 510);
			this->add_chat->TabIndex = 7;
			this->add_chat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::add_chat_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(289, 175);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"add chat room";
			// 
			// pn_stext
			// 
			this->pn_stext->Controls->Add(this->label3);
			this->pn_stext->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_stext->Location = System::Drawing::Point(0, 0);
			this->pn_stext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_stext->Name = L"pn_stext";
			this->pn_stext->Size = System::Drawing::Size(717, 510);
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
			// delete_chat
			// 
			this->delete_chat->Controls->Add(this->label9);
			this->delete_chat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->delete_chat->Location = System::Drawing::Point(0, 0);
			this->delete_chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->delete_chat->Name = L"delete_chat";
			this->delete_chat->Size = System::Drawing::Size(717, 510);
			this->delete_chat->TabIndex = 8;
			this->delete_chat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::delete_chat_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(289, 175);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 27);
			this->label9->TabIndex = 1;
			this->label9->Text = L"delete_chat";
			// 
			// pn_shows
			// 
			this->pn_shows->Controls->Add(this->label8);
			this->pn_shows->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_shows->Location = System::Drawing::Point(0, 0);
			this->pn_shows->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_shows->Name = L"pn_shows";
			this->pn_shows->Size = System::Drawing::Size(717, 510);
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
			this->pn_chat->Size = System::Drawing::Size(717, 510);
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
			this->pn_profile->Size = System::Drawing::Size(717, 510);
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
			this->richTextBox1->Text = L"";
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
			// fname_text
			// 
			this->fname_text->Location = System::Drawing::Point(243, 315);
			this->fname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fname_text->Name = L"fname_text";
			this->fname_text->Size = System::Drawing::Size(274, 20);
			this->fname_text->TabIndex = 6;
			this->fname_text->TextChanged += gcnew System::EventHandler(this, &chatroom::fname_text_TextChanged);
			// 
			// lname_text
			// 
			this->lname_text->Location = System::Drawing::Point(243, 361);
			this->lname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lname_text->Name = L"lname_text";
			this->lname_text->Size = System::Drawing::Size(274, 20);
			this->lname_text->TabIndex = 5;
			// 
			// id_text
			// 
			this->id_text->Location = System::Drawing::Point(243, 270);
			this->id_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_text->Name = L"id_text";
			this->id_text->Size = System::Drawing::Size(274, 20);
			this->id_text->TabIndex = 4;
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
			// 
			// profile_pic
			// 
			this->profile_pic->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->profile_pic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->profile_pic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->profile_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_pic.Image")));
			this->profile_pic->Location = System::Drawing::Point(243, 2);
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
			this->pn_new_contact->Controls->Add(this->label6);
			this->pn_new_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_new_contact->Location = System::Drawing::Point(0, 0);
			this->pn_new_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_new_contact->Name = L"pn_new_contact";
			this->pn_new_contact->Size = System::Drawing::Size(717, 510);
			this->pn_new_contact->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(289, 175);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 27);
			this->label6->TabIndex = 1;
			this->label6->Text = L"new contact";
			// 
			// pn_show_contact
			// 
			this->pn_show_contact->Controls->Add(this->label5);
			this->pn_show_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_show_contact->Location = System::Drawing::Point(0, 0);
			this->pn_show_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_show_contact->Name = L"pn_show_contact";
			this->pn_show_contact->Size = System::Drawing::Size(717, 510);
			this->pn_show_contact->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(289, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 27);
			this->label5->TabIndex = 1;
			this->label5->Text = L"show contact";
			// 
			// stories
			// 
			this->stories->Controls->Add(this->label10);
			this->stories->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stories->Location = System::Drawing::Point(0, 0);
			this->stories->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stories->Name = L"stories";
			this->stories->Size = System::Drawing::Size(717, 510);
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
			this->pn_con->Controls->Add(this->stories);
			this->pn_con->Controls->Add(this->pn_show_contact);
			this->pn_con->Controls->Add(this->pn_new_contact);
			this->pn_con->Controls->Add(this->pn_chat);
			this->pn_con->Controls->Add(this->pn_shows);
			this->pn_con->Controls->Add(this->delete_chat);
			this->pn_con->Controls->Add(this->pn_stext);
			this->pn_con->Controls->Add(this->add_chat);
			this->pn_con->Controls->Add(this->pn_sphoto);
			this->pn_con->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con->Location = System::Drawing::Point(0, 32);
			this->pn_con->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_con->Name = L"pn_con";
			this->pn_con->Size = System::Drawing::Size(717, 510);
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
			this->delete_chat->ResumeLayout(false);
			this->delete_chat->PerformLayout();
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
			this->pn_show_contact->ResumeLayout(false);
			this->pn_show_contact->PerformLayout();
			this->stories->ResumeLayout(false);
			this->stories->PerformLayout();
			this->pn_con->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void profile_Click(System::Object^  sender, System::EventArgs^  e) {
	pn_profile->BringToFront();
}
private: System::Void contacts_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (contacts->SelectedIndex == 1)
		pn_show_contact->BringToFront();
	else
		pn_new_contact->BringToFront();

}
private: System::Void chat_Click(System::Object^  sender, System::EventArgs^  e) {
	pn_chat->BringToFront();
}
private: System::Void DeleteChatRoom_Click(System::Object^  sender, System::EventArgs^  e) {
	delete_chat->BringToFront();
}
private: System::Void AddChatRoom_Click(System::Object^  sender, System::EventArgs^  e) {
	add_chat->BringToFront();
}

private: System::Void delete_chat_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void add_chat_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void story_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (story->SelectedIndex == 0)
		pn_sphoto->BringToFront();
	else if(story->SelectedIndex == 1)
		pn_stext->BringToFront();
	else if (story->SelectedIndex == 2)
		pn_shows->BringToFront();
	else 
		stories->BringToFront();



}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void change_photo_bu_Click(System::Object^  sender, System::EventArgs^  e) {
	ofd->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
	if (ofd->ShowDialog() == System::Windows::Forms:: DialogResult::OK)
	{
		profile_pic->ImageLocation = ofd->FileName;
		profile_pic->Image = System::Drawing::Image::FromFile(ofd->FileName);
	}
}
private: System::Void profile_pic_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ofd_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void fname_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
};
}


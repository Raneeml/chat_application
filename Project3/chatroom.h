#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for chatroom
	/// </summary>


	public ref class chatroom : public System::Windows::Forms::Form
	{
	private:
		List<Button^>Unselect;
		List<Button^>select;
		List<Button^>Delete;
		List<Button^>edit;
		List<Label^>lname;
		List<Label^>fname;
		List<Label^>phone;
		List<CheckBox^>checkBox;
		List<Panel^>panel;

		List<Label^> L_chatrooms;
		List<PictureBox^> P_chatrooms;
		List<Panel^> Pn_chatrooms;
		List<Panel^> Pn_messages;
		List<CheckBox^> Ch_chatrooms;

	private: System::Windows::Forms::Label^ edit_label;
	private: System::Windows::Forms::Button^ edit_contact;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::CheckBox^ checkBox21;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Panel^ panel23;

	private: System::Windows::Forms::CheckBox^ checkBox22;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::CheckBox^ checkBox23;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::CheckBox^ checkBox24;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::CheckBox^ checkBox25;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::CheckBox^ checkBox26;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::CheckBox^ checkBox27;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::CheckBox^ checkBox28;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::Panel^ pn_chatroom;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ ADD;
		   List<Panel^>panelf;
	public:
		chatroom(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Unselect.Add(Unselect1); Unselect.Add(Unselect2); Unselect.Add(Unselect3); Unselect.Add(Unselect4);
			Unselect.Add(Unselect5); Unselect.Add(Unselect6); Unselect.Add(Unselect7); Unselect.Add(Unselect8);
			Unselect.Add(Unselect9); Unselect.Add(Unselect10); Unselect.Add(Unselect11); Unselect.Add(Unselect12);
			Unselect.Add(Unselect13); Unselect.Add(Unselect14); Unselect.Add(Unselect15); Unselect.Add(Unselect16);
			Unselect.Add(Unselect17); Unselect.Add(Unselect18); Unselect.Add(Unselect19); Unselect.Add(Unselect20);

			select.Add(select1); select.Add(select2); select.Add(select3); select.Add(select4);
			select.Add(select5); select.Add(select6); select.Add(select7); select.Add(select8);
			select.Add(select9); select.Add(select10); select.Add(select11); select.Add(select12);
			select.Add(select13); select.Add(select14); select.Add(select15); select.Add(select16);
			select.Add(select17); select.Add(select18); select.Add(select19); select.Add(select20);

			Delete.Add(Delete1); Delete.Add(Delete2); Delete.Add(Delete3); Delete.Add(Delete4);
			Delete.Add(Delete5); Delete.Add(Delete6); Delete.Add(Delete7); Delete.Add(Delete8);
			Delete.Add(Delete9); Delete.Add(Delete10); Delete.Add(Delete11); Delete.Add(Delete12);
			Delete.Add(Delete13); Delete.Add(Delete14); Delete.Add(Delete15); Delete.Add(Delete16);
			Delete.Add(Delete17); Delete.Add(Delete18); Delete.Add(Delete19); Delete.Add(Delete20);

			edit.Add(edit1); edit.Add(edit2); edit.Add(edit3); edit.Add(edit4);
			edit.Add(edit5); edit.Add(edit6); edit.Add(edit7); edit.Add(edit8);
			edit.Add(edit9); edit.Add(edit10); edit.Add(edit11); edit.Add(edit12);
			edit.Add(edit13); edit.Add(edit14); edit.Add(edit15); edit.Add(edit16);
			edit.Add(edit17); edit.Add(edit18); edit.Add(edit19); edit.Add(edit20);

			lname.Add(lname1); lname.Add(lname2); lname.Add(lname3); lname.Add(lname4);
			lname.Add(lname5); lname.Add(lname6); lname.Add(lname7); lname.Add(lname8);
			lname.Add(lname9); lname.Add(lname10); lname.Add(lname11); lname.Add(lname12);
			lname.Add(lname13); lname.Add(lname14); lname.Add(lname15); lname.Add(lname16);
			lname.Add(lname17); lname.Add(lname18); lname.Add(lname19); lname.Add(lname20);


			fname.Add(fname1); fname.Add(fname2); fname.Add(fname3); fname.Add(fname4);
			fname.Add(fname5); fname.Add(fname6); fname.Add(fname7); fname.Add(fname8);
			fname.Add(fname9); fname.Add(fname10); fname.Add(fname11); fname.Add(fname12);
			fname.Add(fname13); fname.Add(fname14); fname.Add(fname15); fname.Add(fname16);
			fname.Add(fname17); fname.Add(fname18); fname.Add(fname19); fname.Add(fname20);

			phone.Add(phone1); phone.Add(phone2); phone.Add(phone3); phone.Add(phone4);
			phone.Add(phone5); phone.Add(phone6); phone.Add(phone7); phone.Add(phone8);
			phone.Add(phone9); phone.Add(phone10); phone.Add(phone11); phone.Add(phone12);
			phone.Add(phone13); phone.Add(phone14); phone.Add(phone15); phone.Add(phone16);
			phone.Add(phone17); phone.Add(phone18); phone.Add(phone19); phone.Add(phone20);

			checkBox.Add(checkBox1); checkBox.Add(checkBox2); checkBox.Add(checkBox3); checkBox.Add(checkBox4);
			checkBox.Add(checkBox5); checkBox.Add(checkBox6); checkBox.Add(checkBox7); checkBox.Add(checkBox8);
			checkBox.Add(checkBox9); checkBox.Add(checkBox10); checkBox.Add(checkBox11); checkBox.Add(checkBox12);
			checkBox.Add(checkBox13); checkBox.Add(checkBox14); checkBox.Add(checkBox15); checkBox.Add(checkBox16);
			checkBox.Add(checkBox17); checkBox.Add(checkBox18); checkBox.Add(checkBox19); checkBox.Add(checkBox20);

			panel.Add(panel2); panel.Add(panel3); panel.Add(panel4); panel.Add(panel5);
			panel.Add(panel6); panel.Add(panel7); panel.Add(panel8); panel.Add(panel9);
			panel.Add(panel10); panel.Add(panel11); panel.Add(panel12); panel.Add(panel13);
			panel.Add(panel14); panel.Add(panel15); panel.Add(panel16); panel.Add(panel17);
			panel.Add(panel18); panel.Add(panel19); panel.Add(panel20); panel.Add(panel21);

			L_chatrooms.Add(label21); L_chatrooms.Add(label22); L_chatrooms.Add(label23); L_chatrooms.Add(label24);
			L_chatrooms.Add(label25); L_chatrooms.Add(label26); L_chatrooms.Add(label27); L_chatrooms.Add(label28);
			L_chatrooms.Add(label29); L_chatrooms.Add(label30); L_chatrooms.Add(label31); L_chatrooms.Add(label32);
			L_chatrooms.Add(label33); L_chatrooms.Add(label34); L_chatrooms.Add(label35); L_chatrooms.Add(label36);
			L_chatrooms.Add(label37); L_chatrooms.Add(label38); L_chatrooms.Add(label39); L_chatrooms.Add(label40);
			L_chatrooms.Add(label41); L_chatrooms.Add(label42);	L_chatrooms.Add(label43); L_chatrooms.Add(label44);

			P_chatrooms.Add(pictureBox11); P_chatrooms.Add(pictureBox12); P_chatrooms.Add(pictureBox13);
			P_chatrooms.Add(pictureBox14); P_chatrooms.Add(pictureBox15); P_chatrooms.Add(pictureBox16);
			P_chatrooms.Add(pictureBox17); P_chatrooms.Add(pictureBox18);

			Pn_chatrooms.Add(panel22); Pn_chatrooms.Add(panel23); Pn_chatrooms.Add(panel24); Pn_chatrooms.Add(panel25);
			Pn_chatrooms.Add(panel26); Pn_chatrooms.Add(panel27); Pn_chatrooms.Add(panel28); Pn_chatrooms.Add(panel29);

			Ch_chatrooms.Add(checkBox21); Ch_chatrooms.Add(checkBox22); Ch_chatrooms.Add(checkBox23);
			Ch_chatrooms.Add(checkBox24); Ch_chatrooms.Add(checkBox25); Ch_chatrooms.Add(checkBox26);
			Ch_chatrooms.Add(checkBox27); Ch_chatrooms.Add(checkBox28);

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

	protected:

	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ pn_st_bar;

	private: System::Windows::Forms::ComboBox^ contacts;
	private: System::Windows::Forms::ComboBox^ story;
	private: System::Windows::Forms::TextBox^ phone_textBox;


	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ profile;
	private: System::Windows::Forms::Button^ DeleteChatRoom;


	private: System::Windows::Forms::Button^ AddChatRoom;
	private: System::Windows::Forms::Button^ chat;
	private: System::Windows::Forms::Panel^ pn_sphoto;

	private: System::Windows::Forms::Panel^ add_chat;

	private: System::Windows::Forms::Panel^ pn_stext;



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

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ add_label;

	private: System::Windows::Forms::TextBox^ lname_textBox;
	private: System::Windows::Forms::TextBox^ ID_textBox;


	private: System::Windows::Forms::TextBox^ fname_textBox;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Delete1;
	private: System::Windows::Forms::Label^ lname1;
	private: System::Windows::Forms::Label^ phone1;
	private: System::Windows::Forms::Button^ edit1;
	private: System::Windows::Forms::Label^ fname1;








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
	private: System::Windows::Forms::Button^ Unselect1;


	private: System::Windows::Forms::Button^ select1;


	private: System::Windows::Forms::ListBox^ The_selected_membersers;
	private: System::Windows::Forms::Button^ add_contact;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ Unselect2;
	private: System::Windows::Forms::Button^ select2;
	private: System::Windows::Forms::Button^ Delete2;
	private: System::Windows::Forms::Label^ lname2;


	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ phone2;
	private: System::Windows::Forms::Button^ edit2;
	private: System::Windows::Forms::Label^ fname2;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ Unselect3;
	private: System::Windows::Forms::Button^ select3;
	private: System::Windows::Forms::Button^ Delete3;
	private: System::Windows::Forms::Label^ lname3;


	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ phone3;
	private: System::Windows::Forms::Button^ edit3;
	private: System::Windows::Forms::Label^ fname3;



	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ Unselect4;
	private: System::Windows::Forms::Button^ select4;
	private: System::Windows::Forms::Button^ Delete4;
	private: System::Windows::Forms::Label^ lname4;


	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Label^ phone4;
	private: System::Windows::Forms::Button^ edit4;
	private: System::Windows::Forms::Label^ fname4;



	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ Unselect5;
	private: System::Windows::Forms::Button^ select5;
	private: System::Windows::Forms::Button^ Delete5;
	private: System::Windows::Forms::Label^ lname5;


	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Label^ phone5;
	private: System::Windows::Forms::Button^ edit5;
	private: System::Windows::Forms::Label^ fname5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ Unselect6;
	private: System::Windows::Forms::Button^ select6;
	private: System::Windows::Forms::Button^ Delete6;
	private: System::Windows::Forms::Label^ lname6;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::Label^ phone6;
	private: System::Windows::Forms::Button^ edit6;
	private: System::Windows::Forms::Label^ fname6;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ Unselect7;
	private: System::Windows::Forms::Button^ select7;
	private: System::Windows::Forms::Button^ Delete7;
	private: System::Windows::Forms::Label^ lname7;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::Label^ phone7;
	private: System::Windows::Forms::Button^ edit7;
	private: System::Windows::Forms::Label^ fname7;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ Unselect8;
	private: System::Windows::Forms::Button^ select8;
	private: System::Windows::Forms::Button^ Delete8;
	private: System::Windows::Forms::Label^ lname8;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::Label^ phone8;
	private: System::Windows::Forms::Button^ edit8;
	private: System::Windows::Forms::Label^ fname8;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ Unselect9;
	private: System::Windows::Forms::Button^ select9;
	private: System::Windows::Forms::Button^ Delete9;
	private: System::Windows::Forms::Label^ lname9;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::Label^ phone9;
	private: System::Windows::Forms::Button^ edit9;
	private: System::Windows::Forms::Label^ fname9;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ Unselect10;
	private: System::Windows::Forms::Button^ select10;
	private: System::Windows::Forms::Button^ Delete10;
	private: System::Windows::Forms::Label^ lname10;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::Label^ phone10;
	private: System::Windows::Forms::Button^ edit10;
	private: System::Windows::Forms::Label^ fname10;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ Unselect11;
	private: System::Windows::Forms::Button^ select11;
	private: System::Windows::Forms::Button^ Delete11;
	private: System::Windows::Forms::Label^ lname11;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::Label^ phone11;
	private: System::Windows::Forms::Button^ edit11;
	private: System::Windows::Forms::Label^ fname11;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Button^ Unselect12;
	private: System::Windows::Forms::Button^ select12;
	private: System::Windows::Forms::Button^ Delete12;
	private: System::Windows::Forms::Label^ lname12;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::Label^ phone12;
	private: System::Windows::Forms::Button^ edit12;
	private: System::Windows::Forms::Label^ fname12;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ Unselect13;
	private: System::Windows::Forms::Button^ select13;
	private: System::Windows::Forms::Button^ Delete13;
	private: System::Windows::Forms::Label^ lname13;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::Label^ phone13;
	private: System::Windows::Forms::Button^ edit13;
	private: System::Windows::Forms::Label^ fname13;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::Button^ Unselect14;
	private: System::Windows::Forms::Button^ select14;
	private: System::Windows::Forms::Button^ Delete14;
	private: System::Windows::Forms::Label^ lname14;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::Label^ phone14;
	private: System::Windows::Forms::Button^ edit14;
	private: System::Windows::Forms::Label^ fname14;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Button^ Unselect15;
	private: System::Windows::Forms::Button^ select15;
	private: System::Windows::Forms::Button^ Delete15;
	private: System::Windows::Forms::Label^ lname15;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::Label^ phone15;
	private: System::Windows::Forms::Button^ edit15;
	private: System::Windows::Forms::Label^ fname15;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Button^ Unselect16;
	private: System::Windows::Forms::Button^ select16;
	private: System::Windows::Forms::Button^ Delete16;
	private: System::Windows::Forms::Label^ lname16;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::Label^ phone16;
	private: System::Windows::Forms::Button^ edit16;
	private: System::Windows::Forms::Label^ fname16;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Button^ Unselect17;
	private: System::Windows::Forms::Button^ select17;
	private: System::Windows::Forms::Button^ Delete17;
	private: System::Windows::Forms::Label^ lname17;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::Label^ phone17;
	private: System::Windows::Forms::Button^ edit17;
	private: System::Windows::Forms::Label^ fname17;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Button^ Unselect18;
	private: System::Windows::Forms::Button^ select18;
	private: System::Windows::Forms::Button^ Delete18;
	private: System::Windows::Forms::Label^ lname18;
	private: System::Windows::Forms::CheckBox^ checkBox18;
	private: System::Windows::Forms::Label^ phone18;
	private: System::Windows::Forms::Button^ edit18;
	private: System::Windows::Forms::Label^ fname18;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Button^ Unselect19;
	private: System::Windows::Forms::Button^ select19;
	private: System::Windows::Forms::Button^ Delete19;
	private: System::Windows::Forms::Label^ lname19;
	private: System::Windows::Forms::CheckBox^ checkBox19;
	private: System::Windows::Forms::Label^ phone19;
	private: System::Windows::Forms::Button^ edit19;
	private: System::Windows::Forms::Label^ fname19;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Button^ Unselect20;
	private: System::Windows::Forms::Button^ select20;
	private: System::Windows::Forms::Button^ Delete20;
	private: System::Windows::Forms::Label^ lname20;
	private: System::Windows::Forms::CheckBox^ checkBox20;
	private: System::Windows::Forms::Label^ phone20;
	private: System::Windows::Forms::Button^ edit20;
	private: System::Windows::Forms::Label^ fname20;































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
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(chatroom::typeid));
			this->chat = (gcnew System::Windows::Forms::Button());
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->profile = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->story = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contacts = (gcnew System::Windows::Forms::ComboBox());
			this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
			this->DeleteChatRoom = (gcnew System::Windows::Forms::Button());
			this->AddChatRoom = (gcnew System::Windows::Forms::Button());
			this->pn_sphoto = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->add_chat = (gcnew System::Windows::Forms::Panel());
			this->ADD = (gcnew System::Windows::Forms::Button());
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_shows = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pn_chat = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
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
			this->edit_contact = (gcnew System::Windows::Forms::Button());
			this->edit_label = (gcnew System::Windows::Forms::Label());
			this->add_contact = (gcnew System::Windows::Forms::Button());
			this->add_label = (gcnew System::Windows::Forms::Label());
			this->lname_textBox = (gcnew System::Windows::Forms::TextBox());
			this->ID_textBox = (gcnew System::Windows::Forms::TextBox());
			this->phone_textBox = (gcnew System::Windows::Forms::TextBox());
			this->fname_textBox = (gcnew System::Windows::Forms::TextBox());
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
			this->Unselect1 = (gcnew System::Windows::Forms::Button());
			this->select1 = (gcnew System::Windows::Forms::Button());
			this->Delete1 = (gcnew System::Windows::Forms::Button());
			this->lname1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->phone1 = (gcnew System::Windows::Forms::Label());
			this->edit1 = (gcnew System::Windows::Forms::Button());
			this->fname1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Unselect2 = (gcnew System::Windows::Forms::Button());
			this->select2 = (gcnew System::Windows::Forms::Button());
			this->Delete2 = (gcnew System::Windows::Forms::Button());
			this->lname2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->phone2 = (gcnew System::Windows::Forms::Label());
			this->edit2 = (gcnew System::Windows::Forms::Button());
			this->fname2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Unselect3 = (gcnew System::Windows::Forms::Button());
			this->select3 = (gcnew System::Windows::Forms::Button());
			this->Delete3 = (gcnew System::Windows::Forms::Button());
			this->lname3 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->phone3 = (gcnew System::Windows::Forms::Label());
			this->edit3 = (gcnew System::Windows::Forms::Button());
			this->fname3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Unselect4 = (gcnew System::Windows::Forms::Button());
			this->select4 = (gcnew System::Windows::Forms::Button());
			this->Delete4 = (gcnew System::Windows::Forms::Button());
			this->lname4 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->phone4 = (gcnew System::Windows::Forms::Label());
			this->edit4 = (gcnew System::Windows::Forms::Button());
			this->fname4 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->Unselect5 = (gcnew System::Windows::Forms::Button());
			this->select5 = (gcnew System::Windows::Forms::Button());
			this->Delete5 = (gcnew System::Windows::Forms::Button());
			this->lname5 = (gcnew System::Windows::Forms::Label());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->phone5 = (gcnew System::Windows::Forms::Label());
			this->edit5 = (gcnew System::Windows::Forms::Button());
			this->fname5 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->Unselect6 = (gcnew System::Windows::Forms::Button());
			this->select6 = (gcnew System::Windows::Forms::Button());
			this->Delete6 = (gcnew System::Windows::Forms::Button());
			this->lname6 = (gcnew System::Windows::Forms::Label());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->phone6 = (gcnew System::Windows::Forms::Label());
			this->edit6 = (gcnew System::Windows::Forms::Button());
			this->fname6 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->Unselect7 = (gcnew System::Windows::Forms::Button());
			this->select7 = (gcnew System::Windows::Forms::Button());
			this->Delete7 = (gcnew System::Windows::Forms::Button());
			this->lname7 = (gcnew System::Windows::Forms::Label());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->phone7 = (gcnew System::Windows::Forms::Label());
			this->edit7 = (gcnew System::Windows::Forms::Button());
			this->fname7 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->Unselect8 = (gcnew System::Windows::Forms::Button());
			this->select8 = (gcnew System::Windows::Forms::Button());
			this->Delete8 = (gcnew System::Windows::Forms::Button());
			this->lname8 = (gcnew System::Windows::Forms::Label());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->phone8 = (gcnew System::Windows::Forms::Label());
			this->edit8 = (gcnew System::Windows::Forms::Button());
			this->fname8 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->Unselect9 = (gcnew System::Windows::Forms::Button());
			this->select9 = (gcnew System::Windows::Forms::Button());
			this->Delete9 = (gcnew System::Windows::Forms::Button());
			this->lname9 = (gcnew System::Windows::Forms::Label());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->phone9 = (gcnew System::Windows::Forms::Label());
			this->edit9 = (gcnew System::Windows::Forms::Button());
			this->fname9 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->Unselect10 = (gcnew System::Windows::Forms::Button());
			this->select10 = (gcnew System::Windows::Forms::Button());
			this->Delete10 = (gcnew System::Windows::Forms::Button());
			this->lname10 = (gcnew System::Windows::Forms::Label());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->phone10 = (gcnew System::Windows::Forms::Label());
			this->edit10 = (gcnew System::Windows::Forms::Button());
			this->fname10 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->Unselect11 = (gcnew System::Windows::Forms::Button());
			this->select11 = (gcnew System::Windows::Forms::Button());
			this->Delete11 = (gcnew System::Windows::Forms::Button());
			this->lname11 = (gcnew System::Windows::Forms::Label());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->phone11 = (gcnew System::Windows::Forms::Label());
			this->edit11 = (gcnew System::Windows::Forms::Button());
			this->fname11 = (gcnew System::Windows::Forms::Label());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->Unselect12 = (gcnew System::Windows::Forms::Button());
			this->select12 = (gcnew System::Windows::Forms::Button());
			this->Delete12 = (gcnew System::Windows::Forms::Button());
			this->lname12 = (gcnew System::Windows::Forms::Label());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->phone12 = (gcnew System::Windows::Forms::Label());
			this->edit12 = (gcnew System::Windows::Forms::Button());
			this->fname12 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->Unselect13 = (gcnew System::Windows::Forms::Button());
			this->select13 = (gcnew System::Windows::Forms::Button());
			this->Delete13 = (gcnew System::Windows::Forms::Button());
			this->lname13 = (gcnew System::Windows::Forms::Label());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->phone13 = (gcnew System::Windows::Forms::Label());
			this->edit13 = (gcnew System::Windows::Forms::Button());
			this->fname13 = (gcnew System::Windows::Forms::Label());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->Unselect14 = (gcnew System::Windows::Forms::Button());
			this->select14 = (gcnew System::Windows::Forms::Button());
			this->Delete14 = (gcnew System::Windows::Forms::Button());
			this->lname14 = (gcnew System::Windows::Forms::Label());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->phone14 = (gcnew System::Windows::Forms::Label());
			this->edit14 = (gcnew System::Windows::Forms::Button());
			this->fname14 = (gcnew System::Windows::Forms::Label());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->Unselect15 = (gcnew System::Windows::Forms::Button());
			this->select15 = (gcnew System::Windows::Forms::Button());
			this->Delete15 = (gcnew System::Windows::Forms::Button());
			this->lname15 = (gcnew System::Windows::Forms::Label());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->phone15 = (gcnew System::Windows::Forms::Label());
			this->edit15 = (gcnew System::Windows::Forms::Button());
			this->fname15 = (gcnew System::Windows::Forms::Label());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->Unselect16 = (gcnew System::Windows::Forms::Button());
			this->select16 = (gcnew System::Windows::Forms::Button());
			this->Delete16 = (gcnew System::Windows::Forms::Button());
			this->lname16 = (gcnew System::Windows::Forms::Label());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->phone16 = (gcnew System::Windows::Forms::Label());
			this->edit16 = (gcnew System::Windows::Forms::Button());
			this->fname16 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->Unselect17 = (gcnew System::Windows::Forms::Button());
			this->select17 = (gcnew System::Windows::Forms::Button());
			this->Delete17 = (gcnew System::Windows::Forms::Button());
			this->lname17 = (gcnew System::Windows::Forms::Label());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->phone17 = (gcnew System::Windows::Forms::Label());
			this->edit17 = (gcnew System::Windows::Forms::Button());
			this->fname17 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->Unselect18 = (gcnew System::Windows::Forms::Button());
			this->select18 = (gcnew System::Windows::Forms::Button());
			this->Delete18 = (gcnew System::Windows::Forms::Button());
			this->lname18 = (gcnew System::Windows::Forms::Label());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->phone18 = (gcnew System::Windows::Forms::Label());
			this->edit18 = (gcnew System::Windows::Forms::Button());
			this->fname18 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->Unselect19 = (gcnew System::Windows::Forms::Button());
			this->select19 = (gcnew System::Windows::Forms::Button());
			this->Delete19 = (gcnew System::Windows::Forms::Button());
			this->lname19 = (gcnew System::Windows::Forms::Label());
			this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
			this->phone19 = (gcnew System::Windows::Forms::Label());
			this->edit19 = (gcnew System::Windows::Forms::Button());
			this->fname19 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->Unselect20 = (gcnew System::Windows::Forms::Button());
			this->select20 = (gcnew System::Windows::Forms::Button());
			this->Delete20 = (gcnew System::Windows::Forms::Button());
			this->lname20 = (gcnew System::Windows::Forms::Label());
			this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
			this->phone20 = (gcnew System::Windows::Forms::Label());
			this->edit20 = (gcnew System::Windows::Forms::Button());
			this->fname20 = (gcnew System::Windows::Forms::Label());
			this->stories = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pn_con = (gcnew System::Windows::Forms::Panel());
			this->pn_chatroom = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pn_nav_bar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pn_st_bar->SuspendLayout();
			this->pn_sphoto->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->add_chat->SuspendLayout();
			this->pn_stext->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->pn_shows->SuspendLayout();
			this->pn_chat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel27->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel28->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel29->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
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
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->panel21->SuspendLayout();
			this->stories->SuspendLayout();
			this->pn_con->SuspendLayout();
			this->pn_chatroom->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			this->SuspendLayout();
			// 
			// chat
			// 
			this->chat->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chat->Location = System::Drawing::Point(3, 321);
			this->chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->chat->Name = L"chat";
			this->chat->Size = System::Drawing::Size(112, 34);
			this->chat->TabIndex = 1;
			this->chat->Text = L"Chat Room";
			this->chat->UseVisualStyleBackColor = true;
			this->chat->Click += gcnew System::EventHandler(this, &chatroom::chat_Click);
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pn_nav_bar->Controls->Add(this->pictureBox21);
			this->pn_nav_bar->Controls->Add(this->pictureBox20);
			this->pn_nav_bar->Controls->Add(this->pictureBox19);
			this->pn_nav_bar->Controls->Add(this->chat);
			this->pn_nav_bar->Controls->Add(this->profile);
			this->pn_nav_bar->Controls->Add(this->pictureBox3);
			this->pn_nav_bar->Controls->Add(this->story);
			this->pn_nav_bar->Controls->Add(this->pictureBox2);
			this->pn_nav_bar->Controls->Add(this->pictureBox1);
			this->pn_nav_bar->Controls->Add(this->contacts);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Right;
			this->pn_nav_bar->Location = System::Drawing::Point(845, 0);
			this->pn_nav_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(120, 727);
			this->pn_nav_bar->TabIndex = 2;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(3, 226);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(113, 94);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 9;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(3, 4);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(112, 82);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 8;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &chatroom::pictureBox20_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(3, 605);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(123, 82);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 7;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &chatroom::pictureBox19_Click);
			// 
			// profile
			// 
			this->profile->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profile->Location = System::Drawing::Point(3, 188);
			this->profile->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profile->Name = L"profile";
			this->profile->Size = System::Drawing::Size(115, 36);
			this->profile->TabIndex = 4;
			this->profile->Text = L"My profile";
			this->profile->UseVisualStyleBackColor = true;
			this->profile->Click += gcnew System::EventHandler(this, &chatroom::profile_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(3, 92);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(113, 96);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// story
			// 
			this->story->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->story->FormattingEnabled = true;
			this->story->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"1- Story photo", L"2- Story text", L"3- show my story",
					L"4-show the stories"
			});
			this->story->Location = System::Drawing::Point(3, 580);
			this->story->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->story->Name = L"story";
			this->story->Size = System::Drawing::Size(114, 24);
			this->story->TabIndex = 3;
			this->story->Text = L"     story";
			this->story->SelectedIndexChanged += gcnew System::EventHandler(this, &chatroom::story_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(3, 482);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(111, 94);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(3, 358);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(111, 94);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// contacts
			// 
			this->contacts->Font = (gcnew System::Drawing::Font(L"Tahoma", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contacts->FormattingEnabled = true;
			this->contacts->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1-new contact", L"2-show my contacts" });
			this->contacts->Location = System::Drawing::Point(3, 456);
			this->contacts->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->contacts->Name = L"contacts";
			this->contacts->Size = System::Drawing::Size(114, 24);
			this->contacts->TabIndex = 0;
			this->contacts->Text = L"contacts";
			this->contacts->SelectedIndexChanged += gcnew System::EventHandler(this, &chatroom::contacts_SelectedIndexChanged);
			// 
			// pn_st_bar
			// 
			this->pn_st_bar->Controls->Add(this->DeleteChatRoom);
			this->pn_st_bar->Controls->Add(this->AddChatRoom);
			this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_st_bar->Location = System::Drawing::Point(0, 679);
			this->pn_st_bar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_st_bar->Name = L"pn_st_bar";
			this->pn_st_bar->Size = System::Drawing::Size(845, 48);
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
			this->DeleteChatRoom->Size = System::Drawing::Size(416, 48);
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
			this->AddChatRoom->Location = System::Drawing::Point(429, 0);
			this->AddChatRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->AddChatRoom->Name = L"AddChatRoom";
			this->AddChatRoom->Size = System::Drawing::Size(416, 48);
			this->AddChatRoom->TabIndex = 0;
			this->AddChatRoom->Text = L"Add ChatRoom";
			this->AddChatRoom->UseVisualStyleBackColor = true;
			this->AddChatRoom->Click += gcnew System::EventHandler(this, &chatroom::AddChatRoom_Click);
			// 
			// pn_sphoto
			// 
			this->pn_sphoto->Controls->Add(this->button3);
			this->pn_sphoto->Controls->Add(this->button2);
			this->pn_sphoto->Controls->Add(this->pictureBox7);
			this->pn_sphoto->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_sphoto->Location = System::Drawing::Point(0, 0);
			this->pn_sphoto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_sphoto->Name = L"pn_sphoto";
			this->pn_sphoto->Size = System::Drawing::Size(845, 679);
			this->pn_sphoto->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(297, 551);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 69);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &chatroom::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(467, 340);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(220, 58);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add photo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &chatroom::button2_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(10, 9);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(389, 612);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 0;
			this->pictureBox7->TabStop = false;
			// 
			// add_chat
			// 
			this->add_chat->Controls->Add(this->ADD);
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
			this->add_chat->Size = System::Drawing::Size(845, 679);
			this->add_chat->TabIndex = 7;
			this->add_chat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::add_chat_Paint);
			// 
			// ADD
			// 
			this->ADD->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADD->Location = System::Drawing::Point(367, 429);
			this->ADD->Name = L"ADD";
			this->ADD->Size = System::Drawing::Size(149, 39);
			this->ADD->TabIndex = 10;
			this->ADD->Text = L"Add";
			this->ADD->UseVisualStyleBackColor = true;
			this->ADD->Visible = false;
			// 
			// The_selected_membersers
			// 
			this->The_selected_membersers->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->The_selected_membersers->FormattingEnabled = true;
			this->The_selected_membersers->ItemHeight = 24;
			this->The_selected_membersers->Location = System::Drawing::Point(304, 298);
			this->The_selected_membersers->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->The_selected_membersers->Name = L"The_selected_membersers";
			this->The_selected_membersers->ScrollAlwaysVisible = true;
			this->The_selected_membersers->Size = System::Drawing::Size(271, 76);
			this->The_selected_membersers->TabIndex = 9;
			this->The_selected_membersers->Visible = false;
			// 
			// choose
			// 
			this->choose->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choose->Location = System::Drawing::Point(304, 295);
			this->choose->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->choose->Name = L"choose";
			this->choose->Size = System::Drawing::Size(254, 36);
			this->choose->TabIndex = 8;
			this->choose->Text = L"Choose from your contacts";
			this->choose->UseVisualStyleBackColor = true;
			this->choose->Click += gcnew System::EventHandler(this, &chatroom::button1_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(304, 198);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(314, 24);
			this->textBox6->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1- one to one", L"2- Group" });
			this->comboBox1->Location = System::Drawing::Point(304, 255);
			this->comboBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(314, 29);
			this->comboBox1->TabIndex = 6;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(45, 252);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(209, 31);
			this->label19->TabIndex = 5;
			this->label19->Text = L"Chatroom type :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(304, 138);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(314, 24);
			this->textBox5->TabIndex = 4;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(41, 298);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(222, 31);
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
			this->label17->Location = System::Drawing::Point(41, 194);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(186, 31);
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
			this->label16->Location = System::Drawing::Point(41, 132);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(222, 31);
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
			this->label2->Location = System::Drawing::Point(291, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(301, 31);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Add your new chatroom";
			// 
			// pn_stext
			// 
			this->pn_stext->Controls->Add(this->button4);
			this->pn_stext->Controls->Add(this->label3);
			this->pn_stext->Controls->Add(this->richTextBox2);
			this->pn_stext->Controls->Add(this->pictureBox8);
			this->pn_stext->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_stext->Location = System::Drawing::Point(0, 0);
			this->pn_stext->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_stext->Name = L"pn_stext";
			this->pn_stext->Size = System::Drawing::Size(845, 679);
			this->pn_stext->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(367, 338);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 69);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &chatroom::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(330, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Add a Story Text";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(292, 214);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(255, 96);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(0, 0);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(843, 626);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// pn_shows
			// 
			this->pn_shows->Controls->Add(this->label8);
			this->pn_shows->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_shows->Location = System::Drawing::Point(0, 0);
			this->pn_shows->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_shows->Name = L"pn_shows";
			this->pn_shows->Size = System::Drawing::Size(845, 679);
			this->pn_shows->TabIndex = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(337, 215);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 34);
			this->label8->TabIndex = 1;
			this->label8->Text = L"shows";
			// 
			// pn_chat
			// 
			this->pn_chat->Controls->Add(this->pictureBox9);
			this->pn_chat->Controls->Add(this->flowLayoutPanel2);
			this->pn_chat->Controls->Add(this->textBox7);
			this->pn_chat->Controls->Add(this->pictureBox10);
			this->pn_chat->Controls->Add(this->label1);
			this->pn_chat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_chat->Location = System::Drawing::Point(0, 0);
			this->pn_chat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_chat->Name = L"pn_chat";
			this->pn_chat->Size = System::Drawing::Size(845, 679);
			this->pn_chat->TabIndex = 6;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(789, 6);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(50, 32);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &chatroom::pictureBox9_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->panel22);
			this->flowLayoutPanel2->Controls->Add(this->panel23);
			this->flowLayoutPanel2->Controls->Add(this->panel24);
			this->flowLayoutPanel2->Controls->Add(this->panel25);
			this->flowLayoutPanel2->Controls->Add(this->panel26);
			this->flowLayoutPanel2->Controls->Add(this->panel27);
			this->flowLayoutPanel2->Controls->Add(this->panel28);
			this->flowLayoutPanel2->Controls->Add(this->panel29);
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 42);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(835, 634);
			this->flowLayoutPanel2->TabIndex = 7;
			// 
			// panel22
			// 
			this->panel22->Controls->Add(this->checkBox21);
			this->panel22->Controls->Add(this->label21);
			this->panel22->Controls->Add(this->label22);
			this->panel22->Controls->Add(this->label23);
			this->panel22->Controls->Add(this->pictureBox11);
			this->panel22->Location = System::Drawing::Point(3, 4);
			this->panel22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(834, 71);
			this->panel22->TabIndex = 4;
			// 
			// checkBox21
			// 
			this->checkBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox21->Location = System::Drawing::Point(780, 36);
			this->checkBox21->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox21->Name = L"checkBox21";
			this->checkBox21->Size = System::Drawing::Size(15, 16);
			this->checkBox21->TabIndex = 4;
			this->checkBox21->Text = L"checkBox21";
			this->checkBox21->UseVisualStyleBackColor = true;
			this->checkBox21->Visible = false;
			this->checkBox21->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox21_CheckedChanged);
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(712, 5);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(119, 25);
			this->label21->TabIndex = 1;
			this->label21->Text = L"10/05/2022";
			this->label21->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(69, 36);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(692, 30);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Text";
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(69, 7);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(393, 28);
			this->label23->TabIndex = 3;
			this->label23->Text = L"name";
			this->label23->Click += gcnew System::EventHandler(this, &chatroom::label23_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(3, 4);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(58, 62);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 0;
			this->pictureBox11->TabStop = false;
			// 
			// panel23
			// 
			this->panel23->Controls->Add(this->checkBox22);
			this->panel23->Controls->Add(this->label24);
			this->panel23->Controls->Add(this->label25);
			this->panel23->Controls->Add(this->label26);
			this->panel23->Controls->Add(this->pictureBox12);
			this->panel23->Location = System::Drawing::Point(3, 83);
			this->panel23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(834, 71);
			this->panel23->TabIndex = 5;
			this->panel23->Visible = false;
			// 
			// checkBox22
			// 
			this->checkBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox22->Location = System::Drawing::Point(780, 36);
			this->checkBox22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox22->Name = L"checkBox22";
			this->checkBox22->Size = System::Drawing::Size(15, 16);
			this->checkBox22->TabIndex = 5;
			this->checkBox22->Text = L"checkBox22";
			this->checkBox22->UseVisualStyleBackColor = true;
			this->checkBox22->Visible = false;
			this->checkBox22->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox22_CheckedChanged);
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(714, 4);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(117, 28);
			this->label24->TabIndex = 3;
			this->label24->Text = L"10/05/2022";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(69, 36);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(671, 30);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Text";
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(69, 7);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(397, 25);
			this->label26->TabIndex = 1;
			this->label26->Text = L"DS1";
			this->label26->Click += gcnew System::EventHandler(this, &chatroom::label26_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(3, 4);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(58, 62);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 0;
			this->pictureBox12->TabStop = false;
			// 
			// panel24
			// 
			this->panel24->Controls->Add(this->checkBox23);
			this->panel24->Controls->Add(this->label27);
			this->panel24->Controls->Add(this->label28);
			this->panel24->Controls->Add(this->label29);
			this->panel24->Controls->Add(this->pictureBox13);
			this->panel24->Location = System::Drawing::Point(3, 162);
			this->panel24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(834, 71);
			this->panel24->TabIndex = 6;
			this->panel24->Visible = false;
			// 
			// checkBox23
			// 
			this->checkBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox23->Location = System::Drawing::Point(780, 33);
			this->checkBox23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox23->Name = L"checkBox23";
			this->checkBox23->Size = System::Drawing::Size(15, 16);
			this->checkBox23->TabIndex = 5;
			this->checkBox23->Text = L"checkBox23";
			this->checkBox23->UseVisualStyleBackColor = true;
			this->checkBox23->Visible = false;
			this->checkBox23->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox23_CheckedChanged);
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(714, 4);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(117, 28);
			this->label27->TabIndex = 3;
			this->label27->Text = L"10/05/2022";
			this->label27->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(69, 36);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(671, 30);
			this->label28->TabIndex = 2;
			this->label28->Text = L"Text";
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(69, 7);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(397, 25);
			this->label29->TabIndex = 1;
			this->label29->Text = L"DS2";
			this->label29->Click += gcnew System::EventHandler(this, &chatroom::label29_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(3, 4);
			this->pictureBox13->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(58, 62);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 0;
			this->pictureBox13->TabStop = false;
			// 
			// panel25
			// 
			this->panel25->Controls->Add(this->checkBox24);
			this->panel25->Controls->Add(this->label30);
			this->panel25->Controls->Add(this->label31);
			this->panel25->Controls->Add(this->label32);
			this->panel25->Controls->Add(this->pictureBox14);
			this->panel25->Location = System::Drawing::Point(3, 241);
			this->panel25->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(834, 71);
			this->panel25->TabIndex = 7;
			this->panel25->Visible = false;
			// 
			// checkBox24
			// 
			this->checkBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox24->Location = System::Drawing::Point(780, 32);
			this->checkBox24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox24->Name = L"checkBox24";
			this->checkBox24->Size = System::Drawing::Size(15, 16);
			this->checkBox24->TabIndex = 5;
			this->checkBox24->Text = L"checkBox24";
			this->checkBox24->UseVisualStyleBackColor = true;
			this->checkBox24->Visible = false;
			this->checkBox24->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox24_CheckedChanged);
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(714, 4);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(117, 28);
			this->label30->TabIndex = 3;
			this->label30->Text = L"10/05/2022";
			this->label30->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(69, 36);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(671, 30);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Text";
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(69, 7);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(397, 25);
			this->label32->TabIndex = 1;
			this->label32->Text = L"DS3";
			this->label32->Click += gcnew System::EventHandler(this, &chatroom::label32_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(3, 4);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(58, 62);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 0;
			this->pictureBox14->TabStop = false;
			// 
			// panel26
			// 
			this->panel26->Controls->Add(this->checkBox25);
			this->panel26->Controls->Add(this->label33);
			this->panel26->Controls->Add(this->label34);
			this->panel26->Controls->Add(this->label35);
			this->panel26->Controls->Add(this->pictureBox15);
			this->panel26->Location = System::Drawing::Point(3, 320);
			this->panel26->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(834, 71);
			this->panel26->TabIndex = 8;
			this->panel26->Visible = false;
			// 
			// checkBox25
			// 
			this->checkBox25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox25->Location = System::Drawing::Point(780, 39);
			this->checkBox25->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox25->Name = L"checkBox25";
			this->checkBox25->Size = System::Drawing::Size(15, 16);
			this->checkBox25->TabIndex = 5;
			this->checkBox25->Text = L"checkBox25";
			this->checkBox25->UseVisualStyleBackColor = true;
			this->checkBox25->Visible = false;
			this->checkBox25->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox25_CheckedChanged);
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(714, 4);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(117, 28);
			this->label33->TabIndex = 3;
			this->label33->Text = L"10/05/2022";
			this->label33->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(69, 36);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(671, 30);
			this->label34->TabIndex = 2;
			this->label34->Text = L"Text";
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(69, 7);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(397, 25);
			this->label35->TabIndex = 1;
			this->label35->Text = L"DS4";
			this->label35->Click += gcnew System::EventHandler(this, &chatroom::label35_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(3, 4);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(58, 62);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 0;
			this->pictureBox15->TabStop = false;
			// 
			// panel27
			// 
			this->panel27->Controls->Add(this->checkBox26);
			this->panel27->Controls->Add(this->label36);
			this->panel27->Controls->Add(this->label37);
			this->panel27->Controls->Add(this->label38);
			this->panel27->Controls->Add(this->pictureBox16);
			this->panel27->Location = System::Drawing::Point(3, 399);
			this->panel27->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(834, 71);
			this->panel27->TabIndex = 9;
			this->panel27->Visible = false;
			// 
			// checkBox26
			// 
			this->checkBox26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox26->Location = System::Drawing::Point(780, 39);
			this->checkBox26->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox26->Name = L"checkBox26";
			this->checkBox26->Size = System::Drawing::Size(15, 16);
			this->checkBox26->TabIndex = 5;
			this->checkBox26->Text = L"checkBox26";
			this->checkBox26->UseVisualStyleBackColor = true;
			this->checkBox26->Visible = false;
			this->checkBox26->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox26_CheckedChanged);
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(714, 4);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(117, 28);
			this->label36->TabIndex = 3;
			this->label36->Text = L"10/05/2022";
			this->label36->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(69, 36);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(671, 30);
			this->label37->TabIndex = 2;
			this->label37->Text = L"Text";
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(69, 7);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(397, 25);
			this->label38->TabIndex = 1;
			this->label38->Text = L"DS5";
			this->label38->Click += gcnew System::EventHandler(this, &chatroom::label38_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(3, 4);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(58, 62);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 0;
			this->pictureBox16->TabStop = false;
			// 
			// panel28
			// 
			this->panel28->Controls->Add(this->checkBox27);
			this->panel28->Controls->Add(this->label39);
			this->panel28->Controls->Add(this->label40);
			this->panel28->Controls->Add(this->label41);
			this->panel28->Controls->Add(this->pictureBox17);
			this->panel28->Location = System::Drawing::Point(3, 478);
			this->panel28->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(834, 71);
			this->panel28->TabIndex = 10;
			this->panel28->Visible = false;
			// 
			// checkBox27
			// 
			this->checkBox27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox27->Location = System::Drawing::Point(780, 36);
			this->checkBox27->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox27->Name = L"checkBox27";
			this->checkBox27->Size = System::Drawing::Size(15, 16);
			this->checkBox27->TabIndex = 5;
			this->checkBox27->Text = L"checkBox27";
			this->checkBox27->UseVisualStyleBackColor = true;
			this->checkBox27->Visible = false;
			this->checkBox27->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox27_CheckedChanged);
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(714, 4);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(117, 28);
			this->label39->TabIndex = 3;
			this->label39->Text = L"10/05/2022";
			this->label39->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(69, 36);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(671, 30);
			this->label40->TabIndex = 2;
			this->label40->Text = L"Text";
			// 
			// label41
			// 
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(69, 7);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(397, 25);
			this->label41->TabIndex = 1;
			this->label41->Text = L"DS6";
			this->label41->Click += gcnew System::EventHandler(this, &chatroom::label41_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(3, 4);
			this->pictureBox17->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(58, 62);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 0;
			this->pictureBox17->TabStop = false;
			// 
			// panel29
			// 
			this->panel29->Controls->Add(this->checkBox28);
			this->panel29->Controls->Add(this->label42);
			this->panel29->Controls->Add(this->label43);
			this->panel29->Controls->Add(this->label44);
			this->panel29->Controls->Add(this->pictureBox18);
			this->panel29->Location = System::Drawing::Point(3, 557);
			this->panel29->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(834, 71);
			this->panel29->TabIndex = 11;
			this->panel29->Visible = false;
			// 
			// checkBox28
			// 
			this->checkBox28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox28->Location = System::Drawing::Point(780, 39);
			this->checkBox28->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->checkBox28->Name = L"checkBox28";
			this->checkBox28->Size = System::Drawing::Size(15, 16);
			this->checkBox28->TabIndex = 5;
			this->checkBox28->Text = L"checkBox28";
			this->checkBox28->UseVisualStyleBackColor = true;
			this->checkBox28->Visible = false;
			this->checkBox28->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox28_CheckedChanged);
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(714, 4);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(117, 28);
			this->label42->TabIndex = 3;
			this->label42->Text = L"10/05/2022";
			this->label42->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(69, 36);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(671, 30);
			this->label43->TabIndex = 2;
			this->label43->Text = L"Text";
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(69, 7);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(397, 25);
			this->label44->TabIndex = 1;
			this->label44->Text = L"DS7";
			this->label44->Click += gcnew System::EventHandler(this, &chatroom::label44_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(3, 4);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(58, 62);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 0;
			this->pictureBox18->TabStop = false;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Gray;
			this->textBox7->Location = System::Drawing::Point(3, 6);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(780, 30);
			this->textBox7->TabIndex = 6;
			this->textBox7->Text = L"Search";
			this->textBox7->Click += gcnew System::EventHandler(this, &chatroom::textBox7_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(787, -21);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(50, 12);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(337, 215);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 34);
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
			this->pn_profile->Size = System::Drawing::Size(845, 679);
			this->pn_profile->TabIndex = 0;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(283, 255);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(56, 41);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// change_photo_bu
			// 
			this->change_photo_bu->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->change_photo_bu->Location = System::Drawing::Point(352, 255);
			this->change_photo_bu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->change_photo_bu->Name = L"change_photo_bu";
			this->change_photo_bu->Size = System::Drawing::Size(251, 41);
			this->change_photo_bu->TabIndex = 9;
			this->change_photo_bu->Text = L"Change Photo";
			this->change_photo_bu->UseVisualStyleBackColor = true;
			this->change_photo_bu->Click += gcnew System::EventHandler(this, &chatroom::change_photo_bu_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(283, 502);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(390, 93);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// description_label
			// 
			this->description_label->AutoSize = true;
			this->description_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label->Location = System::Drawing::Point(51, 491);
			this->description_label->Name = L"description_label";
			this->description_label->Size = System::Drawing::Size(193, 34);
			this->description_label->TabIndex = 7;
			this->description_label->Text = L"Description :";
			// 
			// fname_text
			// 
			this->fname_text->Location = System::Drawing::Point(283, 388);
			this->fname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fname_text->Name = L"fname_text";
			this->fname_text->Size = System::Drawing::Size(319, 24);
			this->fname_text->TabIndex = 6;
			// 
			// lname_text
			// 
			this->lname_text->Location = System::Drawing::Point(283, 444);
			this->lname_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lname_text->Name = L"lname_text";
			this->lname_text->Size = System::Drawing::Size(319, 24);
			this->lname_text->TabIndex = 5;
			// 
			// id_text
			// 
			this->id_text->Location = System::Drawing::Point(283, 332);
			this->id_text->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->id_text->Name = L"id_text";
			this->id_text->Size = System::Drawing::Size(319, 24);
			this->id_text->TabIndex = 4;
			// 
			// fname_label
			// 
			this->fname_label->AutoSize = true;
			this->fname_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname_label->Location = System::Drawing::Point(51, 378);
			this->fname_label->Name = L"fname_label";
			this->fname_label->Size = System::Drawing::Size(178, 34);
			this->fname_label->TabIndex = 3;
			this->fname_label->Text = L"First Name:";
			// 
			// lname_label
			// 
			this->lname_label->AutoSize = true;
			this->lname_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname_label->Location = System::Drawing::Point(51, 434);
			this->lname_label->Name = L"lname_label";
			this->lname_label->Size = System::Drawing::Size(175, 34);
			this->lname_label->TabIndex = 2;
			this->lname_label->Text = L"Last Name:";
			// 
			// ID_label
			// 
			this->ID_label->AutoSize = true;
			this->ID_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID_label->Location = System::Drawing::Point(51, 322);
			this->ID_label->Name = L"ID_label";
			this->ID_label->Size = System::Drawing::Size(132, 34);
			this->ID_label->TabIndex = 1;
			this->ID_label->Text = L"User ID:";
			// 
			// profile_pic
			// 
			this->profile_pic->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->profile_pic->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->profile_pic->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->profile_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_pic.Image")));
			this->profile_pic->Location = System::Drawing::Point(288, 2);
			this->profile_pic->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->profile_pic->Name = L"profile_pic";
			this->profile_pic->Size = System::Drawing::Size(319, 246);
			this->profile_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profile_pic->TabIndex = 0;
			this->profile_pic->TabStop = false;
			this->profile_pic->Click += gcnew System::EventHandler(this, &chatroom::profile_pic_Click);
			// 
			// pn_new_contact
			// 
			this->pn_new_contact->Controls->Add(this->edit_contact);
			this->pn_new_contact->Controls->Add(this->edit_label);
			this->pn_new_contact->Controls->Add(this->add_contact);
			this->pn_new_contact->Controls->Add(this->add_label);
			this->pn_new_contact->Controls->Add(this->lname_textBox);
			this->pn_new_contact->Controls->Add(this->ID_textBox);
			this->pn_new_contact->Controls->Add(this->phone_textBox);
			this->pn_new_contact->Controls->Add(this->fname_textBox);
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
			this->pn_new_contact->Size = System::Drawing::Size(845, 679);
			this->pn_new_contact->TabIndex = 1;
			// 
			// edit_contact
			// 
			this->edit_contact->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_contact->Location = System::Drawing::Point(353, 486);
			this->edit_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_contact->Name = L"edit_contact";
			this->edit_contact->Size = System::Drawing::Size(205, 39);
			this->edit_contact->TabIndex = 13;
			this->edit_contact->Text = L"Edit the Contact";
			this->edit_contact->UseVisualStyleBackColor = true;
			this->edit_contact->Visible = false;
			this->edit_contact->Click += gcnew System::EventHandler(this, &chatroom::edit_contact_Click);
			// 
			// edit_label
			// 
			this->edit_label->AutoSize = true;
			this->edit_label->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->edit_label->Location = System::Drawing::Point(289, 47);
			this->edit_label->Name = L"edit_label";
			this->edit_label->Size = System::Drawing::Size(385, 49);
			this->edit_label->TabIndex = 12;
			this->edit_label->Text = L"Edit Your New Contact";
			this->edit_label->Visible = false;
			// 
			// add_contact
			// 
			this->add_contact->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_contact->Location = System::Drawing::Point(353, 485);
			this->add_contact->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->add_contact->Name = L"add_contact";
			this->add_contact->Size = System::Drawing::Size(205, 39);
			this->add_contact->TabIndex = 11;
			this->add_contact->Text = L"Add Contact";
			this->add_contact->UseVisualStyleBackColor = true;
			this->add_contact->Click += gcnew System::EventHandler(this, &chatroom::add_contact_Click);
			// 
			// add_label
			// 
			this->add_label->AutoSize = true;
			this->add_label->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->add_label->Location = System::Drawing::Point(296, 47);
			this->add_label->Name = L"add_label";
			this->add_label->Size = System::Drawing::Size(379, 49);
			this->add_label->TabIndex = 10;
			this->add_label->Text = L"Add Your New Contact";
			// 
			// lname_textBox
			// 
			this->lname_textBox->Location = System::Drawing::Point(343, 225);
			this->lname_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lname_textBox->Name = L"lname_textBox";
			this->lname_textBox->Size = System::Drawing::Size(252, 24);
			this->lname_textBox->TabIndex = 9;
			// 
			// ID_textBox
			// 
			this->ID_textBox->Location = System::Drawing::Point(343, 298);
			this->ID_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ID_textBox->Name = L"ID_textBox";
			this->ID_textBox->Size = System::Drawing::Size(252, 24);
			this->ID_textBox->TabIndex = 8;
			// 
			// phone_textBox
			// 
			this->phone_textBox->Location = System::Drawing::Point(343, 386);
			this->phone_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->phone_textBox->Name = L"phone_textBox";
			this->phone_textBox->Size = System::Drawing::Size(252, 24);
			this->phone_textBox->TabIndex = 7;
			// 
			// fname_textBox
			// 
			this->fname_textBox->Location = System::Drawing::Point(343, 143);
			this->fname_textBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->fname_textBox->Name = L"fname_textBox";
			this->fname_textBox->Size = System::Drawing::Size(252, 24);
			this->fname_textBox->TabIndex = 6;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(171, 293);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 34);
			this->label12->TabIndex = 5;
			this->label12->Text = L"ID :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(143, 379);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(189, 34);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Phone Number :";
			this->label11->Click += gcnew System::EventHandler(this, &chatroom::label11_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(171, 215);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(150, 34);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Last Name :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(171, 138);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 34);
			this->label6->TabIndex = 2;
			this->label6->Text = L"First Name :";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(24, 359);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(97, 86);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(24, 144);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(107, 105);
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
			this->pn_show_contact->Size = System::Drawing::Size(845, 679);
			this->pn_show_contact->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel1);
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel6);
			this->flowLayoutPanel1->Controls->Add(this->panel7);
			this->flowLayoutPanel1->Controls->Add(this->panel8);
			this->flowLayoutPanel1->Controls->Add(this->panel9);
			this->flowLayoutPanel1->Controls->Add(this->panel10);
			this->flowLayoutPanel1->Controls->Add(this->panel11);
			this->flowLayoutPanel1->Controls->Add(this->panel12);
			this->flowLayoutPanel1->Controls->Add(this->panel13);
			this->flowLayoutPanel1->Controls->Add(this->panel14);
			this->flowLayoutPanel1->Controls->Add(this->panel15);
			this->flowLayoutPanel1->Controls->Add(this->panel16);
			this->flowLayoutPanel1->Controls->Add(this->panel17);
			this->flowLayoutPanel1->Controls->Add(this->panel18);
			this->flowLayoutPanel1->Controls->Add(this->panel19);
			this->flowLayoutPanel1->Controls->Add(this->panel20);
			this->flowLayoutPanel1->Controls->Add(this->panel21);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(845, 679);
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
			this->panel1->Size = System::Drawing::Size(834, 50);
			this->panel1->TabIndex = 0;
			// 
			// choose_
			// 
			this->choose_->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->choose_->Location = System::Drawing::Point(612, 7);
			this->choose_->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->choose_->Name = L"choose_";
			this->choose_->Size = System::Drawing::Size(199, 34);
			this->choose_->TabIndex = 3;
			this->choose_->Text = L"Add to my chatroom";
			this->choose_->UseVisualStyleBackColor = true;
			this->choose_->Visible = false;
			this->choose_->Click += gcnew System::EventHandler(this, &chatroom::choose__Click);
			// 
			// edit_delete2
			// 
			this->edit_delete2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_delete2->Location = System::Drawing::Point(691, 6);
			this->edit_delete2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_delete2->Name = L"edit_delete2";
			this->edit_delete2->Size = System::Drawing::Size(122, 34);
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
			this->edit_delete->Location = System::Drawing::Point(691, 6);
			this->edit_delete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit_delete->Name = L"edit_delete";
			this->edit_delete->Size = System::Drawing::Size(122, 34);
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
			this->label5->Location = System::Drawing::Point(57, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(209, 34);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Your contacts";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->Unselect1);
			this->panel2->Controls->Add(this->select1);
			this->panel2->Controls->Add(this->Delete1);
			this->panel2->Controls->Add(this->lname1);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->phone1);
			this->panel2->Controls->Add(this->edit1);
			this->panel2->Controls->Add(this->fname1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(3, 56);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(834, 77);
			this->panel2->TabIndex = 1;
			this->panel2->Visible = false;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chatroom::panel2_Paint);
			// 
			// Unselect1
			// 
			this->Unselect1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect1->Location = System::Drawing::Point(716, 17);
			this->Unselect1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect1->Name = L"Unselect1";
			this->Unselect1->Size = System::Drawing::Size(113, 34);
			this->Unselect1->TabIndex = 6;
			this->Unselect1->Text = L"Unselect";
			this->Unselect1->UseVisualStyleBackColor = true;
			this->Unselect1->Visible = false;
			this->Unselect1->Click += gcnew System::EventHandler(this, &chatroom::Unselect_Click);
			// 
			// select1
			// 
			this->select1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select1->Location = System::Drawing::Point(598, 18);
			this->select1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select1->Name = L"select1";
			this->select1->Size = System::Drawing::Size(89, 38);
			this->select1->TabIndex = 5;
			this->select1->Text = L"select";
			this->select1->UseVisualStyleBackColor = true;
			this->select1->Visible = false;
			this->select1->Click += gcnew System::EventHandler(this, &chatroom::select1_Click);
			// 
			// Delete1
			// 
			this->Delete1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete1->Location = System::Drawing::Point(716, 18);
			this->Delete1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete1->Name = L"Delete1";
			this->Delete1->Size = System::Drawing::Size(96, 33);
			this->Delete1->TabIndex = 3;
			this->Delete1->Text = L"Delete";
			this->Delete1->UseVisualStyleBackColor = true;
			this->Delete1->Visible = false;
			this->Delete1->Click += gcnew System::EventHandler(this, &chatroom::Delete1_Click);
			// 
			// lname1
			// 
			this->lname1->AutoSize = true;
			this->lname1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname1->Location = System::Drawing::Point(128, 11);
			this->lname1->Name = L"lname1";
			this->lname1->Size = System::Drawing::Size(115, 24);
			this->lname1->TabIndex = 2;
			this->lname1->Text = L"Last Name";
			// 
			// checkBox1
			// 
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(374, 26);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(20, 17);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &chatroom::checkBox1_CheckedChanged);
			// 
			// phone1
			// 
			this->phone1->AutoSize = true;
			this->phone1->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone1->Location = System::Drawing::Point(36, 50);
			this->phone1->Name = L"phone1";
			this->phone1->Size = System::Drawing::Size(115, 21);
			this->phone1->TabIndex = 1;
			this->phone1->Text = L"Phonr Number";
			// 
			// edit1
			// 
			this->edit1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit1->Location = System::Drawing::Point(598, 18);
			this->edit1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit1->Name = L"edit1";
			this->edit1->Size = System::Drawing::Size(87, 33);
			this->edit1->TabIndex = 2;
			this->edit1->Text = L"Edit";
			this->edit1->UseVisualStyleBackColor = true;
			this->edit1->Visible = false;
			this->edit1->Click += gcnew System::EventHandler(this, &chatroom::button1_Click);
			// 
			// fname1
			// 
			this->fname1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname1->AutoSize = true;
			this->fname1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname1->Location = System::Drawing::Point(3, 10);
			this->fname1->Name = L"fname1";
			this->fname1->Size = System::Drawing::Size(119, 24);
			this->fname1->TabIndex = 0;
			this->fname1->Text = L"First Name";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->Unselect2);
			this->panel3->Controls->Add(this->select2);
			this->panel3->Controls->Add(this->Delete2);
			this->panel3->Controls->Add(this->lname2);
			this->panel3->Controls->Add(this->checkBox2);
			this->panel3->Controls->Add(this->phone2);
			this->panel3->Controls->Add(this->edit2);
			this->panel3->Controls->Add(this->fname2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(3, 137);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(834, 77);
			this->panel3->TabIndex = 2;
			this->panel3->Visible = false;
			// 
			// Unselect2
			// 
			this->Unselect2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect2->Location = System::Drawing::Point(716, 18);
			this->Unselect2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect2->Name = L"Unselect2";
			this->Unselect2->Size = System::Drawing::Size(113, 34);
			this->Unselect2->TabIndex = 6;
			this->Unselect2->Text = L"Unselect";
			this->Unselect2->UseVisualStyleBackColor = true;
			this->Unselect2->Visible = false;
			this->Unselect2->Click += gcnew System::EventHandler(this, &chatroom::Unselect2_Click);
			// 
			// select2
			// 
			this->select2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select2->Location = System::Drawing::Point(598, 18);
			this->select2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select2->Name = L"select2";
			this->select2->Size = System::Drawing::Size(89, 38);
			this->select2->TabIndex = 5;
			this->select2->Text = L"select";
			this->select2->UseVisualStyleBackColor = true;
			this->select2->Visible = false;
			this->select2->Click += gcnew System::EventHandler(this, &chatroom::select2_Click);
			// 
			// Delete2
			// 
			this->Delete2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete2->Location = System::Drawing::Point(716, 18);
			this->Delete2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete2->Name = L"Delete2";
			this->Delete2->Size = System::Drawing::Size(96, 33);
			this->Delete2->TabIndex = 3;
			this->Delete2->Text = L"Delete";
			this->Delete2->UseVisualStyleBackColor = true;
			this->Delete2->Visible = false;
			this->Delete2->Click += gcnew System::EventHandler(this, &chatroom::Delete2_Click);
			// 
			// lname2
			// 
			this->lname2->AutoSize = true;
			this->lname2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname2->Location = System::Drawing::Point(128, 11);
			this->lname2->Name = L"lname2";
			this->lname2->Size = System::Drawing::Size(115, 24);
			this->lname2->TabIndex = 2;
			this->lname2->Text = L"Last Name";
			// 
			// checkBox2
			// 
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(374, 26);
			this->checkBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(20, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Visible = false;
			// 
			// phone2
			// 
			this->phone2->AutoSize = true;
			this->phone2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone2->Location = System::Drawing::Point(36, 50);
			this->phone2->Name = L"phone2";
			this->phone2->Size = System::Drawing::Size(115, 21);
			this->phone2->TabIndex = 1;
			this->phone2->Text = L"Phonr Number";
			// 
			// edit2
			// 
			this->edit2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit2->Location = System::Drawing::Point(598, 18);
			this->edit2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit2->Name = L"edit2";
			this->edit2->Size = System::Drawing::Size(87, 33);
			this->edit2->TabIndex = 2;
			this->edit2->Text = L"Edit";
			this->edit2->UseVisualStyleBackColor = true;
			this->edit2->Visible = false;
			this->edit2->Click += gcnew System::EventHandler(this, &chatroom::edit2_Click);
			// 
			// fname2
			// 
			this->fname2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname2->AutoSize = true;
			this->fname2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname2->Location = System::Drawing::Point(3, 10);
			this->fname2->Name = L"fname2";
			this->fname2->Size = System::Drawing::Size(119, 24);
			this->fname2->TabIndex = 0;
			this->fname2->Text = L"First Name";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->Unselect3);
			this->panel4->Controls->Add(this->select3);
			this->panel4->Controls->Add(this->Delete3);
			this->panel4->Controls->Add(this->lname3);
			this->panel4->Controls->Add(this->checkBox3);
			this->panel4->Controls->Add(this->phone3);
			this->panel4->Controls->Add(this->edit3);
			this->panel4->Controls->Add(this->fname3);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(3, 218);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(834, 77);
			this->panel4->TabIndex = 3;
			this->panel4->Visible = false;
			// 
			// Unselect3
			// 
			this->Unselect3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect3->Location = System::Drawing::Point(716, 18);
			this->Unselect3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect3->Name = L"Unselect3";
			this->Unselect3->Size = System::Drawing::Size(113, 34);
			this->Unselect3->TabIndex = 6;
			this->Unselect3->Text = L"Unselect";
			this->Unselect3->UseVisualStyleBackColor = true;
			this->Unselect3->Visible = false;
			this->Unselect3->Click += gcnew System::EventHandler(this, &chatroom::Unselect3_Click);
			// 
			// select3
			// 
			this->select3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select3->Location = System::Drawing::Point(598, 18);
			this->select3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select3->Name = L"select3";
			this->select3->Size = System::Drawing::Size(89, 38);
			this->select3->TabIndex = 5;
			this->select3->Text = L"select";
			this->select3->UseVisualStyleBackColor = true;
			this->select3->Visible = false;
			this->select3->Click += gcnew System::EventHandler(this, &chatroom::select3_Click);
			// 
			// Delete3
			// 
			this->Delete3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete3->Location = System::Drawing::Point(716, 18);
			this->Delete3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete3->Name = L"Delete3";
			this->Delete3->Size = System::Drawing::Size(96, 33);
			this->Delete3->TabIndex = 3;
			this->Delete3->Text = L"Delete";
			this->Delete3->UseVisualStyleBackColor = true;
			this->Delete3->Visible = false;
			this->Delete3->Click += gcnew System::EventHandler(this, &chatroom::Delete3_Click);
			// 
			// lname3
			// 
			this->lname3->AutoSize = true;
			this->lname3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname3->Location = System::Drawing::Point(128, 11);
			this->lname3->Name = L"lname3";
			this->lname3->Size = System::Drawing::Size(115, 24);
			this->lname3->TabIndex = 2;
			this->lname3->Text = L"Last Name";
			// 
			// checkBox3
			// 
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(374, 26);
			this->checkBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(20, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->Visible = false;
			// 
			// phone3
			// 
			this->phone3->AutoSize = true;
			this->phone3->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone3->Location = System::Drawing::Point(36, 50);
			this->phone3->Name = L"phone3";
			this->phone3->Size = System::Drawing::Size(115, 21);
			this->phone3->TabIndex = 1;
			this->phone3->Text = L"Phonr Number";
			// 
			// edit3
			// 
			this->edit3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit3->Location = System::Drawing::Point(598, 18);
			this->edit3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit3->Name = L"edit3";
			this->edit3->Size = System::Drawing::Size(87, 33);
			this->edit3->TabIndex = 2;
			this->edit3->Text = L"Edit";
			this->edit3->UseVisualStyleBackColor = true;
			this->edit3->Visible = false;
			this->edit3->Click += gcnew System::EventHandler(this, &chatroom::edit3_Click);
			// 
			// fname3
			// 
			this->fname3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname3->AutoSize = true;
			this->fname3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname3->Location = System::Drawing::Point(3, 10);
			this->fname3->Name = L"fname3";
			this->fname3->Size = System::Drawing::Size(119, 24);
			this->fname3->TabIndex = 0;
			this->fname3->Text = L"First Name";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->Unselect4);
			this->panel5->Controls->Add(this->select4);
			this->panel5->Controls->Add(this->Delete4);
			this->panel5->Controls->Add(this->lname4);
			this->panel5->Controls->Add(this->checkBox4);
			this->panel5->Controls->Add(this->phone4);
			this->panel5->Controls->Add(this->edit4);
			this->panel5->Controls->Add(this->fname4);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(3, 299);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(834, 77);
			this->panel5->TabIndex = 4;
			this->panel5->Visible = false;
			// 
			// Unselect4
			// 
			this->Unselect4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect4->Location = System::Drawing::Point(716, 18);
			this->Unselect4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect4->Name = L"Unselect4";
			this->Unselect4->Size = System::Drawing::Size(113, 34);
			this->Unselect4->TabIndex = 6;
			this->Unselect4->Text = L"Unselect";
			this->Unselect4->UseVisualStyleBackColor = true;
			this->Unselect4->Visible = false;
			this->Unselect4->Click += gcnew System::EventHandler(this, &chatroom::Unselect4_Click);
			// 
			// select4
			// 
			this->select4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select4->Location = System::Drawing::Point(598, 15);
			this->select4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select4->Name = L"select4";
			this->select4->Size = System::Drawing::Size(89, 38);
			this->select4->TabIndex = 5;
			this->select4->Text = L"select";
			this->select4->UseVisualStyleBackColor = true;
			this->select4->Visible = false;
			this->select4->Click += gcnew System::EventHandler(this, &chatroom::select4_Click);
			// 
			// Delete4
			// 
			this->Delete4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete4->Location = System::Drawing::Point(716, 18);
			this->Delete4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete4->Name = L"Delete4";
			this->Delete4->Size = System::Drawing::Size(96, 33);
			this->Delete4->TabIndex = 3;
			this->Delete4->Text = L"Delete";
			this->Delete4->UseVisualStyleBackColor = true;
			this->Delete4->Visible = false;
			this->Delete4->Click += gcnew System::EventHandler(this, &chatroom::Delete4_Click);
			// 
			// lname4
			// 
			this->lname4->AutoSize = true;
			this->lname4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname4->Location = System::Drawing::Point(128, 11);
			this->lname4->Name = L"lname4";
			this->lname4->Size = System::Drawing::Size(115, 24);
			this->lname4->TabIndex = 2;
			this->lname4->Text = L"Last Name";
			// 
			// checkBox4
			// 
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(374, 26);
			this->checkBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(20, 17);
			this->checkBox4->TabIndex = 2;
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->Visible = false;
			// 
			// phone4
			// 
			this->phone4->AutoSize = true;
			this->phone4->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone4->Location = System::Drawing::Point(36, 50);
			this->phone4->Name = L"phone4";
			this->phone4->Size = System::Drawing::Size(115, 21);
			this->phone4->TabIndex = 1;
			this->phone4->Text = L"Phonr Number";
			// 
			// edit4
			// 
			this->edit4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit4->Location = System::Drawing::Point(598, 18);
			this->edit4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit4->Name = L"edit4";
			this->edit4->Size = System::Drawing::Size(87, 33);
			this->edit4->TabIndex = 2;
			this->edit4->Text = L"Edit";
			this->edit4->UseVisualStyleBackColor = true;
			this->edit4->Visible = false;
			this->edit4->Click += gcnew System::EventHandler(this, &chatroom::edit4_Click);
			// 
			// fname4
			// 
			this->fname4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname4->AutoSize = true;
			this->fname4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname4->Location = System::Drawing::Point(3, 10);
			this->fname4->Name = L"fname4";
			this->fname4->Size = System::Drawing::Size(119, 24);
			this->fname4->TabIndex = 0;
			this->fname4->Text = L"First Name";
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->Unselect5);
			this->panel6->Controls->Add(this->select5);
			this->panel6->Controls->Add(this->Delete5);
			this->panel6->Controls->Add(this->lname5);
			this->panel6->Controls->Add(this->checkBox5);
			this->panel6->Controls->Add(this->phone5);
			this->panel6->Controls->Add(this->edit5);
			this->panel6->Controls->Add(this->fname5);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(3, 380);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(834, 77);
			this->panel6->TabIndex = 5;
			this->panel6->Visible = false;
			// 
			// Unselect5
			// 
			this->Unselect5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect5->Location = System::Drawing::Point(716, 18);
			this->Unselect5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect5->Name = L"Unselect5";
			this->Unselect5->Size = System::Drawing::Size(113, 34);
			this->Unselect5->TabIndex = 6;
			this->Unselect5->Text = L"Unselect";
			this->Unselect5->UseVisualStyleBackColor = true;
			this->Unselect5->Visible = false;
			this->Unselect5->Click += gcnew System::EventHandler(this, &chatroom::Unselect5_Click);
			// 
			// select5
			// 
			this->select5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select5->Location = System::Drawing::Point(598, 18);
			this->select5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select5->Name = L"select5";
			this->select5->Size = System::Drawing::Size(89, 38);
			this->select5->TabIndex = 5;
			this->select5->Text = L"select";
			this->select5->UseVisualStyleBackColor = true;
			this->select5->Visible = false;
			this->select5->Click += gcnew System::EventHandler(this, &chatroom::select5_Click);
			// 
			// Delete5
			// 
			this->Delete5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete5->Location = System::Drawing::Point(716, 18);
			this->Delete5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete5->Name = L"Delete5";
			this->Delete5->Size = System::Drawing::Size(96, 33);
			this->Delete5->TabIndex = 3;
			this->Delete5->Text = L"Delete";
			this->Delete5->UseVisualStyleBackColor = true;
			this->Delete5->Visible = false;
			this->Delete5->Click += gcnew System::EventHandler(this, &chatroom::Delete5_Click);
			// 
			// lname5
			// 
			this->lname5->AutoSize = true;
			this->lname5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname5->Location = System::Drawing::Point(128, 11);
			this->lname5->Name = L"lname5";
			this->lname5->Size = System::Drawing::Size(115, 24);
			this->lname5->TabIndex = 2;
			this->lname5->Text = L"Last Name";
			// 
			// checkBox5
			// 
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox5->Location = System::Drawing::Point(374, 26);
			this->checkBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(20, 17);
			this->checkBox5->TabIndex = 2;
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->Visible = false;
			// 
			// phone5
			// 
			this->phone5->AutoSize = true;
			this->phone5->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone5->Location = System::Drawing::Point(36, 50);
			this->phone5->Name = L"phone5";
			this->phone5->Size = System::Drawing::Size(115, 21);
			this->phone5->TabIndex = 1;
			this->phone5->Text = L"Phonr Number";
			// 
			// edit5
			// 
			this->edit5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit5->Location = System::Drawing::Point(598, 18);
			this->edit5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit5->Name = L"edit5";
			this->edit5->Size = System::Drawing::Size(87, 33);
			this->edit5->TabIndex = 2;
			this->edit5->Text = L"Edit";
			this->edit5->UseVisualStyleBackColor = true;
			this->edit5->Visible = false;
			this->edit5->Click += gcnew System::EventHandler(this, &chatroom::edit5_Click);
			// 
			// fname5
			// 
			this->fname5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname5->AutoSize = true;
			this->fname5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname5->Location = System::Drawing::Point(3, 10);
			this->fname5->Name = L"fname5";
			this->fname5->Size = System::Drawing::Size(119, 24);
			this->fname5->TabIndex = 0;
			this->fname5->Text = L"First Name";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->Unselect6);
			this->panel7->Controls->Add(this->select6);
			this->panel7->Controls->Add(this->Delete6);
			this->panel7->Controls->Add(this->lname6);
			this->panel7->Controls->Add(this->checkBox6);
			this->panel7->Controls->Add(this->phone6);
			this->panel7->Controls->Add(this->edit6);
			this->panel7->Controls->Add(this->fname6);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel7->Location = System::Drawing::Point(3, 461);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(834, 77);
			this->panel7->TabIndex = 6;
			this->panel7->Visible = false;
			// 
			// Unselect6
			// 
			this->Unselect6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect6->Location = System::Drawing::Point(716, 18);
			this->Unselect6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect6->Name = L"Unselect6";
			this->Unselect6->Size = System::Drawing::Size(113, 34);
			this->Unselect6->TabIndex = 6;
			this->Unselect6->Text = L"Unselect";
			this->Unselect6->UseVisualStyleBackColor = true;
			this->Unselect6->Visible = false;
			this->Unselect6->Click += gcnew System::EventHandler(this, &chatroom::Unselect6_Click);
			// 
			// select6
			// 
			this->select6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select6->Location = System::Drawing::Point(598, 18);
			this->select6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select6->Name = L"select6";
			this->select6->Size = System::Drawing::Size(89, 38);
			this->select6->TabIndex = 5;
			this->select6->Text = L"select";
			this->select6->UseVisualStyleBackColor = true;
			this->select6->Visible = false;
			this->select6->Click += gcnew System::EventHandler(this, &chatroom::select6_Click);
			// 
			// Delete6
			// 
			this->Delete6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete6->Location = System::Drawing::Point(716, 18);
			this->Delete6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete6->Name = L"Delete6";
			this->Delete6->Size = System::Drawing::Size(96, 33);
			this->Delete6->TabIndex = 3;
			this->Delete6->Text = L"Delete";
			this->Delete6->UseVisualStyleBackColor = true;
			this->Delete6->Visible = false;
			this->Delete6->Click += gcnew System::EventHandler(this, &chatroom::Delete6_Click);
			// 
			// lname6
			// 
			this->lname6->AutoSize = true;
			this->lname6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname6->Location = System::Drawing::Point(128, 11);
			this->lname6->Name = L"lname6";
			this->lname6->Size = System::Drawing::Size(115, 24);
			this->lname6->TabIndex = 2;
			this->lname6->Text = L"Last Name";
			// 
			// checkBox6
			// 
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox6->Location = System::Drawing::Point(374, 26);
			this->checkBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(20, 17);
			this->checkBox6->TabIndex = 2;
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->Visible = false;
			// 
			// phone6
			// 
			this->phone6->AutoSize = true;
			this->phone6->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone6->Location = System::Drawing::Point(36, 50);
			this->phone6->Name = L"phone6";
			this->phone6->Size = System::Drawing::Size(115, 21);
			this->phone6->TabIndex = 1;
			this->phone6->Text = L"Phonr Number";
			// 
			// edit6
			// 
			this->edit6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit6->Location = System::Drawing::Point(598, 18);
			this->edit6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit6->Name = L"edit6";
			this->edit6->Size = System::Drawing::Size(87, 33);
			this->edit6->TabIndex = 2;
			this->edit6->Text = L"Edit";
			this->edit6->UseVisualStyleBackColor = true;
			this->edit6->Visible = false;
			this->edit6->Click += gcnew System::EventHandler(this, &chatroom::edit6_Click);
			// 
			// fname6
			// 
			this->fname6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname6->AutoSize = true;
			this->fname6->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname6->Location = System::Drawing::Point(3, 10);
			this->fname6->Name = L"fname6";
			this->fname6->Size = System::Drawing::Size(119, 24);
			this->fname6->TabIndex = 0;
			this->fname6->Text = L"First Name";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->Unselect7);
			this->panel8->Controls->Add(this->select7);
			this->panel8->Controls->Add(this->Delete7);
			this->panel8->Controls->Add(this->lname7);
			this->panel8->Controls->Add(this->checkBox7);
			this->panel8->Controls->Add(this->phone7);
			this->panel8->Controls->Add(this->edit7);
			this->panel8->Controls->Add(this->fname7);
			this->panel8->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel8->Location = System::Drawing::Point(3, 542);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(834, 77);
			this->panel8->TabIndex = 7;
			this->panel8->Visible = false;
			// 
			// Unselect7
			// 
			this->Unselect7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect7->Location = System::Drawing::Point(716, 18);
			this->Unselect7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect7->Name = L"Unselect7";
			this->Unselect7->Size = System::Drawing::Size(113, 34);
			this->Unselect7->TabIndex = 6;
			this->Unselect7->Text = L"Unselect";
			this->Unselect7->UseVisualStyleBackColor = true;
			this->Unselect7->Visible = false;
			this->Unselect7->Click += gcnew System::EventHandler(this, &chatroom::Unselect7_Click);
			// 
			// select7
			// 
			this->select7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select7->Location = System::Drawing::Point(596, 18);
			this->select7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select7->Name = L"select7";
			this->select7->Size = System::Drawing::Size(89, 38);
			this->select7->TabIndex = 5;
			this->select7->Text = L"select";
			this->select7->UseVisualStyleBackColor = true;
			this->select7->Visible = false;
			this->select7->Click += gcnew System::EventHandler(this, &chatroom::select7_Click);
			// 
			// Delete7
			// 
			this->Delete7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete7->Location = System::Drawing::Point(716, 18);
			this->Delete7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete7->Name = L"Delete7";
			this->Delete7->Size = System::Drawing::Size(96, 33);
			this->Delete7->TabIndex = 3;
			this->Delete7->Text = L"Delete";
			this->Delete7->UseVisualStyleBackColor = true;
			this->Delete7->Visible = false;
			this->Delete7->Click += gcnew System::EventHandler(this, &chatroom::Delete7_Click);
			// 
			// lname7
			// 
			this->lname7->AutoSize = true;
			this->lname7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname7->Location = System::Drawing::Point(128, 11);
			this->lname7->Name = L"lname7";
			this->lname7->Size = System::Drawing::Size(115, 24);
			this->lname7->TabIndex = 2;
			this->lname7->Text = L"Last Name";
			// 
			// checkBox7
			// 
			this->checkBox7->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox7->Location = System::Drawing::Point(374, 26);
			this->checkBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(20, 17);
			this->checkBox7->TabIndex = 2;
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->Visible = false;
			// 
			// phone7
			// 
			this->phone7->AutoSize = true;
			this->phone7->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone7->Location = System::Drawing::Point(36, 50);
			this->phone7->Name = L"phone7";
			this->phone7->Size = System::Drawing::Size(115, 21);
			this->phone7->TabIndex = 1;
			this->phone7->Text = L"Phonr Number";
			// 
			// edit7
			// 
			this->edit7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit7->Location = System::Drawing::Point(598, 18);
			this->edit7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit7->Name = L"edit7";
			this->edit7->Size = System::Drawing::Size(87, 33);
			this->edit7->TabIndex = 2;
			this->edit7->Text = L"Edit";
			this->edit7->UseVisualStyleBackColor = true;
			this->edit7->Visible = false;
			this->edit7->Click += gcnew System::EventHandler(this, &chatroom::edit7_Click);
			// 
			// fname7
			// 
			this->fname7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname7->AutoSize = true;
			this->fname7->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname7->Location = System::Drawing::Point(3, 10);
			this->fname7->Name = L"fname7";
			this->fname7->Size = System::Drawing::Size(119, 24);
			this->fname7->TabIndex = 0;
			this->fname7->Text = L"First Name";
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->Unselect8);
			this->panel9->Controls->Add(this->select8);
			this->panel9->Controls->Add(this->Delete8);
			this->panel9->Controls->Add(this->lname8);
			this->panel9->Controls->Add(this->checkBox8);
			this->panel9->Controls->Add(this->phone8);
			this->panel9->Controls->Add(this->edit8);
			this->panel9->Controls->Add(this->fname8);
			this->panel9->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel9->Location = System::Drawing::Point(3, 623);
			this->panel9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(834, 77);
			this->panel9->TabIndex = 8;
			this->panel9->Visible = false;
			// 
			// Unselect8
			// 
			this->Unselect8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect8->Location = System::Drawing::Point(716, 18);
			this->Unselect8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect8->Name = L"Unselect8";
			this->Unselect8->Size = System::Drawing::Size(113, 34);
			this->Unselect8->TabIndex = 6;
			this->Unselect8->Text = L"Unselect";
			this->Unselect8->UseVisualStyleBackColor = true;
			this->Unselect8->Visible = false;
			this->Unselect8->Click += gcnew System::EventHandler(this, &chatroom::Unselect8_Click);
			// 
			// select8
			// 
			this->select8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select8->Location = System::Drawing::Point(598, 18);
			this->select8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select8->Name = L"select8";
			this->select8->Size = System::Drawing::Size(89, 38);
			this->select8->TabIndex = 5;
			this->select8->Text = L"select";
			this->select8->UseVisualStyleBackColor = true;
			this->select8->Visible = false;
			this->select8->Click += gcnew System::EventHandler(this, &chatroom::select8_Click);
			// 
			// Delete8
			// 
			this->Delete8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete8->Location = System::Drawing::Point(716, 18);
			this->Delete8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete8->Name = L"Delete8";
			this->Delete8->Size = System::Drawing::Size(96, 33);
			this->Delete8->TabIndex = 3;
			this->Delete8->Text = L"Delete";
			this->Delete8->UseVisualStyleBackColor = true;
			this->Delete8->Visible = false;
			this->Delete8->Click += gcnew System::EventHandler(this, &chatroom::Delete8_Click);
			// 
			// lname8
			// 
			this->lname8->AutoSize = true;
			this->lname8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname8->Location = System::Drawing::Point(128, 11);
			this->lname8->Name = L"lname8";
			this->lname8->Size = System::Drawing::Size(115, 24);
			this->lname8->TabIndex = 2;
			this->lname8->Text = L"Last Name";
			// 
			// checkBox8
			// 
			this->checkBox8->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox8->Location = System::Drawing::Point(374, 26);
			this->checkBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(20, 17);
			this->checkBox8->TabIndex = 2;
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->Visible = false;
			// 
			// phone8
			// 
			this->phone8->AutoSize = true;
			this->phone8->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone8->Location = System::Drawing::Point(36, 50);
			this->phone8->Name = L"phone8";
			this->phone8->Size = System::Drawing::Size(115, 21);
			this->phone8->TabIndex = 1;
			this->phone8->Text = L"Phonr Number";
			// 
			// edit8
			// 
			this->edit8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit8->Location = System::Drawing::Point(598, 18);
			this->edit8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit8->Name = L"edit8";
			this->edit8->Size = System::Drawing::Size(87, 33);
			this->edit8->TabIndex = 2;
			this->edit8->Text = L"Edit";
			this->edit8->UseVisualStyleBackColor = true;
			this->edit8->Visible = false;
			this->edit8->Click += gcnew System::EventHandler(this, &chatroom::edit8_Click);
			// 
			// fname8
			// 
			this->fname8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname8->AutoSize = true;
			this->fname8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname8->Location = System::Drawing::Point(3, 10);
			this->fname8->Name = L"fname8";
			this->fname8->Size = System::Drawing::Size(119, 24);
			this->fname8->TabIndex = 0;
			this->fname8->Text = L"First Name";
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->Unselect9);
			this->panel10->Controls->Add(this->select9);
			this->panel10->Controls->Add(this->Delete9);
			this->panel10->Controls->Add(this->lname9);
			this->panel10->Controls->Add(this->checkBox9);
			this->panel10->Controls->Add(this->phone9);
			this->panel10->Controls->Add(this->edit9);
			this->panel10->Controls->Add(this->fname9);
			this->panel10->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel10->Location = System::Drawing::Point(3, 704);
			this->panel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(834, 77);
			this->panel10->TabIndex = 9;
			this->panel10->Visible = false;
			// 
			// Unselect9
			// 
			this->Unselect9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect9->Location = System::Drawing::Point(716, 18);
			this->Unselect9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect9->Name = L"Unselect9";
			this->Unselect9->Size = System::Drawing::Size(113, 34);
			this->Unselect9->TabIndex = 6;
			this->Unselect9->Text = L"Unselect";
			this->Unselect9->UseVisualStyleBackColor = true;
			this->Unselect9->Visible = false;
			this->Unselect9->Click += gcnew System::EventHandler(this, &chatroom::Unselect9_Click);
			// 
			// select9
			// 
			this->select9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select9->Location = System::Drawing::Point(598, 18);
			this->select9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select9->Name = L"select9";
			this->select9->Size = System::Drawing::Size(89, 38);
			this->select9->TabIndex = 5;
			this->select9->Text = L"select";
			this->select9->UseVisualStyleBackColor = true;
			this->select9->Visible = false;
			this->select9->Click += gcnew System::EventHandler(this, &chatroom::select9_Click);
			// 
			// Delete9
			// 
			this->Delete9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete9->Location = System::Drawing::Point(716, 18);
			this->Delete9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete9->Name = L"Delete9";
			this->Delete9->Size = System::Drawing::Size(96, 33);
			this->Delete9->TabIndex = 3;
			this->Delete9->Text = L"Delete";
			this->Delete9->UseVisualStyleBackColor = true;
			this->Delete9->Visible = false;
			this->Delete9->Click += gcnew System::EventHandler(this, &chatroom::Delete9_Click);
			// 
			// lname9
			// 
			this->lname9->AutoSize = true;
			this->lname9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname9->Location = System::Drawing::Point(128, 11);
			this->lname9->Name = L"lname9";
			this->lname9->Size = System::Drawing::Size(115, 24);
			this->lname9->TabIndex = 2;
			this->lname9->Text = L"Last Name";
			// 
			// checkBox9
			// 
			this->checkBox9->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox9->Location = System::Drawing::Point(374, 26);
			this->checkBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(20, 17);
			this->checkBox9->TabIndex = 2;
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->Visible = false;
			// 
			// phone9
			// 
			this->phone9->AutoSize = true;
			this->phone9->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone9->Location = System::Drawing::Point(36, 50);
			this->phone9->Name = L"phone9";
			this->phone9->Size = System::Drawing::Size(115, 21);
			this->phone9->TabIndex = 1;
			this->phone9->Text = L"Phonr Number";
			// 
			// edit9
			// 
			this->edit9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit9->Location = System::Drawing::Point(598, 18);
			this->edit9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit9->Name = L"edit9";
			this->edit9->Size = System::Drawing::Size(87, 33);
			this->edit9->TabIndex = 2;
			this->edit9->Text = L"Edit";
			this->edit9->UseVisualStyleBackColor = true;
			this->edit9->Visible = false;
			this->edit9->Click += gcnew System::EventHandler(this, &chatroom::edit9_Click);
			// 
			// fname9
			// 
			this->fname9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname9->AutoSize = true;
			this->fname9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname9->Location = System::Drawing::Point(3, 10);
			this->fname9->Name = L"fname9";
			this->fname9->Size = System::Drawing::Size(119, 24);
			this->fname9->TabIndex = 0;
			this->fname9->Text = L"First Name";
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->Unselect10);
			this->panel11->Controls->Add(this->select10);
			this->panel11->Controls->Add(this->Delete10);
			this->panel11->Controls->Add(this->lname10);
			this->panel11->Controls->Add(this->checkBox10);
			this->panel11->Controls->Add(this->phone10);
			this->panel11->Controls->Add(this->edit10);
			this->panel11->Controls->Add(this->fname10);
			this->panel11->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel11->Location = System::Drawing::Point(3, 785);
			this->panel11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(834, 77);
			this->panel11->TabIndex = 10;
			this->panel11->Visible = false;
			// 
			// Unselect10
			// 
			this->Unselect10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect10->Location = System::Drawing::Point(716, 18);
			this->Unselect10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect10->Name = L"Unselect10";
			this->Unselect10->Size = System::Drawing::Size(113, 34);
			this->Unselect10->TabIndex = 6;
			this->Unselect10->Text = L"Unselect";
			this->Unselect10->UseVisualStyleBackColor = true;
			this->Unselect10->Visible = false;
			this->Unselect10->Click += gcnew System::EventHandler(this, &chatroom::Unselect10_Click);
			// 
			// select10
			// 
			this->select10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select10->Location = System::Drawing::Point(598, 20);
			this->select10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select10->Name = L"select10";
			this->select10->Size = System::Drawing::Size(89, 38);
			this->select10->TabIndex = 5;
			this->select10->Text = L"select";
			this->select10->UseVisualStyleBackColor = true;
			this->select10->Visible = false;
			this->select10->Click += gcnew System::EventHandler(this, &chatroom::select10_Click);
			// 
			// Delete10
			// 
			this->Delete10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete10->Location = System::Drawing::Point(716, 18);
			this->Delete10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete10->Name = L"Delete10";
			this->Delete10->Size = System::Drawing::Size(96, 33);
			this->Delete10->TabIndex = 3;
			this->Delete10->Text = L"Delete";
			this->Delete10->UseVisualStyleBackColor = true;
			this->Delete10->Visible = false;
			this->Delete10->Click += gcnew System::EventHandler(this, &chatroom::Delete10_Click);
			// 
			// lname10
			// 
			this->lname10->AutoSize = true;
			this->lname10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname10->Location = System::Drawing::Point(128, 11);
			this->lname10->Name = L"lname10";
			this->lname10->Size = System::Drawing::Size(115, 24);
			this->lname10->TabIndex = 2;
			this->lname10->Text = L"Last Name";
			// 
			// checkBox10
			// 
			this->checkBox10->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox10->Location = System::Drawing::Point(374, 26);
			this->checkBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(20, 17);
			this->checkBox10->TabIndex = 2;
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->Visible = false;
			// 
			// phone10
			// 
			this->phone10->AutoSize = true;
			this->phone10->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone10->Location = System::Drawing::Point(36, 50);
			this->phone10->Name = L"phone10";
			this->phone10->Size = System::Drawing::Size(115, 21);
			this->phone10->TabIndex = 1;
			this->phone10->Text = L"Phonr Number";
			// 
			// edit10
			// 
			this->edit10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit10->Location = System::Drawing::Point(598, 18);
			this->edit10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit10->Name = L"edit10";
			this->edit10->Size = System::Drawing::Size(87, 33);
			this->edit10->TabIndex = 2;
			this->edit10->Text = L"Edit";
			this->edit10->UseVisualStyleBackColor = true;
			this->edit10->Visible = false;
			this->edit10->Click += gcnew System::EventHandler(this, &chatroom::edit10_Click);
			// 
			// fname10
			// 
			this->fname10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname10->AutoSize = true;
			this->fname10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname10->Location = System::Drawing::Point(3, 10);
			this->fname10->Name = L"fname10";
			this->fname10->Size = System::Drawing::Size(119, 24);
			this->fname10->TabIndex = 0;
			this->fname10->Text = L"First Name";
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->Unselect11);
			this->panel12->Controls->Add(this->select11);
			this->panel12->Controls->Add(this->Delete11);
			this->panel12->Controls->Add(this->lname11);
			this->panel12->Controls->Add(this->checkBox11);
			this->panel12->Controls->Add(this->phone11);
			this->panel12->Controls->Add(this->edit11);
			this->panel12->Controls->Add(this->fname11);
			this->panel12->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel12->Location = System::Drawing::Point(3, 866);
			this->panel12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(834, 77);
			this->panel12->TabIndex = 11;
			this->panel12->Visible = false;
			// 
			// Unselect11
			// 
			this->Unselect11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect11->Location = System::Drawing::Point(716, 20);
			this->Unselect11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect11->Name = L"Unselect11";
			this->Unselect11->Size = System::Drawing::Size(113, 34);
			this->Unselect11->TabIndex = 6;
			this->Unselect11->Text = L"Unselect";
			this->Unselect11->UseVisualStyleBackColor = true;
			this->Unselect11->Visible = false;
			this->Unselect11->Click += gcnew System::EventHandler(this, &chatroom::Unselect11_Click);
			// 
			// select11
			// 
			this->select11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select11->Location = System::Drawing::Point(598, 20);
			this->select11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select11->Name = L"select11";
			this->select11->Size = System::Drawing::Size(89, 38);
			this->select11->TabIndex = 5;
			this->select11->Text = L"select";
			this->select11->UseVisualStyleBackColor = true;
			this->select11->Visible = false;
			this->select11->Click += gcnew System::EventHandler(this, &chatroom::select11_Click);
			// 
			// Delete11
			// 
			this->Delete11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete11->Location = System::Drawing::Point(716, 18);
			this->Delete11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete11->Name = L"Delete11";
			this->Delete11->Size = System::Drawing::Size(96, 33);
			this->Delete11->TabIndex = 3;
			this->Delete11->Text = L"Delete";
			this->Delete11->UseVisualStyleBackColor = true;
			this->Delete11->Visible = false;
			this->Delete11->Click += gcnew System::EventHandler(this, &chatroom::Delete11_Click);
			// 
			// lname11
			// 
			this->lname11->AutoSize = true;
			this->lname11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname11->Location = System::Drawing::Point(128, 11);
			this->lname11->Name = L"lname11";
			this->lname11->Size = System::Drawing::Size(115, 24);
			this->lname11->TabIndex = 2;
			this->lname11->Text = L"Last Name";
			// 
			// checkBox11
			// 
			this->checkBox11->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox11->Location = System::Drawing::Point(374, 26);
			this->checkBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(20, 17);
			this->checkBox11->TabIndex = 2;
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->Visible = false;
			// 
			// phone11
			// 
			this->phone11->AutoSize = true;
			this->phone11->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone11->Location = System::Drawing::Point(36, 50);
			this->phone11->Name = L"phone11";
			this->phone11->Size = System::Drawing::Size(115, 21);
			this->phone11->TabIndex = 1;
			this->phone11->Text = L"Phonr Number";
			// 
			// edit11
			// 
			this->edit11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit11->Location = System::Drawing::Point(598, 18);
			this->edit11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit11->Name = L"edit11";
			this->edit11->Size = System::Drawing::Size(87, 33);
			this->edit11->TabIndex = 2;
			this->edit11->Text = L"Edit";
			this->edit11->UseVisualStyleBackColor = true;
			this->edit11->Visible = false;
			this->edit11->Click += gcnew System::EventHandler(this, &chatroom::edit11_Click);
			// 
			// fname11
			// 
			this->fname11->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname11->AutoSize = true;
			this->fname11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname11->Location = System::Drawing::Point(3, 10);
			this->fname11->Name = L"fname11";
			this->fname11->Size = System::Drawing::Size(119, 24);
			this->fname11->TabIndex = 0;
			this->fname11->Text = L"First Name";
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->Unselect12);
			this->panel13->Controls->Add(this->select12);
			this->panel13->Controls->Add(this->Delete12);
			this->panel13->Controls->Add(this->lname12);
			this->panel13->Controls->Add(this->checkBox12);
			this->panel13->Controls->Add(this->phone12);
			this->panel13->Controls->Add(this->edit12);
			this->panel13->Controls->Add(this->fname12);
			this->panel13->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel13->Location = System::Drawing::Point(3, 947);
			this->panel13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(834, 77);
			this->panel13->TabIndex = 12;
			this->panel13->Visible = false;
			// 
			// Unselect12
			// 
			this->Unselect12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect12->Location = System::Drawing::Point(716, 18);
			this->Unselect12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect12->Name = L"Unselect12";
			this->Unselect12->Size = System::Drawing::Size(113, 34);
			this->Unselect12->TabIndex = 6;
			this->Unselect12->Text = L"Unselect";
			this->Unselect12->UseVisualStyleBackColor = true;
			this->Unselect12->Visible = false;
			this->Unselect12->Click += gcnew System::EventHandler(this, &chatroom::Unselect12_Click);
			// 
			// select12
			// 
			this->select12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select12->Location = System::Drawing::Point(594, 18);
			this->select12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select12->Name = L"select12";
			this->select12->Size = System::Drawing::Size(89, 38);
			this->select12->TabIndex = 5;
			this->select12->Text = L"select";
			this->select12->UseVisualStyleBackColor = true;
			this->select12->Visible = false;
			this->select12->Click += gcnew System::EventHandler(this, &chatroom::select12_Click);
			// 
			// Delete12
			// 
			this->Delete12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete12->Location = System::Drawing::Point(716, 18);
			this->Delete12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete12->Name = L"Delete12";
			this->Delete12->Size = System::Drawing::Size(96, 33);
			this->Delete12->TabIndex = 3;
			this->Delete12->Text = L"Delete";
			this->Delete12->UseVisualStyleBackColor = true;
			this->Delete12->Visible = false;
			this->Delete12->Click += gcnew System::EventHandler(this, &chatroom::Delete12_Click);
			// 
			// lname12
			// 
			this->lname12->AutoSize = true;
			this->lname12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname12->Location = System::Drawing::Point(128, 11);
			this->lname12->Name = L"lname12";
			this->lname12->Size = System::Drawing::Size(115, 24);
			this->lname12->TabIndex = 2;
			this->lname12->Text = L"Last Name";
			// 
			// checkBox12
			// 
			this->checkBox12->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox12->Location = System::Drawing::Point(374, 26);
			this->checkBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(20, 17);
			this->checkBox12->TabIndex = 2;
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->Visible = false;
			// 
			// phone12
			// 
			this->phone12->AutoSize = true;
			this->phone12->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone12->Location = System::Drawing::Point(36, 50);
			this->phone12->Name = L"phone12";
			this->phone12->Size = System::Drawing::Size(115, 21);
			this->phone12->TabIndex = 1;
			this->phone12->Text = L"Phonr Number";
			// 
			// edit12
			// 
			this->edit12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit12->Location = System::Drawing::Point(598, 18);
			this->edit12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit12->Name = L"edit12";
			this->edit12->Size = System::Drawing::Size(87, 33);
			this->edit12->TabIndex = 2;
			this->edit12->Text = L"Edit";
			this->edit12->UseVisualStyleBackColor = true;
			this->edit12->Visible = false;
			this->edit12->Click += gcnew System::EventHandler(this, &chatroom::edit12_Click);
			// 
			// fname12
			// 
			this->fname12->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname12->AutoSize = true;
			this->fname12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname12->Location = System::Drawing::Point(3, 10);
			this->fname12->Name = L"fname12";
			this->fname12->Size = System::Drawing::Size(119, 24);
			this->fname12->TabIndex = 0;
			this->fname12->Text = L"First Name";
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->Unselect13);
			this->panel14->Controls->Add(this->select13);
			this->panel14->Controls->Add(this->Delete13);
			this->panel14->Controls->Add(this->lname13);
			this->panel14->Controls->Add(this->checkBox13);
			this->panel14->Controls->Add(this->phone13);
			this->panel14->Controls->Add(this->edit13);
			this->panel14->Controls->Add(this->fname13);
			this->panel14->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel14->Location = System::Drawing::Point(3, 1028);
			this->panel14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(834, 77);
			this->panel14->TabIndex = 13;
			this->panel14->Visible = false;
			// 
			// Unselect13
			// 
			this->Unselect13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect13->Location = System::Drawing::Point(716, 18);
			this->Unselect13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect13->Name = L"Unselect13";
			this->Unselect13->Size = System::Drawing::Size(113, 34);
			this->Unselect13->TabIndex = 6;
			this->Unselect13->Text = L"Unselect";
			this->Unselect13->UseVisualStyleBackColor = true;
			this->Unselect13->Visible = false;
			this->Unselect13->Click += gcnew System::EventHandler(this, &chatroom::Unselect13_Click);
			// 
			// select13
			// 
			this->select13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select13->Location = System::Drawing::Point(598, 20);
			this->select13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select13->Name = L"select13";
			this->select13->Size = System::Drawing::Size(89, 38);
			this->select13->TabIndex = 5;
			this->select13->Text = L"select";
			this->select13->UseVisualStyleBackColor = true;
			this->select13->Visible = false;
			this->select13->Click += gcnew System::EventHandler(this, &chatroom::select13_Click);
			// 
			// Delete13
			// 
			this->Delete13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete13->Location = System::Drawing::Point(716, 18);
			this->Delete13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete13->Name = L"Delete13";
			this->Delete13->Size = System::Drawing::Size(96, 33);
			this->Delete13->TabIndex = 3;
			this->Delete13->Text = L"Delete";
			this->Delete13->UseVisualStyleBackColor = true;
			this->Delete13->Visible = false;
			this->Delete13->Click += gcnew System::EventHandler(this, &chatroom::Delete13_Click);
			// 
			// lname13
			// 
			this->lname13->AutoSize = true;
			this->lname13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname13->Location = System::Drawing::Point(128, 11);
			this->lname13->Name = L"lname13";
			this->lname13->Size = System::Drawing::Size(115, 24);
			this->lname13->TabIndex = 2;
			this->lname13->Text = L"Last Name";
			// 
			// checkBox13
			// 
			this->checkBox13->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox13->Location = System::Drawing::Point(374, 26);
			this->checkBox13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(20, 17);
			this->checkBox13->TabIndex = 2;
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->Visible = false;
			// 
			// phone13
			// 
			this->phone13->AutoSize = true;
			this->phone13->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone13->Location = System::Drawing::Point(36, 50);
			this->phone13->Name = L"phone13";
			this->phone13->Size = System::Drawing::Size(115, 21);
			this->phone13->TabIndex = 1;
			this->phone13->Text = L"Phonr Number";
			// 
			// edit13
			// 
			this->edit13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit13->Location = System::Drawing::Point(598, 18);
			this->edit13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit13->Name = L"edit13";
			this->edit13->Size = System::Drawing::Size(87, 33);
			this->edit13->TabIndex = 2;
			this->edit13->Text = L"Edit";
			this->edit13->UseVisualStyleBackColor = true;
			this->edit13->Visible = false;
			this->edit13->Click += gcnew System::EventHandler(this, &chatroom::edit13_Click);
			// 
			// fname13
			// 
			this->fname13->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname13->AutoSize = true;
			this->fname13->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname13->Location = System::Drawing::Point(3, 10);
			this->fname13->Name = L"fname13";
			this->fname13->Size = System::Drawing::Size(119, 24);
			this->fname13->TabIndex = 0;
			this->fname13->Text = L"First Name";
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->Unselect14);
			this->panel15->Controls->Add(this->select14);
			this->panel15->Controls->Add(this->Delete14);
			this->panel15->Controls->Add(this->lname14);
			this->panel15->Controls->Add(this->checkBox14);
			this->panel15->Controls->Add(this->phone14);
			this->panel15->Controls->Add(this->edit14);
			this->panel15->Controls->Add(this->fname14);
			this->panel15->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel15->Location = System::Drawing::Point(3, 1109);
			this->panel15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(834, 77);
			this->panel15->TabIndex = 14;
			this->panel15->Visible = false;
			// 
			// Unselect14
			// 
			this->Unselect14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect14->Location = System::Drawing::Point(716, 18);
			this->Unselect14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect14->Name = L"Unselect14";
			this->Unselect14->Size = System::Drawing::Size(113, 34);
			this->Unselect14->TabIndex = 6;
			this->Unselect14->Text = L"Unselect";
			this->Unselect14->UseVisualStyleBackColor = true;
			this->Unselect14->Visible = false;
			this->Unselect14->Click += gcnew System::EventHandler(this, &chatroom::Unselect14_Click);
			// 
			// select14
			// 
			this->select14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select14->Location = System::Drawing::Point(598, 18);
			this->select14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select14->Name = L"select14";
			this->select14->Size = System::Drawing::Size(89, 38);
			this->select14->TabIndex = 5;
			this->select14->Text = L"select";
			this->select14->UseVisualStyleBackColor = true;
			this->select14->Visible = false;
			this->select14->Click += gcnew System::EventHandler(this, &chatroom::select14_Click);
			// 
			// Delete14
			// 
			this->Delete14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete14->Location = System::Drawing::Point(716, 18);
			this->Delete14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete14->Name = L"Delete14";
			this->Delete14->Size = System::Drawing::Size(96, 33);
			this->Delete14->TabIndex = 3;
			this->Delete14->Text = L"Delete";
			this->Delete14->UseVisualStyleBackColor = true;
			this->Delete14->Visible = false;
			this->Delete14->Click += gcnew System::EventHandler(this, &chatroom::Delete14_Click);
			// 
			// lname14
			// 
			this->lname14->AutoSize = true;
			this->lname14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname14->Location = System::Drawing::Point(128, 11);
			this->lname14->Name = L"lname14";
			this->lname14->Size = System::Drawing::Size(115, 24);
			this->lname14->TabIndex = 2;
			this->lname14->Text = L"Last Name";
			// 
			// checkBox14
			// 
			this->checkBox14->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox14->Location = System::Drawing::Point(374, 26);
			this->checkBox14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(20, 17);
			this->checkBox14->TabIndex = 2;
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->Visible = false;
			// 
			// phone14
			// 
			this->phone14->AutoSize = true;
			this->phone14->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone14->Location = System::Drawing::Point(36, 50);
			this->phone14->Name = L"phone14";
			this->phone14->Size = System::Drawing::Size(115, 21);
			this->phone14->TabIndex = 1;
			this->phone14->Text = L"Phonr Number";
			// 
			// edit14
			// 
			this->edit14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit14->Location = System::Drawing::Point(598, 18);
			this->edit14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit14->Name = L"edit14";
			this->edit14->Size = System::Drawing::Size(87, 33);
			this->edit14->TabIndex = 2;
			this->edit14->Text = L"Edit";
			this->edit14->UseVisualStyleBackColor = true;
			this->edit14->Visible = false;
			this->edit14->Click += gcnew System::EventHandler(this, &chatroom::edit14_Click);
			// 
			// fname14
			// 
			this->fname14->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname14->AutoSize = true;
			this->fname14->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname14->Location = System::Drawing::Point(3, 10);
			this->fname14->Name = L"fname14";
			this->fname14->Size = System::Drawing::Size(119, 24);
			this->fname14->TabIndex = 0;
			this->fname14->Text = L"First Name";
			// 
			// panel16
			// 
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->Unselect15);
			this->panel16->Controls->Add(this->select15);
			this->panel16->Controls->Add(this->Delete15);
			this->panel16->Controls->Add(this->lname15);
			this->panel16->Controls->Add(this->checkBox15);
			this->panel16->Controls->Add(this->phone15);
			this->panel16->Controls->Add(this->edit15);
			this->panel16->Controls->Add(this->fname15);
			this->panel16->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel16->Location = System::Drawing::Point(3, 1190);
			this->panel16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(834, 77);
			this->panel16->TabIndex = 15;
			this->panel16->Visible = false;
			// 
			// Unselect15
			// 
			this->Unselect15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect15->Location = System::Drawing::Point(716, 18);
			this->Unselect15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect15->Name = L"Unselect15";
			this->Unselect15->Size = System::Drawing::Size(113, 34);
			this->Unselect15->TabIndex = 6;
			this->Unselect15->Text = L"Unselect";
			this->Unselect15->UseVisualStyleBackColor = true;
			this->Unselect15->Visible = false;
			this->Unselect15->Click += gcnew System::EventHandler(this, &chatroom::Unselect15_Click);
			// 
			// select15
			// 
			this->select15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select15->Location = System::Drawing::Point(598, 18);
			this->select15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select15->Name = L"select15";
			this->select15->Size = System::Drawing::Size(89, 38);
			this->select15->TabIndex = 5;
			this->select15->Text = L"select";
			this->select15->UseVisualStyleBackColor = true;
			this->select15->Visible = false;
			this->select15->Click += gcnew System::EventHandler(this, &chatroom::select15_Click);
			// 
			// Delete15
			// 
			this->Delete15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete15->Location = System::Drawing::Point(716, 18);
			this->Delete15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete15->Name = L"Delete15";
			this->Delete15->Size = System::Drawing::Size(96, 33);
			this->Delete15->TabIndex = 3;
			this->Delete15->Text = L"Delete";
			this->Delete15->UseVisualStyleBackColor = true;
			this->Delete15->Visible = false;
			this->Delete15->Click += gcnew System::EventHandler(this, &chatroom::Delete15_Click);
			// 
			// lname15
			// 
			this->lname15->AutoSize = true;
			this->lname15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname15->Location = System::Drawing::Point(128, 11);
			this->lname15->Name = L"lname15";
			this->lname15->Size = System::Drawing::Size(115, 24);
			this->lname15->TabIndex = 2;
			this->lname15->Text = L"Last Name";
			// 
			// checkBox15
			// 
			this->checkBox15->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox15->Location = System::Drawing::Point(374, 26);
			this->checkBox15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(20, 17);
			this->checkBox15->TabIndex = 2;
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->Visible = false;
			// 
			// phone15
			// 
			this->phone15->AutoSize = true;
			this->phone15->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone15->Location = System::Drawing::Point(36, 50);
			this->phone15->Name = L"phone15";
			this->phone15->Size = System::Drawing::Size(115, 21);
			this->phone15->TabIndex = 1;
			this->phone15->Text = L"Phonr Number";
			// 
			// edit15
			// 
			this->edit15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit15->Location = System::Drawing::Point(598, 18);
			this->edit15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit15->Name = L"edit15";
			this->edit15->Size = System::Drawing::Size(87, 33);
			this->edit15->TabIndex = 2;
			this->edit15->Text = L"Edit";
			this->edit15->UseVisualStyleBackColor = true;
			this->edit15->Visible = false;
			this->edit15->Click += gcnew System::EventHandler(this, &chatroom::edit15_Click);
			// 
			// fname15
			// 
			this->fname15->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname15->AutoSize = true;
			this->fname15->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname15->Location = System::Drawing::Point(3, 10);
			this->fname15->Name = L"fname15";
			this->fname15->Size = System::Drawing::Size(119, 24);
			this->fname15->TabIndex = 0;
			this->fname15->Text = L"First Name";
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->Unselect16);
			this->panel17->Controls->Add(this->select16);
			this->panel17->Controls->Add(this->Delete16);
			this->panel17->Controls->Add(this->lname16);
			this->panel17->Controls->Add(this->checkBox16);
			this->panel17->Controls->Add(this->phone16);
			this->panel17->Controls->Add(this->edit16);
			this->panel17->Controls->Add(this->fname16);
			this->panel17->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel17->Location = System::Drawing::Point(3, 1271);
			this->panel17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(834, 77);
			this->panel17->TabIndex = 16;
			this->panel17->Visible = false;
			// 
			// Unselect16
			// 
			this->Unselect16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect16->Location = System::Drawing::Point(716, 18);
			this->Unselect16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect16->Name = L"Unselect16";
			this->Unselect16->Size = System::Drawing::Size(113, 34);
			this->Unselect16->TabIndex = 6;
			this->Unselect16->Text = L"Unselect";
			this->Unselect16->UseVisualStyleBackColor = true;
			this->Unselect16->Visible = false;
			this->Unselect16->Click += gcnew System::EventHandler(this, &chatroom::Unselect16_Click);
			// 
			// select16
			// 
			this->select16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select16->Location = System::Drawing::Point(598, 18);
			this->select16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select16->Name = L"select16";
			this->select16->Size = System::Drawing::Size(89, 38);
			this->select16->TabIndex = 5;
			this->select16->Text = L"select";
			this->select16->UseVisualStyleBackColor = true;
			this->select16->Visible = false;
			this->select16->Click += gcnew System::EventHandler(this, &chatroom::select16_Click);
			// 
			// Delete16
			// 
			this->Delete16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete16->Location = System::Drawing::Point(716, 18);
			this->Delete16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete16->Name = L"Delete16";
			this->Delete16->Size = System::Drawing::Size(96, 33);
			this->Delete16->TabIndex = 3;
			this->Delete16->Text = L"Delete";
			this->Delete16->UseVisualStyleBackColor = true;
			this->Delete16->Visible = false;
			this->Delete16->Click += gcnew System::EventHandler(this, &chatroom::Delete16_Click);
			// 
			// lname16
			// 
			this->lname16->AutoSize = true;
			this->lname16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname16->Location = System::Drawing::Point(128, 11);
			this->lname16->Name = L"lname16";
			this->lname16->Size = System::Drawing::Size(115, 24);
			this->lname16->TabIndex = 2;
			this->lname16->Text = L"Last Name";
			// 
			// checkBox16
			// 
			this->checkBox16->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox16->Location = System::Drawing::Point(374, 26);
			this->checkBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(20, 17);
			this->checkBox16->TabIndex = 2;
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->Visible = false;
			// 
			// phone16
			// 
			this->phone16->AutoSize = true;
			this->phone16->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone16->Location = System::Drawing::Point(36, 50);
			this->phone16->Name = L"phone16";
			this->phone16->Size = System::Drawing::Size(115, 21);
			this->phone16->TabIndex = 1;
			this->phone16->Text = L"Phonr Number";
			// 
			// edit16
			// 
			this->edit16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit16->Location = System::Drawing::Point(598, 18);
			this->edit16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit16->Name = L"edit16";
			this->edit16->Size = System::Drawing::Size(87, 33);
			this->edit16->TabIndex = 2;
			this->edit16->Text = L"Edit";
			this->edit16->UseVisualStyleBackColor = true;
			this->edit16->Visible = false;
			this->edit16->Click += gcnew System::EventHandler(this, &chatroom::edit16_Click);
			// 
			// fname16
			// 
			this->fname16->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname16->AutoSize = true;
			this->fname16->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname16->Location = System::Drawing::Point(3, 10);
			this->fname16->Name = L"fname16";
			this->fname16->Size = System::Drawing::Size(119, 24);
			this->fname16->TabIndex = 0;
			this->fname16->Text = L"First Name";
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->Unselect17);
			this->panel18->Controls->Add(this->select17);
			this->panel18->Controls->Add(this->Delete17);
			this->panel18->Controls->Add(this->lname17);
			this->panel18->Controls->Add(this->checkBox17);
			this->panel18->Controls->Add(this->phone17);
			this->panel18->Controls->Add(this->edit17);
			this->panel18->Controls->Add(this->fname17);
			this->panel18->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel18->Location = System::Drawing::Point(3, 1352);
			this->panel18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(834, 77);
			this->panel18->TabIndex = 17;
			this->panel18->Visible = false;
			// 
			// Unselect17
			// 
			this->Unselect17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect17->Location = System::Drawing::Point(716, 18);
			this->Unselect17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect17->Name = L"Unselect17";
			this->Unselect17->Size = System::Drawing::Size(113, 34);
			this->Unselect17->TabIndex = 6;
			this->Unselect17->Text = L"Unselect";
			this->Unselect17->UseVisualStyleBackColor = true;
			this->Unselect17->Visible = false;
			this->Unselect17->Click += gcnew System::EventHandler(this, &chatroom::Unselect17_Click);
			// 
			// select17
			// 
			this->select17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select17->Location = System::Drawing::Point(598, 18);
			this->select17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select17->Name = L"select17";
			this->select17->Size = System::Drawing::Size(89, 38);
			this->select17->TabIndex = 5;
			this->select17->Text = L"select";
			this->select17->UseVisualStyleBackColor = true;
			this->select17->Visible = false;
			this->select17->Click += gcnew System::EventHandler(this, &chatroom::select17_Click);
			// 
			// Delete17
			// 
			this->Delete17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete17->Location = System::Drawing::Point(716, 18);
			this->Delete17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete17->Name = L"Delete17";
			this->Delete17->Size = System::Drawing::Size(96, 33);
			this->Delete17->TabIndex = 3;
			this->Delete17->Text = L"Delete";
			this->Delete17->UseVisualStyleBackColor = true;
			this->Delete17->Visible = false;
			this->Delete17->Click += gcnew System::EventHandler(this, &chatroom::Delete17_Click);
			// 
			// lname17
			// 
			this->lname17->AutoSize = true;
			this->lname17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname17->Location = System::Drawing::Point(128, 11);
			this->lname17->Name = L"lname17";
			this->lname17->Size = System::Drawing::Size(115, 24);
			this->lname17->TabIndex = 2;
			this->lname17->Text = L"Last Name";
			// 
			// checkBox17
			// 
			this->checkBox17->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox17->Location = System::Drawing::Point(374, 26);
			this->checkBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(20, 17);
			this->checkBox17->TabIndex = 2;
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->Visible = false;
			// 
			// phone17
			// 
			this->phone17->AutoSize = true;
			this->phone17->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone17->Location = System::Drawing::Point(36, 50);
			this->phone17->Name = L"phone17";
			this->phone17->Size = System::Drawing::Size(115, 21);
			this->phone17->TabIndex = 1;
			this->phone17->Text = L"Phonr Number";
			// 
			// edit17
			// 
			this->edit17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit17->Location = System::Drawing::Point(598, 18);
			this->edit17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit17->Name = L"edit17";
			this->edit17->Size = System::Drawing::Size(87, 33);
			this->edit17->TabIndex = 2;
			this->edit17->Text = L"Edit";
			this->edit17->UseVisualStyleBackColor = true;
			this->edit17->Visible = false;
			this->edit17->Click += gcnew System::EventHandler(this, &chatroom::edit17_Click);
			// 
			// fname17
			// 
			this->fname17->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname17->AutoSize = true;
			this->fname17->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname17->Location = System::Drawing::Point(3, 10);
			this->fname17->Name = L"fname17";
			this->fname17->Size = System::Drawing::Size(119, 24);
			this->fname17->TabIndex = 0;
			this->fname17->Text = L"First Name";
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->Unselect18);
			this->panel19->Controls->Add(this->select18);
			this->panel19->Controls->Add(this->Delete18);
			this->panel19->Controls->Add(this->lname18);
			this->panel19->Controls->Add(this->checkBox18);
			this->panel19->Controls->Add(this->phone18);
			this->panel19->Controls->Add(this->edit18);
			this->panel19->Controls->Add(this->fname18);
			this->panel19->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel19->Location = System::Drawing::Point(3, 1433);
			this->panel19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(834, 77);
			this->panel19->TabIndex = 18;
			this->panel19->Visible = false;
			// 
			// Unselect18
			// 
			this->Unselect18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect18->Location = System::Drawing::Point(716, 16);
			this->Unselect18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect18->Name = L"Unselect18";
			this->Unselect18->Size = System::Drawing::Size(113, 34);
			this->Unselect18->TabIndex = 6;
			this->Unselect18->Text = L"Unselect";
			this->Unselect18->UseVisualStyleBackColor = true;
			this->Unselect18->Visible = false;
			this->Unselect18->Click += gcnew System::EventHandler(this, &chatroom::Unselect18_Click);
			// 
			// select18
			// 
			this->select18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select18->Location = System::Drawing::Point(596, 15);
			this->select18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select18->Name = L"select18";
			this->select18->Size = System::Drawing::Size(89, 38);
			this->select18->TabIndex = 5;
			this->select18->Text = L"select";
			this->select18->UseVisualStyleBackColor = true;
			this->select18->Visible = false;
			this->select18->Click += gcnew System::EventHandler(this, &chatroom::select18_Click);
			// 
			// Delete18
			// 
			this->Delete18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete18->Location = System::Drawing::Point(716, 18);
			this->Delete18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete18->Name = L"Delete18";
			this->Delete18->Size = System::Drawing::Size(96, 33);
			this->Delete18->TabIndex = 3;
			this->Delete18->Text = L"Delete";
			this->Delete18->UseVisualStyleBackColor = true;
			this->Delete18->Visible = false;
			this->Delete18->Click += gcnew System::EventHandler(this, &chatroom::Delete18_Click);
			// 
			// lname18
			// 
			this->lname18->AutoSize = true;
			this->lname18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname18->Location = System::Drawing::Point(128, 11);
			this->lname18->Name = L"lname18";
			this->lname18->Size = System::Drawing::Size(115, 24);
			this->lname18->TabIndex = 2;
			this->lname18->Text = L"Last Name";
			// 
			// checkBox18
			// 
			this->checkBox18->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox18->Location = System::Drawing::Point(374, 26);
			this->checkBox18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(20, 17);
			this->checkBox18->TabIndex = 2;
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->Visible = false;
			// 
			// phone18
			// 
			this->phone18->AutoSize = true;
			this->phone18->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone18->Location = System::Drawing::Point(36, 50);
			this->phone18->Name = L"phone18";
			this->phone18->Size = System::Drawing::Size(115, 21);
			this->phone18->TabIndex = 1;
			this->phone18->Text = L"Phonr Number";
			// 
			// edit18
			// 
			this->edit18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit18->Location = System::Drawing::Point(598, 18);
			this->edit18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit18->Name = L"edit18";
			this->edit18->Size = System::Drawing::Size(87, 33);
			this->edit18->TabIndex = 2;
			this->edit18->Text = L"Edit";
			this->edit18->UseVisualStyleBackColor = true;
			this->edit18->Visible = false;
			this->edit18->Click += gcnew System::EventHandler(this, &chatroom::edit18_Click);
			// 
			// fname18
			// 
			this->fname18->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname18->AutoSize = true;
			this->fname18->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname18->Location = System::Drawing::Point(3, 10);
			this->fname18->Name = L"fname18";
			this->fname18->Size = System::Drawing::Size(119, 24);
			this->fname18->TabIndex = 0;
			this->fname18->Text = L"First Name";
			// 
			// panel20
			// 
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->Unselect19);
			this->panel20->Controls->Add(this->select19);
			this->panel20->Controls->Add(this->Delete19);
			this->panel20->Controls->Add(this->lname19);
			this->panel20->Controls->Add(this->checkBox19);
			this->panel20->Controls->Add(this->phone19);
			this->panel20->Controls->Add(this->edit19);
			this->panel20->Controls->Add(this->fname19);
			this->panel20->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel20->Location = System::Drawing::Point(3, 1514);
			this->panel20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(834, 77);
			this->panel20->TabIndex = 19;
			this->panel20->Visible = false;
			// 
			// Unselect19
			// 
			this->Unselect19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect19->Location = System::Drawing::Point(716, 18);
			this->Unselect19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect19->Name = L"Unselect19";
			this->Unselect19->Size = System::Drawing::Size(113, 34);
			this->Unselect19->TabIndex = 6;
			this->Unselect19->Text = L"Unselect";
			this->Unselect19->UseVisualStyleBackColor = true;
			this->Unselect19->Visible = false;
			this->Unselect19->Click += gcnew System::EventHandler(this, &chatroom::Unselect19_Click);
			// 
			// select19
			// 
			this->select19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select19->Location = System::Drawing::Point(598, 18);
			this->select19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select19->Name = L"select19";
			this->select19->Size = System::Drawing::Size(89, 38);
			this->select19->TabIndex = 5;
			this->select19->Text = L"select";
			this->select19->UseVisualStyleBackColor = true;
			this->select19->Visible = false;
			this->select19->Click += gcnew System::EventHandler(this, &chatroom::select19_Click);
			// 
			// Delete19
			// 
			this->Delete19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete19->Location = System::Drawing::Point(716, 18);
			this->Delete19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete19->Name = L"Delete19";
			this->Delete19->Size = System::Drawing::Size(96, 33);
			this->Delete19->TabIndex = 3;
			this->Delete19->Text = L"Delete";
			this->Delete19->UseVisualStyleBackColor = true;
			this->Delete19->Visible = false;
			this->Delete19->Click += gcnew System::EventHandler(this, &chatroom::Delete19_Click);
			// 
			// lname19
			// 
			this->lname19->AutoSize = true;
			this->lname19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname19->Location = System::Drawing::Point(128, 11);
			this->lname19->Name = L"lname19";
			this->lname19->Size = System::Drawing::Size(115, 24);
			this->lname19->TabIndex = 2;
			this->lname19->Text = L"Last Name";
			// 
			// checkBox19
			// 
			this->checkBox19->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox19->Location = System::Drawing::Point(374, 26);
			this->checkBox19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox19->Name = L"checkBox19";
			this->checkBox19->Size = System::Drawing::Size(20, 17);
			this->checkBox19->TabIndex = 2;
			this->checkBox19->UseVisualStyleBackColor = true;
			this->checkBox19->Visible = false;
			// 
			// phone19
			// 
			this->phone19->AutoSize = true;
			this->phone19->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone19->Location = System::Drawing::Point(36, 50);
			this->phone19->Name = L"phone19";
			this->phone19->Size = System::Drawing::Size(115, 21);
			this->phone19->TabIndex = 1;
			this->phone19->Text = L"Phonr Number";
			// 
			// edit19
			// 
			this->edit19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit19->Location = System::Drawing::Point(598, 18);
			this->edit19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit19->Name = L"edit19";
			this->edit19->Size = System::Drawing::Size(87, 33);
			this->edit19->TabIndex = 2;
			this->edit19->Text = L"Edit";
			this->edit19->UseVisualStyleBackColor = true;
			this->edit19->Visible = false;
			this->edit19->Click += gcnew System::EventHandler(this, &chatroom::edit19_Click);
			// 
			// fname19
			// 
			this->fname19->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname19->AutoSize = true;
			this->fname19->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname19->Location = System::Drawing::Point(3, 10);
			this->fname19->Name = L"fname19";
			this->fname19->Size = System::Drawing::Size(119, 24);
			this->fname19->TabIndex = 0;
			this->fname19->Text = L"First Name";
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Controls->Add(this->Unselect20);
			this->panel21->Controls->Add(this->select20);
			this->panel21->Controls->Add(this->Delete20);
			this->panel21->Controls->Add(this->lname20);
			this->panel21->Controls->Add(this->checkBox20);
			this->panel21->Controls->Add(this->phone20);
			this->panel21->Controls->Add(this->edit20);
			this->panel21->Controls->Add(this->fname20);
			this->panel21->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel21->Location = System::Drawing::Point(3, 1595);
			this->panel21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(834, 77);
			this->panel21->TabIndex = 20;
			this->panel21->Visible = false;
			// 
			// Unselect20
			// 
			this->Unselect20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Unselect20->Location = System::Drawing::Point(716, 18);
			this->Unselect20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Unselect20->Name = L"Unselect20";
			this->Unselect20->Size = System::Drawing::Size(113, 34);
			this->Unselect20->TabIndex = 6;
			this->Unselect20->Text = L"Unselect";
			this->Unselect20->UseVisualStyleBackColor = true;
			this->Unselect20->Visible = false;
			this->Unselect20->Click += gcnew System::EventHandler(this, &chatroom::Unselect20_Click);
			// 
			// select20
			// 
			this->select20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->select20->Location = System::Drawing::Point(598, 16);
			this->select20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->select20->Name = L"select20";
			this->select20->Size = System::Drawing::Size(89, 38);
			this->select20->TabIndex = 5;
			this->select20->Text = L"select";
			this->select20->UseVisualStyleBackColor = true;
			this->select20->Visible = false;
			this->select20->Click += gcnew System::EventHandler(this, &chatroom::select20_Click);
			// 
			// Delete20
			// 
			this->Delete20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Delete20->Location = System::Drawing::Point(716, 18);
			this->Delete20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Delete20->Name = L"Delete20";
			this->Delete20->Size = System::Drawing::Size(96, 33);
			this->Delete20->TabIndex = 3;
			this->Delete20->Text = L"Delete";
			this->Delete20->UseVisualStyleBackColor = true;
			this->Delete20->Visible = false;
			this->Delete20->Click += gcnew System::EventHandler(this, &chatroom::Delete20_Click);
			// 
			// lname20
			// 
			this->lname20->AutoSize = true;
			this->lname20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lname20->Location = System::Drawing::Point(128, 11);
			this->lname20->Name = L"lname20";
			this->lname20->Size = System::Drawing::Size(115, 24);
			this->lname20->TabIndex = 2;
			this->lname20->Text = L"Last Name";
			// 
			// checkBox20
			// 
			this->checkBox20->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox20->Location = System::Drawing::Point(374, 26);
			this->checkBox20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox20->Name = L"checkBox20";
			this->checkBox20->Size = System::Drawing::Size(20, 17);
			this->checkBox20->TabIndex = 2;
			this->checkBox20->UseVisualStyleBackColor = true;
			this->checkBox20->Visible = false;
			// 
			// phone20
			// 
			this->phone20->AutoSize = true;
			this->phone20->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->phone20->Location = System::Drawing::Point(36, 50);
			this->phone20->Name = L"phone20";
			this->phone20->Size = System::Drawing::Size(115, 21);
			this->phone20->TabIndex = 1;
			this->phone20->Text = L"Phonr Number";
			// 
			// edit20
			// 
			this->edit20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit20->Location = System::Drawing::Point(598, 18);
			this->edit20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->edit20->Name = L"edit20";
			this->edit20->Size = System::Drawing::Size(87, 33);
			this->edit20->TabIndex = 2;
			this->edit20->Text = L"Edit";
			this->edit20->UseVisualStyleBackColor = true;
			this->edit20->Visible = false;
			this->edit20->Click += gcnew System::EventHandler(this, &chatroom::edit20_Click);
			// 
			// fname20
			// 
			this->fname20->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->fname20->AutoSize = true;
			this->fname20->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname20->Location = System::Drawing::Point(3, 10);
			this->fname20->Name = L"fname20";
			this->fname20->Size = System::Drawing::Size(119, 24);
			this->fname20->TabIndex = 0;
			this->fname20->Text = L"First Name";
			// 
			// stories
			// 
			this->stories->Controls->Add(this->label10);
			this->stories->Dock = System::Windows::Forms::DockStyle::Fill;
			this->stories->Location = System::Drawing::Point(0, 0);
			this->stories->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->stories->Name = L"stories";
			this->stories->Size = System::Drawing::Size(845, 679);
			this->stories->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(346, 225);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(170, 34);
			this->label10->TabIndex = 1;
			this->label10->Text = L"show stories";
			// 
			// pn_con
			// 
			this->pn_con->Controls->Add(this->pn_chat);
			this->pn_con->Controls->Add(this->add_chat);
			this->pn_con->Controls->Add(this->pn_show_contact);
			this->pn_con->Controls->Add(this->pn_chatroom);
			this->pn_con->Controls->Add(this->pn_new_contact);
			this->pn_con->Controls->Add(this->pn_profile);
			this->pn_con->Controls->Add(this->pn_stext);
			this->pn_con->Controls->Add(this->pn_sphoto);
			this->pn_con->Controls->Add(this->pn_shows);
			this->pn_con->Controls->Add(this->stories);
			this->pn_con->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con->Location = System::Drawing::Point(0, 0);
			this->pn_con->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pn_con->Name = L"pn_con";
			this->pn_con->Size = System::Drawing::Size(845, 679);
			this->pn_con->TabIndex = 4;
			// 
			// pn_chatroom
			// 
			this->pn_chatroom->Controls->Add(this->tableLayoutPanel1);
			this->pn_chatroom->Controls->Add(this->pictureBox23);
			this->pn_chatroom->Controls->Add(this->pictureBox22);
			this->pn_chatroom->Controls->Add(this->pictureBox24);
			this->pn_chatroom->Controls->Add(this->richTextBox3);
			this->pn_chatroom->Controls->Add(this->label4);
			this->pn_chatroom->Location = System::Drawing::Point(0, 4);
			this->pn_chatroom->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pn_chatroom->Name = L"pn_chatroom";
			this->pn_chatroom->Size = System::Drawing::Size(843, 673);
			this->pn_chatroom->TabIndex = 13;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->AutoScroll = true;
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 70);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(838, 556);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(3, 5);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(69, 60);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 8;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &chatroom::pictureBox23_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(785, 633);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(52, 39);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 7;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &chatroom::pictureBox22_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->Location = System::Drawing::Point(73, 5);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(65, 62);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 6;
			this->pictureBox24->TabStop = false;
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(3, 631);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(780, 41);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(146, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(296, 57);
			this->label4->TabIndex = 0;
			this->label4->Text = L"label4";
			// 
			// ofd
			// 
			this->ofd->FileName = L"openFileDialog1";
			// 
			// chatroom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(965, 727);
			this->Controls->Add(this->pn_con);
			this->Controls->Add(this->pn_st_bar);
			this->Controls->Add(this->pn_nav_bar);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"chatroom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"chatroom";
			this->pn_nav_bar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pn_st_bar->ResumeLayout(false);
			this->pn_sphoto->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->add_chat->ResumeLayout(false);
			this->add_chat->PerformLayout();
			this->pn_stext->ResumeLayout(false);
			this->pn_stext->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->pn_shows->ResumeLayout(false);
			this->pn_shows->PerformLayout();
			this->pn_chat->ResumeLayout(false);
			this->pn_chat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel24->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel25->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel26->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel27->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel28->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel29->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
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
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->stories->ResumeLayout(false);
			this->stories->PerformLayout();
			this->pn_con->ResumeLayout(false);
			this->pn_chatroom->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: int countDown = 0;
	private: void message_panel(bool new_message, String^ text, String^ name, String^ date_time, String^ seen) {
		FlowLayoutPanel^ panel = gcnew FlowLayoutPanel;
		Label^ Name = gcnew Label;
		Label^ Text = gcnew Label;
		Label^ Date_Time = gcnew Label;
		Label^ Seen = gcnew Label;

		panel->AutoSize = true;
		Name->AutoSize = true;
		Text->AutoSize = true;
		Date_Time->AutoSize = true;
		Seen->AutoSize = true;

		Text->MaximumSize = System::Drawing::Size(690, 0);
		Date_Time->Dock = System::Windows::Forms::DockStyle::Right;
		Seen->Dock = System::Windows::Forms::DockStyle::Right;
		Date_Time->TextAlign = System::Drawing::ContentAlignment::TopRight;
		Seen->TextAlign = System::Drawing::ContentAlignment::TopRight;
		Name->Text = name;
		Text->Text = text;
		Date_Time->Text = date_time;
		Seen->Text = seen;

		tableLayoutPanel1->Controls->Add(panel);
		panel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
		panel->Controls->Add(Name);
		panel->Controls->Add(Text);
		panel->Controls->Add(Date_Time);
		panel->Controls->Add(Seen);

		if (new_message) {
			if (Pn_messages.Count > 0) {
				Pn_messages[Pn_messages.Count - 1]->Click -= gcnew System::EventHandler(this, &chatroom::message_Click);
			}
			Pn_messages.Add(panel);
			Pn_messages[Pn_messages.Count - 1]->Click += gcnew System::EventHandler(this, &chatroom::message_Click);
		}
	}

	private: System::Void message_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to undo this message ?", "Do you want to delete this message ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			tableLayoutPanel1->Controls->Remove(Pn_messages[Pn_messages.Count - 1]);
			Pn_messages.RemoveAt(Pn_messages.Count - 1);
			if (Pn_messages.Count > 0) {
				Pn_messages[Pn_messages.Count - 1]->Click += gcnew System::EventHandler(this, &chatroom::message_Click);
			}
		}
	}


	private: void open_chatroom(int i) {
		AddChatRoom->Visible = false;
		DeleteChatRoom->Visible = false;
		pn_chatroom->BringToFront();
		label4->Text = L_chatrooms[i * 3 - 1]->Text;
		pictureBox24->Image = P_chatrooms[i - 1]->Image;
		//show message
	}
	private: void delete_chatroom(int i) {
		if (Ch_chatrooms[i - 1]->Checked == true && MessageBox::Show("Do you want to delete " + L_chatrooms[i * 3 - 1]->Text + "'s chatroom ?", "Do you want to delete this chatroom ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			//Pn_chatrooms[i-1]->Visible = false;
			for (int j = i - 1; j < 7; j++) {
				if (Pn_chatrooms[j + 1]->Visible == true) {
					L_chatrooms[j * 3]->Text = L_chatrooms[(j + 1) * 3]->Text;
					L_chatrooms[j * 3 + 1]->Text = L_chatrooms[(j + 1) * 3 + 1]->Text;
					L_chatrooms[j * 3 + 2]->Text = L_chatrooms[(j + 1) * 3 + 2]->Text;
				}
				else {
					/*if (chatrooms.Count > 8) {

					}*/
					//else
					Pn_chatrooms[j]->Visible = false;
					break;
				}
			}
			//deleting chatroom from database and data structure
		}
		Ch_chatrooms[i - 1]->Checked = false;
		for (int i = 0; i < 8; i++) {
			Ch_chatrooms[i]->Visible = false;
		}
	}
	private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(0);
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
		for (int i = 0; i < 8; i++) {
			if (P_chatrooms[i]->Visible == true) {
				Ch_chatrooms[i]->Visible = true;
			}
		}
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

		for (int i = 0; i < 20; i++) {
			Delete[i]->Visible = true;
			edit[i]->Visible = true;
		}
		edit_delete->Visible = false;
		edit_delete2->Visible = true;
	}
	private: System::Void edit_delete2_Click(System::Object^ sender, System::EventArgs^ e) {
		edit_delete2->Visible = false;
		edit_delete->Visible = true;
		for (int i = 0; i < 20; i++) {
			Delete[i]->Visible = false;
			edit[i]->Visible = false;
		}
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		edit_delete->Visible = false;
		choose_->Visible = true;
		for (int i = 0; i < 20; i++) {
			select[i]->Visible = true;
			Unselect[i]->Visible = true;
			checkBox[i]->Visible = true;
		}
		pn_show_contact->BringToFront();
	}
	private: System::Void choose__Click(System::Object^ sender, System::EventArgs^ e) {
		ADD->Visible = true;
		add_chat->BringToFront();
		The_selected_membersers->Visible = true;
		choose_->Visible = false;
		edit_delete->Visible = true;
		choose->Visible = false;
		for (int i = 0; i < 20; i++) {
			select[i]->Visible = false;
			Unselect[i]->Visible = false;
			checkBox[i]->Visible = false;
		}

	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: void selected(int i) {
		checkBox[i]->Checked = true;
		The_selected_membersers->Items->Insert(0, fname[i]->Text + " " + lname[i]->Text);
	}
	private: void unselected(int i) {
		checkBox[i]->Checked = false;
		The_selected_membersers->Items->RemoveAt(i);
	}
	private: void edited(int i) {
		add_label->Visible = false;
		edit_label->Visible = true;
		edit_contact->Visible = true;
		add_contact->Visible = false;
		fname_textBox->Text = fname[i]->Text;
		lname_textBox->Text = lname[i]->Text;
		phone_textBox->Text = phone[i]->Text;
		pn_new_contact->BringToFront();
		deleted(i);

	}
	private: void deleted(int i) {
		if (f > 0) {
			for (int j = i + 1; j < f; j++)
			{
				fname[i]->Text = fname[j]->Text;
				lname[i]->Text = lname[j]->Text;
				phone[i]->Text = phone[j]->Text;

			}
			panel[f - 1]->Visible = false;
			f--;
		}
		else
			panel[0]->Visible = false;
	}
	private: System::Void select1_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(0);
	}
	private: System::Void Unselect_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(0);
	}
		   int  f = 0;
	private: System::Void add_contact_Click(System::Object^ sender, System::EventArgs^ e) {
		fname[f]->Text = fname_textBox->Text;
		lname[f]->Text = lname_textBox->Text;
		phone[f]->Text = phone_textBox->Text;
		panel[f]->Visible = true;
		f++;
		fname_textBox->Text = L"";
		lname_textBox->Text = L"";
		phone_textBox->Text = L"";
		ID_textBox->Text = L"";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox7->ImageLocation = ofd->FileName;
			pictureBox7->Image = System::Drawing::Image::FromFile(ofd->FileName);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		stories->BringToFront();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		stories->BringToFront();
	}
	private: System::Void select2_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(1);
	}
	private: System::Void select3_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(2);
	}
	private: System::Void select4_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(3);
	}
	private: System::Void select5_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(4);
	}
	private: System::Void select6_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(5);
	}
	private: System::Void select7_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(6);
	}
	private: System::Void select8_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(7);
	}
	private: System::Void select9_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(8);
	}
	private: System::Void select10_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(9);
	}
	private: System::Void select11_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(10);
	}
	private: System::Void select12_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(11);
	}
	private: System::Void select13_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(12);
	}
	private: System::Void select14_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(13);
	}
	private: System::Void select15_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(14);
	}
	private: System::Void select16_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(15);
	}
	private: System::Void select17_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(16);
	}
	private: System::Void select18_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(17);
	}
	private: System::Void select19_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(18);
	}
	private: System::Void select20_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(19);
	}
	private: System::Void Unselect2_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(1);
	}
	private: System::Void Unselect3_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(2);
	}
	private: System::Void Unselect4_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(3);
	}
	private: System::Void Unselect5_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(4);
	}
	private: System::Void Unselect6_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(5);
	}
	private: System::Void Unselect7_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(6);
	}
	private: System::Void Unselect8_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(7);
	}
	private: System::Void Unselect9_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(8);
	}
	private: System::Void Unselect10_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(9);
	}
	private: System::Void Unselect11_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(10);
	}
	private: System::Void Unselect12_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(11);
	}
	private: System::Void Unselect13_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(12);
	}
	private: System::Void Unselect14_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(13);
	}
	private: System::Void Unselect15_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(14);
	}
	private: System::Void Unselect16_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(15);
	}
	private: System::Void Unselect17_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(16);
	}
	private: System::Void Unselect18_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(17);
	}
	private: System::Void Unselect19_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(18);
	}
	private: System::Void Unselect20_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(19);
	}
	private: System::Void Delete2_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(1);
	}
	private: System::Void Delete1_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(0);
	}
	private: System::Void Delete3_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(2);
	}

	private: System::Void Delete4_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(3);
	}

	private: System::Void Delete5_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(4);
	}
	private: System::Void Delete6_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(5);
	}
	private: System::Void Delete7_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(6);
	}
	private: System::Void Delete8_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(7);
	}
	private: System::Void Delete9_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(8);
	}
	private: System::Void Delete10_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(9);
	}
	private: System::Void Delete11_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(10);
	}
	private: System::Void Delete12_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(11);
	}
	private: System::Void Delete13_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(12);
	}
	private: System::Void Delete14_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(13);
	}
	private: System::Void Delete15_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(14);
	}
	private: System::Void Delete16_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(15);
	}
	private: System::Void Delete17_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(16);
	}
	private: System::Void Delete18_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(17);
	}
	private: System::Void Delete19_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(18);
	}
	private: System::Void Delete20_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(19);
	}
	private: System::Void edit2_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(1);
	}
	private: System::Void edit3_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(2);
	}
	private: System::Void edit4_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(3);
	}
	private: System::Void edit5_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(4);
	}
	private: System::Void edit6_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(5);
	}
	private: System::Void edit7_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(6);
	}
	private: System::Void edit8_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(7);
	}
	private: System::Void edit9_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(8);
	}
	private: System::Void edit10_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(9);
	}
	private: System::Void edit11_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(10);
	}
	private: System::Void edit12_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(11);
	}
	private: System::Void edit13_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(12);
	}
	private: System::Void edit14_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(13);
	}
	private: System::Void edit15_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(14);
	}
	private: System::Void edit16_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(15);
	}
	private: System::Void edit17_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(16);
	}
	private: System::Void edit18_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(17);
	}
	private: System::Void edit19_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(18);
	}
	private: System::Void edit20_Click(System::Object^ sender, System::EventArgs^ e) {
		edited(19);
	}
	private: System::Void edit_contact_Click(System::Object^ sender, System::EventArgs^ e) {
		fname[f]->Text = fname_textBox->Text;
		lname[f]->Text = lname_textBox->Text;
		phone[f]->Text = phone_textBox->Text;
		panel[f]->Visible = true;
		f++;
		pn_show_contact->BringToFront();
		edit_contact->Visible = false;
		edit_label->Visible = false;
		add_label->Visible = true;
		add_contact->Visible = true;
	}

		   //when clicking on textbox search word deleted
	private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox7->Text = "";
	}

		   //search in chatrooms
	private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->textBox7->Text;

		if (!String::IsNullOrWhiteSpace(text)) {
			for (int i = 0; i < 8; i++) {
				if (Pn_chatrooms[i]->Visible == true && !L_chatrooms[i * 3 + 2]->Text->Equals(text)) {
					Pn_chatrooms[i]->Visible = false;
				}
				else if (Pn_chatrooms[i]->Visible != true) {
					break;
				}
			}
			//find this name database or data structure
		}
	}

		   //sending message
	private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->richTextBox3->Text;
		richTextBox3->Text = "";
		if (!String::IsNullOrWhiteSpace(text)) {
			message_panel(true, text->TrimEnd(), "name", "20/05/2022", "seen");
			/*Pn_messages[messages]->Visible = true;
			L_messages[messages*2+1]->Text = text->TrimEnd();
			//L_messages[messages * 2]->Text = name;
			messages++;
			//add it in database and data structure*/
		}

	}

		   //return from chatroom to chatrooms
	private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
		AddChatRoom->Visible = true;
		DeleteChatRoom->Visible = true;
		tableLayoutPanel1->Controls->Clear();
		pn_chat->BringToFront();
	}

		   //open chatroom
	private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(1);
	}
	private: System::Void label26_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(2);
	}
	private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(3);
	}
	private: System::Void label32_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(4);
	}
	private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(5);
	}
	private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(6);
	}
	private: System::Void label41_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(7);
	}
	private: System::Void label44_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(8);
	}

		   //deleting chatroom
	private: System::Void checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(1);
	}
	private: System::Void checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(2);
	}
	private: System::Void checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(3);
	}
	private: System::Void checkBox24_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(4);
	}
	private: System::Void checkBox25_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(5);
	}
	private: System::Void checkBox26_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(6);
	}
	private: System::Void checkBox27_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(7);
	}
	private: System::Void checkBox28_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(8);
	}

	private: System::Void pictureBox20_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (countDown > 0) {
			for (int i = 0; i < 8; i++) {
				L_chatrooms[i * 3]->Text = chatrooms[i + countDown - 1]->time;
				L_chatrooms[i * 3 + 1]->Text = chatrooms[i + countDown - 1]->message[chatrooms[i + countDown - 1]->message.Count - 1]->text;
				L_chatrooms[i * 3 + 2]->Text = chatrooms[i + countDown - 1]->name;
				P_chatrooms[i]->Image = chatrooms[i + countDown - 1]->image;
			}
			countDown--;
			if (chatrooms.Count - countDown - 8 == 1) {
				pictureBox19->Visible = true;
			}
			if (countDown == 0) {
				pictureBox20->Visible = false;
			}
		}*/
	}
	private: System::Void pictureBox19_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (chatrooms.Count - countDown - 8 > 0) {
			for (int i = 0; i < 8; i++) {
				L_chatrooms[i * 3]->Text = chatrooms[i + countDown + 1]->time;
				L_chatrooms[i * 3 + 1]->Text = chatrooms[i + countDown + 1]->message[chatrooms[i + countDown + 1]->message.Count - 1]->text;
				L_chatrooms[i * 3 + 2]->Text = chatrooms[i + countDown + 1]->name;
				P_chatrooms[i]->Image = chatrooms[i + countDown + 1]->image;
			}
			countDown++;
			if (countDown == 1) {
				pictureBox20->Visible = true;
			}
			if (L_chatrooms.Count - countDown - 8 == 0) {
				pictureBox19->Visible = false;
			}
		}*/
	}


	};
}

#include"chatroom.h"

Project3::chatroom::chatroom(void)
{
	user = gcnew UserData();
	userDesc = gcnew UserDescData();
	//myAccountDesc = new userProfileDesc();
	user = global::usersRepo->getItem(global::theUserID);
	userDesc = global::descRepo->getItem(global::theUserID);
	//ID = global::stdToCLI(to_string(user->UserId));
	//fName = user->Fname;
	//lName = user->Lname;
	//desc = userDesc->about;

	InitializeComponent();
	//
	//TODO: Add the constructor code here
	// 

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




void::Project3::chatroom::message_panel(bool new_message, String^ text, String^ name, String^ date_time, String^ seen) {
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

void::Project3::chatroom::message_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("Do you want to undo this message ?", "Do you want to delete this message ?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			tableLayoutPanel1->Controls->Remove(Pn_messages[Pn_messages.Count - 1]);
			Pn_messages.RemoveAt(Pn_messages.Count - 1);
			if (Pn_messages.Count > 0) {
				Pn_messages[Pn_messages.Count - 1]->Click += gcnew System::EventHandler(this, &chatroom::message_Click);
			}
		}
	}


void::Project3::chatroom::open_chatroom(int i) {
		AddChatRoom->Visible = false;
		DeleteChatRoom->Visible = false;
		pn_chatroom->BringToFront();
		label4->Text = L_chatrooms[i * 3 - 1]->Text;
		pictureBox24->Image = P_chatrooms[i - 1]->Image;
		//show message
	}
void::Project3::chatroom::delete_chatroom(int i) {
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
void::Project3::chatroom::exit_Click(System::Object^ sender, System::EventArgs^ e) {
	}

void::Project3::chatroom::profile_Click(System::Object^ sender, System::EventArgs^ e) {
		AddChatRoom->Visible = false;
		DeleteChatRoom->Visible = false;
		this->fname_text->Text = user->Fname;
		this->lname_text->Text = user->Lname;
		this->id_text->Text = global::stdToCLI(to_string(user->UserId));
		this->richTextBox1->Text = userDesc->about;
		if (userDesc->photo != "")
			profile_pic->ImageLocation = userDesc->photo;
		pn_profile->BringToFront();
	}
void::Project3::chatroom::contacts_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (contacts->SelectedIndex == 1) {
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			pn_show_contact->BringToFront();
			displayMyContacts();
		}
		else {
			AddChatRoom->Visible = false;
			DeleteChatRoom->Visible = false;
			pn_new_contact->BringToFront();
		}
	}
void::Project3::chatroom::chat_Click(System::Object^ sender, System::EventArgs^ e) {
		AddChatRoom->Visible = true;
		DeleteChatRoom->Visible = true;
		pn_chat->BringToFront();
	}
void::Project3::chatroom::DeleteChatRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < 8; i++) {
			if (P_chatrooms[i]->Visible == true) {
				Ch_chatrooms[i]->Visible = true;
			}
		}
	}
void::Project3::chatroom::AddChatRoom_Click(System::Object^ sender, System::EventArgs^ e) {
		add_chat->BringToFront();
	}

void::Project3::chatroom::delete_chat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
void::Project3::chatroom:: add_chat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
void::Project3::chatroom::label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
void::Project3::chatroom::story_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
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
void::Project3::chatroom::label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}

void::Project3::chatroom::change_photo_bu_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			//hello
			profile_pic->ImageLocation = ofd->FileName;
			profile_pic->Image = System::Drawing::Image::FromFile(ofd->FileName);
			userProfileDesc* myAccountDesc = new userProfileDesc();
			myAccountDesc->changeProfilePhoto(global::cliToSTD(ofd->FileName));
		}
	}
void::Project3::chatroom::profile_pic_Click(System::Object^ sender, System::EventArgs^ e) {
	}
void::Project3::chatroom::ofd_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
void::Project3::chatroom::label6_Click(System::Object^ sender, System::EventArgs^ e) {}
void::Project3::chatroom::label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
void::Project3::chatroom::panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

void::Project3::chatroom::edit_delete_Click(System::Object^ sender, System::EventArgs^ e) {

		for (int i = 0; i < 20; i++) {
			Delete[i]->Visible = true;
		}
		edit_delete->Visible = false;
		edit_delete2->Visible = true;
	}
void::Project3::chatroom::edit_delete2_Click(System::Object^ sender, System::EventArgs^ e) {
		edit_delete2->Visible = false;
		edit_delete->Visible = true;
		for (int i = 0; i < 20; i++) {
			Delete[i]->Visible = false;
		}
	}
void::Project3::chatroom::button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		edit_delete->Visible = false;
		choose_->Visible = true;
		displayMyContacts();
		addedChat = new ChatData(comboBox1->SelectedIndex);
		for (int i = 0; i < 20; i++) {
			select[i]->Visible = true;
			Unselect[i]->Visible = true;
			checkBox[i]->Visible = true;
		}
		pn_show_contact->BringToFront();
	}
void::Project3::chatroom::choose__Click(System::Object^ sender, System::EventArgs^ e) {

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
void::Project3::chatroom::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
void::Project3::chatroom::selected(int i) {
		addedChat->AddMember(contactsDataList[i]->UserId);
		checkBox[i]->Checked = true;
		The_selected_membersers->Items->Insert(0, contactsDataList[i]->Fname + " " + contactsDataList[i]->Lname);
	}
void::Project3::chatroom::unselected(int i) {
		checkBox[i]->Checked = false;
		The_selected_membersers->Items->RemoveAt(i);
	}

void::Project3::chatroom::deleted(int i) {
		int deletedID = contactsDataList[i]->UserId;
		User* myAccount = new User();
		myAccount->deleteContact(deletedID);

		if (contactsDataList->Count > 0) {
			for (int j = i + 1; j < contactsDataList->Count; j++)
			{
				fname[i]->Text = fname[j]->Text;
				lname[i]->Text = lname[j]->Text;
				phone[i]->Text = phone[j]->Text;

			}
			panel[contactsDataList->Count - 1]->Visible = false;

		}
		else
			panel[0]->Visible = false;
		displayMyContacts();
	}

void::Project3::chatroom::select1_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(0);
	}
void::Project3::chatroom::Unselect_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(0);
	}

void::Project3::chatroom::add_contact_Click(System::Object^ sender, System::EventArgs^ e) {
		myAccount = new User();
		int contactAddedID = stoi(global::cliToSTD(ID_textBox->Text));
		myAccount->AddContacts(contactAddedID);

		displayMyContacts();

		ID_textBox->Text = L"";
	}


void::Project3::chatroom::displayMyContacts()
 {
	 myAccount = new User();
	 contactsDataList = myAccount->displayContacts();
	 int length = contactsDataList->Count;
	 for (int i = 0; i < length; i++)
	 {
		 fname[i]->Text = contactsDataList[i]->Fname;
		 lname[i]->Text = contactsDataList[i]->Lname;
		 phone[i]->Text = contactsDataList[i]->MobileNum;

		 panel[i]->Visible = true;
	 }

	 ID_textBox->Text = L"";
 }


void::Project3::chatroom::displayMyChatRooms()
 {
	 myAccount = new User();
	 chatRoomsDataList = myAccount->displayChatRooms();
	 int length = chatRoomsDataList->Count;
	 for (int i = 0; i < length; i++)
	 {
		 panel[i]->Visible = true;
	 }

 }


void::Project3::chatroom::button2_Click(System::Object^ sender, System::EventArgs^ e) {
		ofd->Filter = "Image Files (*.bmp;*.jpg;*.jpeg,*.png)|*.BMP;*.JPG;*.JPEG;*.PNG";
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			pictureBox7->ImageLocation = ofd->FileName;
			pictureBox7->Image = System::Drawing::Image::FromFile(ofd->FileName);
			userStory* photoStory = new userStory(global::cliToSTD(ofd->FileName), 0);
		}
	}
void::Project3::chatroom::button3_Click(System::Object^ sender, System::EventArgs^ e) {
		stories->BringToFront();
	}
void::Project3::chatroom::button4_Click(System::Object^ sender, System::EventArgs^ e) {
		stories->BringToFront();
		userStory* textStory = new userStory(global::cliToSTD(richTextBox2->Text), 1);
	}
void::Project3::chatroom::select2_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(1);
	}
void::Project3::chatroom::select3_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(2);
	}
void::Project3::chatroom::select4_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(3);
	}
void::Project3::chatroom::select5_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(4);
	}
void::Project3::chatroom::select6_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(5);
	}
void::Project3::chatroom::select7_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(6);
	}
void::Project3::chatroom::select8_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(7);
	}
	void::Project3::chatroom::select9_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(8);
	}
	void::Project3::chatroom::select10_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(9);
	}
	void::Project3::chatroom::select11_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(10);
	}
	void::Project3::chatroom::select12_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(11);
	}
	void::Project3::chatroom::select13_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(12);
	}
	void::Project3::chatroom:: select14_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(13);
	}
	void::Project3::chatroom::select15_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(14);
	}
	void::Project3::chatroom::select16_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(15);
	}
	void::Project3::chatroom::select17_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(16);
	}
	void::Project3::chatroom::select18_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(17);
	}
	void::Project3::chatroom::select19_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(18);
	}
	void::Project3::chatroom::select20_Click(System::Object^ sender, System::EventArgs^ e) {
		selected(19);
	}
	void::Project3::chatroom::Unselect2_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(1);
	}
	void::Project3::chatroom::Unselect3_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(2);
	}
	void::Project3::chatroom::Unselect4_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(3);
	}
	void::Project3::chatroom::Unselect5_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(4);
	}
	void::Project3::chatroom::Unselect6_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(5);
	}
	void::Project3::chatroom::Unselect7_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(6);
	}
	void::Project3::chatroom::Unselect8_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(7);
	}
	void::Project3::chatroom::Unselect9_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(8);
	}
	void::Project3::chatroom::Unselect10_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(9);
	}
	void::Project3::chatroom::Unselect11_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(10);
	}
	void::Project3::chatroom::Unselect12_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(11);
	}
	void::Project3::chatroom::Unselect13_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(12);
	}
	void::Project3::chatroom::Unselect14_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(13);
	}
	void::Project3::chatroom::Unselect15_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(14);
	}
	void::Project3::chatroom:: Unselect16_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(15);
	}
	void::Project3::chatroom::Unselect17_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(16);
	}
	void::Project3::chatroom::Unselect18_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(17);
	}
	void::Project3::chatroom::Unselect19_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(18);
	}
	void::Project3::chatroom::Unselect20_Click(System::Object^ sender, System::EventArgs^ e) {
		unselected(19);
	}
	void::Project3::chatroom::Delete2_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(1);
	}
	void::Project3::chatroom::Delete1_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(0);
	}
	void::Project3::chatroom::Delete3_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(2);
	}

	void::Project3::chatroom::Delete4_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(3);
	}

	void::Project3::chatroom::Delete5_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(4);
	}
	void::Project3::chatroom::Delete6_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(5);
	}
	void::Project3::chatroom::Delete7_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(6);
	}
	void::Project3::chatroom::Delete8_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(7);
	}
	void::Project3::chatroom::Delete9_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(8);
	}
	void::Project3::chatroom::Delete10_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(9);
	}
	void::Project3::chatroom::Delete11_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(10);
	}
	void::Project3::chatroom::Delete12_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(11);
	}
	void::Project3::chatroom::Delete13_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(12);
	}
	void::Project3::chatroom::Delete14_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(13);
	}
	void::Project3::chatroom:: Delete15_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(14);
	}
	void::Project3::chatroom::Delete16_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(15);
	}
	void::Project3::chatroom::Delete17_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(16);
	}
	void::Project3::chatroom::Delete18_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(17);
	}
	void::Project3::chatroom::Delete19_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(18);
	}
	void::Project3::chatroom::Delete20_Click(System::Object^ sender, System::EventArgs^ e) {
		deleted(19);
	}


		   //when clicking on textbox search word deleted
	void::Project3::chatroom::textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox7->Text = "";
	}

		   //search in chatrooms
	void::Project3::chatroom::pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
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
	void::Project3::chatroom::pictureBox22_Click(System::Object^ sender, System::EventArgs^ e) {
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
	void::Project3::chatroom::pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
		AddChatRoom->Visible = true;
		DeleteChatRoom->Visible = true;
		tableLayoutPanel1->Controls->Clear();
		pn_chat->BringToFront();
	}

		   //open chatroom
	void::Project3::chatroom::label23_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(1);
	}
	void::Project3::chatroom::label26_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(2);
	}
	void::Project3::chatroom::label29_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(3);
	}
	void::Project3::chatroom::label32_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(4);
	}
	void::Project3::chatroom::label35_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(5);
	}
	void::Project3::chatroom::label38_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(6);
	}
	void::Project3::chatroom::label41_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(7);
	}
	void::Project3::chatroom::label44_Click(System::Object^ sender, System::EventArgs^ e) {
		open_chatroom(8);
	}

		   //deleting chatroom
	void::Project3::chatroom::checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(1);
	}
	void::Project3::chatroom::checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(2);
	}
	void::Project3::chatroom::checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(3);
	}
	void::Project3::chatroom::checkBox24_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(4);
	}
	void::Project3::chatroom::checkBox25_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(5);
	}
	void::Project3::chatroom::checkBox26_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(6);
	}
	void::Project3::chatroom::checkBox27_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(7);
	}
	void::Project3::chatroom::checkBox28_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		delete_chatroom(8);
	}

	void::Project3::chatroom::pictureBox20_Click(System::Object^ sender, System::EventArgs^ e) {
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
	void::Project3::chatroom::pictureBox19_Click(System::Object^ sender, System::EventArgs^ e) {
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
	void::Project3::chatroom::ADD_Click(System::Object^ sender, System::EventArgs^ e) {
		 displayMyChatRooms();
	 }

#include "userProfileDesc.h"

userProfileDesc::userProfileDesc() {
	userID = theUserID;
	 personalPhoto="";
	aboutDescription="Available";
	 visibility=true;

	 UserDescData^ desc = gcnew UserDescData();
	 desc->UserId = userID;
	 desc->photo = stdToCLI(personalPhoto);
	 desc->about = stdToCLI(aboutDescription);
	 desc->visibility = visibility;
	 descRepo->insert(desc);

}
void userProfileDesc ::changeVisibility() {
	visibility = !visibility;
	UserDescData^ desc = gcnew UserDescData();
	desc = descRepo->getItem(theUserID);
	desc->visibility = !visibility;
	bool updated = descRepo->update(theUserID, desc);
}
void userProfileDesc::editAboutDescription(string newAbout) {
	aboutDescription = newAbout;
	UserDescData^ desc = gcnew UserDescData();
	desc = descRepo->getItem(theUserID);
	desc->about = stdToCLI(aboutDescription);
	bool updated = descRepo->update(theUserID, desc);

}
void userProfileDesc::changeProfilePhoto(string newPhoto) {
	personalPhoto = newPhoto;
	UserDescData^ desc = gcnew UserDescData();
	desc = descRepo->getItem(theUserID);
	desc->photo = stdToCLI(personalPhoto);
	bool updated = descRepo->update(theUserID, desc);
}

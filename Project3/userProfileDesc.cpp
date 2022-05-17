#include "userProfileDesc.h"

userProfileDesc::userProfileDesc(UserData^ user) {
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
}
void userProfileDesc::editAboutDescription(string newAbout) {
	aboutDescription = newAbout;

}
void userProfileDesc::changeProfilePhoto(string newPhoto) {

}

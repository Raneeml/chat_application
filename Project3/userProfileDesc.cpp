#include "userProfileDesc.h"

userProfileDesc::userProfileDesc(int ID) {
	userID = ID;
	 personalPhoto=0;
	aboutDescription="Available";
	 visibility=true;

}
void userProfileDesc ::changeVisibility() {
	visibility = !visibility;
}
void userProfileDesc::editAboutDescription(string newAbout) {
	aboutDescription = newAbout;

}
void userProfileDesc::changeProfilePhoto(long newPhoto) {

}

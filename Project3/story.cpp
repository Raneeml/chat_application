#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include"Globals.h"
#define _CRT_SECURE_NO_WARNINGS
#include "story.h"

//#include<ctime>

story::story(string storyAdded, bool type)
{

	userID = theUserID;
	storyType = type;

	if (type == 0)
		storyPhoto = storyAdded;
	else 
		storyText = storyAdded;

	time_t now = time(0);
	timeOfaddingStory = now;
	timeOfStory = ctime(&now);



	storyData^ story = gcnew storyData();
	story->story_user_id = theUserID;
	story->published_time = stdToCLI(timeOfStory);
	story->published_time_t = timeOfaddingStory;
	story->storyPhoto = stdToCLI(storyPhoto);
	story->storyText = stdToCLI(storyText);
	story->type = type;
	storyRepo->insert(story);

}



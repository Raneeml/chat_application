#pragma once
#include <string>
#include <iostream>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
#include "userStory.h"


userStory::userStory(string storyAdded, bool type)
{

	userID = global::theUserID;
	storyType = type;

	if (type == 0)
		storyPhoto = storyAdded;
	else 
		storyText = storyAdded;

	time_t now = time(0);
	timeOfaddingStory = now;
	timeOfStory = ctime(&now);



	storyData^ story = gcnew storyData();
	story->story_user_id = global::theUserID;
	story->published_time = global::stdToCLI(timeOfStory);
	story->published_time_t = timeOfaddingStory;
	story->storyPhoto = global::stdToCLI(storyPhoto);
	story->storyText = global::stdToCLI(storyText);
	story->type = type;
	global::storyRepo->insert(story);

}



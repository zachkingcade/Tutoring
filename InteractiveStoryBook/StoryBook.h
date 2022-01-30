#pragma once
#include <vector>
#include "Page.h"

class StoryBook{
	private:
	std::vector<int> pageHistory;

	public:
	std::vector<Page> contents;
	int currentPageIndex;
	
	StoryBook();
	Page getPage(int index);
	Page getCurrentPage();
	void addPage(Page);
	void removePage(int);
	void changePage(int);
	void goBack();
	bool canGoBack();
};
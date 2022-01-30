	#include "StoryBook.h"
	
	StoryBook::StoryBook(){
		currentPageIndex = 0;
	}
	Page StoryBook::getPage(int index){
		return contents[index];
	}
	Page StoryBook::getCurrentPage(){
		return contents[currentPageIndex];
	}
	void StoryBook::addPage(Page newPage){
		contents.push_back(newPage);
	}
	void StoryBook::removePage(int index){
		contents.erase(contents.begin() + index);
	}
	void StoryBook::changePage(int pageIndex){
		pageHistory.push_back(currentPageIndex);
		currentPageIndex = pageIndex;
	}
	void StoryBook::goBack(){
		if(!pageHistory.empty()){
			currentPageIndex = pageHistory.back();
			pageHistory.pop_back();
		}
	}

	bool StoryBook::canGoBack(){
		return (!pageHistory.empty());
	}
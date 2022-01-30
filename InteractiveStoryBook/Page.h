#pragma once
#include <string>
#include <vector>

struct choice{
	std::string text;
	int pageTo;
	int requirmentType;
	int requirmentNum;
	choice(std::string textIn, int pageToIn){
		text = textIn;
		pageTo = pageToIn;
	}
};

class Page {
private:
	std::string prompt;
	std::vector<choice> options;

public:
	Page();
	Page(std::string);
	std::string toString();
	void setPrompt(std::string);
	std::string getPrompt();
	std::string getChoice(int);
	int getChoicePageTo(int);
	int getChoiceCount();
	void addChoice(std::string, int);
	void removeChoice(int);
};
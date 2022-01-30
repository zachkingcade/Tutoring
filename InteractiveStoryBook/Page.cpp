#include "Page.h"

	Page::Page(){
		prompt = "";
	}
	Page::Page(std::string){
		prompt = "";
	}

	std::string Page::toString(){
		std::string result = "";
		result += prompt + "\n\n";
		for(int i = 0; i < options.size(); i++){
			result += "[ " + std::to_string(i) + "] ";
			result += options[i].text + '\n';
		}
		return result;
	}

	void Page::setPrompt(std::string newPrompt){
		prompt = newPrompt;
	}

	std::string Page::getPrompt(){
		return prompt;
	}

	std::string Page::getChoice(int index){
		return options[index].text;
	}

	int Page::getChoicePageTo(int index){
		return options[index].pageTo;
	}

	int Page::getChoiceCount(){
		return options.size();
	}

	void Page::addChoice(std::string text, int pageTo){
		choice newChoice(text, pageTo);
		options.push_back(newChoice);
	}

	void Page::removeChoice(int index){
		options.erase(options.begin() + index);
	}
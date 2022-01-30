#include <iostream> //YOu left this open on my computer. I now know your code. What shall you ever do now that I have this amount of knowledge.
#include "Page.h"
#include "StoryBook.h"
#include <fstream>

int main()
{
	std::string line = "";
	std::fstream bookFile;
	bookFile.open("./book.txt");
	StoryBook book;

	while (!bookFile.eof()){
		getline(bookFile, line);
		//construct a new Page
		Page newPage;
		std::string prompt = "";
		while (line != "ENDOFPROMPT" || bookFile.eof()){
			prompt += line + '\n';
			getline(bookFile, line);
		}
		newPage.setPrompt(prompt);
		getline(bookFile, line);
		while(line != "ENDOFPAGE"){
			int splitIndex = line.find('>');
			int pageTo = std::stol(line.substr(splitIndex + 1), nullptr, 10);
			std::string prompt = line.substr(0, splitIndex);
			newPage.addChoice(prompt, pageTo);
			getline(bookFile, line);
		}
		book.addPage(newPage);
  }

	/*creates space between run command and the start of our book, also pushes the
	first page down to match the rest*/
	for(int i = 0; i < 50; i++){
		std::cout << '\n';
	}

	//prime loop
	int choice = -100;
	//until the user chooses to quit (-2)
	while(choice != -2){
		//prints the current page
		std::cout << book.getCurrentPage().toString();
		//if they have the option to go back (not on first page), print option
		if(book.canGoBack()){
			std::cout << "[-1] Return to previous Page\n";
		}
		//print other options and prompt for option selection
		std::cout << "[-2] Quit\n";
		std::cout << "Please choose an option:\n";
		std::cin >> choice;
		/*if the choice is between 0 and our number of options then grab that options
		//page to and change pages if -1 and they can go back do so, lastly if the quit
		out end the loop and it will go to the return 0 below, if non of these then it is
		a invlide option print and start the loop again*/
		if(choice >= 0 && choice < book.getCurrentPage().getChoiceCount()){
			//create lots of space between pages
			for(int i = 0; i < 50; i++){
				std::cout << '\n';
			}
			book.changePage(book.getCurrentPage().getChoicePageTo(choice));
		} else if(choice == -1){
			if(book.canGoBack()){
				book.goBack();
				for(int i = 0; i < 50; i++){
				std::cout << '\n';
			}
			}
		}  else if(choice == -2){
			//do nothing will exit on it's own
		} else {
			std::cout << "invalid option, please try again:\n";
			return 0;
		}
		//create some space even if answer was wrong
		std::cout << "\n";
	}
	return 0;
}
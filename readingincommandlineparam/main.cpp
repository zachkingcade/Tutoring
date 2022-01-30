#include <iostream>

int main(int argc, char **argv) {
	if(argc){
		std::cout << "your command line arguemnts are:\n";
	} else {
		std::cout << "no command line arguments were passed in\n";
	}
  for(int i = 0; i < argc; i++){
		std::cout << argv[i] << std::endl;
	}
}
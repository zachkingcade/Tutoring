#include <iostream>

class foo {
	public:
	std::string words[3] = {"","",""};
	//default constructor
	foo(){
		words[0] = "Default";
	}
	foo(std::string stringOne) : foo(){
		words[1] = stringOne;
	}
	foo(std::string stringOne, std::string stringTwo) : foo(stringOne){
		words[2] = stringTwo;
	}
	void print(){
		for(int i = 0; i < 3; i++){
			std::cout << words[i] << ' ';
		}
		std::cout << std::endl;
	}
};

int main() {
  foo test("works", "too!");
	test.print();
} 
#include <iostream>

class innerClass{
public:
	innerClass(){
		a = 0;
		b = 0;
	}

	innerClass(int aIn, int bIn = 0){
		a = aIn;
		b = bIn;
	}

	int a,b;
};

class mainClass{
public:
	innerClass instance;

	mainClass(){
	}

	mainClass(int aIn, int bIn = 0){
		instance.a = aIn;
		instance.b = bIn;
	}

	int getA(){
		return instance.a;
	}
};

int main() {
  mainClass myinstance(3,12);
	std::cout << myinstance.getA();
	myinstance = mainClass();

}
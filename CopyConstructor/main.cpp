#include <iostream>

class myArray{
public:
	int innerArray[10];
	int index;

	myArray(){
		index = 0;
	}

	myArray(myArray &mold){
		for(int i = 0; i < mold.index; i++){
			innerArray[i] = mold.innerArray[i];
		}
		index = mold.index;
	}

	void add(int number){
		innerArray[index] = number;
		index++;
	}
};

int main() {
  myArray example;
	for(int i = 0; i < 5; i++){
		example.innerArray[i] = i;
	}
	myArray cloned(example);
	//print
	for(int i = 0; i < 5; i++){
		std::cout << cloned.innerArray[i] << '\n';
	}
}


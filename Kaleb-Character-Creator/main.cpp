//----------PreCompiler Directives----------
#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
#include <cmath>
#include "Person.cpp"

//----------Main----------
int main() {
  //----Varibles----
  Person example;		//an example of the person class
  std::ifstream female;
  std::ifstream male;
  int femaleDataSize;
  int maleDataSize;
  int charNum;

  //seeding the random number generator to the system clock
  srand(time(NULL));

  //-----load our arrays of female and male name files-----
  //open our infile streams to  read in from our data files
  female.open("femaleName.dat");
  male.open("maleName.dat");

  //get our number of data items and create an array to store them
  female >> femaleDataSize;
  std::string femaleNames[femaleDataSize];
  for (int i = 0; i < femaleDataSize; i++){
	  female >> femaleNames[i];
  }

  male >> maleDataSize;
  std::string maleNames[maleDataSize];
  for (int i = 0; i < maleDataSize; i++){
	  male >> maleNames[i];
  }

  //check how many character they would like to randomly generate
  std::cout << "How many characters would you like to generate?\n";
  std::cin >> charNum;

  for (int i = 0; i < charNum; i++){
	//-----randomly generate a person object-----
	
	//Name and Gender
	if ((rand() % 2) == 0){
		example.setGender("Male");
		example.setName(maleNames[(rand() % maleDataSize)]);
	}else {
		example.setGender("Female");
		example.setName(femaleNames[(rand() % femaleDataSize)]);
	};
	//others stats
	//random number between 10 and 80
	example.setAge((rand() % 71) + 10);
	//random number between 30 and 100
	example.setHealth((rand() % 71) + 30);
	example.setMana((rand() % 71) + 30);
	//random number between 6 and 18
	example.setStrength((rand() % 13) + 6);
	example.setDexterity((rand() % 13) + 6);
	example.setInteligence((rand() % 13) + 6);
	example.setWisdom((rand() % 13) + 6);
	example.setCharisma((rand() % 13) + 6);

	//formatted display of our data
	std::cout << "------------------------------------------------------------\n";
	std::cout << "Name:   \t" << example.getName() << std::endl;
	std::cout << "Gender: \t" << example.getGender() << std::endl;
	std::cout << "Age:    \t" << example.getAge() << std::endl;
	std::cout << "-----STATS-----" << std::endl;
	std::cout << "Health:     \t" << example.getHealth() << std::endl;
	std::cout << "Mana:       \t" << example.getMana() << std::endl;
	std::cout << "Strength:   \t" << example.getStrength() << std::endl;
	std::cout << "Dexterity:  \t" << example.getDexterity() << std::endl;
	std::cout << "Inteligence:\t" << example.getInteligence() << std::endl;
	std::cout << "Wisdom:     \t" << example.getWisdom() << std::endl;
	std::cout << "Charisma:   \t" << example.getCharisma() << std::endl;
	std::cout << "------------------------------------------------------------\n";
  }
}
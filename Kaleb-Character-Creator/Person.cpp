//----------PreCompiler Directives----------
#include <string>

class Person {
public:
//---Constructors---

//defaulted constructor
Person(){
	name = " ";
	gender = "Unisex";
	age = 0;
	health = 0;
	mana = 0;
	strength = 0;
	dexterity = 0;
	intelligence = 0;
	wisdom = 0;
	charisma = 0;
}

//parameterized constructor
Person(std::string name, std::string gender, int age, int health, int mana, int strength, int dexterity, int intelligence, int wisdom, int charisma){
	this->name = name;
	this->gender = gender;
	this->age = age;
	this->health = health;
	this->mana = mana;
	this->strength = strength;
	this->dexterity = dexterity;
	this->intelligence = intelligence;
	this->wisdom = wisdom;
	this->charisma = charisma;
}

//--------Setters--------
//used to set thevalue of the private member Varibles

void setName(std::string newName){name = newName;}
void setGender(std::string newGender){gender = newGender;}
void setAge(int newAge){age = newAge;}
void setHealth(int newHealth){health = newHealth;}
void setMana(int newMana){mana = newMana;}
void setStrength(int newStrength){strength = newStrength;}
void setDexterity(int newDexterity){dexterity = newDexterity;}
void setInteligence(int newIntelligence){intelligence = newIntelligence;}
void setWisdom(int newWisdom){wisdom = newWisdom;}
void setCharisma(int newCharisma){charisma = newCharisma;}

//--------Getters--------
//allows us to get the current value of the private member varibles

std::string getName(){return name;}
std::string getGender(){return gender;}
int getAge(){return age;}
int getHealth(){return health;}
int getMana(){return mana;}
int getStrength(){return strength;}
int getDexterity(){return dexterity;}
int getInteligence(){return intelligence;}
int getWisdom(){return wisdom;}
int getCharisma(){return charisma;}


private:
	std::string name;
	std::string gender;
	int age;
	int health;
	int mana;
	int strength;
	int dexterity;
	int intelligence;
	int wisdom;
	int charisma;
};
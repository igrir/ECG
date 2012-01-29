#include <iostream>

using namespace std;

//----------------Begin------------------
//************Character Class************
//---------------------------------------
class Character{
	string name;
	int health;
	int attack;

	public:
		//constructor
		Character(){
		}

		//member functions
		void SetName(string name);
		void SetHealth(int health);
		void SetAttack(int attack);

		string GetName();
		int GetHealth();
		int GetAttack();
};

//setter
void Character::SetName(string name){
	this->name = name;
}

void Character::SetHealth(int health){
	this->health = health;
}

void Character::SetAttack(int attack){
	this->attack = attack;
}

//getter
string Character::GetName(){
	return this->name;	
}

int Character::GetHealth(){
	return this->health;
}

int Character::GetAttack(){
	return this->attack;
}


//-----------------End-------------------
//************Character Class************
//---------------------------------------


//----------------Begin------------------
//***************Hero Class**************
//---------------------------------------

class Hero:public Character{
	string town;
	string job;

	public:
		//constructor
		Hero(){
			
		}

		//member functions
		void SetTown(string town);
		void SetJob(string job);
		string GetTown();
		string GetJob();
};


//setter
void Hero::SetTown(string town){
	this->town = town;
}

void Hero::SetJob(string job){
	this->job = job;
}

//getter

string Hero::GetTown(){
	return this->town;
}

string Hero::GetJob(){
	return this->job;
}

//-----------------End-------------------
//***************Hero Class**************
//---------------------------------------



//----------------Begin------------------
//*************Monster Clas**************
//---------------------------------------

class Monster:public Character{
	string clan;

	public:
		//constructor
		Monster(){
			
		}

		void SetClan(string clan);
		string GetClan();
};

//setter
void Monster::SetClan(string clan){
	this->clan = clan;
}

//getter
string Monster::GetClan(){
	return this->clan;
}

//-----------------End-------------------
//*************Monster Class**************
//---------------------------------------




//----------------Begin------------------------------------------------------------------------
//*************Main Function*************
//---------------------------------------------------------------------------------------------

int main(){

	//Declare the characters
	Hero Player;
	Monster Ogre;

	//Set the main characters in game properties
	Player.SetName("Budi");
	Player.SetHealth(1000);
	Player.SetAttack(30);
	Player.SetJob("Magician");
	Player.SetTown("Furedator");

	
	Ogre.SetName("Ograr");
	Ogre.SetHealth(1500);
	Ogre.SetAttack(15);
	Ogre.SetClan("Myrtr");
	
	cout << "Nama playernya adalah " << Player.GetName() << endl;
	cout << "Player memiliki health " << Player.GetHealth() << endl;
	cout << "Attack player adalah " << Player.GetAttack() << endl;
	cout << "Job player adalah " << Player.GetJob() << endl;
	cout << "Kota asal player adalah " << Player.GetTown() << endl;

	
	cout << "Nama monsternya adalah " << Ogre.GetName() << endl;
	cout << "Monsternya memiliki health " << Ogre.GetHealth() << endl;
	cout << "Attack Monsternya adalah " << Ogre.GetAttack() << endl;
	cout << "Clan Monsternya dari " << Ogre.GetClan() << endl;
	



	return 0;
}

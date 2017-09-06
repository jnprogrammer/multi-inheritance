#include <iostream>


class Character{
public: 
	virtual void Talk () =0 ;

private:
	int health;
};



class Mage : public Character{
public: 
	virtual void Talk (){
		std::cout << "Mages rule" << std::endl;}
	virtual void DoDamage() {std::cout << "damage!"<<std::endl;}
};

class Priest : public Character {
public:
	virtual void Talk (){
		std::cout << "priest rule" << std::endl;}
	virtual void DoHeals() {std::cout << "heals!" << std::endl;}
};

class Shaman : public Mage, public Priest{
	
public:
	virtual void Talk (){
		std::cout << "Shamans rule" << std::endl;}
};


int main (int argc, char * const argv []) {

	Mage bob;
	Priest henry;
	Shaman frankie;

	bob.Talk();
	bob.DoDamage();
	henry.DoHeals();

	henry.Talk();
	frankie.Talk();
	frankie.DoDamage();
	frankie.DoHeals();
	


	system("pause");
	return  0;

}
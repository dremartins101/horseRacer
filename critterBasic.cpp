#include <iostream>
#include 

class Critter {
	private:
		std::string name;
		int age;
	public:
		Critter();
		Critter(std::string name, int age);
		void setName(std::string name);
		std::string getName();
		std::string getName();
		void setAge(int age);
		int getAge();
		void sayHi();
};

Critter::Critter(){
	setName("anon");
	setAge(age);
} // end const

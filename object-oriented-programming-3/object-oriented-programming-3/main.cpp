#include <iostream>
#include "Dog.h"
int main()
{
	Dog ourdog;
	ourdog.set_age(22);
	std::cout << "Our dog is " << ourdog.get_age() << " years old." << std::endl;
	std::cout << "Human age is " << ourdog.get_human_age() << " years old" << std::endl;
	std::cout << "Dog is speaking " << ourdog.speak() << std::endl;


	return 0;
}
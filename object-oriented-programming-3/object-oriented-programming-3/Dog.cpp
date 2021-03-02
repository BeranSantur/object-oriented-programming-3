#include "Dog.h"



void Dog::set_name(std::string n) {
	name = n;
	}
std::string Dog::get_name() {
	return name;
	}

void Dog::set_age(int a) {
	age = a;
	}
int Dog::get_age() {
	return age;
	}
int Dog::get_human_age() {
	return age * 7;
}

std::string Dog::speak() {
	return "Woof";
}



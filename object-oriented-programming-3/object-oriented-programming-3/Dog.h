#pragma once

#include <string>

	class Dog {

	private:
		int age = 0;
		std::string name = "";

	public:
		void set_name(std::string n);
		std::string get_name();

		void set_age(int a);
		int get_age();

		int get_human_age();

		std::string speak();

	};

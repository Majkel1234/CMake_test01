#include <iostream>

extern void isEven(const int&);
extern void isHigherThan100(const int&);

int main(int argc,char** argv){
	int tmp;
	std::cout<<"(tmp's value = "<<tmp<<")\n\n"<<std::endl;		//warning!
	std::cout<<"Give the number: "<<std::endl;
	int number;
	std::cin>>number;
	std::cout<<"Now I'm gonna call two different functions from two different files."<<std::endl;
	isEven(number);
	isHigherThan100(number);
	return 0;
}

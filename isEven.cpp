#include <iostream>

void isEven(const int &value){
	(!(value%2))? std::cout<<"The given number is even!\n" : std::cout<<"The given number IS NOT even.\n";
}

#include "extendedStack.h"
int extendedStack::poke(){
	int tmp;
	if(this -> pop(&tmp)){
		std::cout << tmp << std::endl;
		this -> push(tmp);  
		return 1;
	}
	else return 0;
}

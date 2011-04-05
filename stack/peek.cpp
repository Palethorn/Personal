#include "extendedStack.h"
void extendedStack::peek(){
	int tmp; Stack *tmpstack = new Stack(stackSize);
	while(this -> pop(&tmp)){
		std::cout << tmp << std::endl;
		tmpstack -> push(tmp);
	}
	while (tmpstack -> pop(&tmp)){
		this -> push(tmp);
	}
}

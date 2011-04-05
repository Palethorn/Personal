#include "Stack.h"
Stack::~Stack(){
			std::cout << "Destroying stack..." << std::endl;
			free(stack);
		}

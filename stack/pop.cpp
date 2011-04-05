#include "Stack.h"
int Stack::pop(int *element){
	if(topMember > -1){
		*element = this -> stack[topMember--];
		return 1;
	}
	else{
		return 0;
	}
}


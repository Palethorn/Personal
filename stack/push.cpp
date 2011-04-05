#include "Stack.h"
int Stack::push(int element){
	if(topMember + 1 == stackSize){
		return 0;
	}
	else{
		this -> stack[++topMember] = element;
		return 1;
	}
}

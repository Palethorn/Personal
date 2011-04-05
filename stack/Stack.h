#include <malloc.h>
#include <iostream>
class Stack{
	protected:
		int stackSize, topMember, *stack;
	public:
		Stack(int size);
		int pop(int *element);
		int push(int element);
		int operator << (int element){
			return push(element);
		}
		int operator >> (int *element){
			return pop(element)
		}
		~Stack();
};

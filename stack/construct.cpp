#include "Stack.h"
Stack::Stack(int size){
			if(size){
				if((this -> stack = (int *)malloc(sizeof(int)*size)) == NULL) std::cout << "No free memory!" << std::endl;
				else{
					this -> topMember = -1;
					this -> stackSize = size;
				}
			}
			else{
				if ((this -> stack = (int *)malloc(sizeof(int))) == NULL) std::cout << "No free memory!" << std::endl;
				else{
					this -> topMember = -1;
					this -> stackSize = 1;
				}
			}
		}

#include "Stack.h"
class extendedStack: public Stack{
	public:
		extendedStack(int size): Stack(size){}
		void peek();
		int poke();
};

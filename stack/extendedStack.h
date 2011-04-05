#include "Stack.h"
#ifndef EXTENDEDSTACK_H
#define EXTENDEDSTACK_H
	class extendedStack: public Stack{
		public:
			extendedStack(int size): Stack(size){}
			void peek();
			int poke();
	};
#endif

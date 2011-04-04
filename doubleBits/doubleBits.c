#include "includes.h"
/*
						EXPLANATION
	Recursing until parameter reaches value of 1, then return doubled bit which makes it value of 3.
In return we shift that value to make space for next doubled bit in order.
If we have 1101 then the value of given paramerer in recursion would go like this:
1101
110
11
1
then in return doubling the last bit makes it 11 and shifting it we get 1100. after we glue the next doubled bit
to it we get 1111 and so on.
Algorithm works for any given word size assuming the data can fit without loss. You may need to use casting for this.

Tested using gcc 4.4.3 on Debian Squeeze
*/
int doubleBits(int a){
	if(!a)return 0;//double-oh-seven
	if(a==1) return 3;
	return (doubleBits(a>>1)<<2)|(((a&1)<<1)|(a&1));
}

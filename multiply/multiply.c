#include "conditionalSwap.h"
int multiply(int x, int y){
    int result = 0;
	if(y < x)
		xorSwap(&x,&y);
    while(x >= 1){
        if(x % 2 != 0)
    		result += y;
        x >>= 1;
        y <<= 1;
    }
    return result;
}

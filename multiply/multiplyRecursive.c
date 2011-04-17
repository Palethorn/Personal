int doTheJob(int x, int y){//actual multplication is done here
    if(x <= 1) return y;
    if(x % 2 != 0)
    	return y + multiplyRecursive(x >> 1, y << 1);
    else return multiplyRecursive(x >> 1, y << 1);
}
int multiplyRecursive(int x, int y){//this function is called
	if(y < x)
		xorSwap(&x,&y);
	return doTheJob(x,y);
}

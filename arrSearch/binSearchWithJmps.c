int binSearchJmps(int *p,int first, int last,int arg){
    int mid;
    mid=(first+last)/2;
    if(*(p+mid)==arg)return 1;
    if(first>=last)return 1;
    if(*(p+mid)>arg)return 1 + binSearchJmps(p,first,mid-1,arg);
    if(*(p+mid)<arg)return 1 + binSearchJmps(p,mid+1,last,arg);
}

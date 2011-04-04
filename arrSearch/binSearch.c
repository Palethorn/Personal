int binSearch(int *p,int first, int last,int arg){
    int mid;
    mid=(first+last)/2;
    if(*(p+mid)==arg)return mid;
    if(first>=last)return -1;
    if(*(p+mid)>arg)return binSearch(p,first,mid-1,arg);
    if(*(p+mid)<arg)return binSearch(p,mid+1,last,arg);
}

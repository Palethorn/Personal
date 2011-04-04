int interpolSearch(int *p,int first,int last,int arg){
    int mid,offset;
    float eq1,eq2;
    eq1=(last-first) * (arg - *(p+first));
    eq2=(*(p+last)) - (*(p+first));
    if(arg<*(p+first) || arg>*(p+last))return -1;
    mid=(int) (eq1 / eq2);
    offset=first+mid;
    if(*(p+offset)==arg)return offset;
    if(first>=last)return -1;
    if(*(p+offset)>arg)return interpolSearch(p,first,offset-1,arg);
    if(*(p+offset)<arg)return interpolSearch(p,offset+1,last,arg);
}

/*
    Search algorithms
    Copyright (C) 2011  David Ćavar

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
int interpolSearchJmps(int *p,int first,int last,int arg){
    int mid,offset;
    float eq1,eq2;
    eq1=(last-first) * (arg - *(p+first));
    eq2=(*(p+last)) - (*(p+first));
    if(arg<*(p+first) || arg>*(p+last))return 1;
    mid=(int) (eq1 / eq2);
    offset=first+mid;
    if(*(p+offset)==arg)return 1;
    if(first>=last)return 1;
    if(*(p+offset)>arg)return 1 + interpolSearchJmps(p,first,offset-1,arg);
    if(*(p+offset)<arg)return 1 + interpolSearchJmps(p,offset+1,last,arg);
}

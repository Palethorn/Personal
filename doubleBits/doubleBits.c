/*
    Program for doubling bits of a given variable
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
Algorithm works for any given word size assuming the data can fit inside memory location without loss. You may need to use casting for this.
*/
int doubleBits(int a){
	if(!a)return 0;//double-oh-seven
	if(a==1) return 3;
	return (doubleBits(a>>1)<<2)|(((a&1)<<1)|(a&1));
}

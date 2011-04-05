/* 
 * File:   mergeSort.h
 * Author: david
 *
 * Created on October 25, 2010, 9:20 PM
 */
#include "/home/david/programi/libraries/swap.h"
#ifndef MERGESORT_H
#define	MERGESORT_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* MERGESORT_H */
//to much for loops
void merge(int *array, int first,int last, int mid){
	int *temp,i=first,j=mid+1,k=0;
        if((temp=(int *)malloc(sizeof(int)*((last-first)+1)))==NULL) printf("No memory!");
	while(i<=mid && j<=last){//while in boundaries of subarrays
		if(array[i]<=array[j]){
			temp[k++]=array[i++];
		}
		else{
			temp[k++]=array[j++];
		}
	}
	while(j<=last){//if out of boundaries of first subarray and not the second one
			temp[k++]=array[j++];
	}
        while(i<=mid){//if out of boundaries of second subarray and not the first one
			temp[k++]=array[i++];
	}
	for(i=first;i<=last;i++){//put it back to original array
		array[i]=temp[i-first];
	}
        free(temp);
}
//too much ifs
/*void merge2(int *array, int first,int last, int mid){
    int temp, i=first, j=mid+1,flag=0;
    while(i<=mid && j<=last){
        if(flag=0){
            if(array[i]>array[j]){
                xorSwap(array[i],array[j]);
            }
        }
        if(flag=1){
            
        }
    }
}*/
void mergeSort(int *array, int first, int last){
	int mid;
	if(first>=last)return;
	mid=(first+last)/2;
        //divide array into subarrays
	mergeSort(array,first,mid);//go left
	mergeSort(array,mid+1,last);//go right
	merge(array,first,last,mid);//merge subarrays
}
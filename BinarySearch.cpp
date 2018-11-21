//
//  main.cpp
//  BinarySearch
//
//  Created by Md Anwar Hossain on 8/1/18.
//  Copyright © 2018 Md Anwar Hossain. All rights reserved.
//
#include <stdio.h>
#include <iostream>

int binary_search(int A[], int size, int search_value){
    int left,right,mid;
    left = 0;
    right = size - 1;
    
    while (left <= right) {
        
        mid = (left + right) / 2;
        
        if (A[mid] == search_value) {
            return A[mid];
        }
        
        if (A[mid] < search_value) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
  
    int A[10] = {2,4,6,8,10,15,16,19,20,80};
    int found_value = binary_search(A, 10, 100);
    
    if (found_value > 0) {
        printf("Yes found your value is : %d \n", found_value);
    }else{
        printf("Sorry!, Not found ! \n");
    }
    return 0;
}

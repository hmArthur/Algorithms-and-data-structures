#include <stdio.h>
#include <stdlib.h>

void merge(int* leftArray, int* rightArray, int* array, int length);
void mergeSort(int* array, int length);

void merge(int* leftArray, int* rightArray, int* array, int length) {
    int leftSize = length/2;
    int rightSize = length - leftSize;

    int i=0, left=0, right=0;

    while(left < leftSize && right < rightSize) {
        if(leftArray[left] < rightArray[right]) {
            array[i] = leftArray[left];
            left++;
        } else {
            array[i] = rightArray[right];
            right++;
        }
        i++;
    }

    while(left < leftSize) {
        array[i] = leftArray[left];
        i++;
        left++;        
    }

    while(right < rightSize) {
        array[i] = rightArray[right];
        i++;
        right++;
    }
}

void mergeSort(int* array, int length) {
    if(length <= 1) return;

    int newSize = length/2;

    int* leftArray = (int*) malloc(sizeof(int)*newSize);
    int* rightArray = (int*) malloc(sizeof(int)*(length-newSize));

    int left, right;

    for(left = 0; left < newSize; left++) 
        leftArray[left] = array[left];

    for(right = 0; right < length-newSize; right++)
        rightArray[right] = array[newSize+right];

    mergeSort(leftArray, newSize);
    mergeSort(rightArray, length-newSize);
    merge(leftArray, rightArray, array, length);
}

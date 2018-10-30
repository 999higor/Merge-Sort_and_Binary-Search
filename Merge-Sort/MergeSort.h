#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>

void merge(int arr[], int l, int m, int r);

void mergeSort(int arr[], int l, int r);

void printArray(int A[], int size);

int sizeArray();

void readFile(int arr[]);


#endif // MERGESORT_H_INCLUDED

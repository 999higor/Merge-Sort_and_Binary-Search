#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<time.h>

void merge(int arr[], int l, int m, int r);

void mergeSort(int arr[], int l, int r);

void printArray(int A[], int size);

int sizeArray();

void readFile(long int arr[]);

void ReadSearchBinary(long int arr[], int size);

void ReadSearchSequencial(long int arr[], int size);


#endif // MERGESORT_H_INCLUDED

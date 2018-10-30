

#include <MergeSort.h>

// Merges two subarrays of arr
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int sizeArray()
{
    int numero, i=0;

    FILE* file = fopen ("values.txt", "r");

    while (!feof(file)){

        fscanf(file, "%d", &numero);
        i++;
    }
    fclose(file);
    return i;
}

void readFile(int arr[])
{
    int numero, i=0;

    FILE* file = fopen ("values.txt", "r");

    while (!feof(file)){

        fscanf(file, "%d", &numero);

        arr[i] = numero;
        i++;
    }
    fclose(file);
   // return arr;
}

int sequencialSearch(int arr[], int size , int num)
{
    int i;

    for(i=0; i<size; i++)
    {

        if(num == arr[i])
        {
            printf("\nValue Found!\n");
            return arr[i];
        }else
            if (num < arr[i])
            {
                printf("\nValue not found !\n");
                return -1;
            }


    }
    return -1;
}

int binarySearch(int arr[], int size, int num)
{
    int begin, mid, end;
    begin = 0;

    end = size -1;

    //printf("size: %d\n" ,end);

    while(begin <= end)
    {
        mid = (begin + end)/2;
        if(num < arr[mid])
        {
            end = mid - 1;
        }
        else if(num > arr[mid])
        {
            begin = mid + 1;
        }else
        {
            printf("\nValue found !\n ");
            return mid;
        }
    }
    printf("Value not found !\n");
    return -1;
}

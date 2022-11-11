#include <stdio.h>
int size;

void print(int arr[]) {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}

void Merge(int arr[], int lB, int mid, int uB) {
    int M = mid + 1;
    int arr1[size];
    while (lB <= mid && M <= uB) {
        if (arr[lB] <= arr[M])
        {
            arr1[uB] = arr[lB];
            lB++;
        }
        else
        {
            arr1[uB] = arr[M];
            M++;
        }
        uB++;
    }
    if (lB > mid) {
        while (M <= uB)
        {
            arr1[uB] = arr[M];
            M++;
            uB++;
        }
    }
    else
    {
        while (lB <= mid)
        {
           arr1[uB] = arr[lB];
           lB++;
           uB++;
        } 
    }
    
    for (int i = lB; i < uB; i++)
    {
        arr[i] = arr1[i];
    }
    // printf("hiiiii");
    
    print(arr);
    
    
}

void MergeSort(int arr[], int lB, int uB) {
    int mid;
    if (lB < uB)
    {
         mid = (lB + uB)/2;
    }
    printf("hiiiii");
    
    MergeSort(arr, lB, mid);

    MergeSort(arr, mid+1, uB);

    Merge(arr, lB, mid, uB);
}

void main() {
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int lowerBound = 0, upperBound = size-1;
    MergeSort(arr, lowerBound, upperBound);
    
}
#include<stdio.h>

void BinarySearch(int arr[], int size, int x) {
    int l = 0, r = size - 1, mid;
    int flag = 0;
    while (l <= r) 
    {
        mid = (l + r)/2;
        
        if (arr[mid] == x)
        {
            printf("\nThe element that  you are looking for is in position: %d", mid + 1);
            flag = 1;
            return;
        }
        else if (arr[mid] < x) 
        {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    if (flag == 0)
    {
        printf("\nThe element that you are looking for is not present in the given array.");
    }
    
}

void main() {
    int size, x, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    
    // taking input in array
    for (i = 0; i < size; i++)
    {
        printf("Enter the element in position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // printint the given array
     for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);    
    }

    printf("\nEnter the element you are wishing to find: ");
    scanf("%d", &x);

    BinarySearch(arr, size, x);

}
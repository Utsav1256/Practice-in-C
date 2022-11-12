#include<stdio.h>
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

    // linear search
    int flag = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
             printf("\nThe element that  you are looking for is in position: %d", i + 1);
             flag = 1;
             break;
        }
    }

    // if (i == size)
    // {
    //     printf("the element that  you are looking for is not present in the given array.");
    // }
    
    if (flag == 0)
    {
        printf("\nThe element that  you are looking for is not present in the given array.");
    }
}
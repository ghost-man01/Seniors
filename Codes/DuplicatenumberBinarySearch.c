// Monotonic Function -> Which follows a particular order
// 1 2 3 4 5 -> Monotonic
// Predicate -> True True True False False   -> Monotonic
// False False True True True -> Monotonic
// False False True True False => Non Monotonic

#include<stdio.h>
int sort(int arr, int n);
int main()
{
    int n, i, mid, low, high, element;
    printf("Array Size: ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    scanf("%d", &arr[i]);
    printf("Enter element to be searched: ");
    scanf("%d", &element);
    low = 0, high = n-1;
    while(low<high)
    {
        mid = (low+high)/2;
        if(arr[mid]==element)
        return mid;
        else if (arr[mid] < element)
        low = mid;
        else
        high = mid+1;
    }
    
    
}

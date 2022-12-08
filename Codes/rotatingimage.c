#include<stdio.h>

int main()
{
    int n, i, j, temp;
    printf("Matrix Size: ");
    scanf("%d", &n);
    int arr[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Enter the value for matrix arr[%d] arr[%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<i-1; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n/2; j++)
        {
            temp - arr[i][j];
            arr[i][j] = arr[i][n-j-1];
            arr[i][n-j-1] = temp;

        }
    }

    for (i=0; i<n; j++)
    {
        for (j= 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
        
    }
}
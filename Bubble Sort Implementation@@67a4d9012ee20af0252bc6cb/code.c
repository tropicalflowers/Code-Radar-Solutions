#include <stdio.h>
void printArray(arr[n], n);
{

}
void bubbleSort(arr[n],n);
{
int a= arr[n];
int size;
size=sizeof arr()/ sizeof arr[0];
int temp;
{

    for(n=0; n<size; n++)
    {
        if (arr[n]<arr[n+1])
        {
            temp=arr[n+1];
            arr[n]=arr[n+1];
            arr[n+1]=arr[n];
        }
    }
}
return 0;
}

void printArray(arr, n);
{
int a= arr[n];
int size;
size=sizeof arr()/ sizeof arr[0];
for(n=0; n<size; n++)
{

    printf("%d", arr[n]);
    
}
return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
#include<stdio.h>

int printIntersection(int arr1[], int arr2[], int n, int m) 
{ 
  int i = 0, j = 0; 
  bubbleSort(arr1,n);
  bubbleSort(arr2,m);
  while (i < n && j < m) 
  { 
    if (arr1[i] < arr2[j]) 
      i++; 
    else if (arr2[j] < arr1[i]) 
      j++; 
    else /* if arr1[i] == arr2[j] */
    { 
      printf(" %d ", arr2[j++]); 
      i++; 
    } 
  }
}
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
int main() 
{ 
    int i, N,M;
    
    printf("Enter size of array1: ");
    scanf("%d", &N);
    int arr1[N];
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of array2: ");
    scanf("%d", &M);
    int arr2[M];
    printf("Enter %d elements in the array : ", M);
    for(i=0; i<M; i++)
    {
        scanf("%d", &arr2[i]);
    }
      
    printIntersection(arr1, arr2, N, M); 
} 

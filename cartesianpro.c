#include <stdio.h>
int remove_duplicate_elements(int arr[], int n)
{

        if (n==0 || n==1)
        return n;

        int temp[n];

        int j = 0;
        int i;
        for (i=0; i<n-1; i++)
        if (arr[i] != arr[i+1])
        temp[j++] = arr[i];
        temp[j++] = arr[n-1];

        for (i=0; i<j; i++)
        arr[i] = temp[i];

        return j;
}

void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 

	
	i = 0; 
	j = 0;  
	k = l; 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	while (i < n1) 
    { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) 
    { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 

void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
    { 
		
		int m = l + (r - l) / 2; 	
		mergeSort(arr, l, m); 
		mergeSort(arr, m + 1, r); 
		merge(arr, l, m, r); 
	} 
} 

void printArray(int A[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		printf("%d ", A[i]); 
	printf("\n"); 
} 

void Cartesian(int arr1[], int arr2[], int n, int m) 
{ 
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
            {   printf("{%d, %d}, ", arr1[i], arr2[j]); }
    } 
} 

int main()
{
    int n,m;
    printf("enter numbers of elements in set a" );
    scanf("%d",&n);
    int A[n];
    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&A[i]);
    }

    printf("enter numbers of elements in set b" );
    scanf("%d",&m);
    int B[m];
    for(i = 0; i < m; i++)
    {
        scanf("%d",&B[i]);
    }
    
    mergeSort(A, 0, n - 1); 
    mergeSort(B, 0, m - 1);

    n = remove_duplicate_elements(A, n);
    m = remove_duplicate_elements(B, m);
    Cartesian(A, B, n, m);

    return 0;
}

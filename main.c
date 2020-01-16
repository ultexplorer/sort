#include <stdio.h>
#define LIM 17

void sort_simple(int arr[], int N);

int main()
{
    int A[]={ 9, 8, 7, 4, 3, 3, 3, 3, 1,1 , 6, 5, 4, 3, 2, 1, 0 };
    int N=LIM;
    
    for(int i=0; i<LIM; ++i)
    {
        printf("%d, ", A[i]);
    }
    printf("\n\n");

    sort_simple(A,N);
        
    printf("\n\n");
    for(int i=0; i<LIM; ++i)
    {
        printf("%d, ", A[i]);
    }
    printf("\n\n");
    
    return 0;
}


void sort_simple(int arr[], int N)
{
    int N_out = N;
    int N_in  = N;
    int i, j, k, tmp;
    i=j=k=tmp=0;

    for (i; i<N_out; ++i)
    {        
        while(N_in){
            if(arr[k+1]<arr[k] && k<(N-(i+1)))
            {
               tmp=arr[k+1];
               arr[k+1]=arr[k];
               arr[k]=tmp;
            }
            ++k;
            ++j;
            --N_in;
        }
        k=0;
        j=0;
        N_in=(N-1)-i;
    }
}
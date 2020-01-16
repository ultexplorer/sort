#include <stdio.h>
#define LIM 17

void sort_simple(int arr[], int N);

int main()
{
    int A[]={ 9, 8, 7, 4, 3, 3, 3, 3, 1,1 , 6, 5, 4, 3, 2, 1, 0 };
    int N=17;
    
    for(int i=0; i<LIM; ++i)
    {
        printf("%d,", A[i]);
    }
    printf("\b\n");

    sort_simple(A,N);
    
    /*
    int N_out = LIM;
    int N_in  = LIM;
    int i, j, k, tmp;
    i=j=k=tmp=0;

    for (i; i<N_out; ++i)
    {        
        while(N_in){
            if(A[k+1]<A[k] && k<(LIM-(i+1)))
            {
               tmp=A[k+1];
               A[k+1]=A[k];
               A[k]=tmp;
            }
            ++k;
                                     //printf("%d ", A[j]);
            ++j;
            --N_in;
        }
        k=0;
                                    //printf("\nk=%d\n", k);
        j=0;
        N_in=(LIM-1)-i;
                                     //printf("i=%d\n\n", i);
    }
    */
    
    printf("\n\n");
    for(int i=0; i<LIM; ++i)
    {
        printf("%d, ", A[i]);
    }
    printf("\b\b\n\n");
    
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
                                     //printf("%d ", arr[j]);
            ++j;
            --N_in;
        }
        k=0;
                                    //printf("\nk=%d\n", k);
        j=0;
        N_in=(N-1)-i;
                                     //printf("i=%d\n\n", i);
    }
}
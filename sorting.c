#include <stdio.h>
int main(){
    printf("Enter the number of processes:");
    int size;
    scanf("%d",&size);
    int arr[size];
    int pid[size];
    for( int i = 0; size > i; i++ ) {
        pid[i] = i + 1;
        printf("Enter the execution time of process %d: ",pid[i]);
        scanf("%d",&arr[i]);
    }
    for( int s = 0; size > s; s++ ) {
        for( int t = s; size > t; t++ ) {
            int temp;
            if( arr[s] > arr[t] ) {
                temp = arr[s];
                arr[s] = arr[t];
                arr[t] = temp;
            }
        }
    }
    for( int sh = 0; size > sh; sh++) {
        printf("%d\n",arr[sh]);
    }
}
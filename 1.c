#include <stdio.h>

int main(){
    int arr[10];
    printf("Input 10 elements in the array : ");
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are : ");
    for(int j=0; j<10; j++){
        printf("%d ", arr[j]);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Input the number of elements to be stored in array : ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of all elements stored in the array is : %d\n", sum);
    return 0;
}
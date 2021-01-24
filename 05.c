#include <stdio.h>

int main(){
    int n, count=0;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n && j!=i; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is : %d\n", count);
    return 0;
}
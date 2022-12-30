#include<stdio.h>
int main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n],k,i,j,temp;
    printf("\nEnter elements into an array:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nElements present in the arr array are:\n ");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n\nSorting List in ascending order:\n ");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements to insert:");
    scanf("%d",&n);
    
    int i,arr[n],j,min,temp;
    printf("\nEnter %d elements into an array:\n ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\nElements in an array:\n");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    
    for(i=0;i<n-1;i++){
        min =i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    }
    
    printf("\nElements after Selection  sorting:\n");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n],i,key;
    printf("\nEnter elements into an array:\n ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nElements present in the arr array are:\n ");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    printf("\n\nEnter key value:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
        printf("\n%d is found at the location %d.",key,i+1);
        break;
    }
}
    if(i==n)
    printf("\n%d isn't found in the array.",key);
    return 0;
}



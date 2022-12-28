
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n],i,key,low,high,mid;
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
    low = 0;
    high = n-1;
    mid = (low+high)/2;
    while(low<=high){
        if(arr[mid]==key){
        printf("\n%d is found at the location %d.",key,mid+1);
        break;
        }
        else if(arr[mid]<key)
        low = mid+1;
        else
        high = mid-1;
        mid = (low+high)/2;
    }
    if(low>high)
    printf("\n%d isn't found in the array.",key);
    return 0;
}

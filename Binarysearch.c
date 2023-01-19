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
        printf("| %d | ",arr[i]);
        }
        printf("\n");
        printf("Enter key value:");
        scanf("%d",&key);
        // let's say low = 0
        low = 0;
        high = n-1;
        while(low<=high){
        // migth be possible that ( low + high ) exceeds the range of int
        int mid = low + ( high -low ) / 2;  // which is equals to mid = ( low + high ) / 2

        if(arr[mid]==key){
        printf("\n%d is found at the location %d\n",key,mid+1);
        break;
        }
        else if(arr[mid]<key)
        low = mid+1;
        else
        high = mid-1;
        }

        printf("%d isn't found in the array\n",key);
        return 0;
        }

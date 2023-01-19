#include<stdio.h>
void quicksort(int arr[100],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(arr[i]<=arr[pivot]&&i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);

   }
}
int main(){
    int n;
    printf("Enter number of elements to insert:");
    scanf("%d",&n);
    
    int i,arr[n],j,temp;
    printf("\nEnter %d elements into an array:\n ",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("\nElements in an array:\n");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    quicksort(arr,0,n-1);
     printf("\n");
    printf("\nElements after Quick sort:\n");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    return 0;
    
}

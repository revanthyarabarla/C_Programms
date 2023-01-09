#include<stdio.h>
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
    
   for(i=1;i<n;i++){
       temp = arr[i];
       j = i-1;
       while(j>=0 && arr[j]>temp){
           arr[j+1] = arr[j];
           j--;
       }
       arr[j+1] = temp;
   }
  
    printf("\nElements after Insertion sorting:\n");
    for(i=0;i<n;i++){
        printf("\t| %d |",arr[i]);
    }
    return 0;
}


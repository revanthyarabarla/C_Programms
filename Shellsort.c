#include <stdio.h>
void swap(int *a,int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return;
}

void shellsort(int arr[],int n){
    for(int gap=n/2;gap>0;gap=gap/2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i=i-gap){
                if(arr[i+gap] >= arr[i])
                break;
                else{
                swap(&arr[i],&arr[i+gap]);
                }
                
            }
        }
    }
    return;
}

int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("\n\nBefore sorting :\n");
    for(int j=0;j<n;j++){
        printf("| %d |\t",arr[j]);
    }
    
    shellsort(arr,n);
    printf("\n\nAfter shell sort:\n");
    for(int i=0;i<n;i++){
        printf("| %d |\t",arr[i]);
    }

    return 0;
}


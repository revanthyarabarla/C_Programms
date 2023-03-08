//implementation of stack data structure in C 

#include<stdlib.h>
#include<stdio.h>
#define max 100
int stack[max], top = -1;
void push();
void pop();
void peek();
void display(); 
void sort(); 

void display() {
        if(top==-1)
                printf("stack empty || no elements to display\n");
        else {
        	int i;
                printf("The elements of the stack are:\n");
                for( i = top; i>=0; i--) {
                        printf("|   %d   |", stack[i]);
                        if(i==top)
                                printf("<---------[top]");
                        printf("\n");

                        printf("|--------|[%d]\n",i);
                }
                printf("\n");
        }

}
//function to push an element into the stack
void push () {
 if(top ==  max-1) 
  printf("stack overflown\n");
 else {
  int value;
  printf("Enter a value to push: ");
  scanf("%d", &value); 
  top++; 
  stack[top] = value;
  
  printf("%d pushed into the stack at top = %d\n", value, top); 

  display(); 
  
 } 
}
//function to pop an element from the stack
void pop() {
 if(top==-1) 
  printf("stack underflown\n");
 else {
  top--;
  printf("%d poped out of the stack from top = %d\n",stack[top+1], top+1);
  
  display();
 }
}
//function to peek an element in a stack
void peek() {
 if(top==-1) 
  printf("stack empty || no peek element\n");
 else {
  printf("peek element = %d\n", stack[top]);
 }
}

//function to sort elements of stack
void sort() {
 if(top==-1) 
  printf("stack empty || no elements to sort\n");
 else {
 	int i,j;
  for( i=0; i<=top-1;i++) {
   for(j=0; j<=top-i-1; j++) 
   {
    if(stack[j]>stack[j+1]) {
     int temp = stack[j];
     stack[j] = stack[j+1];
     stack[j+1] = temp; 
    }
   }   
  }
  printf("stack after sorting:\n"); 
  display(); 
 }
}

//Driver code 
int main() {
 int choice;
 printf("---------------Menu--------------\n");
 printf("1.Push an element.\n2.Pop an element.\n3.Peek element.\n4.display elements\n5.Sort\n6.Exit\n");
 while(1) {
  printf("Enter your choice: ");
  scanf("%d", &choice);
 
  switch(choice) {
   case 1: push();
    break;
   case 2: pop();
    break;
   case 3: peek();
    break;
   case 4: display();
    break;
   case 5: sort();
    break; 
   case 6: exit(0);
    break;
   default: printf("Enter a valid choice\n"); 
    break;
  }
 }

}

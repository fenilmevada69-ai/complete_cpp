#include<stdio.h>
#include<conio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;
void push();
void pop();
void display();

int main() {
    int choice;
    while(1) {
        printf("\n1-----------push");
        printf("\n2-----------pop");
        printf("\n3-----------display");
        printf("\n4-----------exit");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : {
                push();
                break;
            }
            case 2 : {
                pop();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                // exit(0);
            }   
        }   //end of switch
    }   //end of while
}   //end of main

void push(){
    
    int num;
    
    if(top==SIZE-1) {
        printf("\nThe stack is full");
    } //end of if
    
    else {
        top++;
        printf("\nEnter the number: ");
        scanf("%d",&num);
        stack[top]=num;
        printf("\nThe data %d is pushed in the stack",stack[top]);
    } //end of else
    
} //end of push

void pop() {
    
    if(top==-1){ 
        printf("\nThe stack is underflow");
    } //end of if
    
    else {
        printf("The %d is poped",stack[top]);
        top--;
    } //end of else
    
} //end of pop

void display() {

    int i;
    
    if(top==-1) {
        printf("\nThe stack is empty");
    } //end of if
    
    else {
        
        for(i=top; i>=0; i--) {
            printf("\n-------%d--------",stack[i]);
        }
        
    } //end of else

}   //end of display
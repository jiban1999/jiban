#include<stdio.h>
#include<stdlib.h>
#define size 3
int stack[size],top=-1;
void push(int n)
{
        if(top>=size-1)
        {
        printf("The Stack is full\n");
        } 
        else
        {
        top=top+1;
        stack[top]=n;
        }

}

int pop()
        {
        if(top<0)
        {
        printf("Empty Stack \n");
        }
        else
        {
        stack[top];
        top=top-1;
        printf("%d\n",stack[top]);
        }
}

void display()
{
        if (top>=0)
        {      
                for(int i=top;i>=0;i--)
                {
                        printf("The elment in stack %d \n",stack[i]);
                }
        }
        else
        {
        printf("Stackis Empty\n");
        }
 }
 int main()
 {
        int n, ch;
        while(1)
        {
                printf("\n\t Stack Operation Using Array");
                printf("\n\t ..............................");      
                printf("\nEnter your Choice:- \n1.Push,\n2.Pop,\n 3.Display,\n 4.Exit\n");
                scanf("%d",&ch);
                switch(ch)
                {
                        case 1: printf("Enter a value  to push \n");
                                scanf("%d",&n);
                                push(n);
                                break;
                        case 2:pop();
                                break;
                        case 3: display();
                                break;
                        case 4: exit(0);    
                        
                        default: printf("Error!Enter valid choice\n");
                                break;
                }          
        }
 }

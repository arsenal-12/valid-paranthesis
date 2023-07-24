/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define max 10
char stack[max];
int top=-1;

void push(char x)
{
    if(top==max-1)
    printf("full");
    else
    stack[++top]=x;
}
void pop()
{
    if(top==-1)
    printf("empty");
    else
    stack[top--];
}

int main()
{
    char str[10];
    int i=0;
    printf("enter string:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
        {
        push(str[i]);
        i++;
        }
        
        else
        {
            if((str[i]==')' && stack[top]=='(') || (str[i]=='}' && stack[top]=='{') || (str[i]=='[' && stack[top]==']'))
            pop();
            i++;
       }
    }
    if(str[i]=='\0' && top==-1)
    printf("\nvalid paranthesis");
    else
    printf("\nnot a valid paranthesis!");
    
  
    
    return 0;
}

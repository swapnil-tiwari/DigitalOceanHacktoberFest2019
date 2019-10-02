#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,i;
    char o;
    printf("Enter the first and the second no. respectively\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operation you want from *,-,+,/\n");
    scanf(" %c",&o);
    //printf("%c",o);
    switch(o)
    {
        case '+': //if(o=='+')
                {
                    printf("%d",a+b);
                    break;
                }
        case '-': //if(o=='-')
                {
                    printf("%d",a-b);
                    break;
                }
        case '*': // if(o=='*')
                {
                    printf("%d",a*b);
                    break;
                }
        case '/': // if(o=='/')
                 {
                    printf("%d",a/b);
                    break;
                 }

        default: printf("kbfuegfuiri");
    }
}

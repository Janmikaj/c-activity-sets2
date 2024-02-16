// 10. Write a C program to compare two strings, character by character.
#include<stdio.h>
void input(char *a,char *b)
{   printf("enter string 1 : ");
    scanf("%s",a);
      printf("enter string 2 : ");
    scanf("%s",b);
}
int compute(char *a,char *b) 
{   int i=0;
    while(a[i]!='\0'|| b[i]!='\0')  
    {
        
            if(a[i]!=b[i])  
               {
                    return a[i]-b[i]; 
               }

          i++;
        }
        return 0;
    }

void output(char *a,char *b,int c)
{
    if(c==0)
    {
        printf("both are equal");
    }
    else if(c>0)
    {
        printf("%s is greater than %s ",a,b);
    }
    else{
         printf("%s is greater than %s ",b,a);
    }
}
int main()
{
    char a[30],b[30],c;
    input(a,b);
    c=compute(a,b);
    output(a,b,c);
    return 0;
}
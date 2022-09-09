#include<stdio.h>

int main()
{
    char *a,*b,str1[50],str2[50];
    a=&str1,b=&str2;
    printf("enter first string :");
    gets(a);
    printf("enter second string :");
    gets(b);
    strcat(a,b);
    puts(a);
    return 0;
}

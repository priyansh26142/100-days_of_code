#include<stdio.h>

int main()
{
    int i=0,len=0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);

    while(str[i] != '\0')
    {
        len++;
        i++;
    }
    printf("The length of string :%d",len);
}
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strlen_array(char array[])
{
    int n=strlen(array);
    return n;
}

int main()
{
    char sir [101];
    gets(sir);
    int s=strlen_array(sir);
    printf("%d",s);

}

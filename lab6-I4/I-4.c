#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[30];
char t[15];

int func_strend(char *s, char *t );

int main()
{
    gets(s);
    gets(t);

    printf("\n%d\n",func_strend(s,t));

    return 0;
}

int func_strend( char *s, char *t )
{
    int i;
    int ok=1;

    s=s+strlen(s)-strlen(t);

    for (i=0;i<strlen(t);i++)
    {
        if (*s!=*t)
        {
            ok=0;
            break;
        }
        else
        {
            s++;
            t++;
        }
    }

    return ok;
}


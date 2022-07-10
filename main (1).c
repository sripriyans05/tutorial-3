#include <stdio.h>
#include <string.h>
 
char str[100], sub[100];
int count = 0, count1 = 0;
 
void main()
{
    int i, j, l, m, n;
 
    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);
 
    m = strlen(str);
 
    printf("\nEnter a substring : ");
    scanf(" %[^\n]s", sub);
 
    n = strlen(sub);
 
    for (i = 0; i < m;)
    {
        j = 0;
        count = 0;
        while ((str[i] == sub[j]))
        {
            count++;
            i++;
            j++;
        }
        if (count == n)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, str);
}
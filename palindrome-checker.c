#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    scanf("%s",ar);
    int i = 0; int j = strlen(ar)-1;
    int f = 1;
    while (i<j)
    {
        if (ar[i]==ar[j])
        {
            i++;
            j--;
        }
        else
        {
            f = 0;
            break;
        }
        
    }
    if (f == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    

    return 0;
}

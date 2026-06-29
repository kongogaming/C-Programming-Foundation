#include <stdio.h>
#include <string.h>
int check(char a[], char b)
{
    int count = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == b)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("the character is not present in the string");
    }
    else
    {
        printf("the number of %c is: %d", b, count);
    }
}
int main()
{
    char a = 'a';
    char b[] = "Nfsb!tbbsb!qbjtb!ubljzf!lf!offdif!cmbd1!qpmzf!ibj";
    check(b, a);

    return 0;
}
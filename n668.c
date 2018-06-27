#include <stdio.h>

int main(void)
{
    char str[101010];
    scanf("%s", str);
    long c;
    int a = (int)str[0]-48, b = (int)str[1]-48;
    for(c=0; str[c] != '\0'; c++);
    if((int)str[2]-48 >= 5)
    {
        b++;
        if(b == 10)
        {
            b = 0;
            a++;
            if(a == 10)
            {
                a = 1;
                c++;
            }
        }
    }

    printf("%d"".""%d*10^%ld", a, b, c-1);
    return 0;
}

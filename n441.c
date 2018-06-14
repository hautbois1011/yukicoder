#include <stdio.h>
#include <string.h>

int main(void)
{
    char A[202], B[202];
    scanf("%s %s", A, B);

    if((strcmp(A, "2")==0 && strcmp(B, "2")==0)
      || (strcmp(A, "0")==0 && strcmp(B, "0")==0))
        printf("E\n");
    else if(strcmp(A, "0")==0 || strcmp(A, "1")==0
      || strcmp(B, "0")==0 || strcmp(B, "1")==0)
        printf("S\n");
    else
        printf("P\n");

    return 0;
}

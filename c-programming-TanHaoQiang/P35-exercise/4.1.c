#include <stdio.h>
// #include <string.h>
int main(void)
{
    char *A = "醋";
    char *B = "酱油";
    char *temp = "";
    printf("pre exchange: A : %s, B : %s\n", A, B);
    /*strcpy(temp, A);
    strcpy(A, B);
    strcpy(A, temp);*/
    temp = A;
    A = B;
    B = temp;
    // printf("the length of A : %zd, the length of B : %zd\n", strlen(A), strlen(B));
    printf("after exchange: A : %s, B : %s\n", A, B);
    return 0;
}

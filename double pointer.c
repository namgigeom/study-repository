#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5] = {0, 1, 2, 3, 4};
    int c[3] = {4, 8, 12};
    //int *b[2];
    int **b;
    b = malloc(sizeof(int*)*2);
    b[0] = a;
    b[1] = c;
    printf("%d %d\n",b[0][1],b[1][2]);
    free(b);
    return 0;
}
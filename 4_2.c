#include <stdio.h>
#define cmax 10
#define rmax 7
int main(){

    int c=1, r;
    do{
        for(r=1; r<=rmax; r++){

            printf("%d\t", c*r);
        }

        printf("\n");
        c++;

    }while(c<=cmax);

    return 0;
}


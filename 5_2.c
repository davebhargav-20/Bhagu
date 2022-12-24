#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, d, r1, r2;
    float img;

    printf("Enter the value for a:  ");
    scanf("%d", &a);

    printf("Enter the value for b:  ");
    scanf("%d", &b);

    printf("Enter the value for c:  ");
    scanf("%d", &c);

    d=(b*b)-(4*a*c);

    printf("%d", d);

    switch(d>0){

        case 1:{
            r1=(-b+sqrt(d)/(2*a));
            r2=(-b-sqrt(d)/(2*a));

            printf("root1 is %d\nroot2 is %d", r1, r2);
            break;
        }
        case 0:{

            switch(d==0){

                case 1:{
                    r1=r2=-b/(2*a);

                    printf("root1 is %d\nroot2 is %d", r1, r2);
                    break;
                }
                case 0:{
                    r1=r2=-b/(2*a);
                    printf("root1 is %d\nroot2 is %d", r1, r2);
                    img=(sqrt(-d))/(2*a);
                    printf("imeginar no %f", img);
                    break;
                }break;
            }
        }

    }

    return 0;
}

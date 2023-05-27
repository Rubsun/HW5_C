#include <stdio.h>
void reduce_fraction(int * a, int * b){

    if (*a<*b)
    {
        for (int i = 2; i < *b; i++)
        {
            if (*a % i == 0 && *b % i == 0)
            {
                *a /= i;
                *b /= i;
            }
        }
    }

    if (*a>*b)
    {
        for (int i = 2; i < *a; i++)
        {
            if (*a % i == 0 && *b % i == 0)
            {
                *a /= i;
                *b /= i;
            }
        }
    }
    


};

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    reduce_fraction(&a,&b);
    printf("%d %d", a,b);
    return 0;
}   
/*Write the sum of first natural number*/
#include <stdio.h>
int sum_natural(int);

int sum_natural(int n){
    if (n == 0)
    {
        return 0;
    }
    else{
        return sum_natural(n-1) +n;
    }
    
}
int main() {
    int n= 61;
    printf("The sum of natural number till %d is %d",n ,sum_natural(n));
    return 0;
}

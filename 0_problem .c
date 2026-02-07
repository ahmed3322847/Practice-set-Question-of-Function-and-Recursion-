/*Write a recurcive function to calculate the sum of n numbers */
#include <stdio.h>
int sum_natural (int );

int sum_natural(int n){
    if (n == 0)
    {
        return 0;
    }
    else{
        return n+ sum_natural(n - 1);
    }
    
    
}
int main() {
    int n = 4000;
    printf("The sum of first %d natural number is %d", n , sum_natural(n));
    return 0;
}
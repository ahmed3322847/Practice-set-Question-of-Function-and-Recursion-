/*Calculate the nth value by fabonnaci series*/
#include <stdio.h>
int fabonaci (int );

int fabonaci(int n){
    if (n == 1|| n==2)
    {
        return (n-1);
    }
    else{
        return fabonaci(n-1) + fabonaci(n-2);
    }
    
}
int main() {
    int n=8;
    printf("The fabonaci value of %d is %d",  n, fabonaci(n));
    return 0;
}
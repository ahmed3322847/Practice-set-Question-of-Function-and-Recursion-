/*Make a function to print average of three number*/
#include <stdio.h>
float average(int a, int b , int c);

float average(int a , int b, int c){
   // float d = (a+b+c)/3;
   // printf("The average of three number %f",d);
    return (a+b+c)/3.0;// take float value then it will give float value
}

int main() {
    printf("The average of three value is %f",average(4,5,7));
    
    return 0;
}
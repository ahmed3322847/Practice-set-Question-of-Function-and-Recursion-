/*Write a function to calculate force of attraction on a body*/
#include <stdio.h>
float force_of_attraction(float g, int m1, int m2, float r);


float force_of_attraction(float g , int m1, int m2, float r){
    return ((g*m1*m2)/(r*r));
}
int main() {
    float g= 9.8;
    int m1 = 45;
    int m2 = 55;
    float r = 20.0;
    printf("force of attraction on body is : %f", force_of_attraction(g ,m1,m2,r));

    return 0;
}
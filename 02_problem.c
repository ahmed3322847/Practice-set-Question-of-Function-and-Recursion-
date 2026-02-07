/*Write a function to convert celcius to ferhnite temperature*/
#include <stdio.h>
float convert_temperature( int a);

float convert_temperature(int a){
    return (a*(1.8)+32.0);
}
int main() {
    int a = 37;
    printf("converted temperature into Farehnite %f ",convert_temperature(a));
    return 0;
}
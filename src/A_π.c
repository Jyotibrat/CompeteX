#include<stdio.h>
#define M_PI 3.14159265358979323846

int main(){

    int d;
    scanf("%d", &d);
    double r = d/2.0;
    double area = M_PI * r * r;

    printf("%.14lf", area);

    return 0;
}
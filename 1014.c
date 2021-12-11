#include <stdio.h>
 
int main() {
    int km;
    float l, km_l;
    
    scanf("%d %f", &km, &l);
    km_l = km/l;
    printf("%.3f km/l\n", km_l);
    
    return 0;
}
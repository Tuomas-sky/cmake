#include "head.h"

using namespace std;

int main(){

    int a = 10;
    int b = 20;
    double c = 40.0;
    printf("%d+%d=%d\n", a, b, add(a, b));
    printf("%d-%d=%d\n", a, b, sub(a, b));
    printf("%d*%d=%d\n", a, b, multi(a, b));
    printf("%d/%.2f=%.2f\n", a, c, division(a, c));
    getchar();
    
}

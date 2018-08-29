#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
    int a = INT_MAX;
    float b = FLT_MAX;
    double c = DBL_MAX;
    printf("%lu, %lu, %lu\n", sizeof(a),
    sizeof(b), sizeof(c));
    printf("%d", a);
    printf("\n");
    printf("%.2f", b);
    printf("\n");
    printf("%f", c);
    return 0; 
}

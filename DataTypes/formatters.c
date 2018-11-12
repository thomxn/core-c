#include <stdio.h>
main()
{
    int i_pi = 22 / 7;
    float f_pi = 22 / 7; // no need to specify decimal points
    double d_pi = 22 / 7;


    printf("%d\n", 22 / 7);
    printf("%3d\n", 22 / 7);
    printf("%1.14f\n", 22 / 7);
    printf("%1.14f\n", 22.0 / 7);

    printf("int to float %1.14f\n", i_pi);
    printf("float %1.14f\n", i_pi);

    printf("%1.14f\n", f_pi);
    printf("double to float %1.14f\n", d_pi);

    printf("%e\n", d_pi);
}

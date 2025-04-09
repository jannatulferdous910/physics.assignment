
#include<stdio.h>
#include<math.h>
int main()
{
    double lambda1 = 530;
    double lambda2 = 700;
    int m1 =3, m2 = 2;
    double theta1 = 65.0;
    double theta1_rad = theta1*(3.1416/180.0);
    double d = (m1*lambda1)/(sin(theta1_rad));
    double theta2_rad = asin((m2*lambda2)/d);
    double theta2 = theta2_rad*(180.0/3.1416);
    printf("the second-order bright spot foor red light occurs at angle : %.2f degrees\n",theta2);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct MassAndDistance{
    double m1;
    double m2;
    double r;
};


double ComputeGravitational(struct MassAndDistance* pData);

int main(void)
{
   struct MassAndDistance earthSun;
   struct MassAndDistance jupitorSun;
   double forceBetweenEarthAndSun;
   double forceBetweenJupitorAndSun;


   earthSun.m1 = 1.9891e30;
   earthSun.m2 = 5.9722e24;
   earthSun.r =  149597871000;

   forceBetweenEarthAndSun = ComputeGravitational(&earthSun);
   printf("Gravitational force between the sun and earth = %lf Newton\n", forceBetweenEarthAndSun);

   
   jupitorSun.m1 = 1.9891e30;
   jupitorSun.m2 = 1.89813e27;
   jupitorSun.r = 760070000000;

   forceBetweenJupitorAndSun = ComputeGravitational(&jupitorSun);
   printf("Gravitational force between the sun and jupitor = %lf Newton\n", forceBetweenJupitorAndSun);


   return (0);
}

double ComputeGravitational(struct MassAndDistance* pData)
{
    double G = 6.67 * 10e-11;
    double F;

    if(pData->m1 <= 0.0 || pData->m2 <= 0.0||pData->r <=0.0)
    {
        return (NAN);
    }

    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r);
    return (F);


}
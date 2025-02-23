//header file inclusion
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Defination of structure MassAndDistance
//capturing mass and distance data of objects

struct MassAndDistance
{
    double m1;
    double m2;
    double r;
};

//Function Declaration
double ComputeGravitational(struct MassAndDistance* pData);

int main(void)
{
    //variables
    struct MassAndDistance earthSun_pbs;
    struct MassAndDistance jupitorSun_pbs;
    double forceBetweenEarthAndSun_pbs;
    double forceBetweenJupitorAndSun_pbs;

    //code
    earthSun_pbs.m1 = 1.9891e30;
    earthSun_pbs.m2 = 5.9722e24;
    earthSun_pbs.r = 149597871000;

    forceBetweenEarthAndSun_pbs = ComputeGravitational(&earthSun_pbs);
    printf("Gravitational force between the sun and the earth = %lf Newton\n",
    forceBetweenEarthAndSun_pbs);

    jupitorSun_pbs.m1 = 1.9891e30;
    jupitorSun_pbs.m2 = 1.89813e27;
    jupitorSun_pbs.r = 760070000000;

    forceBetweenJupitorAndSun_pbs = ComputeGravitational(&jupitorSun_pbs);
    printf("Gravitational force between the sun and the jupitor = %lf Newton\n",forceBetweenJupitorAndSun_pbs);

    return(0);
}

double ComputeGravitational(struct MassAndDistance* pData) 
{
    // variable definitions 
    double G = 6.67 * 10e-11;   // Universal constant of gravitation 
    double F; // For storing the amount of force in Newton 

    if(pData->m1 <= 0.0 || pData->m2 <= 0.0 || pData->r <= 0.0)
        return (NAN); 

    F = (G * pData->m1 * pData->m2) / (pData->r * pData->r);  
    return (F); 
}

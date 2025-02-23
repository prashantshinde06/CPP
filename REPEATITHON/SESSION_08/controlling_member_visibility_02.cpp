#include <iostream>

// company product
struct MassAndDistance_1
{
    double m1_pbs;
    double m2_pbs;
    double r_pbs;
};

// company product
class MassAndDistance_2
{
    double m1_pbs;
    double m2_pbs;
    double r_pbs;
};

int main(void)
{
    using std::cout;
    using std::endl;

    // GRAHAK :CLIENT
    struct MassAndDistance_1 X1;
    MassAndDistance_2 X2;

    // client is accessing the internals member of the product
    // he or she has bought
    X1.m1_pbs = 1.1;
    X1.m2_pbs = 2.2;
    X1.r_pbs = 3.3;

    X2.m1_pbs = 1.1;
    X2.m2_pbs = 2.2;
    X2.r_pbs = 3.3;

    return 0;
}

// this code will not work its just showing why errors are occure and what is the problem with accessing member
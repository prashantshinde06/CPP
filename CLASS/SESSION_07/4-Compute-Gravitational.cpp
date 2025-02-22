#include <iostream>
#include <exception>
#include <cmath>

//class delcaration

class MassAndDistance
{
    private:
        double m1;
        double m2;
        double r;
    
    public:
        MassAndDistance(double _m1, double _m2, double _r)
        {
            if(_m1<=0.0||_m2<=0.0||_r<=0.0)
                throw std::domain_error("Bad values for mass and/or distance");
            this->m1 = _m1;
            this->m2 = _m2;
            this->r = _r;
        }

        double computeGravitational() const
        {
            //variable declaration
            double G = 6.67 * 10e-11;
            double F;

            //code
            F = (G * this->m1 * this->m2) / (this->r * this->r);
            return F;
        }
};

int main(void)
{
    MassAndDistance earthSun(1.9891e30,5.9722e24, 149597871000);
    MassAndDistance jupitorSun(1.9891e30,1.89813e27,760070000000);

    double forceBetweenEarthAndSun;
    double forceBetweenJupitorAndSon;

    forceBetweenEarthAndSun = earthSun.computeGravitational();
    forceBetweenJupitorAndSon = jupitorSun.computeGravitational();

    std::cout << "Force between the sun and the earth is " << forceBetweenEarthAndSun << " Newton" <<std::endl;
    std::cout << "Force between the sun and the jupitor is " << forceBetweenJupitorAndSon << " Newton" <<std::endl;

    return 0;
}
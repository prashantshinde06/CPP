// header file inclusion
#include <iostream>
#include <exception>
#include <cmath>

// class declaration

class MassAndDistance
{
private:
    double m1_pbs;
    double m2_pbs;
    double r_pbs;

public:
    MassAndDistance(double _m1_pbs, double _m2_pbs, double _r_pbs)
    {
        if (_m1_pbs <= 0.0 || _m2_pbs <= 0.0 || _r_pbs <= 0.0)
        {
            throw std::domain_error("Bad values for mass/or distance");
        }
        this->m1_pbs = _m1_pbs;
        this->m2_pbs = _m2_pbs;
        this->r_pbs = _r_pbs;
    }

    double computeGravitational() const
    {
        // variable definations
        double G_PBS = 6.67 * (10e-11);
        double F_PBS;

        // code
        F_PBS = (G_PBS * this->m1_pbs * this->m2_pbs) / (this->r_pbs * this->r_pbs);
        return F_PBS;
    }
};

int main(void)
{
    // variable declarartions
    MassAndDistance earthSun_pbs(1.9891 * (10e30), 5.9722 * (10e24), 149597871000.0);
    MassAndDistance jupitorSun_pbs(1.9891 * (10e30), 1.89813 * (10e27), 760070000000.0);
    double forceBetweenEarthAndSun_pbs;
    double forceBetweenJupitorAndSun_pbs;

    // code
    forceBetweenEarthAndSun_pbs = earthSun_pbs.computeGravitational();
    forceBetweenJupitorAndSun_pbs = jupitorSun_pbs.computeGravitational();

    std::cout << "Force between sun and earth is" << forceBetweenEarthAndSun_pbs << "Newton" << std::endl;
    std::cout << "Force between jupitor and sun is" << forceBetweenJupitorAndSun_pbs << "Newton" << std::endl;

    return 0;
}
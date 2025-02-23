#include <iostream> 
#include <cstdlib> 

using std::cout; 
using std::endl; 

class MassAndDistance
{
    private: 
        double m1_pbs; 
        double m2_pbs; 
        double r_pbs; 

    public: 
        MassAndDistance(double _m1_pbs, double _m2_pbs, double _r_pbs)
        {
            this->m1_pbs = _m1_pbs; 
            this->m2_pbs = _m2_pbs; 
            this->r_pbs = _r_pbs; 
        }

        double computeGravitational()
        {
            double G = (6.67 * 10e-11);
            double F; 

            if(m1_pbs <= 0.0 || m2_pbs <= 0.0 ||  r_pbs <= 0.0)
            {
                cout << "Invalid value of mass and/or distance" << endl;
                cout << "Exiting the application ..." << endl; 
                exit(-1); 
            }

            F = (G*m1_pbs*m2_pbs)/(r_pbs*r_pbs); 

            return (F); 
        }
}; 

int main(void)
{
    MassAndDistance sunEarth_pbs(1.9891e30, 5.9722e24, 149597871000.0); 

    cout << "Gravitational force of attraction between the sun and the earth is = "
            << sunEarth_pbs.computeGravitational() << " Newton" << endl; 

    return 0; 
} 

// C -> C++ MIGRATION -> CODING LEVEL COMPLETE 
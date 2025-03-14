#include <iostream> 

using std::cout; 
using std::endl; 

// Namespace : It is a BLOCK for creating new names
// Inside namespace X we have defined following names 
// num_pbs, test, Date, xyz_t, Y
namespace X{
    // data variable inside namespace 
    int num_pbs;    

    // function inside namespace 
    void test(){
        cout << "HELLO WORLD!" << endl; 
    }

    // class inside namepsace 
    class Date 
    {
        private: 
            int day_pbs, month_pbs, year_pbs; 
        public: 
            Date(){
                day_pbs = 1; 
                month_pbs = 1; 
                year_pbs = 1970; 
            }
    }; 

    // typedef inside namespace 
    typedef int xyz_t; 

    // namespace inside namespace 
    namespace Y{
        int p; 
    }
}

class Test
{
    public: 
        int num_pbs;    // data member 
        static int snum_pbs; // static data member 

        // member function 
        void test_function()
        {
            cout << "Inside test()" << endl; 
        }

        // static member function 
        static void stest_function()
        {
            cout << "Inside static test()" << endl; 
        }

        // typedef 
        typedef int pqr_t; 

        // class 
        class PQR 
        {
            private: 
                int p, q, r; 
        }; 
}; 

// definition of static variable snum_pbs inside class Test 
int Test::snum_pbs = 100; 

void namespace_demo(void); 
void class_demo(void); 

int main(void)
{
    namespace_demo(); 
    class_demo(); 
    return (0); 
}

void namespace_demo(void)
{
    X::num_pbs = 100; // ok 
    X::test();  // ok 
    X::Date myDate_pbs; // ok 
    X::xyz_t num_pbs2;  // ok 
    X::Y::p = 200; // ok 
}

void class_demo(void)
{
    //Test::num_pbs; // NOT ALLOWED 
    //Test::test_function(); // NOT ALLOWED 

    Test::snum_pbs = 500;   // ok 
    Test::stest_function(); // ok 
    Test::pqr_t my_num_pbs = 600; // ok 
    Test::PQR myObject_pbs; // ok 
}

// THEORY 
// X::Y;   // OK 

// 1) X is a namespace 
// Y can be 1) data variable, 2) function name, 
// 3) typedef name, 4) class name, 5) namespace name 
// OR 
// 1) X is a class name 
// Y is a 1) static data name 2) static function name 
// 3) typedef 4) nested class 
// Y is available as per private-public rule 



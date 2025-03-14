#include <iostream>

using std::cout;
using std::endl;

//namespace : it is block for creating new names
namespace X{
    //date variable inside namespace
    int num;

    //function inside namespace
    void test()
    {
        cout<<"Hello world"<<endl;
    }
    //class inside namespace
    class Date
    {
        private:
        int day,month,year;
    };
    //typedef inside namspace
    typedef int xyz_t;

    //namespace inside namespace
    namespace Y
    {
        int p;
    }
}


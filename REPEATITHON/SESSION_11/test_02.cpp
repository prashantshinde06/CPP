#include <iostream>

class Test
{
private:
    int a_pbs;
    char b_pbs;
    float c_pbs;

public:
    int d_pbs;
    int e_pbs;
    int f_pbs;
};

// Qualified class
// Test_object.s_pbs,Test_object.b_pbs, Test_object.c_pbs
// Test_ptr-<a_pbs, Test_ptr->b_pbs,Test_ptr->c_pbs

int main(void)
{
    Test t1_pbs;
    Test t2_pbs;

    // CTE
    t1_pbs.a_pbs = 10;
    t1_pbs.b_pbs = 'a';
    t1_pbs.b_pbs = 3.14f;

    // No Compile time error
    t1_pbs.d_pbs = 100;
    t1_pbs.e_pbs = 200;
    t1_pbs.f_pbs = 300;
}
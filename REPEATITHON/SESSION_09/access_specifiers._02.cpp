#include <iostream>

using std::cout;

class Test
{
    private:
        int a_pbs;

    public:
        char b_pbs;
        float c_pbs;
};

Test g_test_1;
void test_1(void);

int main(void)
{
    test_1();
    return (0);
}

void test_1(void)
{
    Test t1_pbs;
    // g_test_1.a_pbs = 100; //CTE
    g_test_1.b_pbs = 'A';
    g_test_1.c_pbs = 3.14f;

    // t1_pbs.a_pbs = 200; //CTE
    t1_pbs.b_pbs = 'B';
    t1_pbs.c_pbs = 6.28f;
}
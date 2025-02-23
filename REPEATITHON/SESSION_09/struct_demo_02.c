#include <stdio.h>

struct Test
{
    int a_pbs;
    char b_pbs;
    float c_pbs;
};

void test_1();
struct Test g_test_1;

int main(void)
{
    test_1();
    printf("g_test_1.a_pbs=%d, g_test_1.b_pbs=%c, g.test_1.c_pbs=%f\n",
           g_test_1.a_pbs, g_test_1.b_pbs, g_test_1.c_pbs);

    return (0);
}

void test_1(void)
{
    struct Test t1_pbs;
    g_test_1.a_pbs = 100;
    g_test_1.b_pbs = 'A';
    g_test_1.c_pbs = 3.14f;

    t1_pbs.a_pbs = 200;
    t1_pbs.b_pbs = 'B';
    t1_pbs.c_pbs = 6.28;

    printf("t1_pbs.a_pbs=%d,t1_pbs.b_pbs=%c,t1_pbs.c_pbs=%f\n", t1_pbs.a_pbs, t1_pbs.b_pbs, t1_pbs.c_pbs);
}
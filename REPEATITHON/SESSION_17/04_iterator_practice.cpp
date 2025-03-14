#include <iostream> 
#include <string> 

using std::cout; 
using std::endl; 
using std::string; 

void string_iterator_demo(void); 

int main(void)
{
    string_iterator_demo(); 
    return 0;
}

void string_iterator_demo(void)
{
    string s("ABCDE"); 

    // 1: using iterator and while loop 
    cout << "Repeat 1:" << endl;
    string::iterator my_iter_pbs = s.begin(); 
    while(my_iter_pbs != s.end())
    {
        cout << "Current Char:" << *my_iter_pbs << endl; 
        ++my_iter_pbs; // pre-increment 
    }

    // 2: using iterator and while loop 
    cout << "Repeat 2:" << endl; 
    string::iterator iter_1 = s.begin(); 
    while(iter_1 != s.end())
    {
        cout << "Current Char:" << *iter_1 << endl; 
        iter_1++; // post increment 
    }

    // 3: using iterator and while loop 
    cout << "Repeat 3:" << endl; 
    string::iterator iter_of_s = s.begin(); 
    while(iter_of_s != s.end())
    {
        cout << "*iter_of_s:" << *iter_of_s << endl; 
        iter_of_s = iter_of_s + 1; // addition by 1 
    }

    // 1 for loop 
    cout << "Repeat 1 using for loop:" << endl; 
    for(string::iterator iter_2 = s.begin(); iter_2 != s.end(); ++iter_2)
    {
        cout << "*iter_2 = " << *iter_2 << endl; 
    }
    // iter_2 is NOT AVAIALBLE HERE

    // 2 for loop 
    cout << "Repeat 2 using for loop:" << endl; 
    for(string::iterator iterOfString = s.begin(); iterOfString != s.end(); iterOfString++)
    {
        cout << "*iterOfString=" << *iterOfString << endl; 
    }

    // 3 for loop 
    cout << "Repeat 3 using for loop:" << endl; 
    string strNameOfAcademy("CoreCode Programming Academy"); 
    for(
        string::iterator iterStr = strNameOfAcademy.begin(); 
        iterStr != strNameOfAcademy.end(); 
        ++iterStr
    )
        cout << "*iterStr = " << *iterStr << endl; 
}


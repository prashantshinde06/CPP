#include <iostream> 
#include <string> 

using std::cout; 
using std::endl; 
using std::string;

void string_demo(void); 
void vector_demo(void); 

int main(void)
{
    string_demo(); 
    vector_demo(); 
    return (0); 
}

void string_demo(void)
{
    string s1_pbs; 
    string s2_pbs("Hello"); 
    string s3_pbs(s2_pbs); 

    cout << "-STRING DEMO ENTER-" << endl; 
    cout << "s1_pbs:" << s1_pbs << endl;    // empty 
    cout << "s2_pbs:" << s2_pbs << endl;    // hello 
    cout << "s3_pbs:" << s3_pbs << endl;    // hello 
    cout << "addr(s2_pbs):" << &s2_pbs << endl; 
    cout << "addr(s3_pbs):" << &s3_pbs << endl; 
    cout << "contents of s2_pbs and s3_pbs are same but addresses are not" << endl 
        << "this proves that s3_pbs is a clone of s2_pbs" << endl; 

    cout << "Show a string char by char:" << endl; 
    cout << "METHOD 1: Using index" << endl; 

    for(string::size_type i = 0; i != s2_pbs.size(); ++i)
        cout << "s2_pbs[" << i << "]:" << s2_pbs[i] << endl; 
    cout << "---METHOD 1 END---" << endl; 

    cout << "----STRING DEMO LEAVE----" << endl; 
}


// string : DYNAMICALLY RESIZABLE CHARACTER ARRAY 
// TIME: src->exe (static)
// exe start -> exe end (dynamic/run)


void vector_demo(void)
{

}

// LIBRARY IMPLEMENTATION 
/* 
Inside Header file STRING 

string 

namespace std
{
    class string
    {
        public: 
            typedef unsigned long long int size_type; 
    }; 
}

-------------------------------------------
CLIENT 

#include <string> 

using std::string; 

int main(void)
{

    for(string::size_type i; )
}

// without 
// using std::string 

int main(void)
{
    for(std::string::size_type i)
}

*/

// #include <stdio.h> 

// int main(void)
// {

//     return (0); 
// }
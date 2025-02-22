#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void string_demo(void);
// void vector_demo(void);

int main(void)
{
    string_demo();
    // vector_demo();
    return 0;
}

void string_demo(void)
{
    string s1;
    string s2("Hello");
    string s3(s2);

    cout << "s1" << s1 << endl;
    cout << "s2" << s2 << endl;
    cout << "s3" << s3 << endl;

    cout << "addr(s2)" << &s2 << endl;
    cout << "addr(s3)" << &s3 << endl;
    cout << "the content of s2 and s3 are same but addreses are not" << endl
         << "this proves that s3 is a clone of s2" << endl;

    cout << "show string char by char:" << endl;
    cout << "Method 1 using index" << endl;

    for (string::size_type i = 0; i != s2.size(); ++i)
    {
        cout << "s2[" << i << "]" << s2[i] << endl;
    }
    cout << "method 1 end" << endl;

    cout << "string demo leave" << endl;
}

/*REAL LIFE ENTITY -> PROGRAM REPRESENTATION SELECT -> STRUCT OR CLASS (CREATING AN INFORMATION STRUCTURE)

BUILT IN DATA TYPE OR CUSTOM INFORMATION STRUCTURE (USING STRUCT OR CLASS) -> MULTIPLE INSTANCES -> MEMORY ARRANGE -> STORAGE STRATEGY SELECT & IMPLEMENT -> DATA STRUCTURE*/


// Common Container Types in CPP:

// C++98:
// String
// Vector
// List
// Deque
// Map
// Multimap
// Set
// Multiset
// Stack (Adaptor)
// Queue (Adaptor)

// C++11:
// Array
// Forward List

// Is this correct sir?
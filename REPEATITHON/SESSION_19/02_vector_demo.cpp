#include <iostream>
#include <string>
#include <vector>

using std::cout;   // object of class ostream | ostream and cout are in std namespace
using std::endl;   // endl defined in std namespace
using std::string; // string is a class defined in std namepace (header -> string)
using std::vector; // vector is a 'class template' defined in std namespace (header-> vector)

class Date
{
private:
    int day, month, year;

public:
    Date(int init_day, int init_month, int init_year)
    {
        day = init_day;
        month = init_month;
        year = init_year;
    }

    void show()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

void vector_demo(void);

int main(void)
{
    vector_demo();
    return 0;
}

void vector_demo(void)
{
    // vector of ints
    vector<int> ivec1;
    vector<int> ivec2{10, 20, 30, 40, 50};
    vector<int> ivec3(ivec2);
    vector<int> ivec4(5);
    vector<int> ivec5(5, 100);

    // traverse through all vectors
    // ivec2 : method : index
    cout << "ivec2 iteration: method : index" << endl;
    for (vector<int>::size_type i = 0; i != ivec2.size(); ++i)
        cout << "ivec2[" << i << "]:" << ivec2[i] << endl;

    cout << "ivec2 iteration: method : iterator:" << endl;
    for (vector<int>::iterator iter = ivec2.begin(); iter != ivec2.end(); ++iter)
        cout << "*iter=" << *iter << endl;

    cout << "ivec1 iteration: method : index" << endl;
    for (vector<int>::size_type i = 0; i != ivec1.size(); ++i)
        cout << "ivec1[" << i << "]:" << ivec1[i] << endl;

    cout << "ivec1 iteration: method : iterator:" << endl;
    for (vector<int>::iterator iter = ivec1.begin(); iter != ivec1.end(); ++iter)
        cout << "*iter=" << *iter << endl;

    cout << "ivec3 iteration: method : index" << endl;
    for (vector<int>::size_type i = 0; i != ivec3.size(); ++i)
        cout << "ivec3[" << i << "]:" << ivec3[i] << endl;

    cout << "ivec3 iteration: method : iterator:" << endl;
    for (vector<int>::iterator iter = ivec3.begin(); iter != ivec3.end(); ++iter)
        cout << "*iter=" << *iter << endl;

    cout << "ivec4 iteration: method : index" << endl;
    for (vector<int>::size_type i = 0; i != ivec4.size(); ++i)
        cout << "ivec4[" << i << "]:" << ivec4[i] << endl;

    cout << "ivec4 iteration: method : iterator:" << endl;
    for (vector<int>::iterator iter = ivec4.begin(); iter != ivec4.end(); ++iter)
        cout << "*iter=" << *iter << endl;

    cout << "ivec5 iteration: method : index" << endl;
    for (vector<int>::size_type i = 0; i != ivec5.size(); ++i)
        cout << "ivec5[" << i << "]:" << ivec5[i] << endl;

    cout << "ivec5 iteration: method : iterator:" << endl;
    for (vector<int>::iterator iter = ivec5.begin(); iter != ivec5.end(); ++iter)
        cout << "*iter=" << *iter << endl;

    // TODO: Do the same for ivec1, ivec3, ivec4, and ivec5

    // vector of floats
    vector<float> f_vec1; // empty
    vector<float> f_vec2{1.1f, 2.2f, 3.3f, 4.4f};
    vector<float> f_vec3(f_vec2);  // clone of f_vec2
    vector<float> f_vec4(8);       // vector of floats with pre-allocation for 8 floats
                                   // those 8 floats should ideally be 0.0f but
                                   // cannot be guarenteed on all implementations
    vector<float> f_vec5(8, 5.5f); // vector of floats with pre-allocation for 8 floats
                                   // each of them initialized to 5.5f (guaranteed)

    cout << "f_vec2 iteration : method : index" << endl;
    for (vector<float>::size_type i = 0; i != f_vec2.size(); ++i)
        cout << "f_vec2[" << i << "]:" << f_vec2[i] << endl;

    cout << "f_vec2 iteration: method: iterator" << endl;
    for (vector<float>::iterator iter = f_vec2.begin(); iter != f_vec2.end(); ++iter)
        cout << "*iter = " << *iter << endl;

    cout << "f_vec1 iteration : method : index" << endl;
    for (vector<float>::size_type i = 0; i != f_vec1.size(); ++i)
        cout << "f_vec1[" << i << "]:" << f_vec1[i] << endl;

    cout << "f_vec1 iteration: method: iterator" << endl;
    for (vector<float>::iterator iter = f_vec1.begin(); iter != f_vec1.end(); ++iter)
        cout << "*iter = " << *iter << endl;

    cout << "f_vec3 iteration : method : index" << endl;
    for (vector<float>::size_type i = 0; i != f_vec3.size(); ++i)
        cout << "f_vec3[" << i << "]:" << f_vec3[i] << endl;

    cout << "f_vec3 iteration: method: iterator" << endl;
    for (vector<float>::iterator iter = f_vec3.begin(); iter != f_vec3.end(); ++iter)
        cout << "*iter = " << *iter << endl;

    cout << "f_vec4 iteration : method : index" << endl;
    for (vector<float>::size_type i = 0; i != f_vec4.size(); ++i)
        cout << "f_vec4[" << i << "]:" << f_vec4[i] << endl;

    cout << "f_vec4 iteration: method: iterator" << endl;
    for (vector<float>::iterator iter = f_vec4.begin(); iter != f_vec4.end(); ++iter)
        cout << "*iter = " << *iter << endl;

    cout << "f_vec5 iteration : method : index" << endl;
    for (vector<float>::size_type i = 0; i != f_vec5.size(); ++i)
        cout << "f_vec5[" << i << "]:" << f_vec5[i] << endl;

    cout << "f_vec5 iteration: method: iterator" << endl;
    for (vector<float>::iterator iter = f_vec5.begin(); iter != f_vec5.end(); ++iter)
        cout << "*iter = " << *iter << endl;

    // TODO: Do the same for f_vec1, f_vec3, f_vec4, and f_vec5

    // vector of strings
    vector<string> str_vec1; // empty
    vector<string> str_vec2{
        string("Hello"),
        string("World"),
        string("Iterator"),
        string("Amazing!")};

    vector<string> str_vec3(str_vec2);
    vector<string> str_vec4(5);
    vector<string> str_vec5(5, string("ONE"));

    // str_vec2 iteration
    cout << "str_vec2: iteration: method: index" << endl;
    for (vector<string>::size_type i = 0; i != str_vec2.size(); ++i)
        cout << "str_vec2[" << i << "]:" << str_vec2[i] << endl;

    cout << "str_vec2: iteration: method: iterator" << endl;
    for (vector<string>::iterator iter = str_vec2.begin(); iter != str_vec2.end(); ++iter)
        cout << "*iter =" << *iter << endl;

    cout << "str_vec1: iteration: method: index" << endl;
    for (vector<string>::size_type i = 0; i != str_vec1.size(); ++i)
        cout << "str_vec1[" << i << "]:" << str_vec1[i] << endl;

    cout << "str_vec1: iteration: method: iterator" << endl;
    for (vector<string>::iterator iter = str_vec1.begin(); iter != str_vec1.end(); ++iter)
        cout << "*iter =" << *iter << endl;

    cout << "str_vec3: iteration: method: index" << endl;
    for (vector<string>::size_type i = 0; i != str_vec3.size(); ++i)
        cout << "str_vec3[" << i << "]:" << str_vec3[i] << endl;

    cout << "str_vec3: iteration: method: iterator" << endl;
    for (vector<string>::iterator iter = str_vec3.begin(); iter != str_vec3.end(); ++iter)
        cout << "*iter =" << *iter << endl;

    cout << "str_vec4: iteration: method: index" << endl;
    for (vector<string>::size_type i = 0; i != str_vec4.size(); ++i)
        cout << "str_vec4[" << i << "]:" << str_vec4[i] << endl;

    cout << "str_vec4: iteration: method: iterator" << endl;
    for (vector<string>::iterator iter = str_vec4.begin(); iter != str_vec4.end(); ++iter)
        cout << "*iter =" << *iter << endl;

    cout << "str_vec5: iteration: method: index" << endl;
    for (vector<string>::size_type i = 0; i != str_vec5.size(); ++i)
        cout << "str_vec5[" << i << "]:" << str_vec5[i] << endl;

    cout << "str_vec5: iteration: method: iterator" << endl;
    for (vector<string>::iterator iter = str_vec5.begin(); iter != str_vec5.end(); ++iter)
        cout << "*iter =" << *iter << endl;

    // TODO: str_vec1, str_vec3, str_vec4, str_vec5 : iterator using both methods

    vector<Date> date_vec1;
    vector<Date> date_vec2{
        Date(8, 3, 2025),
        Date(9, 3, 2025),
        Date(15, 3, 2025),
        Date(16, 3, 2025)};

    vector<Date> date_vec3{
        Date(8, 3, 2025),
        Date(9, 3, 2025),
        Date(15, 3, 2025),
        Date(16, 3, 2025)};

    vector<Date> date_vec4{
        Date(8, 3, 2025),
        Date(9, 3, 2025),
        Date(15, 3, 2025),
        Date(16, 3, 2025)};

    vector<Date> date_vec5{
        Date(8, 3, 2025),
        Date(9, 3, 2025),
        Date(15, 3, 2025),
        Date(16, 3, 2025)};

    // TODO: Define date_vec3, date_vec4 and date_vec5 using patters illustrated above

    // iterating over date vector
    cout << "date_vec2: iteration: method: indexing" << endl;
    for (vector<Date>::size_type i = 0; i != date_vec2.size(); ++i)
        date_vec2[i].show();

    cout << "date_vec2: iteration: method: iterator" << endl;
    for (vector<Date>::iterator iter = date_vec2.begin(); iter != date_vec2.end(); ++iter)
        (*iter).show();

    cout << "date_vec1: iteration: method: indexing" << endl;
    for (vector<Date>::size_type i = 0; i != date_vec1.size(); ++i)
        date_vec1[i].show();

    cout << "date_vec1: iteration: method: iterator" << endl;
    for (vector<Date>::iterator iter = date_vec1.begin(); iter != date_vec1.end(); ++iter)
        (*iter).show();

    cout << "date_vec3: iteration: method: indexing" << endl;
    for (vector<Date>::size_type i = 0; i != date_vec3.size(); ++i)
        date_vec3[i].show();

    cout << "date_vec3: iteration: method: iterator" << endl;
    for (vector<Date>::iterator iter = date_vec3.begin(); iter != date_vec3.end(); ++iter)
        (*iter).show();

    cout << "date_vec4: iteration: method: indexing" << endl;
    for (vector<Date>::size_type i = 0; i != date_vec4.size(); ++i)
        date_vec4[i].show();

    cout << "date_vec4: iteration: method: iterator" << endl;
    for (vector<Date>::iterator iter = date_vec4.begin(); iter != date_vec4.end(); ++iter)
        (*iter).show();

    cout << "date_vec5: iteration: method: indexing" << endl;
    for (vector<Date>::size_type i = 0; i != date_vec5.size(); ++i)
        date_vec5[i].show();

    cout << "date_vec5: iteration: method: iterator" << endl;
    for (vector<Date>::iterator iter = date_vec5.begin(); iter != date_vec4.end(); ++iter)
        (*iter).show();

    // TODO: Do the same for date_vec1, date_vec3, date_vec4, date_vec5
}

// struct myDate{8, 3, 2025};
// struct Date* pDate = &myDate;
//  (*pDate).day    == pDate->day
//  (*pDate).month  == pDate->month
//  (*pDate).year   == pDate->year
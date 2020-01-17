#include <iostream>
#include "lib.h"
#include <fstream>
using namespace std;

int main()
{
    ifstream f("C:/myfiles/MyClionProjects/palindrom/pol");
    string str;
    getline (f,str);

    if(check_polindrom(str))
    {
        cout << "Ето полиндром";
    }
    else
    {
        cout << "Ето не полиндром";
    }
    return 0;
}

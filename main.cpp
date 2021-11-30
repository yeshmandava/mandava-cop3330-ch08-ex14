/**
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yeshwanth Mandava
 */

#include "std_lib_facilities.h"

using namespace std;
double Multiply2(const double num);

int main()
try {
    Multiply2(7.6);
}
catch(exception& e) {
    cout << "Exception: " << e.what() << '\n';
    return 1;
}
catch(...) {
    cout << "Unknown exception\n";
    return 2;
}

double Multiply2(const double num)
{
    cout << num * 2 << '\n';
    return num;
}

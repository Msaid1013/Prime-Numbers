#include <iostream>
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace std;
using namespace boost::multiprecision;

cpp_int factorial(cpp_int n) {
    if (n < 0) {return 0;}
    
    cpp_int result = 1;
    for (cpp_int i = 2; i <= n; i++) {result *= i;}
    
    return result;
}

int main() {
    
    cpp_int number; cin >> number;
    
    cpp_int x = factorial(number-1);
    
    if ((x % number) == (number-1)) {cout << number << " is prime.";}
    else {cout << number << " isn't prime.";}
    
    //cout << x;

    return 0;
}

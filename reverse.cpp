#include <iostream>
#include <algorithm>
#include "reverse.h"

using namespace std;

// Function to reverse a string
const string reverse(string str) {

    for(int i=0, j=str.length()-1 ; i < j ; ++i, --j) {
        swap(str[i], str[j]);
    }
    return str;
}

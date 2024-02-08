//*******************************************************
//					ECC CIS 223-400 final				*
// Author: Jose Lara									*
// class: CIS 223-400									*
// Purpose: create a bool function that returns true if * 
// the string is a palindrome, return false if it is not*
//*******************************************************

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str, int left, int right) {
   
    if (left >= right) {
        return true;    // Base case: if the left and right indices meet or cross, the string is a palindrome
    }

    
    if (str[left] == str[right]) {
        return isPalindrome(str, left + 1, right - 1); // Recursive case: if the left and right characters match, move the left index to the right and the right index to the left
    }

    // If the left and right characters don't match, the string is not a palindrome
    return false;
}

int main() {
    string str;
    cout << "Enter a string: "; // ask the user to input a string
    getline(cin, str);

    int left = 0;
    int right = str.length() - 1;

    // Call the isPalindrome function and output the result
    if (isPalindrome(str, left, right)) {
        cout << "The string is a palindrome." << endl;
    }
    else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}


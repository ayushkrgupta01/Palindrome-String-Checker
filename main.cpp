#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString, reversedString = "";
    bool isPalindrome = true;

    
    cout << "Enter a string: ";
    cin >> inputString;

    int n = inputString.length();

    
    for (int i = n - 1; i >= 0; i--) {
        reversedString += inputString[i];
    }

    
    for (int i = 0; i < n; i++) {
        if (inputString[i] != reversedString[i]) {
            isPalindrome = false;
            break;
        }
    }

    
    cout << "Reversed string: " << reversedString << endl;

    
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

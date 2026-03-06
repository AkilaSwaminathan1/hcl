#include <iostream>
#include <string>
#include <algorithm> 

bool isPalindrome(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}
int main() {
    std::string input_str;
    std::cout << "Enter a string: ";
    std::cin >> input_str;

    if (isPalindrome(input_str)) {
        std::cout << input_str << " is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << input_str << " is not a palindrome." << std::endl;
    }

    return 0;
}

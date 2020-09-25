#include <iostream>

int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE
    int left;
    int right;
    bool is_palindrome = true;
    for (left = 0, right = str.size()-1; left < right; left++, right--) {
    	if (str[left] != str[right]) {
    		is_palindrome = false;
    	}
    }
    std::cout << str << " is";
    if (!is_palindrome) std::cout << " NOT";
    std::cout << " a palindrome" << std::endl;
    return 0;
}

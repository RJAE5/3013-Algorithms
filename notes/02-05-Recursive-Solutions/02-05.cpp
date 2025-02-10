#include <iostream>

using namespace std;

bool isPalindrome(string word)
{
    if(word.length() <= 1)
        return true;
    
    if(word.front() != word.back())
        return false;
    else
        return isPalindrome(word.substr(1, word.length() - 2));
}

int main()
{
    cout << boolalpha << isPalindrome("racecar") << endl;
    cout << boolalpha << isPalindrome("rcar") << endl;
}
#include <iostream>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {

    // STRINGS (Basic to Advance) :-

    // 1. Print each character on new line (loop on a string)

    // string str = "nitin thakur";

    // for(int i = 0; i < str.length(); i++){
    //     cout << str[i] << endl; // print each char on new line
    // }

    // 2. Print reverse of a string (reverse a string)

    // string str = "hello string";
    // int start = 0, end = str.length() - 1;

    // while (start < end) {
    //     swap(str[start ++], str[end --]);
    // }
    // cout << str << endl; // gnirts olleh

    // 3. Find if a string is palindrome or not (valid palindrome) (V.Imp)

    // string str = "nitin";
    // int start = 0, end = str.length() - 1;
    // bool isPalindrome = true;

    // // Time comp is O(n) linear
    // while (start < end) {
    //     if(tolower(str[start] != str[end])){
    //         isPalindrome = false;
    //     }
    //     start ++;
    //     end --;
    // }
    // if(isPalindrome){
    //     cout << "Palindrome"; // for nitin 
    // }else {
    //     cout << "Not a Palindrome"; // for rajesh
    // }

    // 4. Remove all occurrences of a string (remove all occurrences)

    // string str = "daabcbaabcbc";
    // string part = "abc";

    //  while (str.length() > 0 && str.find(part) < str.length()) {
    //     str.erase(str.find(part), part.length());
    // }
    // cout << str << endl; // dab

    return 0;
}
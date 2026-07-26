#include <iostream>
#include <algorithm>
using namespace std;
// To run : g++ code.cpp -o code; .\code.exe

int main() {

    // STRINGS (Basic to Advance) :-

    // 1. Print each character on new line (loop on a string)

    string str = "nitin thakur";

    for(int i = 0; i < str.length(); i++){
        cout << str[i] << endl; // print each char on new line
    }

    // 2. Print reverse of a string (reverse a string)

    string str = "hello string";
    int start = 0, end = str.length() - 1;

    while (start < end) {
        swap(str[start ++], str[end --]);
    }
    cout << str << endl; // gnirts olleh

    // 3. Find if a string is palindrome or not (valid palindrome) (V.Imp)

    string str = "nitin";
    int start = 0, end = str.length() - 1;
    bool isPalindrome = true;

    // Time comp is O(n) linear
    while (start < end) {
        if(tolower(str[start] != str[end])){
            isPalindrome = false;
        }
        start ++;
        end --;
    }
    if(isPalindrome){
        cout << "Palindrome"; // for nitin 
    }else {
        cout << "Not a Palindrome"; // for rajesh
    }

    // 4. Toggle each character (toggling character)

    string str = "AbC123xYz";

    for (int i = 0; i < str.length(); i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    cout << str << endl; // aBc123XyZ

    // 5. frequency of each character (Determine frequency)

    string str = "hello";
    int freq[26] = {0};

    for (int i = 0; i < str.length(); i++) {
        freq[str[i] - 'a']++; // Count frequency
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " -> " << freq[i] << endl; // Print frequency
        }
    }

    // Imp. Reverse words in string (hello world -> world hello)

    string str = " hello world ";
    string ans = "";
    reverse(str.begin(), str.end());

    for(int i = 0; i < str.length(); i++){ // looping on the string
        string word = "";
        while(i < str.length() && str[i] != ' '){
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end()); // for each word

        if (!word.empty()) { // remove extra space
            if (!ans.empty())
                ans += " ";
            ans += word;
        }
    }
    cout << ans << endl; // world hello

    return 0;
}
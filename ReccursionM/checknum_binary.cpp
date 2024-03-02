#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.size() - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

string toBinary(long long int n) {
    if (n == 0) return "0"; // Corrected return value for 0

    string binary = "";
    while (n != 0) {
        binary = (char)(n & 1 ? '1' : '0') + binary;
        n >>= 1; // Right-shift n by 1 bit to process the next bit
    }
    return binary;
}

bool checkPalindrome(long long int N) {
    string binaryRep = toBinary(N);
    // Corrected the if statement syntax and return statements
    if (isPalindrome(binaryRep)) {
        return true; // Use true for boolean values
    } else {
        return false; // Use false for boolean values
    }
}

// Example usage
int main() {
    long long int N;
    cout << "Enter a number: ";
    cin >> N;
    if (checkPalindrome(N)) {
        cout << "The binary representation of " << N << " is a palindrome." << endl;
    } else {
        cout << "The binary representation of " << N << " is not a palindrome." << endl;
    }
    return 0;
}

// 2nd way two pointer bit masking and mathematical way of solving 
#include <cmath>

// // Function to check if the k-th bit of a number x is set
// bool isKthBitSet(long long x, int k) {
//     return (x & (1LL << (k - 1))) != 0;
// }

// // Function to check if the binary representation of N is a palindrome
// bool checkPalindrome(long long N) {
//     // Calculate the number of bits in N
//     int numBits = log2(N) + 1;
    
//     // Using two pointers to check bits from the least significant bit (LSB) and the most significant bit (MSB)
//     for (int l = 1, r = numBits; l < r; l++, r--) {
//         // If the corresponding bits are not equal, it's not a palindrome
//         if (isKthBitSet(N, l) != isKthBitSet(N, r)) {
//             return false;
//         }
//     }
//     // If all corresponding bits are equal, it's a palindrome
//     return true;
// }

// // Example usage
// int main() {
//     long long N;
//     std::cout << "Enter a number: ";
//     std::cin >> N;
    
//     if (checkPalindrome(N)) {
//         std::cout << "The binary representation of " << N << " is a palindrome." << std::endl;
//     } else {
//         std::cout << "The binary representation of " << N << " is not a palindrome." << std::endl;
//     }
//     return 0;
// }


// 3rd way more simplest way 

// #include <bits/stdc++.h>

// bool palindrome(string s, int i, int j){
// 	if(i>j) return true;

// 	if(s[i] != s[j]) return false;
// 	else{
// 		return palindrome(s,i+1,j-1);
// 	}
// }
// bool checkPalindrome(long long N)
// {
// 	// Write your code here.
// 	string s="";
// 	while(N!=0){
// 		s += N%2;
// 		N/=2;
// 	}
// 	bool check = palindrome(s,0,s.length()-1);
// 	return check;
// }
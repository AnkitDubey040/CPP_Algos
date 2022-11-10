#include<bits/stdc++.h>
using namespace std;
// A function to check if a string str is palindrome 
void isPalindrome(string str) 
{ 
	// Start from leftmost and rightmost corners of str 
	int l = 0; 
	int h = str.size() - 1; 

	// Keep comparing characters while they are same 
	while (h > l) 
	{ 
		if (str[l++] != str[h--]) 
		{ 
			cout<<str<<" is not a Palindrome"; 
			return; 
		} 
	} 
	cout<<str<<" is a palindrome";
} 

// Driver program to test above function 
int main() 
{ 
	string str;
   cin>>str;
   isPalindrome(str);
	return 0; 
}
Footer
© 2022 GitHub, 

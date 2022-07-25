#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'shortestPalindrome' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int shortestPalindrome(string s) {

    int n = s.length(); 
    char x = s[0]; 
    int p =0;
      
    // Finding the smallest character 
    // present in the string 
    string nstr = s;
    reverse(s.begin(), s.end());
    if(s==nstr)
    {
    //cout << "It is a palindrome" << endl;
    for(int i = 1; i < n ; i++) 
    { 
        x = min(x, s[i]); 
    } 
   
    }
    //else cout << "It is not a palindrome";
    
    return sizeof(x); 

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = shortestPalindrome(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


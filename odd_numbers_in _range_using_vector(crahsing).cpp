#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'oddNumbers' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER l
 *  2. INTEGER r
 */

vector<int> oddNumbers(int l, int r) {
vector<int> arr;
vector<int>::iterator itr;
int i,j =0;
for( j=l; j<=r; j++ )
//for(*itr= l, i=0; *itr <=r, i<arr.size();)
{
    if(j %2 != 0)
    {
        arr[i++] = j;
        cout<<j;
    }
    

   #if 0
    if(*itr %2 != 0)
    {    
        arr[i++] = *itr;
        itr++;
    }
    #endif
   
}
 return arr;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string l_temp;
    getline(cin, l_temp);

    int l = stoi(ltrim(rtrim(l_temp)));

    string r_temp;
    getline(cin, r_temp);

    int r = stoi(ltrim(rtrim(r_temp)));

    vector<int> result = oddNumbers(l, r);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


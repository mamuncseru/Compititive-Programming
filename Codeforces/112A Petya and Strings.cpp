#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    string s1, s2;
    
    getline(cin, s1);
    getline(cin, s2);
    
    transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
    transform(s2.begin(), s2.end(), s2.begin(), :: toupper);
    
    cout << s1.compare(s2) << endl;
    
    return 0;
}

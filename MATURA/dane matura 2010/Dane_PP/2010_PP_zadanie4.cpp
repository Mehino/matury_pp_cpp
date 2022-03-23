#include <bits/stdc++.h>
using namespace std;
int main ()
    {
        string s;
        int licznik = 0;
        int dmax = 0;
        ifstream f("dane.txt");
        while(f>>s){
            if(s.size() == 2 ) cout << s << "\n";
            if(s.size() == 25) cout << s << "\n";
            if(s.size() > dmax) dmax = s.size();
            if(s[0] == 'A') licznik++;
            licznik++;
            cout << s << "\n";
        }
        cout << licznik << "\n";
    }

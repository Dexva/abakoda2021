#include <bits/stdc++.h>
using namespace std;

string int128ToString(__int128 n) {
    string s;
    if (n==0) {
        return to_string(0);
    }
    else {
        while (n!=0) {
            int d = n%10;
            s = to_string(d) + s;
            n = (n-d)/10;
        }
        return s;
    }
}

int main() {

    long long n;
    cin >> n;

    __int128 a = n;
    __int128 ans = ((a-1)*a)/2;

    cout << int128ToString(ans) << '\n';

}
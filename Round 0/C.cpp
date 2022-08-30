#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, m, dh, dm;
    int DAY = 24*60;
    string s;
    cin >> h >> m >> s;
    cin >> dh >> dm;

    if (s=="PM") h += 12;
    // cout << 3%4 << '\n';

    int cody = abs((h*60 + m - 8*60)%DAY); //in coordinated time minutes
    int fwiend = abs((cody + dh*60 + dm - 8*60)%DAY);

    if ((fwiend/60)<12) cout << fwiend/60 << " " << fwiend%60 << " AM\n";
    else if ((fwiend/60)==12) cout << fwiend/60 << " " << fwiend%60 << " PM\n";
    else cout << (fwiend/60)%12 << " " << fwiend%60 <<  "PM\n";
    // int coordinated = cody + 

}
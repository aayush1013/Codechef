#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int salary;
    cin>>salary;
    long double HRA=0,DA=0;
    long double gross=0;
    if (salary < 1500)
    {
        HRA = ((salary*0.1));
        DA  = ((salary*0.9));
    }
    else
    {
        HRA=500;
        DA = (salary*0.98);
    }
     gross = salary+HRA+DA ;
        cout << fixed << setprecision(6) << gross << endl;
}
return 0;
}

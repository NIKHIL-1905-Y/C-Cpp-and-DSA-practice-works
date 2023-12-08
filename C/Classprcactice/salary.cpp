#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    int basic;
    char grade;
    cin>>basic;
    cin>>grade;
    float pf = 0.11*basic;
    float hra = 0.2*basic;
    float da = 0.5*basic;
    int allow,totalSalary;
    


    if(grade=='A')
    {
        allow =1700;
         totalSalary = basic + hra + da + allow - pf;
    }
    else if (grade=='B')
    {
        allow = 1500;
        totalSalary = basic + hra + da + allow - pf;
        
    }
    else
    {
         allow = 1300;
        totalSalary = basic + hra + da + allow - pf;

    }
    cout<<totalSalary;

   
}
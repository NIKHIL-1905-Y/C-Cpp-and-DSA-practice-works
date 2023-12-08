#include <iostream>
using namespace std;


string is_palindrome(int n)
{
		   int ans=0;
		    int num = n;
		    while(num!=0)
		    {
		        int dig = num%10;
		         ans = ans*10 + dig;
		        num =num/10;
		        
		    }
            cout<<ans;
		    if(ans==n)
		    {
		        return "Yes";
		        
		    }
		    else
		    {
		        return "No";
		    }
		}

        int main()
        {
            string s= is_palindrome(555);
            cout<<s;
        }


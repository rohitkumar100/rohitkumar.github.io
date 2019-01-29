#include <bits/stdc++.h>
#include<string>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the alternate function below.


int main()
{
   int i;
    cin>>i;
    string s;
    cin>>s;

    if(i>1 && i<=1000)
    for(int a=0;a<s.length();a++)
    {
     for(int b=a+1;b<s.length();b++)
     {    
         if(s[a]==s[b])
         {
            char d=s[a];
            
             for(int c=0;c<s.length()-1;c++)
             {
                 if(s[c]==d)
                 {     
                      s.erase(c,1);
                       cout<<s<<"\n";
                 }
                    
             }
                
             }
        break;
         
         }
     }
    cout<<s;
    }
    


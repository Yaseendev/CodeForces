#include <iostream>
#include  <cstring>
#include <string>
#include <sstream>


using namespace std;

int main()
{
std::string out_string;
std::stringstream ss;

int n;
string word;
cin>> n;
string s[n];
for(int i=0;i<n;i++)
{
cin>>word;
if(word.size() > 10)
{
    int q=word.length()-2;
    ss<<q<<flush;
    out_string = ss.str();
s[i]=word.at(0)+ out_string +word.at(word.length()-1);
ss.str("");
}
else
    s[i]=word;
}
for(int i=0;i<n;i++)
    cout<<s[i]<<endl;
return 0;
}

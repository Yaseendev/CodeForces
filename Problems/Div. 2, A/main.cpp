#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    string nStr="";
    cin>>word;
    for(int i=0;i<word.size();i++)
    {
        char ch =word[i];
        if(ch=='A'||ch=='U'||ch=='E'||ch=='O'||ch=='I'||ch=='Y'||ch=='a'||ch=='u'||ch=='e'||ch=='o'||ch=='i'||ch=='y')
        {
           word.erase(i,1);
           cout<<word<<endl;
        }
        }
         for(int i=0;i<word.size();i++){
               nStr+=".";
               word[i]= tolower(word[i]);
               nStr+=word[i];
               }

    cout << nStr << endl;
    return 0;
}

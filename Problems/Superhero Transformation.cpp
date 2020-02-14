    #include <iostream>
    #include <string>
    using namespace std;

    int main()
    {
    string a,b;
    cin >> a;
    cin >> b;
    if(a.size() != b.size())
      cout<<"No"<<endl;
    else
    { int aCount=0;
     for(int i=0;i<a.size();i++)
     {
        char ch =a[i];
        if(ch=='A'||ch=='U'||ch=='E'||ch=='O'||ch=='I'||ch=='Y'||ch=='a'||ch=='u'||ch=='e'||ch=='o'||ch=='i'||ch=='y')
            aCount++;
     }
        int bCount=0;
     for(int i=0;i<b.size();i++)
     {
        char ch =b[i];
        if(ch=='A'||ch=='U'||ch=='E'||ch=='O'||ch=='I'||ch=='Y'||ch=='a'||ch=='u'||ch=='e'||ch=='o'||ch=='i'||ch=='y')
            bCount++;
     }
    if(aCount == bCount)
      cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    }
         return 0;
    }

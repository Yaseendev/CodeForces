    #include <iostream>
    #include <string>
    using namespace std;

    static string words[10000001];
    bool same(string w)
    {
        for(int i=0;i<w.size()-1 ;i++)
            if(w[i] != w[i +1 ])
             return false;
        return true;
    }
    bool palindrome(string w)
    {
        if (w == string(w.rbegin(), w.rend()))
          return true;
        return false;
    }
    int main()
    {
     int n;
    string a ;
    cin >> n;
     for(int i=0;i<n;i++)
    {
        cin >> a;
    if(same(a))
      words[i] = "-1";
    else if(palindrome(a))
    {
    char temp = a[(a.size() -1) /2];
    a[(a.size() -1) /2] = a[((a.size() -1) /2) + 1];
    a[((a.size() -1) /2) + 1] = temp;
      words[i] = a ;
    }
    else words[i] = a;
    }
      for(int i=0;i<n;i++)
    {
        cout<<words[i]<<endl;
    }
        return 0;
    }

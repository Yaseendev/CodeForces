    #include <iostream>

    using namespace std;

    int main()
    {
     int n;
    string statment ;
    int res=0;
    cin >> n;
     for(int i=0;i<n;i++)
    {
        cin >> statment ;
        if(statment == "X++" || statment == "++X")
          res++;
        else if (statment == "X--" || statment == "--X")
          res--;
    }
    cout<<res<<endl;
        return 0;
    }

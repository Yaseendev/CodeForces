    #include <iostream>

    using namespace std;

    int main()
    {
        int n,num,res;
        cin>> num;
        cin >> n;
        res = num;
    for(int i=0;i<n;i++)
    {
        if(res % 10 == 0)
          res /= 10 ;
        else
          res--;
    }

      cout<<res<<endl;
        return 0;
    }

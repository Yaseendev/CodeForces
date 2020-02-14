    #include <iostream>

    using namespace std;

    static int nums[10000001];
    static int mins[10000001];
    int main()
    {
        int n;
        int min1,min2;
        cin>> n;
    for(int i=0;i<n;i++)
    {
           cin>>nums[i];
          min1=nums[i]-1;
          min2=1000000-nums[i];
          if(min1 < min2)
           mins[i]=min1;
           else
             mins[i]=min2;
    }
      int max =mins[0];
      for(int i=1;i<n;i++)
      {
          if(max < mins[i])
              max =mins[i];
      }
      cout<<max<<endl;
        return 0;
    }

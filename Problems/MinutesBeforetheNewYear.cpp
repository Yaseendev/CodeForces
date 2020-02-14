    #include <iostream>

    using namespace std;

    static int nums[10000001];
    static int mins[10000001];
    int main()
    {
        int n;
        cin>> n;
    for(int i=0;i<n;i++)
    {
           cin>>nums[i];
           cin>>nums[i+1];
           if(nums[i] == 23)
            mins[i]= 60 - nums[i+1];
            else if(nums[i] < 23)
              mins[i] =1440 - (nums[i]*60) - nums[i+1];
    }

        return 0;
    }

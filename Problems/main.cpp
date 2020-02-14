    #include <iostream>

    using namespace std;

    static int nums[10000001];
    int main()
    {
        int n;
        cin>> n;
        int sum=0;
    for(int i=0;i<n;i++)
    {
           cin>>nums[i];
           if(nums[i] < 0)
            nums[i]=nums[i]*(-1);
           sum +=nums[i];
        }

        cout <<sum<< endl;
        return 0;
    }

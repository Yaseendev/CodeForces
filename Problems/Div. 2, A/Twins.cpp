    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    static int nums[10000001];
   
    int main()
    {
    int n;
    int sum=0;
    int sum2=0;
    int c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
        sum +=nums[i];
    }
    sum /=2;
    sort(nums, nums+n);
    for(int i=n-1;i>=0;i--)
    {
		 sum2+=nums[i];
		 c++;
		if(sum2>sum)
		 	break;
	 }
	 cout<<c<<endl;
        return 0;
    }

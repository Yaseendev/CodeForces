    #include <iostream>
    #include <string>
    #include<bits/stdc++.h>
    using namespace std;
    
    const int MAX_CHAR = 26;
    static string words[10000001];
    
    string sortString(string str) 
{ 
    // Hash array to keep count of characters. 
    // Initially count of all charters is  
    // initialized to zero. 
    int charCount[MAX_CHAR] = {0}; 
    string s ="";
      
    // Traverse string and increment  
    // count of characters 
    for (int i=0; i<str.length(); i++) 
  
        // '0'-'0' will be 0, '1'-'0' will be 1, 
        // so for location of character in count  
        // array we wil do str[i]-'0'. 
        charCount[str[i]-'0']++;     
      
    // Traverse the hash array and print  
    // characters 
    for (int i=0;i<MAX_CHAR;i++) 
        for (int j=0;j<charCount[i];j++) 
            s+= (char)('0'+i);
    return s;
} 
   
    int main()
    {
    string a,temp,temp2;
    string sorted="";
    cin >> a;
    for(int i=0;i<a.size();i++)
    {
        char ch =a[i];
        if(ch=='+')
           a.erase(i,1);
        }
        temp = sortString(a);
       for(int i=0;i<a.size();i++){
           words[i]=temp[i];
           if(i==a.size()-1)
              sorted.append(words[i]);
           else{
           temp2 = words[i].append("+");
        sorted.append(temp2);
               
           }
        }
        cout<<sorted<<endl;
        return 0;
    }

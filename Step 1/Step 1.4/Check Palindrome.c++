// Link of the question
// https://practice.geeksforgeeks.org/problems/palindrome0746/1
#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    int x=n;
		    int ans=0;
		    while(n>0){
		        int temp=n%10;
		        ans=ans*10+temp;
		        n=n/10;
		    }
		    if(x==ans){
		        return "Yes";
		        
		    }
		    else{
		        return "No";
		    }
		    
		}
};
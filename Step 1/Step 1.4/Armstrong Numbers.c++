// Link of the question
// https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int ans=0;
        int x=n;
        while(x>0){
            int temp=x%10;
            ans=ans+pow(temp,3);
            x=x/10;
        }
        if(ans==n){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
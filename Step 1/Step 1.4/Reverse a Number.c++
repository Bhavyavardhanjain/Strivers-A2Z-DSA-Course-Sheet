// Link of the question
// https://practice.geeksforgeeks.org/problems/reverse-bits3556/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        long long ans=0;
        for(int i=0;i<32;i++){
            int bit=X&1;
            ans=ans*pow(10,i)+bit;
            X=X>>1;
        }
        return ans;
    }
};
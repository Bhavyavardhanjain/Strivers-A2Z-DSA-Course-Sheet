// Link of the questions
// https://practice.geeksforgeeks.org/problems/count-digits5716/1
#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count=0;
        int num = N;
        while(N>0){
            int digit = N % 10;
            if(digit!=0 && num%digit==0){
                count++;
            }
            N = N/10;
        }
        return count;
    }
};
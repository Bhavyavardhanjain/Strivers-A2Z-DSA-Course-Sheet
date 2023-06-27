// Link of the question
// https://practice.geeksforgeeks.org/problems/pass-by-reference-and-value/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pass-by-reference-and-value
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        // code here
        int x=a+1;
        int y=b+2;
        return {x,y};
    }
};
// Link of the question
// https://practice.geeksforgeeks.org/problems/data-type-1666706751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=data-type
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        if(str=="Character"){
            return sizeof(char);
        }
        else if(str=="Integer"){
            return sizeof(int);
        }
        else if(str=="Long"){
            return sizeof(long);
        }
        else if(str=="Float"){
            return sizeof(float);
        }
        else if(str=="Double"){
            return sizeof(double);
        }
    }
};
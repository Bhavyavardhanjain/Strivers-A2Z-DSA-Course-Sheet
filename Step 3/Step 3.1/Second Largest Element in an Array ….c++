// Link of the question
// https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max=INT_MIN;
	    int smax=INT_MIN;
	    if(n<2){
	        return -1;
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            smax=max;
	            max=arr[i];
	        }
	        else if(arr[i]>smax && arr[i]!=max){
	            smax=arr[i];
	        }
	    }
	    if(smax==INT_MIN){
	        return -1;
	    }
	    else{
	        return smax;
	    }
	}
};
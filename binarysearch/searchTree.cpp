//this is the most optimized approch for searching and inserting the tree
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int search(std::vector<int>& nums, int target);
	int low=0;
	int high=nums.size()-1;//as we know from the array 
	int mid=low+(high-low)/2;
	while(low<=high){
		if(nums[mid]==target){
			return mid;
		}
		//apan ithe donhi sr=ort out karun that is the low and the high 
		else if(nums[low]<= nums[mid]){
			if(nums[low]<= target && target nums[mid])
				high=mid-1;
			else{
				low=high+1;
			}
		 else{
		 	if(nums[mid] <target && target<=nums[right])
		 		low = mid+1;
		 	else{
		 		high=mid-1
		 	}
		 }

		}
     
	}
}
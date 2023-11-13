#include<bits/stdc++.h>
using namespace std;
int main()
{	
	vector<int>nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(6);
	nums.push_back(3);
	nums.push_back(9);
	nums.push_back(1);
	nums.push_back(3);
	for(int i=0;i<nums.size()-1;i++)
    {
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
            	nums.erase(nums.begin()+j);
            }
        }
    }
    for(auto element:nums)
    {
    	cout<<endl<<nums[element]<<endl;
	}
	return 0;
}

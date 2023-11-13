#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>nums;
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(3);
	nums.push_back(4);
	 for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    nums.erase(nums.begin()+j);
                    j--;
                }
            }
        }
        cout<<endl<<nums.size()<<endl;
        cout<<endl;
        for(auto i:nums){
        	cout<<endl<<i;
		}
	return 0;
}
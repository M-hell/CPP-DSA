#include "FindPairs.h"
#include <vector>
#include <unordered_set>


using namespace std;


vector<vector<int>> findPairs(const vector<int>& arr1, const vector<int>& arr2, int target) {
    unordered_set<int>set1;
    unordered_set<int>set2;
    for(auto i:arr1)
    {
        set1.insert(i);
    }
    for(auto i:arr2){
        set2.insert(i);
    }
    vector<vector<int>>ans;
    for(auto i:set1)
    {
        vector<int>pair;
        int complement=target-i;
        if(set2.find(complement)!=set2.end()){
            pair.push_back(i);
            pair.push_back(complement);
            ans.push_back(pair);
           
        }
         pair.clear();
    }
    return ans;
}

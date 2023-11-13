bool itemInCommon(vector<int> vect1, vector<int> vect2) {

	 unordered_map<int, bool> myMap;
 
  
  for(int i=0;i<vect1.size();i++)
  {
      myMap.insert({vect1[i],true});
  }
 

for(auto j:vect2)
{
    if(myMap[j]==true)
    {
        return true;
    }
}
    
  
    return false;
}
unordered_map<char,int>map1;
for(char i:input_string)
{
    map1[i]++;
}
for(auto j:map1)
{
    if(j.second==1)
    {
        return j.first;
    }
}
return '\0';
}

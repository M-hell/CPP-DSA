#include<map>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<endl<<"map"<<endl<<endl;
    map<string,int>map1;  //stores the values of key in asscending order
    //insertion
    // 1st way
    pair<string,int>p=make_pair("samrat",3);
    map1.insert(p);

    // 2nd way
    pair<string,int>p1("name",2);
    map1.insert(p1);

    // 3rd way
    map1["my"]=1;

    // search
    cout<<endl<<map1["name"]<<endl;
//    cout<<map1["unknown"];  //here we dont have a key which is unknown so it creates a key unknown with its value 0
    
    //size
    cout<<map1.size()<<endl;
    
    //presence
    cout<<map1.count("my")<<endl;

    //printing

    for(auto i:map1)
    {
        cout<<endl<<i.first<<" "<<i.second<<endl;
    }

    //erase

    map1.erase("my");

    for (auto i:map1){
        cout<<endl<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
void miniMaxSum(vector<int> arr) {
    vector<long>temp;
    for(long i=0;i<arr.size();i++)
    {
        long store=arr[i];
        long sum=0;
        for(long j=0;j<arr.size();j++)
        {
            if(arr[j]==store)
            {
                continue;
            }
            sum=sum+arr[j];
        }
        temp.push_back(sum);
    }
    long max=temp[0];
    long min=temp[0];
    sort(temp.begin(),temp.end());
    max=temp[temp.size()-1];
    min=temp[0];
    cout<<min<<" "<<max;
}
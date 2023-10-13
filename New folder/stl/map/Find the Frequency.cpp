int findFrequency(vector<int>&v, int x){
    map<int,int>mp;
    for(auto &it: v) mp[it]++;
    cout<<mp[x]<<endl;
}
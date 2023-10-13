vector<pair<int,int>>v= {{2,3},{4,5},{6,1},{1,9}}; 
    v.push_back(make_pair(10,7));
    v.push_back(make_pair(-19,5));
    v.push_back({6,0});
    // () 1st bracket dela vul hoye jabe
    sort(v.begin(), v.end());
    for(auto it: v) cout<<it.first<<" "<<it.second<<endl;
    cout<<endl;
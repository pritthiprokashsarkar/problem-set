        vector<string>a;
        string temp=" ";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=" ")
            {
                a.push_back(temp);
                temp.clear();
            }
            else 
            {
                temp+=s[i];
            }
        }
        a.push_back(temp);
        temp.clear();
        int max=-1;
        unordered_map<string,int>mp;
        for(auto it: a) mp[it]++;
        for(auto it: mp)
        {
            if(it.second>max) max=it.second;
        }
        for(auto it : mp)
        {
            if(it.second==max) 
            {
                temp+=it.first;
                break;
            }
        }
        return temp+to_string(max);
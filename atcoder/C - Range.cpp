    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        vector<int>a;
        int i;
        for(i=0; i<3; i++)
        {
            int b;
            cin>>b;

            a.push_back(b);

        }

        sort(a.begin(),a.end());
        for(i=0; i<2; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[2]<<endl;
    }


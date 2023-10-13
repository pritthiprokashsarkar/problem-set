    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int c,d,counter=0;
        vector<int>a;
        vector<int>b;

        while(cin>>c>>d)
        {
            if(c==0 and d==0) break;
            a.push_back(c);
            b.push_back(d);
            counter++;
        }
        int i;
        for(i=0; i<counter; i++)
        {
            if(a[i]>b[i]) cout<<b[i]<<" "<<a[i]<<endl;
            else cout<<a[i]<<" "<<b[i]<<endl;
        }
    }

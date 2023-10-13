#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){

        int r,c,ro=0,column=0;
        cin>>r>>c;
        char arr[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>arr[i][j];
            }

        }

        for (int i = 0; i < r;i++)
        {
            for (int j = 0; j < c; j++)
            {
               if(arr[i][j]=='S'){
                ro++;
                break;
               }
            }

        }
         cout<<ro<<endl;
       // ll total_row= (r*c)-(c*ro);

        for (int i = 0; i < c; i++)
        {
            for (int j = 0; j < r; j++)
            {
               if(arr[j][i]=='S'){
                column++;
                break;
               }
            }

        }
         cout<<column<<endl;

      /*  ll total_column=(r*c)-(r*column);
        ll intersection= (r-ro)*(c-column);
        ll ans=total_row + total_column- intersection;
        cout<<ans<<endl; */


}

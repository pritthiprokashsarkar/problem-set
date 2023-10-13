void Solve() {
    string str; cin >> str;
    string answer1; 
    string answer2;
    N = str.size();
 
    for(int i=0;i<N;i++) {
        answer1.pbk('(');
    }
    
    for(int i=0;i<N;i++) {
        answer1.pbk(')');
    }
 
    for(int i=0;i<N;i++) {
        answer2.pbk('(');
        answer2.pbk(')');
    }
 
    bool flag1=0;
    for(int i=0;i<answer1.size();i++) {
        [&] () {
            for(int j=0;j<N;j++) {
                if((i+j)>=answer1.size()) return;
                if(answer1[i+j]!=str[j]) {
                    return;
                }
            }
            flag1 = 1;
        } ();
    }
    if(flag1==0) {
        cout << "YES" << endl;
        cout << answer1 << endl;
        return;
    }
 
    bool flag2=0;
    for(int i=0;i<answer2.size();i++) {
        [&] () {
            for(int j=0;j<N;j++) {
                if((i+j)>=answer2.size()) return;
                if(answer2[i+j]!=str[j]) {
                    return;
                }
            }
            flag2 = 1;
        } ();
    }
    if(flag2==0) {
        cout << "YES" << endl;
        cout << answer2 << endl;
        return;
    }
    cout << "NO" << endl;
}
int32_t main() {
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    while(T--) Solve();
}
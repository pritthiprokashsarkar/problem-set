
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
	bool found = false;
	sort(arr, arr + n);

	for (int i = 0; i < n - 1; i++) {
		int l = i + 1;
		int r = n - 1;
		int x = arr[i];
		while (l < r) {
			if (x + arr[l] + arr[r] == 0) {
				cout<<x<<" "<<arr[l]<<" "<<arr[r]<<endl;
				l++;
				r--;
				found = true;
			}

			else if (x + arr[l] + arr[r] < 0)
				l++;
			else
				r--;
		}
	}

	if (found == false)
		cout << " No Triplet Found" << endl;
	return 0;
}

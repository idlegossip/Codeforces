// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

#define MAXN 100001

// Function to construct array B[] that
// stores MEX of array A[] excluding A[i]
void constructMEX(int arr[], int N)
{
  // Stores elements present in arr[]
  int hash[MAXN] = { 0 };

  // Mark all values 1, if present
  for (int i = 0; i < N; i++) {

    hash[arr[i]] = 1;
  }

  // Initialize variable to store MEX
  int MexOfArr;

  // Find MEX of arr[]
  for (int i = 1; i < MAXN; i++) {
    if (hash[i] == 0) {
      MexOfArr = i;
      break;
    }
  }

  // Stores MEX for all indices
  int B[N];

  // Traverse the given array
  for (int i = 0; i < N; i++) {

    // Update MEX
    if (arr[i] < MexOfArr)
      B[i] = arr[i];

    // MEX default
    else
      B[i] = MexOfArr;
  }

  // Print the array B
  for (int i = 0; i < N; i++)
    cout << B[i] << ' ';
}

// Driver Code
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n;
        ll  hash[n] = { 0 };
        ll ar[n+1];
        for(ll j=0; j<n; j++)
        {
            cin>>ar[j];
            hash[ar[j]]=1;
        }
        for(ll i=1; i<n; i++)
        {

        }
    }
}

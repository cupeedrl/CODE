#include<bits/stdc++.h>
#define ll long long

using namespace std;

int a[101], n, sum;
bool ok;

void tryAt(int pre, int preSum)
{
    // Base condition: if we have found the solution, exit
    if (ok) return;
    
    // If we've already reached the target sum, stop further exploration
    if (preSum == sum) {
        ok = true;
        return;
    }
    
    // Loop through the elements starting from the next index
    for (int j = pre + 1; j <= n; ++j) {
        // If adding the current element exceeds the target sum, skip it
        if (preSum + a[j] > sum) continue;
        
        // Recur to check further by including a[j]
        tryAt(j, preSum + a[j]);
    }
}

int main()
{
    int t; 
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        
        // Input and calculate the total sum
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        
        // If the total sum is odd, it's impossible to split it into two equal parts
        if (sum % 2) {
            cout << "NO\n";
        } else {
            sum /= 2;  // The target sum for each subset
            
            ok = false;  // Reset the flag
            tryAt(0, 0); // Start recursion from index 0 with a sum of 0
            
            // Output result based on the flag
            if (ok) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}

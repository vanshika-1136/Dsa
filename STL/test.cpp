#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void solve() {
    string s;
    cin >> s;
    
    // last_pos stores the most recent index of '1', '2', and '3'
    // Initialize with -1 to indicate character hasn't been seen yet
    int last_pos[4] = {-1, -1, -1, -1};
    int min_len = 1e9; // Initialize with a very large number
    
    for (int i = 0; i < s.length(); i++) {
        // Convert char '1', '2', or '3' to integer 1, 2, or 3
        int val = s[i] - '0';
        last_pos[val] = i;
        
        // If we have seen all three characters at least once
        if (last_pos[1] != -1 && last_pos[2] != -1 && last_pos[3] != -1) {
            // Shortest substring ending at i starts at the earliest of the three positions
            int start = min({last_pos[1], last_pos[2], last_pos[3]});
            int current_len = i - start + 1;
            min_len = min(min_len, current_len);
        }
    }
    
    // If min_len was never updated, no valid substring exists
    if (min_len == 1e9) {
        cout << 0 << endl;
    } else {
        cout << min_len << endl;
    }
}

int main() {
        // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
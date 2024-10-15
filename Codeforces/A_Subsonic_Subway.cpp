#include <bits/stdc++.h>
#include <fstream>  // Include for file handling
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    ifstream infile("subsonic_subway_input.txt"); 
    ofstream outfile("output.txt");  
    if (!infile.is_open() || !outfile.is_open()) {
        cerr << "Error" << endl;
        return 1;  
    }

    int t;
    infile >> t; 
    int cnt = 1;

    while (t--) {
        int n;
        infile >> n;  
        vector<int> a(n), b(n);
        double mini = 0, maxi = 1e9;
        for (int i = 0; i < n; i++) {
            infile >> a[i] >> b[i];
            double mn = double(i + 1) / b[i];  
            double mx = double(i + 1) / a[i]; 
            mini = max(mini, mn);
            maxi = min(maxi, mx);
            if (mini > maxi) {
                maxi = -1;
             
            }
        }

        outfile << "Case #" << cnt << ": ";
        if (maxi == -1) {
            outfile << -1 << endl;
        } else {
            outfile << fixed << setprecision(6) << mini << endl;  // Print the result with precision
        }

        cnt++;
    }

    infile.close();
    outfile.close();
    return 0;
}

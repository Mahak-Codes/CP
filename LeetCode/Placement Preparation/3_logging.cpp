// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define endl "\n"
// #define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

// int32_t main() {
    
// vector<pair<string, string>> logs = {
//     {"u1", "2024-01-01"},
//     {"u2", "2024-01-01"},
//     {"u1", "2024-01-02"},
//     {"u3", "2024-01-01"},
//     {"u1", "2024-01-03"},
//     {"u2", "2024-01-04"},
//     {"u1", "2024-01-04"},
//     {"u1", "2024-01-05"},
//     {"u1", "2024-01-06"}
// };
// int n=logs.size();
// map<string,int>user;
// map<string,int>day;
// int cnt=0;
// for(int i=0;i<n;i++){
//     if(user.find(logs[i].first)==user.end()){
//         cnt++;
//     }
//     user[logs[i].first]++;
//     day[logs[i].second]++;
// }
// cout<<"user till now:"<<cnt<<endl;
// int more5=0;
// for(auto x:user){
//     if(x.second>=5){
//         more5++;
//     }
// }
// cout<<"more than 5 :"<<more5<<endl;
// int maxday=0;
// string mday;
// for(auto x:day){
//     if(maxday<x.second){
//         maxday=x.second;
//         mday=x.first;
//     }
// }
// cout<<"day which has more number of users logged in till now:"<<mday<<endl;


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

int32_t main() {
    mahak_codes
    vector<pair<string, string>> logs = {
        {"u1", "2024-01-01"},
        {"u2", "2024-01-01"},
        {"u1", "2024-01-02"},
        {"u3", "2024-01-01"},
        {"u1", "2024-01-03"},
        {"u2", "2024-01-04"},
        {"u1", "2024-01-04"},
        {"u1", "2024-01-05"},
        {"u1", "2024-01-06"}
    };

    unordered_map<string, int> userCount;
    unordered_map<string, int> dayCount;
    int uniqueUsers = 0;
    int moreThan5Users = 0;
    string maxDay = "";
    int maxDayCount = 0;

    for (int i = 0; i < logs.size(); i++) {
        string user = logs[i].first;
        string date = logs[i].second;
        userCount[user]++;
        if (userCount[user] == 1)
            uniqueUsers++;
        if (userCount[user] == 6)
            moreThan5Users++;

        dayCount[date]++;
        if (dayCount[date] > maxDayCount) {
            maxDayCount = dayCount[date];
            maxDay = date;
        }

        // Output current state
        cout << "After " << i + 1 << " insertions:" << endl;
        cout << "  Unique users: " << uniqueUsers << endl;
        cout << "  Users >5 logins: " << moreThan5Users << endl;
        cout << "  Max login day: " << maxDay << " (" << maxDayCount << " logins)" << endl;
        cout << "-------------------------------" << endl;
    }

    return 0;
}

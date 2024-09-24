#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);
bool check(int x1,int y1){
    return x1<=1000 && x1>=-1000 && y1<=1000 && y1>=-1000;
}
int32_t main() {
    mahak_codes
    int x1,y1,x2,y2,a;
    cin>>x1>>y1>>x2>>y2;
    pair<int,int>gi,p1,p2,p3;
    if(x1==x2){
        a=y2-y1;
    }
    else if(y1==y2){
        a=x2-x1;
    }
    else{
        a=x2-x1;
    }
    gi={x2,y2};
    p1={x1+a,y1};
    p2={x1,y1+a};
    p3={x1+a,y1+a};
    if(x1!=x2 && y1!=y2){
        int a1=x1-x2;
        int a2=y1-y2;
        a=abs(x1-x2);
        if(a1!=a2){
          if(a1>a2){
            p1={x1-a,y1};
            p2={x1-a,y1+a};
            p3={x1,y1+a};
          }
          else{
            p1={x1+a,y1};
            p2={x1+a,y1-a};
            p3={x1,y1-a};
          }
        }   
    }
    int x3,x4,x5,y3,y4,y5;
    x3=p1.first,x4=p2.first,x5=p3.first;
    y3=p1.second,y4=p2.second,y5=p3.second;
    if(p1==gi && check(x4,y4) && check(x5,y5)){
        cout<<x4<<" "<<y4<<" "<<x5<<" "<<y5;
    }
    else if(p2==gi && check(x3,y3) && check(x5,y5)){
        cout<<x3<<" "<<y3<<" "<<x5<<" "<<y5;
    }
    else if(p3==gi && check(x4,y4) && check(x3,y3)){
        cout<<x4<<" "<<y4<<" "<<x3<<" "<<y3;
    }
    else{
       cout<<-1<<endl;
    }
    

    return 0;
}
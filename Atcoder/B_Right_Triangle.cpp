#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define mahak_codes ios_base::sync_with_stdio(false); cin.tie(nullptr);

double dis(int x1,int y1,int x2,int y2){
    double di=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    return di;
}
bool right(double ab,double bc,double ca){
    if((ab +bc)==ca){
        return true;
    }
    return false;
}
int32_t main() {
    mahak_codes
    int ax,bx,cx,ay,by,cy;
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    double ab=dis(ax,ay,bx,by);
    double bc=dis(cx,cy,bx,by);
    double ac=dis(ax,ay,cx,cy);
    if(right(ab,bc,ac)||right(ab,ac,bc)||right(ac,bc,ab)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
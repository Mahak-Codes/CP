ueue<array<int,3>>q;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='M'){
                q.push({i,j,0});
            }
        }
    }
    while(!q.empty()){
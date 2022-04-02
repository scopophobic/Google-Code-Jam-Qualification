#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int f=t;
    int u=0;
    while(t--){
        u++;
        printf("Case #%d:\n",u);
        
        int r,c;
        cin>>r>>c;
        cout<<"..";
        for(int i=1;i<c;i++){
            cout<<"+-";
        }
        cout<<"+";
        cout<<"\n..";
        for(int i=1;i<c;i++){
            cout<<"|.";
        }
        cout<<"|";

        for (int i=1;i<r;i++){
            cout<<"\n";
            for(int x=1;x<c+1;x++){
            cout<<"+-";
            }
            cout<<"+\n";
            for(int y=1;y<c+1;y++){
            cout<<"|.";
            }
            cout<<"|";
        }
        cout<<"\n";
        for(int i=1;i<c+1;i++){
            cout<<"+-";
            }
            cout<<"+";
        cout<<"\n";
        
    
}
return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n,m,i,j;
    char ch[101][101];
    //scanf("%d%d",&n,&m);
    cin>>n>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
             //scanf("%s",ch[i][j]);s
               cin>>ch[i][j];
        }
    }
    int count=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
             if(ch[i][j]=='C'||ch[i][j]=='M'||ch[i][j]=='Y'){
                 cout<<"#Color"<<endl;
                   return 0;
               }

        }
    }

 cout<<"#Black&White"<<endl;

    return 0;
}

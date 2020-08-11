#include<iostream>
using namespace std;
void DFS(int);
int G[15][15],visited[15],n;

int main(){
       int i,j;
       cout<<"Enter Number of Sub-office:"<<endl;
       cin>>n;
       cout<<"Enter Their Connection using Matrix:"<<endl;

      for(i=0; i<n; i++){
      for(j=0; j<n; j++){
      cin>>G[i][j];
     }
  }
       for(i=0; i<n; i++){
       visited[i]=0;
     }
       DFS(0);
}
void DFS(int i){
       int j;
       cin>>i;
       visited[i]=1;
       for(j=0; j<n; j++){
       if(!visited[j]&&G[i][j]==1){
       DFS(j);
     }
   }
}

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
int grid[260][260];
bool check[260][260] = {false,false};

int largest(int i, int j, int count){
   check[i][j] = true;
   //cout<<"HI"<<grid[i][j]<<"BYE"<<endl;
   if(grid[i][j] == grid[i+1][j] && !check[i+1][j]){
       //cout<<"1";
       largest(i+1,j,count+1);
   }
   else if(grid[i][j] == grid[i-1][j] && !check[i-1][j]){
       //cout<<"2";
       largest(i-1,j,count+1);
   }
   else if(grid[i][j] == grid[i][j-1] && !check[i][j-1]){
       //cout<<"3";
       largest(i,j-1,count+1);
   }
   else if(grid[i][j] == grid[i][j+1] && !check[i][j+1]){
       //cout<<"4";
       largest(i,j+1,count+1);
   }
   else{

       return count;
   }
}
int together_group(){

}
int main()
{
   int n;
   freopen("multimoo.in", "r", stdin);
   freopen("multimoo.out", "w", stdout);
   cin>>n;
   for(int i = 0;i<=n;i++){
       for(int j = 0; j<=n;j++){
           grid[i][j] = -1;
       }
   }

   for(int i = 1; i<=n;i++){
       for(int j = 1; j<=n;j++){
           cin>>grid[i][j];
       }
   }
   int group = 0;
   for(int i = 1; i<=n;i++){
       for(int j = 1; j<=n;j++){
           int a = largest(i,j,1);
           group = max(group,a);
       }
   }
   int z[1000001] = {0};
   for(int i=1;i<=n;i++){
       for(int j = 1;j<=n;j++){
           z[grid[i][j]]++;
       }
   }
   sort(z,z+1000001);
   cout<<group<<endl;
   cout<<z[1000000]+z[999999]<<endl;

   return 0;
}

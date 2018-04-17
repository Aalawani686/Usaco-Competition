/*
ID: anialaw1
PROG: barn1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <sstream>
using namespace std;
ifstream fin("barn1.in");
ofstream fout("barn1.out");

int main(){

  int boards, stalls, cowNum, front, end;
  int j=0;
  fin >> boards >> stalls >> cowNum;
  vector<int> spaces(cowNum);
  vector<int> cows(cowNum);
  for(int i=0; i<cowNum; i++){
    fin >> cows[i];
  }
  sort(cows.begin(), cows.end());

  for(int i=0; i<cowNum; i++){
    if(i > 0){
      spaces[j] = cows[i] - cows[i-1] - 1;
      j++;
    }
    else if(i == 0){
      front = cows[i]-1;
    }
    if(i == cowNum-1){
      end = stalls - cows[i];
    }
  }
  sort(spaces.begin(), spaces.end());
  for(int k = j; k>0; k--){
    if(boards == 1){
      break;
    }
    stalls -= spaces[k];
    boards --;
  }
  stalls -= end;
  stalls -= front;
  fout << stalls << endl;

}

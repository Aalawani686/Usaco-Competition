
/*
ID: anialaw1
PROG: milk
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;

typedef pair<int,int> kms;
ifstream fin("milk.in");
ofstream fout("milk.out");

int main(){
  int total, farmerNum;
  fin >> total >> farmerNum;
  vector<pair<int, int> > farmers(farmerNum);
  int cost, supply;
  for(int i=0; i<farmerNum; i++){
    fin >> cost >> supply;
    farmers[i] = kms(cost, supply);
  }
  sort(farmers.begin(), farmers.end());
  int endCost = 0;
  if(total == 0){
    endCost = 0;
  }

  int j = 0;
  while(total > 0){
    if(farmers[j].second >= total){
      endCost += farmers[j].first*total;
      break;
    }
    else if(farmers[j].second<total){
      endCost += farmers[j].first*farmers[j].second;
      total -= farmers[j].second;

    }
    j++;
  }
  fout << endCost << endl;
}

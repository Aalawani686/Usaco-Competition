/*
ID: anialaw1
PROG: gift1
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

map<string, int> Money;
ofstream fout ("gift1.out");
ifstream fin ("gift1.in");

int main(){

  int NP, i, j;
  fin>>NP;

  string names[NP];
  for(i=0; i<NP; i++){
    fin>>names[i];
  }
  string giver, name;
  int money, shares;
  for(i=0; i<NP; i++){

    fin >> giver;
    fin >> money >> shares;
    if(shares == NULL){
      Money[giver] += money;
      continue;
    }
    Money[giver]-=money;
    for(j=0; j<shares; j++){
      fin >> name;
      Money[name] += money/shares;
    }
    Money[giver] += money%shares;
  }
  for(i=0; i<NP; i++){
    fout << names[i] << " " << Money[names[i]] << endl;
  }
}

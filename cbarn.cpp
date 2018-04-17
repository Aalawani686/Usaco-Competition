#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <sstream>
using namespace std;
ifstream fin("combo.in");
ofstream fout("combo.out");

int main(){
  int total;
  fin >> total;
  int barns[total];
  for(int i=0; i<total; i++){
    fin >> barns[i]
  }

  for(int j=0; j<total; j++){
    if(barns[j] == 0){
      continue;
    }
    
  }

}

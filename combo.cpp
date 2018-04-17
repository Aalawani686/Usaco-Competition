/*
ID: anialaw1
PROG: combo
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
ifstream fin("combo.in");
ofstream fout("combo.out");

int main(){
  int total, f1, f2, f3, m1, m2, m3, combos;
  fin >> total;
  if(total < 5){
    combos = (total*total*total);
    fout << combos << endl;
  }
  else{
    combos = 250;


  fin >> f1 >> f2 >> f3;
  fin >> m1 >> m2 >> m3;
  if((abs(f1 - m1)%total > 4 && abs(f1 + m1)%total > 4)|| (abs(f2 - m2)%total > 4 && abs(f2 + m2)%total > 4)
  || (abs(f3 - m3)%total > 4 && abs(f3 + m3)%total > 4)){
    fout << 250 << endl;
  }
  else{
    for(int i=1; i<=total; i++){
      for(int j=1; j<=total; j++){
        for(int k=1; k<=total; k++){
          if(((abs(f1-i)%total) <= 2 || (abs(f1-i)%total) >= total-2) && ((abs(f2-j)%total) <= 2 || (abs(f2-j)%total) >= total-2)
        && ((abs(f3-k)%total) <= 2 || (abs(f3-k)%total) >= total-2) && ((abs(m1-i)%total) <= 2 || (abs(m1-i)%total) >= total-2)
      && ((abs(m2-j)%total) <= 2 || (abs(m2-j)%total) >= total-2) && ((abs(m3-k)%total) <= 2 || (abs(m3-k)%total) >= total-2)){
            combos --;
          }
        }
      }
    }
    fout << combos << endl;
  }


}
}

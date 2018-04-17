/*
ID: anialaw1
PROG: beads
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
 ofstream fout ("beads.out");
 ifstream fin ("beads.in");
 int N;
 fin >> N;
 string beads;
 fin >> beads;

 if(beads.length() != N)
  // either this or we could throw a fatal error
  N = beads.length();

 // brute-force all possibilities
 int cur = 0, max = 0;
 char color;
 bool switched;

 for(int i = 0; i < N; ++i){
  // complexity O(n)
  cur = 0;
  switched = false;
  color = 'w';
  for(int j = 0; j < N; ++j){
   // complexity O(n^2)
   const char cur_c = beads[(i + j) % N];
   // always take white beads
   if(cur_c != 'w'){
    // first non-white
    if(color == 'w'){
     color = cur_c;
    }
    else if(color != cur_c){
     if(switched)
      break;
     else{
      color = cur_c;
      switched = true;
     }
    }
   }
   ++cur;
  }
  if(cur > max)
   max = cur;
 }

 fout << max << endl;
 return 0;
}

/*#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;
ifstream fin("beads.in"); ofstream fout("beads.out");

int main() {
  int N = 0;
  string beads;
  int i;
  int j = i + 1;
  bool change = false;
  bool cont;
  char color;
  //int firstTotal, count, j, startPos, k, lastK;
  //bool lastWhite, isFirst;
  int count = 1;
  int max = 0;
  fin >> N;
  fin >> beads;

  for(int l = 0; l < N; l++){
    if(beads[l] != 'w'){
      cont = true;
      count = 0;
      break;
    }
  }
  if(cont == false){
    max = N-1;
  }
  else{
    for(i = 0; i < N; i++){
      if(beads[i] == 'w'){
        continue;
      }
      else{
        color = beads[i];
      }
      //for (j = i; j< beads.length(); j++){
      while(true){
        j = j%N;
        if(beads[j] == 'w'){
          count ++;
        }
        else if(beads[j] == color){
          count ++;
        }
        else if(change == false && beads[j] != color){
          change = true;
          count ++;
          color = beads[j];
        }
        else{ break;}
        j++;
      }
      if(max<count){
        max = count;
      }
      count = 0;
      change = false;

    }
  }

  fout << max+1 << endl;
  return 0;
}*/

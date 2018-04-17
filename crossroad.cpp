/*
ID: anialaw1
PROG: crossroad
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;
ofstream fout ("crossroad.out");
ifstream fin ("crossroad.in");

int main() {
  int times, id, side;
  int crossing = 0;
  fin >> times;
  int ids[times];
  int sides[times];
  for(int i=0; i<times; i++){
    fin >> id;
    fin >> side;

    for(int j = 0; j<i; j++){
      if(id == ids[j]){
        if(sides[j] != side){
          crossing ++;
        }
        break;

      }
    }
      ids[i] = id;
      sides[i] = side;
  }
  fout << crossing << endl;
}

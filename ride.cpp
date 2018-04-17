
/*
ID: anialaw1
PROG: ride
LANG: C++
*/


#include <fstream>

using namespace std;



int score(string s){

  int count = 1;
  for (int i=0; i<s.length(); i++){
    count *= s[i] - 'A' + 1;
  }
  return count % 47;
}

int main(){
  string comet, group;
  ifstream fin("ride.in");
  ofstream fout("ride.out");
    fin >> comet >> group;

    if (score(group) == score(comet)){
      fout << "GO\n"; }
      else fout << "STAY\n";
      return 0;

}

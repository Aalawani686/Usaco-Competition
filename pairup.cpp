/*
ID: anialaw1
PROG: pairup
LANG: C++
*/
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <sstream>
using namespace std;
ofstream fout ("pairup.out");
ifstream fin ("pairup.in");

int main(){
  int lines;
  fin >> lines;
  vector<int> cowTimes();
  int count, times;
		for(int i=0; i<lines; i++){

			fin >> count;
			fin >> times;
			for(int j=0; j<count; j++){
				cowTimes.add(times);
			}
		}
		int max = 0;
		int num = 0;

		for(int k=0; k<(cowTimes.size()/2); k++){
			num = (cowTimes[k]+cowTimes[cowTimes.length-k]);
			if(num > max){
				max = num;
			}
		}
		  fout << max << endl;
}

/*
ID: anialaw1
PROG: cowqueue
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstdlib>


using namespace std;

ofstream fout ("cowqueue.out");
ifstream fin ("cowqueue.in");

int main(){
  int total;
  int totalTime=0;
  fin >> total;

  int times[total];
  int hours[total];

  for(int i=0; i<total; i++){
    int start, hour;
    fin >> start;
    fin >> hour;
    times[i] = start;
    hours[i] = hour;
  }
  int min = 1000001;
  int iS = 0;
  for(int j=0; j<total; j++){
    for(int i=0; i<total; i++){
      if(times[i]<min){
        min = times[i];
        iS = i;
      }
    }
    if(totalTime<min){ totalTime = min;}
    totalTime += hours[iS];
    times[iS] = 1000002;
    min = 1000001;
  }
  fout << totalTime << endl;

}

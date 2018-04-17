/*
ID: anialaw1
PROG: diamond
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("diamond.out");
    ifstream fin ("diamond.in");
    int total, difference, count;
    int min = 10000;
    fin >> total >> difference;
    int diamonds[total];
    for (int i=0; i<total; i++){
      fin >> diamonds[i];
    }
    count = 0;
    for (int i=0; i<total; i++){
       int amt = 0;
       for (int j=0; j<total; j++){
         if(diamonds[j]>=diamonds[i] && diamonds[j]<= diamonds[i]+difference){
           amt++;
         }
       }
       if(amt>count){ count = amt; }
    }

    fout << count << endl;
  }

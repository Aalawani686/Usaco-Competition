/*
ID: anialaw1
PROG: maxcross
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

ofstream fout ("maxcross.out");
ifstream fin ("maxcross.in");

int main(){
   int length, section, signals;
   fin >> length;
   fin >> section;
   fin >> signals;
   int fix = 0, min = 1000000;
   int Signals[signals];

   for(int i = 0; i<signals; i++){
     int temp;
     fin >> temp;
     Signals[i] = temp;
   }


   for(int i=0; i<(length-section); i++){
     int end = i+section;

       for(int k=0; k<signals; k++){
         if(Signals[k] > i+1 && Signals[k]<end+1) fix ++;
       }

     if(fix<min) min = fix;
     fix = 0;
   }
   fout << min << endl;

}

/*
ID: anialaw1
PROG: crosscircle
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
ofstream fout ("crosscircle.out");
ifstream fin ("crosscircle.in");

int main(){
  string input;
  char letters[52];
  fin >> input;
  for(int i=0; i<input.length(); i++){
    letters[i] = input[i];
  }
  int crossings = 0;
  char tested[26];
  for(int i = 0; i<sizeof(letters)/sizeof(letters[0]) - 2; i++){
    char c = letters[i];
    if(!tested.contains(c)){
      int j = i+1;
      char chars[];
      while(letters[j] != c){
        if(chars.contains(letters[j])){
            crossings --;
        }
        else{
          crossings++;
          chars.add(letters[j]);
        }
        j++;
      }
      tested.add(c);

    }
  }
  crossings/=2;
  fout << crossings << endl;
}

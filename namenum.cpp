/*
ID: anialaw1
PROG: namenum
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

string convertInt(int number){
   stringstream ss;//create a stringstream
   ss << number;//add number to the stream
   return ss.str();//return a string with the contents of the stream
}

string to_num(string str){
    string to_num = "";

    vector<string> a(8);
    a[0] = "ABC";
    a[1] = "DEF";
    a[2] = "GHI";
    a[3] = "JKL";
    a[4] = "MNO";
    a[5] = "PRS";
    a[6] = "TUV";
    a[7] = "WXY";

    for(int i=0; i<str.length(); i++){
      for(int j=0; j<8; j++){
        for(int k=0; k<3; k++){
          if(str[i]==a[j][k]){
            to_num += convertInt(j+2);
            break;
          }
        }
      }
    }
    return to_num;

}

int main(){
    ifstream in("namenum.in");
    ifstream dict("dict.txt");
    ofstream out("namenum.out");

    string number;
    in >> number;
    bool named = false;

    for(int i=0; i<5000; i++){
      string name;
      dict >> name;
      if(name == ""){ break;}
      if(to_num(name) == (number)){
        out << name << endl;
        named = true;
      }
    }
    if(!named){
      out << "NONE" << endl;
    }

  }

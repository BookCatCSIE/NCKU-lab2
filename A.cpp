#include <iostream>   
#include <fstream> 
#include <cstdlib>                              
#include "a.h"
using namespace std;
int main() {
  ifstream inFile("file.in",ios::in);
  ofstream outFile("file.out",ios::out);
  int k,ra,rb;
  double sa;
  inFile >>k>>ra>>rb;
  outFile <<ra<<" "<<rb<<endl;
  Scorer scr1;
  scr1.setK(k);
  scr1.setRA(ra);
  scr1.setRB(rb);
  while(!inFile.eof()){
    inFile >>sa;
	if(inFile.eof()){break;}
	outFile <<scr1.calRA(sa)<<" "<<scr1.calRB(sa)<<endl;
	scr1.setRA(scr1.RA2);
	scr1.setRB(scr1.RB2);
  }
  return 0;
}


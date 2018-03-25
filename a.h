#include <iostream>
#include <cmath>                                                               
using namespace std;
class Scorer {
public:
int RA2,RB2;
Scorer(){};
Scorer(int s){};
void setK(int k){K=k;}
int getK(){return K;}
void setRA(int ra){RA=ra;}
int getRA(){return RA;}
void setRB(int rb){RB=rb;}
int getRB(){return RB;}
int calRA(double sa){
  Ea=(1/(1+pow(10,((getRB()-getRA())/400))));
  RA2=getRA()+getK()*(sa-Ea); 
  return RA2;
}
int calRB(double sa){
  Eb=(1/(1+pow(10,((getRA()-getRB())/400))));
  RB2=getRB()+getK()*((1-sa)-Eb);  
  return RB2;
}												       
private:
  int K;
  int RA;
  int RB;
  double Ea,Eb;
};

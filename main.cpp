#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  
 int a = 0;
  bool b;
  cin >> a;
  int d = (a/2);
  b = numeriprimi(d,a);
  
  if(b==true){
    cout << "numero primo" << endl;
  }if else(b==false){
    cout << "numero non primo" << endl;
  }
     
  return 0;
}

#include <iostream>

using namespace std;
int main(){

      int two, four, six, eight,  sum;
    cout<< "Em's number of caps if added"<<endl;
    cout<< "He has  white caps, blue caps,  black caps and  gray caps, What is the sum of all the caps? \n\n";
    cout<< "number of white caps."<<endl;
    cin>> two;
    cout<< "number of blue caps."<<endl;
    cin>> four;
    cout<< "number of black caps."<<endl;
    cin>> six;
    cout<< "number of gray caps."<<endl;
    cin>> eight;
    sum= two+four+six+eight;
    cout<< "Adding"<<two<<"white caps,"<<four<<"blue caps,"<<six<<"black caps, and"<<eight<<"gray caps. Em has"<<sum<<"caps." <<endl;
    
    return 0;
}
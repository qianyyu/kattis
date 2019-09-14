#include <iostream> 
#include <stack> 
#include <string>
#include <iomanip>
using namespace std; 
  
int main () 
{ 
    string s;
    cin >> s;
    double whitespace=0, lower=0, upper=0, symbol=0;

    for (auto i = s.begin(); i != s.end(); ++i){
    	if(*i == '_')
    		whitespace++;
    	else if('a'<=*i && 'z'>=*i)
    		lower++;
    	else if('A'<=*i && 'Z'>=*i)
    		upper++;
    	else
    		symbol++;
    }
    cout << fixed << setprecision(16)<< whitespace/s.size()<<endl;
    cout << fixed << setprecision(16)<< lower/s.size()<<endl;
    cout << fixed << setprecision(16)<< upper/s.size()<<endl;
    cout << fixed << setprecision(16)<< symbol/s.size()<<endl;


  
    return 0; 
} 
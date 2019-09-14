#include <iostream> 
#include <stack> 
#include <string>
#include <iomanip>
using namespace std; 
  
int main () 
{ 
    double a,t,v,c,d,sum=0;
    cin >> a;
    int index = 1;
    while(cin>>c>>d){
    	if(index >= 2)
    		sum += (c-t)*(d+v)/2000;
    	t = c;
    	v = d;
    	index++;
    }
    cout << fixed<< setprecision(7)<<sum << endl;
    return 0; 
} 
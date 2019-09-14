#include <iostream> 
#include <stack> 
#include <string>
#include <iomanip>
using namespace std; 
  
int main () 
{ 
    int beats;
    float seconds,bpm,min,max;
    cin >> beats;
    while(cin >> beats >> seconds){
    	bpm = 60*beats/seconds;
    	min = 60/(seconds/(beats-1));
    	max = 60/(seconds/(beats+1));
    	cout << fixed << setprecision(4)<< min << ' ' << bpm << ' ' << max << endl;

    }


  
    return 0; 
} 
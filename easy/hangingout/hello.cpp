#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 
  
int main () 
{ 
    int reject=0;
    int limit, useless;
    int number, total=0;
    string s;
    cin >> limit >> useless;
    while(cin >> s >> number){
    	if(s=="enter"){
    		if(total + number > limit)
    			reject++;
    		else		
    			total += number;
    	}
    	else
    		total -= number;

    }
    cout<<reject<<endl;



  
    return 0; 
} 
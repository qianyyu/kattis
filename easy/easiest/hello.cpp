#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 

int digit(int n){
	int sum = n%10;
	while(n/=10)
		sum += n%10;
	return sum;
}
  
int main () 
{ 
    int n,digit_n,digit_multi;
    while(cin >> n){
    	if(n==0)
    		break;
    	digit_n = digit(n);
    	for (int i = 11; i <= 100; ++i){
    		digit_multi = digit(i*n);
    		if(digit_multi == digit_n){
    			cout << i << endl;
    			break;
    		}
    	}
    }

  
    return 0; 
} 


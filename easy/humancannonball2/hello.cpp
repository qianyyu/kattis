#include <iostream> 
#include <stack> 
#include <string>
#include <cmath>
using namespace std; 
#define PI 3.14159265359
#define g 9.81
  
int main () 
{ 
    float v0, theta, x1, h1,h2, useless;
    cin >>useless;
    float time,height;
    while(cin >> v0 >> theta >> x1 >> h1 >> h2){
    	theta /= 180;
    	theta *= PI;
    	time = x1/(cos(theta)*v0);
    	height = v0*time*sin(theta)-g*time*time/2;
    	if(height >= h1+1 && height <= h2-1)
    		cout << "Safe" << endl;
    	else
    		cout << "Not Safe" << endl;

    }
  
    return 0; 
} 
#include <iostream> 
#include <stack> 
#include <string>
#include <cmath>
using namespace std;
#define PI 3.1415926535898;
  
int main () 
{ 
    float b;
    int a,ans;
    string victory = "", treasure= "", mid = " or ";
    cin >> a >> b;
    b /= 180;
    b *= PI;
    ans = (int)(a/sin(b));
    cout << ans+1 << endl;

  
    return 0; 
} 
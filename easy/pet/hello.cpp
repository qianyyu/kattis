#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 
  
int main () 
{ 
    int a, b, c, d, total;
    int index = 1,max_total = 0, max_index;
    while(cin >> a >> b >> c >> d){
        total = a+b+c+d;
        if(total>max_total){
            max_total = total;
            max_index = index;
        }
        index++;
    }
    cout << max_index << ' ' << max_total << endl;
  
    return 0; 
} 
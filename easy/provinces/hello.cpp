#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 
  
int main () 
{ 
    int a, b, c, total;
    string victory = "", treasure= "", mid = " or ";
    cin >> a >> b >> c;
    total = a*3+b*2+c;
    if(total >= 8)
        victory = "Province";
    else if(total >= 5)
        victory = "Duchy";
    else if(total >= 2)
        victory = "Estate";
    else
        mid = "";

    if(total >= 6)
        treasure = "Gold";
    else if(total >= 3)
        treasure = "Silver";
    else if(total >= 0)
        treasure = "Copper";

    cout << victory << mid << treasure << endl;

  
    return 0; 
} 
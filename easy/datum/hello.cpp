#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 
  
int main () 
{ 
    int day, month;
    cin >> day >> month;
    int count[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int days = 0;
    for (int i = 0; i < month-1; ++i)
    	days += count[i];
    days += day-1;
    switch(days%7){
    	case 0:	cout << "Thursday" << endl; break;
    	case 1: cout << "Friday" << endl; break;
    	case 2: cout << "Saturday" << endl; break;
    	case 3: cout << "Sunday" << endl; break;
    	case 4: cout << "Monday" << endl; break;
    	case 5: cout << "Tuesday" << endl; break;
    	case 6: cout << "Wednesday" << endl; break;
    }


  
    return 0; 
} 
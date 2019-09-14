#include <iostream> 
#include <stack> 
#include <string>
#include <set> 

using namespace std; 
  
int main () 
{ 
    int counter;
    cin >> counter;
    string temp;
    set <string> s;

    while(cin>>counter){
    	for (int i = 0; i < counter; ++i)
    	{
    		cin >> temp;
    		s.insert(temp);
    	}
    	cout << s.size()<<endl;
	    s.clear();
	}


    return 0; 
}
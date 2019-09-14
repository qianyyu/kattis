#include <iostream> 
#include <stack> 
#include <string>
#include <vector>
using namespace std; 
  
int main () 
{ 
    int index=1,a;
    vector<string> s;
    string temp;
    while(cin>>a){
    	if(a==0)
    		break;
    	cout << "SET " << index << endl;
    	for (int i = 0; i < a; ++i){
    		cin >> temp;
    		if((i%2)==0)
    			s.insert(s.begin()+i/2,1,temp);
    		else
    			s.insert(s.end()-i/2,1,temp);
    	}
    	for (auto i = s.begin(); i != s.end(); ++i)
    		cout << *i << endl;
    	index++;
    	s.clear();
    }
    return 0; 
    	
} 
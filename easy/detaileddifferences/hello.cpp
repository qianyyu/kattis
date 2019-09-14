#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 
  
int main () 
{ 
    string a,b,str="";
    int useless;
    cin >> useless;
    while(cin >> a >> b){
    	cout << a << endl;
    	cout << b << endl;
    	for (auto i = a.begin(), j = b.begin(); i != a.end();++i,++j){
    		if(*i == *j)
    			str.push_back('.');
    		else
    			str.push_back('*');
    	}
    	cout << str << endl; 
    	cout << endl;
    	str = "";
    }


  
    return 0; 
} 
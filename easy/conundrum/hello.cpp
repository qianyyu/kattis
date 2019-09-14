#include <iostream> 
#include <stack> 
#include <string>
using namespace std; 
  
int main () 
{ 
    string str,name="";
    cin >> str;
    int ans = 0;
    for (int i = 0; i < str.size()/3; ++i)
    	name.append("PER");
    for (auto i = str.begin(), j = name.begin(); i != str.end(); ++i,++j)
    	if(*i != *j)
    		ans++;

    cout << ans << endl;



  
    return 0; 
} 
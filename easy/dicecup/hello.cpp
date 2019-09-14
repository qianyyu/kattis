#include <iostream> 
#include <stack> 
#include <string>
#include <vector> 

using namespace std; 
int main () 
{ 
    int n,m;
    vector<int> sum;
    vector<int> ans;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    	for (int j = 1; j <= m; ++j)
    		sum.push_back(i+j);

    int counter,max=0;
    for (int i = 2; i <= n+m; ++i){
    	counter = 0;
    	for (auto j = sum.begin(); j != sum.end(); ++j)
    		if(*j == i)
    			counter++;
    	if(counter > max){
    		ans.clear();
    		max = counter;
    		ans.push_back(i);
    	}
    	else if(counter == max)
    		ans.push_back(i);
    }
    for (auto j = ans.begin(); j != ans.end(); ++j)
    	cout << *j <<endl;

    return 0; 
} 
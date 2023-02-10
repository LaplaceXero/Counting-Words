#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int N; //pages
	int M; //words per pages
	
	cin >> testCases;
	
	for(auto i = 0; i < testCases; i++)
	{
	    cin >>N >>M;
	    
	    cout <<(N * M) <<endl;
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t = 0;
	while(++t) {
	 	int n;
	 	cin >> n;  
		if(n == 0) {
			break;
	   	}
	   	int numbers[n + 1];
	   	for(int i = 0; i < n; ++i) {
	   	 	cin >> numbers[i];
	   	}
	   	cout << "Case " << t << ":" << endl;
	   	for(int i = 0; i < n; ++i) {
	   	 	if(numbers[i] + 1 != numbers[i + 1]) {
	   	 	 	cout << 0 << numbers[i] << endl;
	   	 	}
	   	 	else {
	   	 		cout << 0 << numbers[i] << "-";
	   	 		int j = i + 1;
	   	 	 	for( ; numbers[j] + 1 == numbers[j + 1]; ++j);
	   	 	 	int start = numbers[i], end = numbers[j];
	   	 	 	int mod = 10;
	   	 	 	while(start - (start % mod) != end - (end % mod)) {
	   	 	 	 	mod *= 10;
	   	 	 	}
	   	 	 	cout << end % mod << endl;
	   	 		
	   	 		i = j;
	   	 	}
	   	}
	   	cout << endl;
 	 	
 	}
}
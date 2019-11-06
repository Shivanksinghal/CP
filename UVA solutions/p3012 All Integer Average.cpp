#include <bits/stdc++.h>
using namespace std;
int count_dig(int n) {
    int ans = 0;
    while(n) {
    	ans ++;
    	n /= 10;
    }
    return ans;
}	

int main() {
 	int t = 0;
 	
 	while(++ t) {
 		int n;
 		cin >> n;
 		if(n == 0) break;
 		int sum = 0, x;
 		for(int i = 0; i < n; ++i) {
 		 	cin >> x;
 		 	sum += x;
 	 	}
 	 	cout << "Case " << t << ":" << endl;
 	 	bool neg = 0;
 	 	if(sum < 0) {
 	 	 	neg = 1;
 	 	}
 	 	if(neg)
 	 	sum = -sum;
 	 	if(sum % n == 0) {
 	 	 	if(neg) cout << "- ";
 	 	 	cout << sum/n << endl;
 	 	 	continue;
 	 	}
 	 	
 	 	string s;	

 	 	
 	 	if(sum < n) {
 	 		int gc = __gcd(n, sum);
 	 		n /= gc, sum /= gc;
 	 		int ndig = count_dig(n);
 	 		int sumdig = count_dig(sum);	
 	 	 	int sp = ndig - sumdig;
 	 	 	for(int i = 0; i < ndig; ++i) s.push_back('-');
 	 	 	if(neg) {
 	 	 		                               
 	 	 	 	cout << "  ";
 	 	 	 	for(int i = 0; i < sp; ++i) cout << " ";
 	 	 	 	cout << sum << endl << "- " << s << endl << "  " << n << endl;
 	 	 	}
 	 	 	else {
 	 	 		for(int i = 0; i < sp; ++i) cout << " ";
 	 	 	 	cout << sum << endl << s << endl << n << endl; 	
 	 	 	}
 	 	}
 	 	else {
 	 		
 	 		//int sumdig = count_dig(sum);
 	 		int whole = sum / n;
 	 		int num = sum % n;
 	 		int gc = __gcd(num, n);
 	 		num /= gc, n /= gc;
 	 		int ndig = count_dig(n);
 	 		int numdig = count_dig(num);
 	 		int whdig = count_dig(whole);
 	 		for(int i = 0; i < ndig; ++i) s.push_back('-');
 	 		if(neg) {
 	 			for(int i = 0; i < whdig + 2 + ndig - numdig; ++i) cout << " ";
 	 			cout << num << endl << "- " << whole << s << endl << "  ";
 	 			for(int i = 0; i < whdig; ++i) cout << " ";
 	 			cout << n << endl;	 	
 	 	 	}
 	 	 	else {
 	 	 		for(int i = 0; i < whdig + ndig - numdig; ++i) cout << " ";
 	 	 		cout << num << endl << whole << s << endl;
 	 	 		for(int i = 0; i < whdig; ++i) cout << " ";
 	 	 		cout << n << endl;
 	 	 	}
 	 	}
 	}
}
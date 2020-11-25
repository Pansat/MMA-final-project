#include <iostream>
#include <algorithm>

using namespace std;

int main (){
	
	freopen("input_2.txt", "r", stdin);
	freopen("output_2.txt", "w", stdout);
	
	int n;
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		
		long long int a, b, c, d;
		
		cin >> a >> b >> c >> d;
		
		if(a < 1 || a > 1000000000 || b < 1 || b > 1000000000 || c < 1 || c > 1000000000 || d < 1 || d > 1000000000){
			cout << "#" << i + 1 << " " << -1 << endl;
		}
		
		else{
			
			int xx[4];
			
			xx[0] = a; xx[2] = c;
			xx[1] = b; xx[3] = d;
			
			sort(xx, xx + 3);
			
			cout << "#" << i + 1 << " " << xx[0] << " " << xx[2] << " " << xx[1] << " " << xx[3] << endl;
			
		}
		
	}
	
	return 0;
}

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class DayofYear{
	
	private:
		
		int day;
		
	public:
		
		void dd(int x){
			day = x;
		}
		
		int pp(){
			
			return day;
			
		}
		
		string answer(int x){
			
			string ans = "";
			
			if(x > 0 && x < 32){
				
				ans = ans + "January ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 31;
			
			if(x > 0 && x < 29){
				
				ans = ans + "February ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 28;
			
			if(x > 0 && x < 32){
				
				ans = ans + "March ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 31;
			
			if(x > 0 && x < 31){
				
				ans = ans + "April ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 30;
			
			if(x > 0 && x < 32){
				
				ans = ans + "May ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 31;
			
			if(x > 0 && x < 31){
				
				ans = ans + "June ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 30;
			
			if(x > 0 && x < 32){
				
				ans = ans + "July ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 31;
			
			if(x > 0 && x < 32){
				
				ans = ans + "August ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 31;
			
			if(x > 0 && x < 31){
				
				ans = ans + "September ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 30;
			
			if(x > 0 && x < 32){
				
				ans = ans + "October ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 31;
			
			if(x > 0 && x < 31){
				
				ans = ans + "November ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
			x = x - 30;
			
			if(x > 0 && x < 32){
				
				ans = ans + "December ";
				
				stringstream ss;
				
				ss << x;
				
				ans = ans + ss.str();
				
				return ans;
				
			}
			
		}
	
};


int main(){
	
	freopen("input_1.txt", "r", stdin);
	freopen("output_1.txt", "w", stdout);
	
	int c;
	
	cin >> c;
	
	for(int i = 0; i < c; i++){
		
		DayofYear n;
		
		int x;
		
		cin >> x;
		
		n.dd(x);
		
		if(n.pp() < 0 || n.pp() > 366){
			
			cout << "#" << i + 1 << " -1" << endl;
			
		}
		
		else{
			
			cout << "#" << i + 1 << " Day " << n.pp() << " would be " << n.answer(n.pp()) << "."<< endl;
			
		}
		
	}
	
	return 0;
}

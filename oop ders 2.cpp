#include <iostream>
using namespace std;
class Nokta{
	public: 
	int x,y;
	void degerAta(int a ,int b){
		x=a;
		y=b;
	}
};

int main(){
	Nokta n;
	n.degerAta(3,1);
	
	cout<< n.x << "," << n.y <<endl;
	
return 0;
}

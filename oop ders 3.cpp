#include <iostream>
using namespace std;
class Nokta{
	public: 
	int x,y;
	void degerAta(int a ,int b){
		x=a;
		y=b;
	}
	void ekranayaz(){
		cout<< x << "," << y <<endl;
	}
};

int main(){
	Nokta n;
	n.degerAta(3,1);
	n.ekranayaz();
	
	
return 0;
}

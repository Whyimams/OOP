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
	bool baslangicmi(){
		if(x==0 && y== 0)
			return true;
		else
			return false;
	}
};

int main(){
	Nokta n;
	n.degerAta(3,0);
	n.ekranayaz();
	if(n.baslangicmi())
		cout<<"x baslangýx noktasýdna";
	if(n.baslangicmi())
		cout<<"basdlþangosdgn";
	
return 0;
}

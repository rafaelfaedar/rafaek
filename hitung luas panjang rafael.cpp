#include<iostream>
using namespace std;

double hitunganL(double p, double l){
	double L = p * l;
	return L;
}

double hitunganK(double p, double l){
	double K = 2 * ( p + l );
	return K;
}

void tampilL(double p, double l)
{
	double L = hitunganL(p, l);
	cout<<"Luas : "<<endl;
	cout<<"L \t= p x l"<<endl;
	cout<<"L \t= "<<p<<" x "<<l<<endl;
	cout<<"L \t= "<<L<<endl;	
}

void tampilk(double p, double l)
{
	double k = hitunganK(p, l);
	cout<<"keliling : "<<endl;
	cout<<"K \t= 2 x ( p + l )"<<endl;
	cout<<"K \t= "<<2<<"("<<p<<" + "<<l<<" )"<<endl;
	cout<<"K \t= "<<k<<endl;
	}

int main(){
	//L = p x 1
	//k = 2 x (P + 1)
	double  p, l;
	cout<<"masukan p : "; cin>>p;
	cout<<"masukan l : "; cin>>l;
	tampilL(p, l);
	tampilk(p, l);
}

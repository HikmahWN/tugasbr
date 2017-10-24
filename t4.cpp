#include <iostream>
using namespace std;

int main(){
	int luasRumah=42;
	cout <<"Luas Rumah         :" <<luasRumah<<" m2"<<endl;
	
	float panjangParket=0.193;
	float lebarParket=1.215;
	float lp=panjangParket * lebarParket;
	int b=8;
	double luasBox=lp*8;
	cout <<"Luas 1 box Parket  :" << luasBox <<" m2"<<endl;
	
	double jumlahBoxParket=luasRumah/luasBox;
	cout <<"jumlah box parket  :" << jumlahBoxParket <<endl;
	
	int harga1Box=500;
	double biayaParket= harga1Box *jumlahBoxParket;
	cout <<"Biaya Parket (Rp)  :" << biayaParket <<endl;
	
	int upah=20;
	double biayaPasang=luasRumah * upah;
	cout <<"Biaya Pasang (Rp)  :" << biayaPasang <<endl;
	
	double totalBiaya=biayaParket+biayaPasang;
	cout <<"Total Bayar (Rp)   :" << totalBiaya <<endl;
}

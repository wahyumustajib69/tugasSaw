#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// DEKLARASI VARIABEL
	double a[5]={4,4,5,3,3};
	double a2[5]={3,3,4,2,3};
	double a3[5]={5,4,2,2,2};
	
	double Ra1c1,Ra1c2,Ra1c3,Ra1c4,Ra1c5;
	double Ra2c1,Ra2c2,Ra2c3,Ra2c4,Ra2c5;
	double Ra3c1,Ra3c2,Ra3c3,Ra3c4,Ra3c5;
	
	double RWa1c1,RWa1c2,RWa1c3,RWa1c4,RWa1c5;
	double RWa2c1,RWa2c2,RWa2c3,RWa2c4,RWa2c5;
	double RWa3c1,RWa3c2,RWa3c3,RWa3c4,RWa3c5;
		
	double w[5]={5,3,4,4,2};
	double mc1,mc2,mc3,mc4,mc5;
	double ha1,ha2,ha3;
	
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	// AMBIL NILAI MAX TIAP KRITERIA
	mc1=max(a[0],max(a2[0],a3[0]));
	mc2=max(a[1],max(a2[1],a3[1]));
	mc3=max(a[2],max(a2[2],a3[2]));
	mc4=max(a[3],max(a2[3],a3[3]));
	mc5=max(a[4],max(a2[4],a3[4]));
	
	// BUAT MATRIKS R
	Ra1c1 = (a[0]/mc1);
	Ra1c2 = (a[1]/mc2);
	Ra1c3 = (a[2]/mc3);
	Ra1c4 = (a[3]/mc4);
	Ra1c5 = (a[4]/mc5);
	
	Ra2c1 = (a2[0]/mc1);
	Ra2c2 = (a2[1]/mc2);
	Ra2c3 = (a2[2]/mc3);
	Ra2c4 = (a2[3]/mc4);
	Ra2c5 = (a2[4]/mc5);
	
	Ra3c1 = (a3[0]/mc1);
	Ra3c2 = (a3[1]/mc2);
	Ra3c3 = (a3[2]/mc3);
	Ra3c4 = (a3[3]/mc4);
	Ra3c5 = (a3[4]/mc5);
	
	// MATRIKS R * W
	RWa1c1 = Ra1c1*w[0];
	RWa1c2 = Ra1c2*w[1];
	RWa1c3 = Ra1c3*w[2];
	RWa1c4 = Ra1c4*w[3];
	RWa1c5 = Ra1c5*w[4];

	RWa2c1 = Ra2c1*w[0];
	RWa2c2 = Ra2c2*w[1];
	RWa2c3 = Ra2c3*w[2];
	RWa2c4 = Ra2c4*w[3];
	RWa2c5 = Ra2c5*w[4];
	
	RWa3c1 = Ra3c1*w[0];
	RWa3c2 = Ra3c2*w[1];
	RWa3c3 = Ra3c3*w[2];
	RWa3c4 = Ra3c4*w[3];
	RWa3c5 = Ra3c5*w[4];
	
	// PENJUMLAHAN HASIL R * W	
	ha1=RWa1c1+RWa1c2+RWa1c3+RWa1c4+RWa1c5;
	ha2=RWa2c1+RWa2c2+RWa2c3+RWa2c4+RWa2c5;
	ha3=RWa3c1+RWa3c2+RWa3c3+RWa3c4+RWa3c5;
		
	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	cout << a[0] <<" | "<<a[1]<<" | "<<a[2]<<" | "<<a[3]<<" | "<<a[4]<<endl;
	cout << a2[0] <<" | "<<a2[1]<<" | "<<a2[2]<<" | "<<a2[3]<<" | "<<a2[4]<<endl;
	cout << a3[0] <<" | "<<a3[1]<<" | "<<a3[2]<<" | "<<a3[3]<<" | "<<a3[4]<<endl;
	cout << endl;
	cout << "MATRIKS R :"<<endl;
	cout << Ra1c1 <<" | "<<Ra1c2<<" | "<<Ra1c3<<" | "<<Ra1c4<<" | "<<Ra1c5<<endl;
	cout << Ra2c1 <<" | "<<Ra2c2<<" | "<<Ra2c3<<" | "<<Ra2c4<<" | "<<Ra2c5<<endl;
	cout << Ra3c1 <<" | "<<Ra3c2<<" | "<<Ra3c3<<" | "<<Ra3c4<<" | "<<Ra3c5<<endl;
	cout << endl;
	cout << "BOBOT W :"<<endl;
	cout << w[0] <<" | "<<w[1]<<" | "<<w[2]<<" | "<<w[3]<<" | "<<w[4]<<endl;
	cout << endl;
	cout << "MATRIKS R * W :"<<endl;
	cout << RWa1c1 <<" | "<<RWa1c2<<" | "<<RWa1c3<<" | "<<RWa1c4<<" | "<<RWa1c5<<endl;
	cout << RWa2c1 <<" | "<<RWa2c2<<" | "<<RWa2c3<<" | "<<RWa2c4<<" | "<<RWa2c5<<endl;
	cout << RWa3c1 <<" | "<<RWa3c2<<" | "<<RWa3c3<<" | "<<RWa3c4<<" | "<<RWa3c5<<endl;
	cout << endl;
	cout << "HASIL AKHIR  :"<<endl;
	cout << "Nilai A1 : "<<ha1<<endl;
	cout << "Nilai A2 : "<<ha2<<endl;
	cout << "Nilai A3 : "<<ha3<<endl;
}

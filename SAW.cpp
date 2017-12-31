#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// DEKLARASI VARIABEL
	double a[3][5]={{4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2}};
		
	double w[5]={5,3,4,4,2};
	double ha1,ha2,ha3;
	
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);cout.setf(ios::showpoint);cout.precision(4);
			
	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<< a[i][j] <<" | ";
		}
		cout<<endl;
	}
	
	// MENAMPILKAN MATRIX R
	cout << endl;
	cout << "MATRIKS R :"<<endl;
	double mc[5];
	for(int i=0;i<5;i++){
		mc[i+1]=max(a[0][i],max(a[1][i],a[2][i]));
	}
	cout << endl;
	
	double Ra[3][5]={	{(a[0][0]/mc[1]),(a[0][1]/mc[2]),(a[0][2]/mc[3]),(a[0][3]/mc[4]),(a[0][4]/mc[5])}, 
						{(a[1][0]/mc[1]),(a[1][1]/mc[2]),(a[1][2]/mc[3]),(a[1][3]/mc[4]),(a[1][4]/mc[5])},
						{(a[2][0]/mc[1]),(a[2][1]/mc[2]),(a[2][2]/mc[3]),(a[2][3]/mc[4]),(a[2][4]/mc[5])} 
	};
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout << Ra[i][j]<< " | ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	// MENAMPILKAN NILAI W
	cout << "BOBOT W :"<<endl;
	for(int i=0;i<5;i++){
		cout<< w[i] <<" | ";
	}
	cout << endl;
	cout << endl;
	
	//MENAMPILKAN HASIL R*W
	cout << "MATRIKS R * W :"<<endl;
		double RWa[3][5];
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			RWa[i][j]=Ra[i][j]*w[j];
			cout<< RWa[i][j]<<" | ";
		}
		cout<<endl;
	}
	cout << endl;
	
	//Hasil Akhir
	cout << "HASIL AKHIR  :"<<endl;
	for(int i=0;i<3;i++){
		cout<<"Hasil "<<i+1<<" = "<<RWa[i][0]+RWa[i][1]+RWa[i][2]+RWa[i][3]+RWa[i][4]<<endl;	
	}
	cout<<endl;
}

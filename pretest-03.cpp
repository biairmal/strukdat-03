/*
Nama Program : Pretest-03
Nama		 : Bandana Irmal Abdillah
NPM			 : 140810180025
Tanggal		 : 12 Maret 2019
*/


#include <iostream>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n){
	cout << "Jumlah Mahasiswa : "; cin >> n;
}

void inputMhs(larikMhs& mhs, int n){
	cout << "Input data mahasiswa : "<<endl;
	for (int i=0; i<n; i++){
		cout << "Mahasiswa " << i+1 <<endl;
		cout << "NPM\t\t : "; cin >> mhs[i].npm;
		cout << "Nama\t\t : "; cin >> mhs[i].nama;
		cout << "IPK\t\t : "; cin >> mhs[i].ipk;		
	}
}

void cetakMhs(larikMhs mhs, int n){

	cout << "=====================================================" <<endl;
	cout << "No\tNPM\t\t\tNama\t\t\t\tIPK"<<endl;
	cout << "-----------------------------------------------------" <<endl;
	for(int i=0; i<n; i++){
		cout << i+1 << "\t" << mhs[i].npm << "\t\t\t" << mhs[i].nama << "\t\t\t\t" << mhs[i].ipk;
		cout << endl;
	}
	cout << "=====================================================" <<endl;
}
void sortNPM(larikMhs& mhs, int n){
		int posisi;
	for (int i=0; i<n-1; i++){
		posisi=i;
		for (int j=i+1; j<n; j++){
			if (mhs[posisi].npm<mhs[j].npm){
				posisi=j;
			}
		}
		swap (mhs[i],mhs[posisi]);
	}
}

main(){
	int n;
	larikMhs mhs;
	banyakData(n);
	inputMhs(mhs,n);
	sortNPM(mhs,n);
	cetakMhs(mhs,n);
}


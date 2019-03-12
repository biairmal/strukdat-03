/*
Nama	: Bandana Irmal Abdillah
NPM		: 140810180025
Kelas	: A
Tanggal	: 12 Maret 2019
*/

#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
	float panjang;
	float lebar;
}segiempat;

void input (segiempat *s){
	cout << "SEGIEMPAT" << endl;
	cout << "Panjang\t: "; cin >> s->panjang;
	cout << "Lebar\t: "; cin >> s->lebar;
}

float keliling(segiempat s){
	return(2*(s.panjang+s.lebar));
}

float luas(segiempat s){
	return(s.panjang*s.lebar);
}
float diagonal(segiempat s){
	return(sqrt(pow(s.panjang,2)+pow(s.lebar,2)));
}

void print(segiempat s){
	cout << "Keliling\t: " << keliling(s)<<endl;
	cout << "Luas\t\t: " << luas(s)<<endl;
	cout << "Panjang diagonal: " << diagonal(s)<<endl;
}
main(){
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	cout << endl;
	print(*sg);
}

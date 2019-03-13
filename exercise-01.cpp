/*
Nama : Ahmad Irfan Fadholi
NPM : 140810180034
Tgl : 13 Maret 2019
Deskripsi : Program menggunakan pointer untuk menghitung dan mengeluarkan outpu keliling,luas,diagonal segiempat */
#include <cmath>
#include <iostream>
using namespace std;


typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input (segiempat *s){
	cout<<"Input Panjang	: "; cin>>s->panjang;
	cout<<"Input lebar	: "; cin>>s->lebar;
}

float keliling(segiempat s){
	int keliling;
	keliling= 2*(s.panjang+s.lebar);
	return keliling;
}
float luas(segiempat s){
	float luas;
	luas=s.panjang*s.lebar;
	return luas;
}
float diagonal (segiempat s){
	float diagonal;
	diagonal=sqrt(s.panjang*s.panjang + s.lebar*s.lebar);
	return diagonal;	
}
void print (segiempat s){
	cout<<"Panjang		: "<<s.panjang<<endl;
	cout<<"Lebar		: "<<s.lebar<<endl;
	cout<<"Keliling	: "<<keliling(s)<<endl;
	cout<<"Luas		: "<<luas(s)<<endl;
	cout<<"Diagonal	: "<<diagonal(s);
}

int main(){
	segiempat	*sg;
	sg = new segiempat;
	input(sg);
	print(*sg);
}

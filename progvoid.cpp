#include <iostream>
using namespace std;

//prototype
void prosesbaca();
void prosestukar();
void prosestampil();

//variable global
int a,b,temp;

//program utama
int main(){
	     prosesbaca();
		 prosestukar();
		 prosestampil();
		 return 0;
		 
}

void prosesbaca(){
	    //proses membaca
		cout << "masukan nilai A : "; cin >> a;
		cout << "masukan nilai B : "; cin >> b;
		
}

void prosestukar(){
	    //proses tukar
		temp = b;
		b = a;
		a = temp;
}


void prosestampil(){
	    //proses tampil
		cout << "=========================" <<endl;
		cout << "Nilai A sekarang : " <<a<< endl;
		cout << "Nilai B sekarang : " <<b<< endl;
		return;
}
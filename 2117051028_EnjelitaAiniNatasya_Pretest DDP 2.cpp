#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	string nama;
	string goldar;
	float berat_badan;
	float tinggi_badan;
	float berat_badan_ideal;
	
	cout<< "nama = ";
	cin>> nama;
	cout<< "golongan darah = ";
	cin>> goldar;
	cout<< "berat badan = ";
	cin>> berat_badan;
	cout<< "tinggi badan = ";
	cin>> tinggi_badan;
	
	cout<< endl;
	berat_badan_ideal = tinggi_badan - 100 - ((tinggi_badan-100)*15/100);
	
	cout<< "nama = " << nama << endl;
	cout<< "golongan darah = " << goldar << endl;
	cout<< "berat badan = " << berat_badan << endl;
	cout<< "tinggi badan = " << tinggi_badan << endl;
	cout<< "berat badan ideal = " << berat_badan_ideal << endl;
	
}

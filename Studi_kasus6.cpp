#include <iostream>
using namespace std;

class Nilai {
  public:
    void input(){
    cout<<"PROGRAM INPUT NILAI"<<endl;
    cout<<"-------------------\n";
	cout<<"Masukkan nama dosen : ";cin>>a;
	cout<<"Masukkan kelas matakuliah : ";cin>>b;      
	cout<<"Masukan jumlah mahasiswa : "; cin>>n;
      for(i = 1; i <=n; i++){
        cout<<"Masukan nilai mahasiswa"<<"ke-"<<i<<" : "; cin>>nilai[i];
      }
    }

    float proses(){
      jumlah = 0;
      for(i = 1; i <= n; i++){
      	if ( i == 1){
      		min = nilai[i];
      		max = nilai[i];
		  }
        if (min > nilai[i] ) {
             min = nilai[i];
            }
        else if ( max < nilai[i]) {
            max = nilai[i];
        }
        jumlah += nilai[i];
        rata_rata = jumlah/n;
        }
        cout<<"\nNilai minimal = "<<min<<endl;
        cout<<"Nilai maksimal = "<<max<<endl;
        cout<<"Nilai rata_rata = "<<rata_rata<<endl;
   		return rata_rata;
      }
      
      void output(){
        cout<<"\n=============================\n";
        cout<<"Nama dosen:"<<a<<endl;
        cout<<"Nama matakuliah: "<<b<<endl;
        cout<<"Daftar nilai:"<<endl;
           for(i = 1; i <=n; i++){
             cout<<"Nilai ke-"<<i<<" = "<<nilai[i]<<endl;
           }
        cout<<"jumlah mahasiswa:"<<n;
        cout<<endl;
        cout<<"rata rata nilai mhs  :"<<rata_rata<<endl;
        cout<<"nilai minimal        :"<<min<<endl;
        cout<<"nilai maksimal       :"<<max <<endl   ;    
      }
  private:
  	int i, n, min, max;
    float nilai[50], jumlah, rata_rata;
    string a, b, c;
};

int main(){
  Nilai mahasiswa;
  mahasiswa.input();
  mahasiswa.proses();
  mahasiswa.output();
}

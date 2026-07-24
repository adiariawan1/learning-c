#include <iostream>

using std :: cin;
using std :: cout;

int main(){
    int a;
    cout <<"masukan jumlah segitiga\n";
    cin >> a;

    for(int baris = 0; baris < a; baris++){
        for(int cetak = a; cetak > baris; cetak--){
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
};
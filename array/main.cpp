#include <iostream>

using namespace std;

int jumlah(int a, int b){
    return a + b;
}

int kurang(int a, int b){
    return a - b;
}

int x[5];
int j, t, r;
//j : jumlah array
//t : total
//r : rata-rata
int main()
{
    //penjumlahan
    cout << "hasil dari 15 + 7 = " << jumlah(15,7) << endl;
    //pengurangan
    cout << "hasil dari 25 - 5 = " << kurang(25,5) << endl;

    for(int i=1; i <= 5; i++){
        cout << "Masukan angka ke-" << i << ": ";
        cin >> x[i];
        //total
        t = t + x[i];
    }
    //jumlah array
    j = sizeof(x)/sizeof(x[0]);
    //rata-rata
    r = t / j;
    cout << "Total = " << t << endl;
    cout << "Rata-rata = " << r << endl;
    return 0;
}

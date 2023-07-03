#include <iostream>
#include <iomanip>


struct sepeda {
    std::string merk;
    std::string type;
    int tahun_pembuatan;
    float harga;
};

int main(){

    sepeda *sepeda_ptr = nullptr;
    sepeda sepeda_x;
    sepeda_ptr = &sepeda_x;

    (*sepeda_ptr).merk = "United";
    (*sepeda_ptr).type = "Sepeda Gunung";
    (*sepeda_ptr).tahun_pembuatan = 2013;
    (*sepeda_ptr).harga = 1500000;

    std::cout << "Merk : " << (*sepeda_ptr).merk << std::endl;
    std::cout << "Type : " << (*sepeda_ptr).type << std::endl;
    std::cout << "Tahun : " << (*sepeda_ptr).tahun_pembuatan << std::endl;
    std::cout << std::fixed << std::setprecision(0) << "Harga : " << (*sepeda_ptr).harga << std::endl;

    return 0;
}

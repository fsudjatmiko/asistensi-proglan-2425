#include <iostream>
#include <string>

class Karakter {
protected:
    std::string nama;
    std::string elemen;
public:
    ...
};

class BintangEmpat : virtual public Karakter {
protected:
    int rarity;
public:
    ...
};

class BintangLima : virtual public Karakter {
protected:
    int rarity;
public:
    ...
};

class WishResult : public BintangEmpat, public BintangLima {
    std::string idWish;
    int primogem;
    std::string status;
    int rarityFinal;
public:
    ...
};

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string nama, elemen, idWish, status;
        int rarity, primogem;
        std::cin >> nama >> elemen >> rarity >> idWish >> primogem >> status;
        if (rarity != 4 && rarity != 5) {
            std::cout << "Input rarity hanya boleh 4 atau 5!" << std::endl;
            continue;
        }
        WishResult w(nama, elemen, rarity, idWish, primogem, status);
        w.printInfo();
    }
    return 0;
}

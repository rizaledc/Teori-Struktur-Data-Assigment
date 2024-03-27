#include <iostream> //untuk input atau output standar di C++
#include <algorithm> //untuk menggunakan algoritma di codingan

bool cekDuplikat(int arr[], int panjangArr) { //menginisiasi arr dan panjangArr
    std::sort(arr, arr + panjangArr); // mengurutkan array
    for(int i = 1; i < panjangArr; i++) { 
        //dimulai dari elemen kedua i++ untuk dibandingkan dengan elemen-elemen sebelumnya
        if(arr[i] == arr[i - 1]) { //ketika ada yang sama maka masuknya kesini
            return true; 
        }
    }
    return false; //masuk kesini kalau tidak ada yang sama
}

int main() { //fungsi utama program yang akan dieksekusi
    int arrA[] = {2, 1, 3, 4}; //array berisikan 4 angka atau elemen
    int panjangArrA = 4; //panjang arraynya 4 elemen
    if(cekDuplikat(arrA, panjangArrA)){ //inisiasi cekDuplikat demgan parameternya , parameter itu inputan dalam sebuah fungsi
        std::cout << "Ada angka duplikat di array.\n";
    } else {
        std::cout << "Tidak ada duplikat di array.\n";
    }
    return 0;
}

//Rizal Wahyu Pratama
//2311110029
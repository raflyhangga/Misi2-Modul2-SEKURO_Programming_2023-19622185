#include <bits/stdc++.h>
#include <stdlib.h>
#include <fstream>
#include <vector>
using namespace std;

// Variabel Global
vector<int> harga = {}; // Vektor digunakan untuk menyimpan data pesanan.
vector<int> banyak = {};
vector<string> barang = {};
vector<string> name = {};

// Bagian Menu
int menu(string nama){
    int opsi;

    // Interface Menu
    system("CLS");
    cout<<("================== Menu ==================")<<endl;
    cout<<("Selamat datang ")<<nama<<("!")<<endl<<endl;
    cout<<("[1] Makanan")<<endl;
    cout<<("[2] Minuman")<<endl;
    cout<<("[3] <-- Keluar")<<endl<<endl;

    cout<<("Mau apa hari ini? : ");
    cin>>opsi;

    // Jika memilih Opsi Makanan
    if (opsi==1){
        system("CLS");

        // Set Variabel & Harga;
        int opsi,qty,jumlah,a,b,c,d,e,f,g,h,i,j,k;
        jumlah  =   0;
        qty     =   0;
        a       =   20000;
        b       =   5000;
        c       =   10000;
        d       =   27000;
        e       =   5000;
        f       =   2000;
        g       =   1500;
        h       =   2000;
        i       =   5000;
        j       =   5000;
        k       =   5000;

        //Interface Opsi Makanan
        cout<<("================== Menu Makanan ==================")<<endl;
        cout<<("[1] Rendang\t \tRp")<<a<<endl;    
        cout<<("[2] Ati\t \t\tRp")<<b<<endl;    
        cout<<("[3] Ayam\t \tRp")<<c<<endl;    
        cout<<("[4] Bebek\t \tRp")<<d<<endl;    
        cout<<("[5] Terong\t \tRp")<<e<<endl;    
        cout<<("[6] Tahu\t \tRp")<<f<<endl;    
        cout<<("[7] Tempe\t \tRp")<<g<<endl;    
        cout<<("[8] Bakwan\t \tRp")<<h<<endl;    
        cout<<("[9] Telur\t \tRp")<<i<<endl;    
        cout<<("[10] Cumi\t \tRp")<<j<<endl;    
        cout<<("[11] Ampela\t \tRp")<<k<<endl<<endl;
        cout<<("<--- Keluar (Pilih ID diluar indeks.)")<<endl;
        cout<<("Mau makan apa hari ini? : ");
        cin>>opsi;

        if(opsi==1){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = a*qty;
            harga.push_back(jumlah);        //Memasukkan data barang kealam vektor
            barang.push_back("Rendang");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }
        else if (opsi==2){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = b*qty;
            harga.push_back(jumlah);        
            barang.push_back("Ati");
            name.push_back(nama);
            banyak.push_back(qty);            
            menu(nama);
            
        }
        else if (opsi==3){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = c*qty;
            harga.push_back(jumlah);
            barang.push_back("Ayam");
            banyak.push_back(qty);
            name.push_back(nama);
            menu(nama);
        }   
        else if (opsi==4){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = d*qty;
            harga.push_back(jumlah);
            barang.push_back("Bebek");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==5){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = e*qty;
            harga.push_back(jumlah);
            barang.push_back("Terong");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==6){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = f*qty;
            harga.push_back(jumlah);
            barang.push_back("Tahu");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==7){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = g*qty;
            harga.push_back(jumlah);
            barang.push_back("Tempe");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==8){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah =h*qty;
            harga.push_back(jumlah);
            barang.push_back("Bakwan");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==9){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = i*qty;
            harga.push_back(jumlah);
            barang.push_back("Telur");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==10){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = j*qty;
            harga.push_back(jumlah);
            barang.push_back("Cumi");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==11){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = k*qty;
            harga.push_back(jumlah);
            barang.push_back("Ampela");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else{ // Apabila memilih diluar ID makanan, kembali ke interface menu.
            menu(nama);
        }
        return 0;
    }

    // Jika memilih Opsi Minuman
    else if(opsi==2){
        system("CLS");

        // Set Variabel & Harga
        int opsi,qty,jumlah,a,b,c,d,e,f,g,h,i,j;
        jumlah  =   0;
        qty     =   0;
        a       =   5000;
        b       =   3000;
        c       =   2000;
        d       =   4000;
        e       =   7000;
        f       =   9000;
        g       =   7000;
        h       =   6000;
        i       =   6000;
        j       =   12000;

        // Interface Opsi Minuman
        cout<<("================== Menu Makanan ==================")<<endl;
        cout<<("[1] Aer Akooa\t \tRp")<<a<<endl;    
        cout<<("[2] The Minerale\tRp")<<b<<endl;    
        cout<<("[3] HAAS\t \tRp")<<c<<endl;    
        cout<<("[4] Teh Glukosa\t \tRp")<<d<<endl;    
        cout<<("[5] Teh Buah\t \tRp")<<e<<endl;    
        cout<<("[6] Teh Soda\t \tRp")<<f<<endl;    
        cout<<("[7] Jerook\t \tRp")<<g<<endl;    
        cout<<("[8] Teh Dorong\t \tRp")<<h<<endl;    
        cout<<("[9] Siroop\t \tRp")<<i<<endl;    
        cout<<("[10] Susu Goyang\tRp")<<j<<endl<<endl;
        cout<<("<--- Keluar (Pilih ID diluar indeks.)")<<endl;
        cout<<("Mau minum apa hari ini? : ");
        cin>>opsi;

        if(opsi==1){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = a*qty;
            harga.push_back(jumlah);
            barang.push_back("Aer Akooa");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }
        else if (opsi==2){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = b*qty;
            harga.push_back(jumlah);
            barang.push_back("The Minerale");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }
        else if (opsi==3){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = c*qty;
            harga.push_back(jumlah);
            barang.push_back("HAAS");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==4){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = d*qty;
            harga.push_back(jumlah);
            barang.push_back("Teh Glukosa");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==5){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = e*qty;
            harga.push_back(jumlah);
            barang.push_back("Teh Buah");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==6){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = f*qty;
            harga.push_back(jumlah);
            barang.push_back("Teh Soda");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==7){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = g*qty;
            harga.push_back(jumlah);
            barang.push_back("Jerook");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==8){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = h*qty;
            harga.push_back(jumlah);
            barang.push_back("Teh Dorong");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==9){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = i*qty;
            harga.push_back(jumlah);
            barang.push_back("Siroop");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else if (opsi==10){
            cout<<("Mau berapa? : ");
            cin>>qty;
            jumlah = j*qty;
            harga.push_back(jumlah);
            barang.push_back("Susu Goyang");
            name.push_back(nama);
            banyak.push_back(qty);
            menu(nama);
        }   
        else{
            menu(nama);
        }
        return 0;
    }

    // Kembali ke landing Page
    else{ 
        return 0;
    }
}

// Bagian landing page
void landingpage(){
    
    system("CLS");

    //Login Page
    int opsiutama;
    string nama;

    // Interface Login Page
    cout<<("================== Landing Page ==================")<<endl;
    cout<<("Welcome to POSekuro 1.0, Kang Roger!")<<endl<<endl;
    cout<<("[1] Buka!")<<endl;
    cout<<("[2] Tutup :(")<<endl<<endl;
    cout<<("Kang Roger mau buka atau tutup hari ini? (Masukkan Indeksnya Saja!) : ");
    cin>>opsiutama;  

    // Membuka Toko
    if (opsiutama==1){
        system("CLS");
        cout<<("================== Landing Page ==================")<<endl;
        cout<<("Welcome to Warung Kang Roger, Pelanggan!")<<endl;
        cout<<("Boleh kenalan?")<<endl<<endl;
        cout<<("Masukkan nama: ");
        cin>>nama;
        menu(nama);
        landingpage(); 
    }

    // Menutup Toko
    else {
        if (harga.empty()){ // Jika tidak ada penjualan
            string lanjut;
            lanjut = " ";
            system("CLS");
            cout<<"=== Tidak ada pemasukan :( ==="<<endl<<endl;

            cout<<("Ingin lanjut menggunakan POSekuro 1.0? (Y/N): ");
            cin>>lanjut;
            if (lanjut == "y" || lanjut == "Y"){
                landingpage();
            }
            else{
                system("CLS");
                cout<<("Terimakasih telah menggunakan POSekuro 1.0, Kang Roger!")<<endl<<endl;
                cout<<"Copyright 2023. Cakru-Tachi"<<endl<<endl;
            }
            
        }
        else{ // Jika ada penjualan
            string lanjut;
            lanjut = " ";
            int totalharga;
            totalharga =0;
            system("CLS");

            // Interface data pengeluaran
            cout<<"Total Data Pengeluaran: "<<endl<<endl;
            for(int i = 0 ;i < harga.size();i++){
                cout<<name[i]<<"\t \t("<<banyak[i]<<")"<< barang[i] <<endl<< "Harga = Rp"<<harga[i]<<endl<<("-------------------------")<<endl;
                totalharga += harga[i];
            }
            cout<<("=========================================================")<<endl;
            cout<<("Total Penjualan: \tRp")<<totalharga<<endl<<endl;


            cout<<("Ingin lanjut menggunakan POSekuro 1.0? (Y/N): ");
            cin>>lanjut;
            if (lanjut == "y" || lanjut == "Y"){
                landingpage();
            }
            else{
                system("CLS");
                cout<<("Terimakasih telah menggunakan POSekuro 1.0, Kang Roger!")<<endl<<endl;
                cout<<"Copyright 2023. Cakru-Tachi"<<endl<<endl;
            }

        }
    }
}

// Fungsi utama
int main(){
    landingpage();
    return 0; 
}


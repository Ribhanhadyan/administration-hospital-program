#include<iostream>
#include<windows.h>
#include<iomanip> //untuk mengatur tabel
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h> //untuk fungsi random
#include<time.h>
using namespace std;
struct database_obat{
    string nama_obat;
    int harga_obat;
    //data pasien
    string nama_obat_pasien[100];  // bikin menu baru
    int harga_obat_pasien;
};
typedef database_obat dtbs_obt;
struct database_dokter{
    string spesialis;
    string nama_dokter[100];
    int harga_dokter;
    //data yang berubah-ubah
    string spesialis2;
    string nama_dokter2[100];
    int harga_dokter2;
    //data pasien
    string dokter_pasien;
    int harga_dokter_pasien;
};
typedef database_dokter dtbs_dr;
struct ulang{
    char repeat_pasien;
    char repeat_random;
    char repeat_staff;
    char repeat_menu_utama;
    char username[1000],pasword[1000];
    char rawatinap;
};
typedef ulang ulg;
struct database_ruangan{
    int no_ruangan;
    string nama_ruangan;
    string fasilitas[100];
    string kapasitas;
    int no_kamar[100];
    int harga_ruangan;
    //data yang akan berubah rubah
    string nama_ruangan2;
    int no_kamar2[100];
    int harga_ruangan2;
    //data pasien
    int no_kamar_pasien;
    int harga_kamar_pasien;
};
typedef database_ruangan dtbs_rg;
struct database{ //untuk menampung data pasien dari input perjanjian
    char nama[1000];
    char alamat[1000];
    char* tanggal;
    string tanggal_pasien;
    int umur,pilihan_dokter,pembayaran,a,b,random,no_pasien,total_harga_pasien,total_harga_pasien2;
    //nested struct
    database_ruangan rawat_inap;
    database_obat data_obat;
    database_dokter data_dokter;
};
typedef database record[100];
record dtbs;
void obat(record dtbs){
    dtbs[0].data_obat.nama_obat="Alkohol 70%";dtbs[1].data_obat.nama_obat="Antimo Dewasa";dtbs[2].data_obat.nama_obat="Antimo Kids";dtbs[3].data_obat.nama_obat="Balpirik Merah";dtbs[4].data_obat.nama_obat="Balsem Geliga 10 gr";dtbs[5].data_obat.nama_obat="Balsem Geliga 20 gr";dtbs[6].data_obat.nama_obat="Balsem Lang 10 gr";dtbs[7].data_obat.nama_obat="Balsem Lang 20 gr";dtbs[8].data_obat.nama_obat="Betadine";;dtbs[9].data_obat.nama_obat="Biogesic";dtbs[10].data_obat.nama_obat="Bodrex";dtbs[11].data_obat.nama_obat="Bodrex Extra";dtbs[12].data_obat.nama_obat="Bodrex F/B (1 ktn=48 pak)";dtbs[13].data_obat.nama_obat="Bodrex Migra";dtbs[14].data_obat.nama_obat="Bodrexin";dtbs[15].data_obat.nama_obat="CTM";dtbs[16].data_obat.nama_obat="Decolgen (1 ktn=48 pak)";dtbs[17].data_obat.nama_obat="Decolsin";dtbs[18].data_obat.nama_obat="Dettol Antiseptic Cair 50 ml";dtbs[19].data_obat.nama_obat="Diapet";dtbs[20].data_obat.nama_obat="Entrostop Anak";dtbs[21].data_obat.nama_obat="Entrostop Dewasa";dtbs[22].data_obat.nama_obat="Enervon-C";dtbs[23].data_obat.nama_obat="Fatigon Biasa";dtbs[24].data_obat.nama_obat="Fatigon Spirit";dtbs[25].data_obat.nama_obat="GPU 30 ml";dtbs[26].data_obat.nama_obat="GPU 60 ml (1 ktn=6 pak)";dtbs[27].data_obat.nama_obat="Hansaplast Box 100";dtbs[28].data_obat.nama_obat="Hemaviton Action";dtbs[29].data_obat.nama_obat="Hemaviton Stamina Plus";dtbs[30].data_obat.nama_obat="Insto";dtbs[31].data_obat.nama_obat="Intunal";dtbs[32].data_obat.nama_obat="Inza";dtbs[33].data_obat.nama_obat="Inzana";dtbs[34].data_obat.nama_obat="Komix Dewasa";dtbs[35].data_obat.nama_obat="Komix Kids";dtbs[36].data_obat.nama_obat="Konidin";dtbs[37].data_obat.nama_obat="Koyo Cabe";dtbs[38].data_obat.nama_obat="Koyo Hansaplast";dtbs[39].data_obat.nama_obat="Lacomin";dtbs[40].data_obat.nama_obat="Laserin";dtbs[41].data_obat.nama_obat="Laxing";dtbs[42].data_obat.nama_obat="Mextril";dtbs[43].data_obat.nama_obat="Napacin";dtbs[44].data_obat.nama_obat="Neo Rheumacyl";dtbs[45].data_obat.nama_obat="Paracetamol";dtbs[46].data_obat.nama_obat="Procold (1 ktn=48 pak)";dtbs[47].data_obat.nama_obat="Promag Tablet";dtbs[48].data_obat.nama_obat="Rivanol";dtbs[49].data_obat.nama_obat="Visine";dtbs[50].data_obat.nama_obat="Rohto";
    dtbs[0].data_obat.harga_obat=6000;dtbs[1].data_obat.harga_obat=4200;dtbs[2].data_obat.harga_obat=13000;dtbs[3].data_obat.harga_obat=10100;dtbs[4].data_obat.harga_obat=4500;dtbs[5].data_obat.harga_obat=8000;dtbs[6].data_obat.harga_obat=4500;dtbs[7].data_obat.harga_obat=8000;dtbs[8].data_obat.harga_obat=1500;dtbs[9].data_obat.harga_obat=2000;dtbs[10].data_obat.harga_obat=6800;dtbs[11].data_obat.harga_obat=2000;dtbs[12].data_obat.harga_obat=1800;dtbs[13].data_obat.harga_obat=2000;dtbs[14].data_obat.harga_obat=3600;dtbs[15].data_obat.harga_obat=1000;dtbs[16].data_obat.harga_obat=2100;dtbs[17].data_obat.harga_obat=2700;dtbs[18].data_obat.harga_obat=6100;dtbs[19].data_obat.harga_obat=2200;dtbs[20].data_obat.harga_obat=11500;dtbs[21].data_obat.harga_obat=12700;dtbs[22].data_obat.harga_obat=12700;dtbs[23].data_obat.harga_obat=3600;dtbs[24].data_obat.harga_obat=5600;dtbs[25].data_obat.harga_obat=8200;dtbs[26].data_obat.harga_obat=14100;dtbs[27].data_obat.harga_obat=5800;dtbs[28].data_obat.harga_obat=5700;dtbs[29].data_obat.harga_obat=11700;dtbs[30].data_obat.harga_obat=3200;dtbs[31].data_obat.harga_obat=2200;dtbs[32].data_obat.harga_obat=1100;dtbs[33].data_obat.harga_obat=9000;dtbs[34].data_obat.harga_obat=10200;dtbs[35].data_obat.harga_obat=2000;dtbs[36].data_obat.harga_obat=9000;dtbs[37].data_obat.harga_obat=1900;dtbs[38].data_obat.harga_obat=18000;dtbs[39].data_obat.harga_obat=2800;dtbs[40].data_obat.harga_obat=2100;dtbs[41].data_obat.harga_obat=10400;dtbs[42].data_obat.harga_obat=14000;dtbs[43].data_obat.harga_obat=5200;dtbs[44].data_obat.harga_obat=25500;dtbs[45].data_obat.harga_obat=44600;dtbs[46].data_obat.harga_obat=15200;dtbs[47].data_obat.harga_obat=2200;dtbs[48].data_obat.harga_obat=60700;dtbs[49].data_obat.harga_obat=13700;
}
void cetak_obat(record dtbs){
    cout<<"============================================="<<endl;
    cout << "No   Nama Obat                     Harga   "<<endl;
    cout<<"=============================================\n"<<endl;
    for(int i=0;i<49;i++){
        cout << setiosflags(ios::left)<<setw(5)<<i+1;
        cout << setiosflags(ios::left)<<setw(30)<<dtbs[i].data_obat.nama_obat;
        cout << setiosflags(ios::left)<<setw(0)<<"Rp."<<dtbs[i].data_obat.harga_obat;
        cout << endl;
    }
}
void dokter(record dtbs){
    //dokter 1
    dtbs[1].data_dokter.spesialis="Dokter spesialis penyakit dalam";
    dtbs[1].data_dokter.nama_dokter[1]="dr. Clara luviant Sp.PD";dtbs[1].data_dokter.nama_dokter[2]="dr. Lobution Vlore Sp.Pd";
    dtbs[1].data_dokter.harga_dokter=350000;
    //dokter 2
    dtbs[2].data_dokter.spesialis="spesialis anak";
    dtbs[2].data_dokter.nama_dokter[1]="dr. Balen Yupiozi Sp.A";dtbs[2].data_dokter.nama_dokter[2]="dr. Ferragamo jules Sp.A";dtbs[2].data_dokter.nama_dokter[3]="dr. Salvatore kymino Sp.A";
    dtbs[2].data_dokter.harga_dokter=350000;
    //dokter 3
    dtbs[3].data_dokter.spesialis="spesialis saraf";
    dtbs[3].data_dokter.nama_dokter[1]="dr. Valentino diasty Sp.N";
    dtbs[3].data_dokter.harga_dokter=350000;
    //dokter 4
    dtbs[4].data_dokter.spesialis="spesialis kandungan dan ginelologi";
    dtbs[4].data_dokter.nama_dokter[1]="dr. Celine mixue Sp.OG";dtbs[4].data_dokter.nama_dokter[2]="dr. Diorey ceria Sp.OG";dtbs[4].data_dokter.nama_dokter[3]="dr. Chaneliy sopya Sp.OG";
    dtbs[4].data_dokter.harga_dokter=400000;
    //dokter 5
    dtbs[5].data_dokter.spesialis="spesialis kulit dan kelamin";
    dtbs[5].data_dokter.nama_dokter[1]="dr. Jacquem Cixly Sp.KK";
    dtbs[5].data_dokter.harga_dokter=250000;
    //dokter 6
    dtbs[6].data_dokter.spesialis="spesialis THT";
    dtbs[6].data_dokter.nama_dokter[1]="dr. Fendily Simon Sp.THT";dtbs[6].data_dokter.nama_dokter[2]="dr. Saint Sp.THT";
    dtbs[6].data_dokter.harga_dokter=350000;
    //dokter 7
    dtbs[7].data_dokter.spesialis="dokter gigi";
    dtbs[7].data_dokter.nama_dokter[1]="drg. Laurent ";dtbs[7].data_dokter.nama_dokter[2]="drg. Karl Laferyo";
    dtbs[7].data_dokter.harga_dokter=350000;

    if(dtbs[4].a+dtbs[5].a==0){for(int i=0;i<7;i++){
        dtbs[i].data_dokter.spesialis2=dtbs[i+1].data_dokter.spesialis;
        for(int j=0;j<2;j++){
            dtbs[i].data_dokter.nama_dokter2[j]=dtbs[i+1].data_dokter.nama_dokter[j+1];
        }
        dtbs[i].data_dokter.harga_dokter2=dtbs[i+1].data_dokter.harga_dokter;}}
    else {    for(int i=dtbs[1].pilihan_dokter-1;i<=dtbs[1].pilihan_dokter-1;i++){
        for(int l=0;l<10;l++){
            dtbs[i].data_dokter.nama_dokter2[l]=dtbs[i].data_dokter.nama_dokter2[l+1];
        }}}
}
void cetak_dokter(record dtbs){
    cout << "--------------------------------------------------------------------------------------"<<endl;
    cout << "No    Spesialis                               Harga         Nama Dokter"<<endl;
    cout << "--------------------------------------------------------------------------------------"<<endl;
    for(int i=1;i<8;i++){
        cout << setiosflags(ios::left)<<setw(5)<<i;
        cout << setiosflags(ios::left)<<setw(36)<<dtbs[i].data_dokter.spesialis;
        cout << setiosflags(ios::left)<<setw(0)<<"Rp."<<setw(10)<<dtbs[i].data_dokter.harga_dokter;
        for(int j=1;j<3;j++){
            if(j==1){cout << setiosflags(ios::left)<<setw(2)<<dtbs[i].data_dokter.nama_dokter[j];cout << endl;}
            else {
                cout << setiosflags(ios::left)<<setw(54)<< "";
                cout << setiosflags(ios::left)<<setw(0)<<dtbs[i].data_dokter.nama_dokter[j]<< endl;
            }
        }
    }
}
void cetak_dokter_sederhana(record dtbs){
    cout << "-----------------------------------------------------------------------------"<<endl;
    cout << "No    Spesialis                           Harga           Nama Dokter"<<endl;
    cout << "------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<7;i++){
        cout << setiosflags(ios::left)<<setw(5)<<i+1;
        cout << setiosflags(ios::left)<<setw(36)<<dtbs[i].data_dokter.spesialis2;
        cout << setiosflags(ios::left)<<setw(0)<<"Rp."<<setw(10)<<dtbs[i].data_dokter.harga_dokter2;
        for(int j=0;j<2;j++){
            if(j==0){cout << setiosflags(ios::left)<<setw(2)<<dtbs[i].data_dokter.nama_dokter2[j];cout << endl;}
            else {
                cout << setiosflags(ios::left)<<setw(54)<< "";
                cout << setiosflags(ios::left)<<setw(0)<<dtbs[i].data_dokter.nama_dokter2[j]<< endl;
            }
        }
    }
}
void ruangan(record dtbs){
    //Ruangan 1
    dtbs[1].rawat_inap.no_ruangan=1;
    dtbs[1].rawat_inap.nama_ruangan="Suite Room (Chrysanthemums)-Lantai VI";
    dtbs[1].rawat_inap.fasilitas[1]="AC";dtbs[1].rawat_inap.fasilitas[2]="1 Bed";dtbs[1].rawat_inap.fasilitas[3]="1 Kamar mandi dengan air panas dan dingin";dtbs[1].rawat_inap.fasilitas[4]="Bedside cabinet";dtbs[1].rawat_inap.fasilitas[5]="Kulkas";dtbs[1].rawat_inap.fasilitas[6]="Kursi Tunggu";dtbs[1].rawat_inap.fasilitas[7]="Overbed Table";dtbs[1].rawat_inap.fasilitas[8]="Meja TV";dtbs[1].rawat_inap.fasilitas[9]="Lemari pakaian";dtbs[1].rawat_inap.fasilitas[10]="Dispenser";dtbs[1].rawat_inap.fasilitas[11]="Meja";dtbs[1].rawat_inap.fasilitas[12]="Sofabed";dtbs[1].rawat_inap.fasilitas[13]="Smart TV 72\"";dtbs[1].rawat_inap.fasilitas[14]="Bed Penunggu";dtbs[1].rawat_inap.fasilitas[15]="Telepon";dtbs[1].rawat_inap.fasilitas[16]="Ruang keluarga";dtbs[1].rawat_inap.fasilitas[17]="1 Set meja makan";
    dtbs[1].rawat_inap.kapasitas= "terdapat 5 Kamar";
    dtbs[1].rawat_inap.no_kamar[1]=601;dtbs[1].rawat_inap.no_kamar[2]=602;dtbs[1].rawat_inap.no_kamar[3]=603;dtbs[1].rawat_inap.no_kamar[4]=604;dtbs[1].rawat_inap.no_kamar[5]=605;
    dtbs[1].rawat_inap.harga_ruangan=3500000;
    //Ruangan 2
    dtbs[2].rawat_inap.no_ruangan=2;
    dtbs[2].rawat_inap.nama_ruangan="VVIP Room (Peonies)-Lantai V";
    dtbs[2].rawat_inap.fasilitas[1]="AC";dtbs[2].rawat_inap.fasilitas[2]="1 Bed";dtbs[2].rawat_inap.fasilitas[3]="1 Kamar mandi dengan air panas dan dingin";dtbs[2].rawat_inap.fasilitas[4]="Bedside cabinet";dtbs[2].rawat_inap.fasilitas[5]="Kulkas";dtbs[2].rawat_inap.fasilitas[6]="Kursi Tunggu";dtbs[2].rawat_inap.fasilitas[7]="Overbed Table";dtbs[2].rawat_inap.fasilitas[8]="Meja TV";dtbs[2].rawat_inap.fasilitas[9]="Lemari pakaian";dtbs[2].rawat_inap.fasilitas[10]="Dispenser";dtbs[2].rawat_inap.fasilitas[11]="Meja";dtbs[2].rawat_inap.fasilitas[12]="Sofabed";dtbs[2].rawat_inap.fasilitas[13]="Smart TV 32\"";dtbs[2].rawat_inap.fasilitas[14]="Bed Penunggu";dtbs[2].rawat_inap.fasilitas[15]="Telepon";dtbs[2].rawat_inap.fasilitas[16]="Ruang keluarga";dtbs[2].rawat_inap.fasilitas[17]="1 Set meja makan";
    dtbs[2].rawat_inap.kapasitas= "terdapat 7 Kamar";
    dtbs[2].rawat_inap.no_kamar[1]=501;dtbs[2].rawat_inap.no_kamar[2]=502;dtbs[2].rawat_inap.no_kamar[3]=503;dtbs[2].rawat_inap.no_kamar[4]=504;dtbs[2].rawat_inap.no_kamar[5]=505;dtbs[2].rawat_inap.no_kamar[6]=506;dtbs[2].rawat_inap.no_kamar[7]=507;
    dtbs[2].rawat_inap.harga_ruangan=2000000;
    //Ruangan 3
    dtbs[3].rawat_inap.no_ruangan=3;
    dtbs[3].rawat_inap.nama_ruangan="VIP Room (Orchids)-Lantai IV";
    dtbs[3].rawat_inap.fasilitas[1]="AC";dtbs[3].rawat_inap.fasilitas[2]="1 Bed";dtbs[3].rawat_inap.fasilitas[3]="1 Kamar mandi dengan air panas dan dingin";dtbs[3].rawat_inap.fasilitas[4]="Bedside cabinet";dtbs[3].rawat_inap.fasilitas[5]="Kulkas";dtbs[3].rawat_inap.fasilitas[6]="Kursi Tunggu";dtbs[3].rawat_inap.fasilitas[7]="Lemari pakaian";dtbs[3].rawat_inap.fasilitas[8]="Dispenser";dtbs[3].rawat_inap.fasilitas[9]="Meja";dtbs[3].rawat_inap.fasilitas[10]="Sofa";dtbs[3].rawat_inap.fasilitas[11]="1 Buah LCD 32\"";dtbs[3].rawat_inap.fasilitas[12]="Bed Penunggu";dtbs[3].rawat_inap.fasilitas[13]="Telepon";
    dtbs[3].rawat_inap.kapasitas= "terdapat 10 Kamar";
    dtbs[3].rawat_inap.no_kamar[1]=401;dtbs[3].rawat_inap.no_kamar[2]=402;dtbs[3].rawat_inap.no_kamar[3]=403;dtbs[3].rawat_inap.no_kamar[4]=404;dtbs[3].rawat_inap.no_kamar[5]=405;dtbs[3].rawat_inap.no_kamar[6]=406;dtbs[3].rawat_inap.no_kamar[7]=407;dtbs[3].rawat_inap.no_kamar[8]=408;dtbs[3].rawat_inap.no_kamar[9]=409;dtbs[3].rawat_inap.no_kamar[10]=410;
    dtbs[3].rawat_inap.harga_ruangan=800000;
    //Ruangan 4
    dtbs[4].rawat_inap.no_ruangan=4;
    dtbs[4].rawat_inap.nama_ruangan="Class 1 (Camelia)-Lantai III";
    dtbs[4].rawat_inap.fasilitas[1]="AC";dtbs[4].rawat_inap.fasilitas[2]="2 Bed";dtbs[4].rawat_inap.fasilitas[3]="1 Kamar mandi dengan air panas & dingin ";dtbs[4].rawat_inap.fasilitas[4]="2 Buah Bedside Cabinet";dtbs[4].rawat_inap.fasilitas[5]="2 Kursi tunggu";dtbs[4].rawat_inap.fasilitas[6]="Overbed Table";dtbs[4].rawat_inap.fasilitas[7]="2 buah TV";
    dtbs[4].rawat_inap.kapasitas= "terdapat 15 Kamar";
    dtbs[4].rawat_inap.no_kamar[1]=301;dtbs[4].rawat_inap.no_kamar[2]=302;dtbs[4].rawat_inap.no_kamar[3]=303;dtbs[4].rawat_inap.no_kamar[4]=304;dtbs[4].rawat_inap.no_kamar[5]=305;dtbs[4].rawat_inap.no_kamar[6]=306;dtbs[4].rawat_inap.no_kamar[7]=307;dtbs[4].rawat_inap.no_kamar[8]=308;dtbs[4].rawat_inap.no_kamar[9]=309;dtbs[4].rawat_inap.no_kamar[10]=310;dtbs[4].rawat_inap.no_kamar[11]=311;dtbs[4].rawat_inap.no_kamar[12]=312;dtbs[4].rawat_inap.no_kamar[13]=313;dtbs[4].rawat_inap.no_kamar[14]=314;dtbs[4].rawat_inap.no_kamar[15]=315;
    dtbs[4].rawat_inap.harga_ruangan=500000;
    //Ruangan 5
    dtbs[5].rawat_inap.no_ruangan=5;
    dtbs[5].rawat_inap.nama_ruangan="Class 2 (Bougenville)-Lantai III";
    dtbs[5].rawat_inap.fasilitas[1]="AC";dtbs[5].rawat_inap.fasilitas[2]="4 Bed";dtbs[5].rawat_inap.fasilitas[3]="2 Kamar mandi dengan air panas & dingin ";dtbs[5].rawat_inap.fasilitas[4]="4 Buah Bedside Cabinet";dtbs[5].rawat_inap.fasilitas[5]="4 Kursi tunggu";dtbs[5].rawat_inap.fasilitas[6]="Overbed Table";
    dtbs[5].rawat_inap.kapasitas= "terdapat 15 Kamar";
    dtbs[5].rawat_inap.no_kamar[1]=316;dtbs[5].rawat_inap.no_kamar[2]=317;dtbs[5].rawat_inap.no_kamar[3]=318;dtbs[5].rawat_inap.no_kamar[4]=319;dtbs[5].rawat_inap.no_kamar[5]=320;dtbs[5].rawat_inap.no_kamar[6]=321;dtbs[5].rawat_inap.no_kamar[7]=322;dtbs[5].rawat_inap.no_kamar[8]=323;dtbs[5].rawat_inap.no_kamar[9]=324;dtbs[5].rawat_inap.no_kamar[10]=325;dtbs[5].rawat_inap.no_kamar[11]=326;dtbs[5].rawat_inap.no_kamar[12]=327;dtbs[5].rawat_inap.no_kamar[13]=328;dtbs[5].rawat_inap.no_kamar[14]=329;dtbs[5].rawat_inap.no_kamar[15]=330;
    dtbs[5].rawat_inap.harga_ruangan=250000;
    //Ruangan 6
    dtbs[6].rawat_inap.no_ruangan=6;
    dtbs[6].rawat_inap.nama_ruangan="Class 3 (Gardenia)-Lantai II";
    dtbs[6].rawat_inap.fasilitas[1]="AC";dtbs[6].rawat_inap.fasilitas[2]="6 Bed";dtbs[6].rawat_inap.fasilitas[3]="2 Kamar mandi dengan air panas & dingin ";dtbs[6].rawat_inap.fasilitas[4]="6 Buah Bedside Cabinet";dtbs[6].rawat_inap.fasilitas[5]="6 Kursi tunggu";dtbs[6].rawat_inap.fasilitas[6]="Overbed Table";
    dtbs[6].rawat_inap.kapasitas= "terdapat 20 Kamar";
    dtbs[6].rawat_inap.no_kamar[1]=201;dtbs[6].rawat_inap.no_kamar[2]=202;dtbs[6].rawat_inap.no_kamar[3]=203;dtbs[6].rawat_inap.no_kamar[4]=204;dtbs[6].rawat_inap.no_kamar[5]=205;dtbs[6].rawat_inap.no_kamar[6]=206;dtbs[6].rawat_inap.no_kamar[7]=207;dtbs[6].rawat_inap.no_kamar[8]=208;dtbs[6].rawat_inap.no_kamar[9]=209;dtbs[6].rawat_inap.no_kamar[10]=210;dtbs[6].rawat_inap.no_kamar[11]=211;dtbs[6].rawat_inap.no_kamar[12]=212;dtbs[6].rawat_inap.no_kamar[13]=213;dtbs[6].rawat_inap.no_kamar[14]=214;dtbs[6].rawat_inap.no_kamar[15]=215;dtbs[6].rawat_inap.no_kamar[16]=216;dtbs[6].rawat_inap.no_kamar[17]=217;dtbs[6].rawat_inap.no_kamar[18]=218;dtbs[6].rawat_inap.no_kamar[19]=219;dtbs[6].rawat_inap.no_kamar[20]=220;
    dtbs[6].rawat_inap.harga_ruangan=150000;
    if(dtbs[4].a+dtbs[5].a==0){for(int i=0;i<6;i++){
        dtbs[i].rawat_inap.nama_ruangan2=dtbs[i+1].rawat_inap.nama_ruangan;
        for(int j=0;j<21;j++){
            dtbs[i].rawat_inap.no_kamar2[j]=dtbs[i+1].rawat_inap.no_kamar[j+1];
        }
        dtbs[i].rawat_inap.harga_ruangan2=dtbs[i+1].rawat_inap.harga_ruangan;}}
    else {for(int i=dtbs[3].a-1;i<=dtbs[3].a-1;i++){
        for(int l=0;l<21;l++){
            dtbs[i].rawat_inap.no_kamar2[l]=dtbs[i].rawat_inap.no_kamar2[l+1];
        }}}

}

void cetak_ruangan(record dtbs,database_ruangan dtbs_rg){
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "No   Nama Ruangan                                 Kapasitas              Harga Ruangan   No Kamar                        Fasilitas                     "<<endl;
    cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=1;i<7;i++){
        cout << setiosflags(ios::left)<<setw(5)<< dtbs[i].rawat_inap.no_ruangan;
        cout << setiosflags(ios::left)<<setw(45)<< dtbs[i].rawat_inap.nama_ruangan;
        cout << setiosflags(ios::left)<<setw(22)<< dtbs[i].rawat_inap.kapasitas;
        cout << setiosflags(ios::left)<<setw(0)<<"Rp."<<setw(15)<<dtbs[i].rawat_inap.harga_ruangan;
        for(int j=1;j<21;j++){
            if(j==1){
            cout << setiosflags(ios::left)<<setw(14)<<dtbs[i].rawat_inap.no_kamar[j];
            cout << setiosflags(ios::left)<<setw(2)<<dtbs[i].rawat_inap.fasilitas[j];
            cout << endl;
            }else{
            cout << setiosflags(ios::left)<<setw(90)<< "";
            if(dtbs[i].rawat_inap.no_ruangan==1){
                if(j<=5){
                    cout << setiosflags(ios::left)<<setw(14)<<dtbs[i].rawat_inap.no_kamar[j];}}
            if(dtbs[i].rawat_inap.no_ruangan==2){
                if(j<=7){
                    cout << setiosflags(ios::left)<<setw(14)<<dtbs[i].rawat_inap.no_kamar[j];}}
            if(dtbs[i].rawat_inap.no_ruangan==3){
                if(j<=10){
                    cout << setiosflags(ios::left)<<setw(14)<<dtbs[i].rawat_inap.no_kamar[j];}}
            if(dtbs[i].rawat_inap.no_ruangan==4){
                if(j<=15){
                    cout << setiosflags(ios::left)<<setw(14)<<dtbs[i].rawat_inap.no_kamar[j];}}
            if(dtbs[i].rawat_inap.no_ruangan==5){
                if(j<=15){
                    cout << setiosflags(ios::left)<<setw(14)<<dtbs[i].rawat_inap.no_kamar[j];}}
            if(dtbs[i].rawat_inap.no_ruangan==6){
                if(j<=20){
                    cout << setiosflags(ios::left)<<setw(14)<<dtbs[i].rawat_inap.no_kamar[j];}}
            if(dtbs[i].rawat_inap.fasilitas[j]==dtbs[i].rawat_inap.fasilitas[j]){
                if(dtbs[i].rawat_inap.no_ruangan==1) if(j>=6) cout << setiosflags(ios::left)<<setw(14)<< "";
                if(dtbs[i].rawat_inap.no_ruangan==2) if(j>=8) cout << setiosflags(ios::left)<<setw(14)<< "";
                if(dtbs[i].rawat_inap.no_ruangan==3) if(j>=11) cout << setiosflags(ios::left)<<setw(14)<< "";
            }
            cout << setiosflags(ios::left)<<setw(2)<<dtbs[i].rawat_inap.fasilitas[j];
            cout << endl;
            }
        }cout << "-------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
}
void cetak_ruangan_simple(record dtbs,database_ruangan dtbs_rg){
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout << "No   Nama Ruangan                            Harga                                       Ruangan Yang tersedia"<<endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<6;i++){
        cout << setiosflags(ios::left)<<setw(5)<< i+1;
        cout << setiosflags(ios::left)<<setw(40)<< dtbs[i].rawat_inap.nama_ruangan2;
        cout << setiosflags(ios::left)<<setw(0)<<"Rp." <<setw(20)<<dtbs[i].rawat_inap.harga_ruangan2;
        cout << "";
        for(int j=0;j<20;j++){
        if(i==0&&j<5){cout << setiosflags(ios::left)<<setw(0)<< dtbs[i].rawat_inap.no_kamar2[j];if(j<4) cout << ",";}
        else if(i==1&&j<7){cout << setiosflags(ios::left)<<setw(0)<< dtbs[i].rawat_inap.no_kamar2[j];if(j<6) cout << ",";}
        else if(i==2&&j<10){cout << setiosflags(ios::left)<<setw(0)<< dtbs[i].rawat_inap.no_kamar2[j];if(j<9) cout << ",";}
        else if(i==3&&j<15){cout << setiosflags(ios::left)<<setw(0)<< dtbs[i].rawat_inap.no_kamar2[j];if(j<14) cout << ",";}
        else if(i==4&&j<15){cout << setiosflags(ios::left)<<setw(0)<< dtbs[i].rawat_inap.no_kamar2[j];if(j<14) cout << ",";}
        else if(i==5&&j<20){cout << setiosflags(ios::left)<<setw(0)<< dtbs[i].rawat_inap.no_kamar2[j];if(j<19) cout << ",";}
        }
        cout << endl;
    }
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
}
void input_database(record dtbs,database_ruangan dtbs_rg,ulang ulg){ //input dokter belum
    dtbs[5].a=0;
    for(int i=dtbs[4].a;i<dtbs[4].a+dtbs[1].a;i++){
        dtbs[i].no_pasien=i; // saran untuk dihapus
        gets(dtbs[i].nama);
        cout << "> Masukan nama Pasien ke -"<<i+1<<"     : ";gets(dtbs[i].nama);
        cout << "> Masukan Alamat Pasien ke -"<<i+1<<"   : ";gets(dtbs[i].alamat);
        cout << "> Masukan umur Pasien ke -"<<i+1<<"     : ";cin>>dtbs[i].umur;
        time_t now = time(0);
        dtbs[i].tanggal_pasien=ctime(&now);
        system("cls");
        cetak_dokter_sederhana(dtbs);
        cout << "Pilih dokter : ";cin>>dtbs[1].pilihan_dokter;
        dtbs[5].a++;
        dtbs[dtbs[4].a+dtbs[5].a-1].data_dokter.dokter_pasien=dtbs[dtbs[1].pilihan_dokter-1].data_dokter.nama_dokter2[0];
        dtbs[dtbs[4].a+dtbs[5].a-1].data_dokter.harga_dokter_pasien=dtbs[dtbs[1].pilihan_dokter-1].data_dokter.harga_dokter2;
        dokter(dtbs);
        system("cls");
        cout << "Apakah akan Rawat inap?(y/t)          : ";cin>>ulg.rawatinap;
        if(ulg.rawatinap=='y'||ulg.rawatinap=='Y'){
            cetak_ruangan_simple(dtbs,dtbs_rg);
            cout << endl;
            cout << "\tPilih Ruangan Rawat inap : ";cin>>dtbs[3].a;
            dtbs[dtbs[4].a+dtbs[5].a-1].rawat_inap.no_kamar_pasien=dtbs[dtbs[3].a-1].rawat_inap.no_kamar2[0];
            dtbs[dtbs[4].a+dtbs[5].a-1].rawat_inap.harga_kamar_pasien=dtbs[dtbs[3].a-1].rawat_inap.harga_ruangan2;
            ruangan(dtbs);
        }
        system("cls");
        cout << "Pilihan Pembayaran \n1. Umum\n2. BPJS\n3. Asuransi"<<endl;
        cout << "Masukan pilihan pembayaran            : ";cin>>dtbs[i].pembayaran;
        cout << endl;
        system("cls");
    }
    dtbs[4].a+=dtbs[5].a;
}
void cetak_database(record dtbs){
    cout << "----------------------------------------------------------------------------------------------------------------------------------- "<<endl;
    cout << "No   Nama                     Umur     No Kamar      Nama Dokter                    Alamat                          Tanggal"<<endl;
    cout << "                                                     yang menangani                                                      "<<endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------"<<endl;
    for(int i=0;i<dtbs[4].a;i++){
        cout << setiosflags(ios::left)<<setw(5) <<i+1;
        cout << setiosflags(ios::left)<<setw(26) <<dtbs[i].nama;
        cout << setiosflags(ios::left)<<setw(7) <<dtbs[i].umur;
        cout << setiosflags(ios::left)<<setw(15) <<dtbs[i].rawat_inap.no_kamar_pasien;
        cout << setiosflags(ios::left)<<setw(30) <<dtbs[i].data_dokter.dokter_pasien;
        cout << setiosflags(ios::left)<<setw(30) <<dtbs[i].alamat;
        cout << setiosflags(ios::left)<<setw(0) <<dtbs[i].tanggal_pasien;
        cout << endl;
        }
}
void Tagihan(record dtbs){
    cout << "No  Daftar nama Pasien "<<endl;
    for(int i=0;i<dtbs[4].a;i++){
        cout << setiosflags(ios::left)<<setw(5)<<i+1;
        cout << setiosflags(ios::left)<<setw(2)<<dtbs[i].nama;
        cout <<endl;
    }
    cout << "Masukan No Pasien yang ingin diketahui tagihannya : ";cin>>dtbs[2].a;
    system("cls");
    for(int i=dtbs[2].a-1;i<dtbs[2].a;i++){
        cout << "====================================TAGIHAN===================================="<<endl;
        cout << "Nama  : "<<dtbs[i].nama <<endl<<endl;
        cout << "1. Biaya Pemeriksaan Dokter   \t\t\t\t\t\t\t: "<< "Rp."<<dtbs[i].data_dokter.harga_dokter_pasien<<endl;
        cout << "2. Biaya Obat                 \t\t\t\t\t\t\t: "<< "Rp."<<dtbs[i].data_obat.harga_obat_pasien<<endl;
        cout << "3. Biaya Rawat inap           \t\t\t\t\t\t\t: "<< "Rp."<<dtbs[i].rawat_inap.harga_kamar_pasien <<endl;
        dtbs[i].total_harga_pasien=dtbs[i].data_dokter.harga_dokter_pasien+dtbs[i].data_obat.harga_obat_pasien+dtbs[i].rawat_inap.harga_kamar_pasien;
        if(dtbs[i].pembayaran==1) dtbs[i].total_harga_pasien2=dtbs[i].total_harga_pasien;
        else if(dtbs[i].pembayaran==2) dtbs[i].total_harga_pasien2=dtbs[i].total_harga_pasien*0;
        else if(dtbs[i].pembayaran==3) dtbs[i].total_harga_pasien2=dtbs[i].total_harga_pasien*0.5;
        cout << "-----------------------------------------------------------------------------------------------------"<<endl;
        cout << "Karena Anda memilih metode pembayaran ";
        if(dtbs[i].pembayaran==1) cout << "Umum, maka ";
        else if(dtbs[i].pembayaran==2) cout << "BPJS, maka ";
        else if(dtbs[i].pembayaran==3) cout << "Asuransi, maka ";
        cout << "Total harga               \t: "<< "Rp."<<dtbs[i].total_harga_pasien2<<endl;

    }
}
void pilih_pasien(record dtbs,ulang ulg,database_ruangan dtbs_rg,int a){
    if(a==1){
        cout << "> Masukan jumlah pasien : ";cin>>dtbs[1].a;
        input_database(dtbs,dtbs_rg,ulg);
    }else if(a==2){
        cetak_dokter(dtbs);
    }else if(a==3){
        cetak_ruangan(dtbs,dtbs_rg);
    }else if(a==4){
        Tagihan(dtbs);
    }else if(a==5){
        do{//fungsi random
        cout << "FAKTA UNIK MENGENAI KESEHATAN: \n"<<endl;
        dtbs[1].random=rand()%6;
        dtbs[2].random=rand()%6;
        dtbs[3].random=1+rand()%6;
        dtbs[4].random=dtbs[1].random+dtbs[2].random+dtbs[3].random;
        if(dtbs[4].random==1) cout << "Belajar bahasa baru atau bermain alat musik bisa meningkatkan kinerja otak."<<endl;
        else if(dtbs[4].random==2) cout << "Menulis sesuatu dengan tangan bisa membantu mengingat dalam waktu yang lama."<<endl;
        else if(dtbs[4].random==3) cout << "Mengunyah permen karet bisa membuat kamu lebih berkonsentrasi, mengurangi stres, dan mengurangi tingkat kegelisahan."<<endl;
        else if(dtbs[4].random==4) cout << "Orang-orang yang berjemur di bawah sinar matahari pagi dapat terhindar dari stres. Pasalnya, sinar matahari memicu otak untuk melepaskan hormon serotonin, yaitu suatu hormon yang bisa meningkatkan suasana hati dan memberikan perasaan tenang."<<endl;
        else if(dtbs[4].random==5) cout << "Otot mata adalah organ yang paling aktif, yang bergerak lebih dari 100.000 kali setiap harinya."<<endl;
        else if(dtbs[4].random==6) cout << "Cabe rawit mengandung vitamin C lebih banyak dibanding jeruk."<<endl;
        else if(dtbs[4].random==7) cout << "Pembuluh darah yang ada diseluruh tubuh manusia sangatlah panjang, apabila semua pembuluh darah seseorang disatukan dan direntangkan panjangnya bisa mencapai 60.000 mil / +- 100.000 km, sementara itu keliling planet kita hanyalah sekitar 40.000 km. Jadi pembuluh darah yang ada ditubuh kita adalah 2.5x keliling bumi."<<endl;
        else if(dtbs[4].random==8) cout << "Paru-paru kita mempunyai 300-500 kantung udara, apabila semua dibentangkan luasnya bisa mencapai 70 meter atau setara dengan setengah lapangan tennis."<<endl;
        else if(dtbs[4].random==9) cout << "Suhu panas tubuh manusia cukup untuk mendidihkan 3,5 liter air atau hampir setengah galon dalam waktu 30 menit."<<endl;
        else if(dtbs[4].random==10) cout << "Ukuran kelopak mata manusia dari mulai lahir sampai meninggal tidak akan pernah berubah, namun telinga dan hidung selalu tumbuh."<<endl;
        else if(dtbs[4].random==11) cout << "Bayi lahir tanpa memiliki tempurung lutut."<<endl;
        else if(dtbs[4].random==12) cout << "Perempuan memeiliki organ baru saat hamil. Plasenta merupakan organ baru yang hanya ada saat hamil"<<endl;
        else if(dtbs[4].random==13) cout << "Tubuh Perempuan Lebih Fleksibel Karena otot dan ligament perempuan lebih banyak mengandung elastin ketimbang kolagen"<<endl;
        else if(dtbs[4].random==14) cout << "Perempuan memiliki daya ingat lebih baik,Karena hormon esterogen memengaruhi kemampuat otak perempuan untuk menyimpan informasi lebih baik"<<endl;
        else if(dtbs[4].random==15) cout << "Susu dapat menetralisir beberapa jenis obat tertentu misalnya antibiotic jenis tetrasiklik, dengan cara melapisi saluran cerna dan mengurasi absorpsi obat dalam tubuh, kalsium dalam susu juga akan berikatan dengan komponen yang terdapat dalam obat tersebut sehingga menghambat penyerapan obat oleh tubuh,"<<endl;
        else if(dtbs[4].random==16) cout << "Wortel mengandung vitamin A dalam bentuk betakaroten yang dapat membantu penghantaran impuls cahaya ke otak sehingga mata dapat melihat lebih baik. Tetapi wortel tidak menyembuhkan mata minus dan plus, wortel hanya berfungsi sebagai mencegah bukan mengobati."<<endl;
        cout <<endl;
        cout << "ingin lagi fakta unik?(y/t)";cin>>ulg.repeat_random;
        system("cls");
        }while(ulg.repeat_random=='y'||ulg.repeat_random=='Y');
    }else if(a==6){
        cout << "\tCelamanya Cehat Hospital Grup adalah jaringan rumah sakit yang terdepan dengan pelayanan\nkesehatan berkualitas di Indonesia. RS Celamanya Cehat menawarkan layanan rumah sakit\numum dan telah mengembangkan layanan komprehensif. Didukung oleh perawatan spesialis dari\ndokter umum dan dokter spesialis serta perawat dan staf pendukung lainnya. \n\n\tSejak tahun 2010 RS Celamanya Cehat hadir untuk mencapai Indonesia yang lebih sehat. \nDengan moto  \"Bahagia yang sejati ialah kesehatan\" RS Celamanya Cehat berkomitmen untuk\nmemberikan perawatan kesehatannya secara optimal dan professional guna mencapai\nkebahagiaan yang diharapkan. Seraya mendukung program pemerintah Indonesia, \nRS Celamanya Cehat menyediakan layanan bagi pasien BPJS. Dengan ini diharapkan dapat\nmemberikan kemudahan bagi masyarakat untuk mendapatkan akses pelayanan kesehatan. \n\n\tSudah lebih dari sepuluh tahun bersama melayani masyarakat Indonesia. RS Celamanya Cehat\ntentunya tidak akan pernah berhenti untuk berupaya lebih baik lagi kedepannya dan akan terus\nada melayani kesehatan masyarakat agar mereka dapat hidup seutuhnya, penuh dengan cinta dan kebahagiaan. \n\nRS Celamanya Cehat\nGedung RS Celamanya Cehat, Jl. Merdeka raya No. 20, \nMenteng, Jakarta Pusat,Daerah Khusus Ibukota Jakarta 10310\n\nTelepon : +62-21-10121822\nEmail : care@celamanyacehathospital.co.id\nWebsite :www.celamanyacehathospital.co.id\n" <<endl;
    }else if(a>7)cout << "maaf yang anda masukan salah"<<endl;
}
void pilih_staff(record dtbs,ulang ulg,int a){
    int n2;
    if(a==1){
        cetak_database(dtbs);
        cout << endl;
    }else if(a==2){
        for(int i=0;i<dtbs[4].a;i++){
        cout << setiosflags(ios::left)<<setw(5)<<i+1;
        cout << setiosflags(ios::left)<<setw(2)<<dtbs[i].nama;
        cout <<endl;}
        cout << "Masukan No pasien yang akan diberikan Obat : ";cin>>dtbs[6].a;
        system("cls");
        cout << "Berapa banyak jenis obat yang akan diberikan: ";cin>>dtbs[dtbs[6].a-1].b;
        cout<<endl;
        cetak_obat(dtbs);
        for(int i=dtbs[6].a-1;i<=dtbs[6].a-1;i++){
            for(int j=0;j<dtbs[dtbs[6].a-1].b;j++){
                cout << "\nMasukan no Obat yang diberikan : ";cin>>dtbs[8].a;
                dtbs[i].data_obat.nama_obat_pasien[j]=dtbs[dtbs[8].a-1].data_obat.nama_obat;
                dtbs[i].data_obat.harga_obat_pasien+=dtbs[dtbs[8].a-1].data_obat.harga_obat;
            }}
    }else if(a==3){
        for(int i=0;i<dtbs[4].a;i++){
        cout << setiosflags(ios::left)<<setw(5)<<i+1;
        cout << setiosflags(ios::left)<<setw(2)<<dtbs[i].nama;
        cout <<endl;}
        cout << "Masukan No pasien yang akan dilihat obat yang telah diberikan : ";cin>>dtbs[9].a;
        system("cls");
        cout << "Nama      : "<<dtbs[dtbs[9].a-1].nama << endl;
        cout << "------------------------------"<<endl;
        cout << "No   Nama Obat "<<endl;
        cout << "------------------------------"<<endl;
        for(int i=dtbs[9].a-1;i<=dtbs[9].a-1;i++){
            for(int j=0;j<dtbs[dtbs[9].a-1].b;j++){
                cout << setiosflags(ios::left)<<setw(5) << j+1;
                cout << setiosflags(ios::left)<<setw(20) << dtbs[i].data_obat.nama_obat_pasien[j];
                cout << endl;
            }}
    }else if(a>4)cout << "maaf yang anda masukan salah"<<endl;
}
void pilihan_menu(record dtbs,ulang ulg,database_ruangan dtbs_rg, int n){
    int pilih_pas,pilih_staff2;
    if(n==1){
        do{
        cout<<"================================="<<endl;
        cout<<"| Pilih menu yang ingin dilihat |"<<endl;
        cout<<"=================================\n"<<endl;
        cout<<"1. Pendaftaran\n2. Dokter\n3. Ruangan\n4. Penebusan obat dan pembayaran\n5. Informasi tentang kesehatan\n6. Tentang Rumah sakit\n7. Kembali ke menu Utama\n"<<endl;
        cout << "Pilihan : ";cin>>pilih_pas;
        system("cls");
        pilih_pasien(dtbs,ulg,dtbs_rg,pilih_pas);
        if(pilih_pas<7||pilih_pas>7){cout << "Kembali ke menu pasien?(y/t) ";cin>>ulg.repeat_pasien;}
        else ulg.repeat_pasien='t';
        system("cls");
        }while(ulg.repeat_pasien=='y'||ulg.repeat_pasien=='Y');}
    if(n==2){
    cout << "Masukan Username : ";cin>>ulg.username;
    cout << "Masukan Pasword  : ";cin>>ulg.pasword;
    system("cls");
    if(strcmp(ulg.pasword,strrev(ulg.username))==0){
        do{
        cout << "Pilih menu yang ingin dilihat\n1. Database Pasien\n2. Apoteker\n3. obat yang diberikan\n4. Kembali ke menu Utama"<<endl;
        cout << "Pilih : ";cin>>pilih_staff2;
        pilih_staff(dtbs,ulg,pilih_staff2);
        if(pilih_staff2<4||pilih_staff2>4){cout << "Kembali ke menu Staff?(y/t) ";cin>>ulg.repeat_staff;}
        else ulg.repeat_staff='t';
        system("cls");
        }while(ulg.repeat_staff=='y'||ulg.repeat_staff=='Y');
    }else{
        cout << "Maaf anda gagal untuk Login"<<endl;
    }}
}

int main(){
    ulang ulg;
    record dtbs;
    dtbs[4].a=0;
    database_ruangan dtbs_rg;
    database_dokter dtbs_dr;
    int n;
    dokter(dtbs);
    ruangan(dtbs);
    obat(dtbs);
    do{
    time_t now = time(0);
    dtbs[1].tanggal = ctime(&now);
    cout <<" -----------------------------------------------------------------" << endl;
    cout <<" |                  RUMAH SAKIT CELAMANYA CEHAT                  |" << endl;
    cout <<" -----------------------------------------------------------------" << endl;
    cout << dtbs[1].tanggal << endl;
    cout << "Selamat datang di Program Rumah Sakit Celamanya Cehat....\n"<< endl;
    cout << "Ada dua jenis pilihan anda untuk masuk :\n1 .Pasien\n2 .Staff Rumahsakit\n "<<endl;
    cout << "Pilih (1/2): ";cin>>n;
    system("cls");
    pilihan_menu(dtbs,ulg,dtbs_rg,n);
    cout << "Kembali ke menu utama?(y/t) : ";cin>>ulg.repeat_menu_utama;
    system("cls");
    }while(ulg.repeat_menu_utama=='y'||ulg.repeat_menu_utama=='Y');
}




/*
nama_obat  (sebagai database nama obat)
harga_obat  (sebagai database harga obat)
nama_obat_pasien  (untuk menyimpan nama obat yang diberikan staf rumah sakit kepada pasien)
harga_obat_pasien  (untuk menyimpan harga obat yang diberikan staf rumah sakit kepada pasien)
spesialis    (sebagai database Spesialis Dokter)
nama_dokter[100] (sebagai database nama dokter yang digunakan dalam )
harga_dokter;     (sebagai database harga dokter)
spesialis2 (sebagai database spesialis dokter di menu perjanjian pasien)
nama_dokter2[100]  (sebagai database nama dokter yang berubah ubah di menu perjanjian)
harga_dokter2      (sebagai database harga dokter di menu perjanjian)
dokter_pasien      (untuk menyimpan nama dokter yang dipilih pasien)


dtbs[1].a  (Jumlah Pasien yang di input)
dtbs[2].a (untuk memasukan nilai No Pasien yang ingin diketahui tagihannya)

void pilihan_menu(record dtbs,ulang ulg,database_ruangan dtbs_rg, int n)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> terdapat di fungsi main

void pilih_pasien(record dtbs,ulang ulg,database_ruangan dtbs_rg,int a)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> terdapat di fungsi pilihan_menu

void Tagihan(record dtbs)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> terdapat di fungsi pilih_pasien

void cetak_ruangan(record dtbs,database_ruangan dtbs_rg)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> terdapat di pilih pasien

void pilih_staff(record dtbs,ulang ulg,int a)>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> terdapat di pilihan_menu
*/

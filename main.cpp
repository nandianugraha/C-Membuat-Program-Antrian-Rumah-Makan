#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct antri
{
    int data;
};

struct identitas
{
    char nama[20];
    char transaksi;
    int harga, pesan;
};

int main()
{

    identitas id[15];
    antri ant[15];
    int cek=0, y=0, hapus;
    int pil, total, tb, pj;
    char jp[15];

        x:
            system("cls");
            cout<<"\n\t\t ====================================";
            cout<<"\n\t\t ||          RESTORAN GACLE         ||";
            cout<<"\n\t\t ===================================="<<endl<<endl;
            cout<<"1. Masukan Antrian"<<endl;
            cout<<"2. Proses Antrian"<<endl;
            cout<<"3. Keluar"<<endl;
            cout<<endl;
            cout<<"Masukkan pilihan Anda (1-3)\t= ";
            cin>>pil;
            cout<<endl;
         switch(pil)
         {
         case 1:
            {
                        system("cls");
                        cout<<"------------------------------\n";
                        cout<<"    G.A.C.L.E FRIED CHICKEN       \n";
                        cout<<"------------------------------\n";
                        cout<<" Kode Jenis Potong Harga      \n";
                        cout<<"------------------------------\n";
                        cout<<" A   Dada         Rp. 7000    \n";
                        cout<<" B   Paha         Rp. 6000    \n";
                        cout<<" C   Sayap        Rp. 5000    \n";
                        cout<<"------------------------------\n";
                        cout<<"Nama Pemesan\t\t: ";
                        cin>>id[cek].nama;
                        cout<<"Banyak Pemesanan\t: ";
                        cin>>id[cek]. pesan;
                        ulang:
                        cout<<"Jenis Pemesanan\t\t: \n";
                        cout<<"\t\t\t: A. Dada\n";
                        cout<<"\t\t\t  B. Paha\n";
                        cout<<"\t\t\t  C. Sayap\n"<<"Pilih\t: ";
                        cin>>id[cek].transaksi;
                        if(id[cek].transaksi=='a' || id[cek].transaksi=='A')
                        {
                            strcpy(jp,"Dada");
                            id[cek].harga=7000;
                        }else if(id[cek].transaksi=='b' || id[cek].transaksi=='B')
                        {
                            strcpy(jp,"Paha");
                            id[cek].harga=6000;
                        }else if(id[cek].transaksi=='c' || id[cek].transaksi=='C')
                        {
                            strcpy(jp,"Sayap");
                            id[cek].harga=5000;
                        }
                        else
                        {
                            cout<<"\n\nMaaf Anda Salah Memilih Jenis Transaksi\n\n";
                            cout<<"\n\n";
                            goto ulang;
                        }
                        cout<<endl;
                        cek++;
                        system("cls");
                        cout<<"Antrian saat ini\t:\n\n";
                        cout<<"|------------------------------------------------------|\n";
                        cout<<"\t        G.A.C.L.E FRIED CHICKEN\n";
                        cout<<"|------------------------------------------------------|\n";
                        cout<<"|No.  |   Nama  | Jenis\t|  Harga  |  Banyak  |  Jumlah |\n";
                        cout<<"|     | \t| Pesan\t|  Satuan |   Beli   |  Harga  |\n";
                        cout<<"|------------------------------------------------------|\n";
                        cout<<"|------------------------------------------------------|\n";
                                for(int z=0;z<cek;z++)
                                {
                                    if(id[z].transaksi=='a' || id[z].transaksi=='A')
                                    {
                                        strcpy(jp,"Dada");
                                    }
                                    else if(id[z].transaksi=='b' || id[z].transaksi=='B')
                                    {
                                        strcpy(jp,"Paha");
                                    }
                                    else if(id[z].transaksi=='c' || id[z].transaksi=='C')
                                    {
                                        strcpy(jp,"Sayap");
                                    }
                                    cout<<"| "<<z+1<<".  | ";
                                    cout<<id[z].nama<<"\t| ";
                                    cout<<jp<<"\t|  ";
                                    cout<<id[z].harga<<"\t  |    ";
                                    cout<<id[z].pesan<<"    |  ";
                                    total=id[z].harga * id[z].pesan;
                                    cout<<total<<"  |\n";
                                    cout<<"|------------------------------------------------------|";
                                    cout<<endl;
                                }
                    cout<<"\n\n";
                    system("PAUSE");
                    goto x;
                }
         case 2:
                {
                    if(cek==0)
                            cout<<"Antrian kosong"<<endl<<endl;
                        else
                        {
                            for(int z=0;z<cek;z++)
                            hapus=z;
                            for(int v=0;v<cek;v++)
                                ant[v].data=ant[v+1].data;
                            ant[cek].data=NULL;
                            cek--;
                            system("cls");
                        cout<<"|------------------------------------------------------|\n";
                        cout<<"\t       G.A.C.L.E FRIED CHICKEN\n";
                        cout<<"|------------------------------------------------------|\n";
                        cout<<"|No.  |   Nama  | Jenis\t|  Harga  |  Banyak  |  Jumlah |\n";
                        cout<<"|     | \t| Pesan\t|  Satuan |   Beli   |  Harga  |\n";
                        cout<<"|------------------------------------------------------|\n";
                        cout<<"|------------------------------------------------------|\n";
                                    if(id[0].transaksi=='a' || id[0].transaksi=='A')
                                    {
                                        strcpy(jp,"Dada");
                                    }
                                    else if(id[0].transaksi=='b' || id[0].transaksi=='B')
                                    {
                                        strcpy(jp,"Paha");
                                    }
                                    else if(id[0].transaksi=='c' || id[0].transaksi=='C')
                                    {
                                        strcpy(jp,"Sayap");
                                    }
                                    cout<<"| "<<0+1<<".  | ";
                                    cout<<id[0].nama<<"\t| ";
                                    cout<<jp<<"\t|  ";
                                    cout<<id[0].harga<<"\t  |    ";
                                    cout<<id[0].pesan<<"    |  ";
                                    total=id[0].harga * id[0].pesan;
                                    cout<<total<<"  |\n";
                                    cout<<"|------------------------------------------------------|\n";
                                    cout<<"\t\t     Jumlah                : Rp. "<<total<<endl;
                                    pj=total*0.1;
                                    cout<<"\t\t     Pajak 10%             : Rp. "<<pj<<endl;
                                    tb=total+pj;
                                    cout<<"\t\t     Total Pembayaran Anda : Rp. "<<tb;
                                    cout<<endl<<endl<<endl;
                                }
                            {
                                int b;
                                for(b=0;b<cek;b++)
                                id[b]=id[b+1];
                                b--;
                            }
                        if(cek==0)
                            cout<<"Antrian kosong"<<endl;
                        else
                            cout<<"Nomor Antrian saat ini : ";
                                for(int z=0;z<cek;z++)
                                {
                                    cout<<" | ";
                                    cout<<" "<<z+1;
                                    cout<<" | ";
                                }
                    cout<<endl<<endl;
                    system("PAUSE");
                    goto x;
                }
         case 3:
             {
            system("cls");
                cout<<"======================="<<endl;
                cout<<"||    TERIMAKASIH    ||"<<endl;
                cout<<"======================="<<endl;
                getch();
                break;
             }
            default:
                {
                    system("cls");
                    cout<<"Anda salah memasukkan pilihan\n\n";
                    system("pause");
                    goto x;
                }
        }
}

 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                              PROTOPYPE                                                     //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void menu_utama();
void penjualan();
void informasi();
void stok_barang();
void harga_barang();
void keluar();
void updateStok(int a, int upStok);
void update_harga(int a, int upharga);
void beli_lagi();
void stok_lagi();
void stok_barang();
void lagi_barang();
void lagi_stok();
void data1();
void data();
void struk();
void batas(int w,int y,int z);
void bayarrr();
int valjenis_kelamin(char jenis_kelamin[]);
int valnomor(char hp[]);
int valangka(char a[]);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                             VARIABEL-GLOBAL                                                //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char menu[2][10][100]={{"songket","gantungan kunci","kotak tisu","kotak pensil","tempat pensil","tappa"},
                       {"lappet","ombus ombus","panggelong","golang golang","itak","sambal taruma","sambal suhat"}};
int jumlah;
char lagi,pilih,pilih1,pilih2;
int jlh,hrg=0,jlh1=0,jlh2=0,jlh3=0,jlh4=0,jlh5=0,jlh6=0,jlh7=0,jlh8=0,jlh9=0,jlh10=0,jlh11=0,jlh12=0,jlh13=0,total1=0,total2=0,total3=0,total4=0,total5=0,total6=0,total7=0,total8=0,total9=0,total10=0,total11=0,total12=0,total13=0;
int stok[100];
int harga[100];
char julh[3];
char bayar[100];
char nama[100];
int uang;
 int i=0;
 int y=0;
 int tamp=0;
     int cek=0;
     char hp[20][100];
     char jenis_kelamin[100][20];
     char umur[100][20];

void menu_utama(){
      tampilan2();
      bingkai(30,6,12,12,14);
      bingkai(30,6,78,12,14);
      bingkai(30,6,12,22,14);
      bingkai(30,5,45,17,3);
      bingkai(30,6,78,22,14);
      bingkai(30,6,45,31,14);
      alya(15,14);printf("1. P E N J U A L A N");
      alya(81,14);printf("2. I N F O R M A S I");
      alya(19,24);printf("3. U P D A T E ");
      alya(19,25);printf(" B A R A N G");
      alya(84,24);printf("4. U P D A T E");
      alya(87,25);printf(" H A R G A");
      alya(52,19);printf("0.  E  X  I  T");
      alya(51,33);printf(" p i l i h :");
  
         for(int a=1;a<=1;){
               alya(65,33);pilih=getche();
            if(pilih=='1'){
               penjualan();
            }else if(pilih=='2'){
               tampilan4();
               informasi();
            }else if(pilih=='3'){
               stok_barang();
            }else if(pilih=='4'){
               harga_barang();
            }else if(pilih=='0'){
               system("cls");
               keluar();
                  a++;
            }else{
                  alya(47,37);printf("kode yang di input salah!!!");Sleep(1000);
                  alya(65,33);printf("  ");Sleep(1000);
                  alya(47,37);printf("                           ");Sleep(1000);

            }
         }
}
void batas(int w,int y,int z){
   
 int a=0;
      alya(w,y);julh[a]=getch();
   while(julh[a]!=13){
      if(julh[a]==8){
      a--;
         if(a<0){
            a=0;
         }
         alya(w+a,y);printf(" ");
     }else if(julh[a]>='0'&& julh[a]<='9'){
         printf("%c",julh[a]);
           a++;
               
      }
        if(a>z){
            a=z;
            alya(w+a,y);printf(" ");       
         } alya(w+a,y);julh[a]=getch();
                         
    }julh[a]=0;
         tamp=atoi(julh);

}



void penjualan(){
      FILE *barang;
      barang=fopen("stok.txt","r");
      for(int x=0;x<13;x++){
         fscanf(barang,"%d",&stok[x]);
      }
      fclose(barang); 

      FILE *har;
      har=fopen("harga.txt","r");
      for(int x=0;x<13;x++){
         fscanf(har,"%d",&harga[x]);

      }
      fclose(har);
        
         system("cls");
         tampilan3();
         bingkai(120, 40, 0, 0, 3);
         bingkai(30,10,12,12,14);
         bingkai(30,10,80,12,14);
         bingkai(20,5,50,29,14);
         alya(20,16);printf("1.CINDRAMATA");
         alya(90,16);printf("2.MAKANAN");
         alya(53,31);printf("pilih :");
         for(int a=0;a<=1;){
         alya(63,31);pilih=getche();
      if(pilih=='1'){
                     system("cls");
                     bingkai(100, 35, 10, 4, 3);
                     bingkai(90,20, 15,6 ,14);
                     bingkai(90,5,15,6,14);
                     bingkai(0,20,56,6,14);
                     bingkai(0,20,86,6,14);
                     alya(30,8);printf(" MENU");
                     alya(61,8);printf("HARGA");
                     alya(92,8);printf("STOK");
                     alya(20,12);printf("1.SONGKET");
                     alya(20,14);printf("2.GANTUNGAN KUNCI KHAS SIPIROK");
                     alya(20,16);printf("3.KOTAK TISU KHAS SIPIROK");
                     alya(20,18);printf("4.KOTAK PENSIL KHAS SIPIROK");
                     alya(20,20);printf("5.TEMPAT PENSIL KHAS SIPIROK");
                     alya(20,22);printf("6.TAPPA");
                     alya(59,12);printf("Rp.%d   ",harga[0]);
                     alya(59,14);printf("Rp.%d   ",harga[1]);
                     alya(59,16);printf("Rp.%d   ",harga[2]);
                     alya(59,18);printf("Rp.%d   ",harga[3]);
                     alya(59,20);printf("Rp.%d   ",harga[4]);
                     alya(59,22);printf("Rp.%d   ",harga[5]);
                     alya(94,12);printf("%d",stok[0]);
                     alya(94,14);printf("%d",stok[1]);
                     alya(94,16);printf("%d",stok[2]);
                     alya(94,18);printf("%d",stok[3]);
                     alya(94,20);printf("%d",stok[4]);
                     alya(94,22);printf("%d",stok[5]);
                  
                     bingkai(60,6,14,27,3);
                     alya(15,28);printf("pilih cindramata : ");
               for(int b=1;b<=1;){
                     alya(34,28);pilih1=getche();
            if(pilih1=='1'){
                     alya(15,29);printf("jumlah %s        : ",menu[0][0]);
                         alya(42,29);julh[y]=getch();
                           batas(42,29,3);
                        if(tamp>stok[0]){
                           alya(45,35);printf("stok tidak mencukupi!!!");Sleep(1000);
                           alya(34,28);printf("      ");
                           alya(42,29);printf("      ");Sleep(1000);
                           alya(45,35);printf("                              ");Sleep(1000);
                        }else if(tamp !=0){
                           jlh1+=tamp;
                            stok[0]-=tamp;
                            alya(94,12);printf("%d  ",stok[0]);
                            updateStok(0,stok[0]);
                           total1+=jlh1*harga[0];
                           beli_lagi();
                        }else{
                           alya(34,28);printf("      ");
                           alya(42,29);printf("      ");
                        }
                        
   
            }else if(pilih1=='2'){
                     alya(15,29);printf("jumlah %s : ",menu[0][1]);
                         alya(42,29);julh[y]=getch();
                         batas(42,29,3);
                        if(tamp>stok[1]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(1000);
                           alya(34,28);printf("      ");
                           alya(42,29);printf("      ");Sleep(1000);
                           alya(45,35);printf("                      ");Sleep(1000);
                        }else if(tamp != 0){
                           jlh2+=tamp;
                            stok[1]-=tamp;
                             alya(94,14);printf("%d  ",stok[1]);
                              updateStok(1,stok[1]);
                           total2+=jlh2*harga[1];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      ");
                           alya(42,29);printf("     ");
                        }
                         

            }else if(pilih1=='3'){
                     alya(15,29);printf("jumlah %s         : ",menu[0][2]);
                         alya(42,29);julh[y]=getch();
                          batas(42,29,3);

                        if(tamp>stok[2]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(1000);
                           alya(34,28);printf("      ");
                           alya(42,29);printf("      ");Sleep(1000);
                           alya(45,35);printf("                      ");Sleep(1000);
                        }else if(tamp!=0){
                           jlh3+=tamp;
                            stok[2]-=tamp;
                             alya(94,16);printf("%d  ",stok[2]);
                              updateStok(2,stok[2]);
                           total3+=jlh3*harga[2];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      ");
                           alya(42,29);printf("    ");
                        }

            }else if(pilih1=='4'){
                     alya(15,29);printf("jumlah %s       : ",menu[0][3]);
                         alya(42,29);julh[y]=getch();
                         batas(42,29,3);

                        if(tamp>stok[3]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(1000);
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("      ");Sleep(1000);
                           alya(45,35);printf("                      ");Sleep(1000);
                        }else if(tamp!=0){
                           jlh4+=tamp;
                            stok[3]-=tamp;
                             alya(94,18);printf("%d  ",stok[3]);
                              updateStok(3,stok[3]);
                           total4+=jlh4*harga[3];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      ");
                           alya(42,29);printf("    ");
                        }  
                        
            }else if(pilih1=='5'){
                     alya(15,29);printf("jumlah %s     : ",menu[0][4]);
                         alya(42,29);julh[y]=getch();
                          batas(42,29,3);

                        if(tamp>stok[4]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(1000);
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("      ");Sleep(1000);
                           alya(45,35);printf("                      ");Sleep(1000);
                        }else if(tamp!=0){
                           jlh5+=tamp;
                            stok[4]-=tamp;
                             alya(94,20);printf("%d  ",stok[4]);
                              updateStok(4,stok[4]);
                           total5+=jlh5*harga[4];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("    ");
                        }    
                        
                     
            }else if(pilih1=='6'){
                     alya(15,29);printf("jumlah %s          : ",menu[0][5]);
                         alya(42,29);julh[y]=getch();
                         batas(42,29,3);
                        if(tamp>stok[5]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(1000);
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("      ");Sleep(1000);
                           alya(45,35);printf("                      ");Sleep(1000);
                        }else if(tamp!=0){
                           jlh6+=tamp;
                            stok[5]-=tamp;
                             alya(94,22);printf("%d  ",stok[5]);
                              updateStok(5,stok[5]);
                           total6+=jlh6*harga[5];
                            beli_lagi();
                           
                        }else{
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("    ");
                        }                        
                     b++;
            }else{
                  alya(47,37);printf("kode yang di input salah!!!");Sleep(1000);
                  alya(34,28);printf("  ");Sleep(1000);
                  alya(47,37);printf("                           ");Sleep(1000);
            }
            }
               
      
         

      }else if(pilih=='2'){
                     system("cls");
                     bingkai(100, 35, 10,4, 3);
                     bingkai(90,20, 15,6 ,14);
                     bingkai(90,5,15,6,14);
                     bingkai(0,20,56,6,14);
                     bingkai(0,20,86,6,14);
                     alya(30,8);printf(" MENU");
                     alya(61,8);printf("HARGA");
                     alya(92,8);printf("STOK");
                     alya(20,11);printf("1.LAPPET");
                     alya(20,13);printf("2.OMBUS-OMBUS");
                     alya(20,15);printf("3.PANGGELONG");
                     alya(20,17);printf("4.GOLANG-GOLANG");
                     alya(20,19);printf("5.ITAK");
                     alya(20,21);printf("6.SAMBAL TARUMA");
                     alya(20,23);printf("7.SAMBAL SUHAT");
                     alya(59,11);printf("Rp.%d   ",harga[6]);
                     alya(59,13);printf("Rp.%d   ",harga[7]);
                     alya(59,15);printf("Rp.%d   ",harga[8]);
                     alya(59,17);printf("Rp.%d   ",harga[9]);
                     alya(59,19);printf("Rp.%d   ",harga[10]);
                     alya(59,21);printf("Rp.%d   ",harga[11]);
                     alya(59,23);printf("Rp.%d   ",harga[12]);
                     alya(94,11);printf("%d",stok[6]);
                     alya(94,13);printf("%d",stok[7]);
                     alya(94,15);printf("%d",stok[8]);
                     alya(94,17);printf("%d",stok[9]);
                     alya(94,19);printf("%d",stok[10]);
                     alya(94,21);printf("%d",stok[11]);
                     alya(94,23);printf("%d",stok[12]);
                     

                  bingkai(40,6,14,27,3);
                  alya(15,28);printf("pilih makanan : ");
                  for(int c=1;c<=1;){
                  alya(34,28);pilih2=getche();

            if(pilih2=='1'){
                     alya(15,29);printf("jumlah    %s  :",menu[1][0]);
                         alya(42,29);julh[y]=getch();
                         batas(42,29,3);
                        if(tamp>stok[6]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(500);
                           alya(34,28);printf("      ");
                           alya(42,29);printf("      ");Sleep(500);
                           alya(45,35);printf("                      ");Sleep(500);
                        }else if(tamp!=0){
                           jlh7+=tamp;
                            stok[6]-=tamp;
                             alya(94,11);printf("%d  ",stok[6]);
                              updateStok(6,stok[6]);
                           total7+=jlh7*harga[6];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("    ");
                        }

            }else if(pilih2=='2'){
                     alya(15,29);printf("jumlah %s   : ",menu[1][1]);
                        alya(42,29);julh[y]=getch();
                         batas(42,29,3);
                        if(tamp>stok[7]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(500);
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("      ");Sleep(500);
                           alya(45,35);printf("                      ");Sleep(500);
                        }else if(tamp!=0){
                           jlh8+=tamp;
                            stok[7]-=tamp;
                             alya(94,13);printf("%d  ",stok[7]); 
                              updateStok(7,stok[7]);
                           total8+=jlh8*harga[7];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("    ");
                        }

            }else if(pilih2=='3'){
                     alya(15,29);printf("jumlah %s      : ",menu[1][2]);
                        alya(42,29);julh[y]=getch();
                         batas(42,29,3);
                        if(tamp>stok[8]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(500);
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("      ");Sleep(500);
                           alya(45,35);printf("                      ");Sleep(500);
                        }else if(tamp!=0){
                           jlh9+=tamp;
                            stok[8]-=tamp;
                             alya(94,15);printf("%d  ",stok[8]);
                              updateStok(8,stok[8]);
                           total9+=jlh9*harga[8];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("    ");
                        }

            }else if(pilih2=='4'){
                     alya(15,29);printf("jumlah %s      : ",menu[1][3]);
                         alya(42,29);julh[y]=getch();
                         batas(42,29,3);
                        if(tamp>stok[9]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(500);
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("      ");Sleep(500);
                           alya(45,35);printf("                      ");Sleep(500);
                        }else if(tamp!=0){
                           jlh10+=tamp;
                            stok[9]-=tamp;
                             alya(94,17);printf("%d  ",stok[9]);
                              updateStok(9,stok[9]);
                           total10+=jlh10*harga[9];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("    ");
                        }

            }else if(pilih2=='5'){
                     alya(15,29);printf("jumlah %s       :     ",menu[1][4]);
                          alya(35,29);julh[y]=getch();
                         batas(35,29,3);
                        if(tamp>stok[10]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(1000);
                           alya(34,28);printf("      "); 
                           alya(35,29);printf("      ");Sleep(1000);
                           alya(45,35);printf("                      ");Sleep(1000);
                        }else if(tamp!=0){
                           jlh11=tamp;
                            stok[10]-=tamp;
                             alya(94,19);printf("%d  ",stok[10]);
                              updateStok(10,stok[10]);
                           total11+=jlh11*harga[10];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(35,29);printf("    ");
                        }

            }else if(pilih2=='6'){
                     alya(15,29);printf("jumlah %s     :         ",menu[1][5]);
                         alya(38,29);julh[y]=getch();
                         batas(38,29,3);
                        if(tamp>stok[11]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(1000);
                           alya(34,28);printf("      "); 
                           alya(38,29);printf("        ");Sleep(1000);
                           alya(45,35);printf("                      ");Sleep(1000);
                        }else if(tamp!=0){
                           jlh12+=tamp;
                            stok[11]-=tamp;
                             alya(94,21);printf("%d  ",stok[11]);
                              updateStok(11,stok[11]);
                           total12+=jlh12*harga[11];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(38,29);printf("    ");
                        }

            }else if(pilih2=='7'){
                     alya(15,29);printf("jumlah %s      :   ",menu[1][6]);
                         alya(42,29);julh[y]=getch();
                         batas(42,29,3);
                        if(tamp>stok[12]){
                           alya(45,35);printf("stok tidak mencukupi");Sleep(500);
                           alya(42,29);printf("      ");Sleep(500);
                           alya(45,35);printf("                      ");Sleep(500);
                        }else if (tamp!=0){
                           jlh13+=tamp;
                            stok[12]-=tamp;
                             alya(94,23);printf("%d  ",stok[12]);
                              updateStok(12,stok[12]);
                           total13+=jlh13*harga[12];
                            beli_lagi();
                        }else{
                           alya(34,28);printf("      "); 
                           alya(42,29);printf("    ");
                        }
                  
                    c++;
            }else{
                    alya(47,37);printf("kode yang di input salah!!!");Sleep(1000);
                    alya(34,28);printf("  ");Sleep(500);
                    alya(47,37);printf("                           ");Sleep(500);
            }
                  }
                  
          a++;
      }else{
            alya(47,37);printf("kode yang di input salah!!!");Sleep(500);
            alya(63,31);printf("  ");Sleep(500);
            alya(47,37);printf("                           ");Sleep(500);
      }
         }
        
}
         

void struk(){  
   system("cls");
   bingkai(120, 40, 0, 0,3);
   bingkai(90,20, 15,6 ,14);
   alya(45,2);printf("TRANSAKSI PEMBELIAN");
   alya(42,3);printf("TOKO OLEH-OLEH KOTA SIPIROK");
   alya(38,4);printf("Jln, Merdeka No. 62, Kecamatan Sipirok");
   alya(22,9);printf("JUMLAH");
   alya(21,10);printf("--------");
   alya(40,9);printf("NAMA BARANG");
   alya(40,10);printf("-----------");
   alya(80,9);printf("HARGA");
   alya(80,10);printf("------");

   if(jlh1>0){
      printf("\n\t\t\t%d\t\t%s                       =\t\t %d ",jlh1,menu[0][0],total1);Sleep(1000);
   }
   if(jlh2>0){
      printf("\n\t\t\t%d\t\t%s               =\t\t %d",jlh2,menu[0][1],total2);Sleep(1000);
   }
   if(jlh3>0){
      printf("\n\t\t\t%d\t\t%s                    =\t\t %d",jlh3,menu[0][2],total3);Sleep(1000);
   }
   if(jlh4>0){
     printf("\n\t\t\t%d\t\t%s                  =\t\t %d",jlh4,menu[0][3],total4);Sleep(1000);
   }
   if(jlh5>0){
     printf("\n\t\t\t%d\t\t%s                 =\t\t %d",jlh5,menu[0][4],total5);Sleep(1000);
   }
   if(jlh6>0){
      printf("\n\t\t\t%d\t\t%s                         =\t\t %d",jlh6,menu[0][5],total6);Sleep(1000);
   }
   if(jlh7>0){
      printf("\n\t\t\t%d\t\t%s                        =\t\t %d",jlh7,menu[1][0],total7);Sleep(1000);
   }
   if(jlh8>0){
      printf("\n\t\t\t%d\t\t%s              =\t\t%d",jlh8,menu[1][1],total8);Sleep(1000);
   }
   if(jlh9>0){
      printf("\n\t\t\t%d\t\t%s                    =\t\t %d",jlh9,menu[1][2],total9);Sleep(1000);
   }
   if(jlh10>0){
      printf("\n\t\t\t%d\t\t%s                 =\t\t %d",jlh10,menu[1][3],total10);Sleep(1000);
   }
   if(jlh11>0){
      printf("\n\t\t\t%d\t\t%s                          =\t\t %d",jlh11,menu[1][4],total11);Sleep(1000);
   }
   if(jlh12>0){
      printf("\n\t\t\t%d\t\t%s                 =\t\t %d",jlh12,menu[1][5],total12);Sleep(1000);
   }
   if(jlh13>0){
      printf("\n\t\t\t%d\t\t%s                  =\t\t %d",jlh13,menu[1][6],total13);Sleep(1000);
   }

   jumlah=total1+total2+total3+total4+total5+total6+total7+total8+total9+total10+total11,total12,total13;

   alya(35,33);printf("tekan ENTER  untuk pembayaran ");
   while (true){
      char tekan;
      alya(55,34);
      tekan = getche();
      if (tekan == 13)
      {
         system("cls");
         bingkai(120, 40, 0, 0,3);
         bingkai(90,20, 15,6 ,14);
         data1();
         bayarrr();
        
         alya(25,33);printf("tekan ENTER  untuk keluar, tekan 0 untuk kembali ke menu utama ");
         while (true){
            char tekan;
            alya(55,34);
            tekan = getche();
            if (tekan == '0')
            {
               system("cls");
               menu_utama();
            }
            else if (tekan == 13)
            {
               system("cls");
              keluar();
            }else{
               alya(45,35);printf("kode yang di inputkan salah!!");Sleep(1000);
               alya(55,34);printf("  ");Sleep(1000);
               alya(45,35);printf("                                 ");Sleep(1000);
            }
         }
      }
   }
}
void bayarrr(){
   int tmp=0;
   int a = 0, b=0;
    alya(17,17);printf("T O T A L  B A Y A R   \t\t :    %d",jumlah);
    alya(17,19);printf("M A S U K K A N  U A N G   \t\t :  Rp.");
    alya(64, 19);
    bayar[a] = getch();
    while (bayar[a] != 13){
        if (bayar[a] == 8){
            a--;
            if (a < 0){
                a = 0;
            }
           alya(64 + a, 19);
            printf(" ");
        }else if (bayar[a] >= '0' && bayar[a] <= '9'){
            printf("%c", bayar[a]);
            a++;
        }
        if (a >= 10){
            a = 10;
            alya(64+a, 19);
            printf(" ");
        }
        alya(64 + a, 19);
        bayar[a] = getch();
    }
    bayar[a] = '\0';


    if (strlen(bayar) == 0){
            alya(50, 20);
            printf("Inputan tidak boleh kosong!");Sleep(1000);
            alya(50, 20);printf("                           ");
            alya(64, 19);printf("            ");
            bayarrr();
   }else if (valangka(bayar) == 0 && strlen(bayar) != 0 && bayar[0] != '0'){
        b=atoi(bayar);
        if (b > jumlah){
            alya(42, 21);
            printf("Kembalian      : Rp %d", b-jumlah);Sleep(1500);
        }else if (b == jumlah){
            alya(42, 21);
            printf("Uang anda Pas!");Sleep(1000);
            alya(39,20);
            printf("              ");Sleep(1000);
        }else if (b < jumlah){
            alya(39, 20);
            printf("Uang Anda kurang. Input uang kembali!");Sleep(1200);
            alya(39, 20);printf("                                     ");
            alya(64,19);printf("            ");
            bayarrr();
        }
    }else{
        alya(50, 20);
        printf("Invalid. Silahkan input ulang!");Sleep(1200);
        alya(50, 20);printf("                              ");
        alya(64, 19);printf("            ");
        bayarrr();
    }
}
void informasi(){
   textcolor(8);
   alya(35,11);printf("SELAMAT DATANG DI TOKO OLEH OLEH SIPIROK");
   alya(35,12);printf("Jln, Merdeka No. 62, Kecamatan Sipirok");
   alya(20,14);printf(" Toko oleh oleh kota sipirok adalah khas buatan asli dari sipirok ");
   alya(20,15);printf(" kota sipiok sendiri berada di provinsi sumata utara, di toko ini");
   alya(20,16);printf(" kami  banyak menyediakan  macam-macam  oleh-oleh siprok, mulai dari");
   alya(20,17);printf(" makanan dan cindramata. Adapun cindrama sipirok yang ada di sini ");
   alya(20,18);printf(" adalah songket,gantungan kunci,kotak tisu,kotak pensil,");
   alya(20,19);printf(" tempat pensil,tappa. dan kami juga menyediakan makanan antara lain ");
   alya(20,20);printf(" lappet,ombus ombus,panggelong,golang golang,itak,sambal taruma,sambal suhat.");
   alya(20,21);printf(" Di toko ini kami sebisa mungkin  membuat pelanggan kami nyaman berbelanja");
   alya(20,22);printf(" dengan memperhatikan kebesihan tempat dan staf yang akan melayani pelanggan");
   alya(20,23);printf(" dengan ramah, baik dan sopan, selain itu kammi juga memperbolehkan pelanggan");
   alya(20,24);printf("  untuk mencoba makanan ataupun barang sebelum di beli supaya tidak ada rasa");
   alya(20,25);printf(" kekecewaan terhadap pelanggan yang berbelanja di toko kami ini ");
   alya(20,26);printf(" Dan semua produk disini di jamin halal dan bersih");
   alya(40,27);printf("");

   alya(25,33);printf("tekan ENTER  untuk keluar, tekan 0 untuk kembali ke menu utama ");
    while (true)
    {
        char tekan;
        alya(55,34);
        tekan = getche();
        if (tekan == '0')
        {
            system("cls");
            menu_utama();
        }
        else if (tekan == 13)
        {
            system("cls");
            keluar();
        }else{
           alya(45,35);printf("kode yang di inputkan salah!!");Sleep(1000);
           alya(55,34);printf("  ");Sleep(1000);
           alya(45,35);printf("                                 ");Sleep(1000);
        }
    }
}


void updateStok(int a, int upStok){
   int tampStok[100];
   FILE *lam, *bar;
   lam =fopen("stok.txt","r");
   bar =fopen("baru.txt","w");
         
    for(int x=0;x<13;x++){
      fscanf(lam,"%d",&tampStok[x]);      
      if(x==a){
         fprintf(bar, "%d\n", upStok);
      }else{
         fprintf(bar, "%d\n", tampStok[x]);
         
      }
   }
    fclose(lam);
    fclose(bar);
    remove("stok.txt");
    rename("baru.txt","stok.txt");
             
}

void update_harga(int a, int upharga){
   int tampharga[100];
   FILE *lama, *baru;
   lama =fopen("harga.txt","r");
   baru =fopen("baru.txt","w");
         
    for(int x=0;x<13;x++){
      fscanf(lama,"%d",&tampharga[x]);      
      if(x==a){
         fprintf(baru, "%d\n", upharga);
      }else{
         fprintf(baru, "%d\n", tampharga[x]);
         
      }
   }
    fclose(lama);
    fclose(baru);
    int kode;
    remove("harga.txt");
    rename("baru.txt","harga.txt");
             
}



void stok_barang(){
   FILE *rohaya;
   rohaya=fopen("stok.txt","r");
   for(int x=0;x<13;x++){
      fscanf(rohaya,"%d",&stok[x]);
   }
   fclose(rohaya); 
    system("cls");
         bingkai(120, 40, 0, 0, 3);
         bingkai(30,10,12,12,14);
         bingkai(30,10,80,12,14);
         bingkai(20,5,50,29,14);
         alya(20,16);printf("1.CINDRAMATA");
         alya(90,16);printf("2.MAKANAN");
         alya(53,31);printf("pilih :");
          for(int a=1;a<=1;){
         alya(63,31);pilih=getche();
         if(pilih=='1'){
                     system("cls");
                     bingkai(100, 35, 10, 4, 3);
                     bingkai(70,20, 25,6 ,14);
                     bingkai(70,5,25,6,14);
                     bingkai(0,20,76,6,14);
                     alya(30,8);printf(" MENU");
                     alya(82,8);printf("STOK");
                     alya(27,12);printf("1.SONGKET");
                     alya(27,14);printf("2.GANTUNGAN KUNCI KHAS SIPIROK");
                     alya(27,16);printf("3.KOTAK TISU KHAS SIPIROK");
                     alya(27,18);printf("4.KOTAK PENSIL KHAS SIPIROK");
                     alya(27,20);printf("5.TEMPAT PENSIL KHAS SIPIROK");
                     alya(27,22);printf("6.TAPPA");
                     alya(82,12);printf("%d",stok[0]);
                     alya(82,14);printf("%d",stok[1]);
                     alya(82,16);printf("%d",stok[2]);
                     alya(82,18);printf("%d",stok[3]);
                     alya(82,20);printf("%d",stok[4]);
                     alya(82,22);printf("%d",stok[5]);

                     bingkai(40,6,14,27,3);
                     for(int x=1;x<=1;){
                     alya(15,28);printf("pilih cindramata : ");alya(34,28);pilih1=getche();
               if(pilih1=='1'){
                     alya(15,29);printf("jumlah  yg mau di tambahkan : ");
                              alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                             if(tamp !=0){
                                 stok[0]+=tamp;
                                 alya(82,12);printf("%d  ",stok[0]);
                                 updateStok(0,stok[0]);
                                 lagi_stok();
                             }else{
                                alya(34,28);printf("      ");
                                alya(45,29);printf("    ");
                             }
                        
               }else if(pilih1=='2'){
                     alya(15,29);printf("jumlah  yg mau di tambahkan : ");
                          alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                         if(tamp != 0){
                            stok[1]+=tamp;
                            alya(82,14);printf("%d  ",stok[1]);
                            updateStok(1,stok[1]);
                            lagi_stok();
                          }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                          }

               }else if(pilih1=='3'){
                     alya(15,29);printf("jumlah  yg mau di tambahkan : ");
                             alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[2]+=tamp;
                                 alya(82,16);printf("%d  ",stok[2]);
                                 updateStok(2,stok[2]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }
                        

               }else if(pilih1=='4'){
                     alya(15,29);printf("jumlah yg mau di tambahkan : ");
                             alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[3]+=tamp;
                                 alya(82,18);printf("%d  ",stok[3]);
                                 updateStok(3,stok[3]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }       


               }else if(pilih1=='5'){
                     alya(15,29);printf("jumlah  yg mau di tambahkan : ");
                               alya(45,29);julh[y]=getch();
                               batas(45,29,3);
                           if(tamp != 0){
                                 stok[4]+=tamp;
                                 alya(82,20);printf("%d  ",stok[4]);
                                 updateStok(4,stok[4]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }
               }else if(pilih1=='6'){
                     alya(15,29);printf("jumlah  yg mau di tambahkan : ");
                       
                             alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[5]+=tamp;
                                 alya(82,22);printf("%d  ",stok[5]);
                                 updateStok(5,stok[5]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }                        
                       
                        x++;
              }else{
                    alya(47,37);printf("kode yang di input salah!!!");Sleep(500);
                    alya(34,28);printf("  ");Sleep(500);
                    alya(47,37);printf("                           ");Sleep(500);
               }

            }
         }else if(pilih=='2'){
               system("cls");  
               bingkai(100, 35, 10,4, 3);
               bingkai(70,20, 25,6 ,14);
               bingkai(70,5,25,6,14);
               bingkai(0,20,76,6,14);
               alya(30,8);printf(" MENU");
               alya(82,8);printf("STOK");
               alya(27,11);printf("1.LAPPET");
               alya(27,13);printf("2.OMBUS-OMBUS");
               alya(27,15);printf("3.PANGGELONG");
               alya(27,17);printf("4.GOLANG-GOLANG");
               alya(27,19);printf("5.ITAK");
               alya(27,21);printf("6.SAMBAL TARUMA");
               alya(27,23);printf("7.SAMBAL SUHAT");
               alya(82,11);printf("%d",stok[6]);
               alya(82,13);printf("%d",stok[7]);
               alya(82,15);printf("%d",stok[8]);
               alya(82,17);printf("%d",stok[9]);
               alya(82,19);printf("%d",stok[10]);
               alya(82,21);printf("%d",stok[11]);
               alya(82,23);printf("%d",stok[12]);
              
                   bingkai(40,6,14,27,3);
                  for(int c=1;c<=1;){
                  alya(15,28);printf("pilih makanan : ");alya(34,28);pilih2=getche();

               if(pilih2=='1'){
                     alya(15,29);printf("jumlah yg mau di tambah : ");
                       alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[6]+=tamp;
                                 alya(82,11);printf("%d  ",stok[6]);
                                 updateStok(6,stok[6]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }                        
                              
               }else if(pilih2=='2'){
                     alya(15,29);printf("jumlah yg mau di tambah : ");
                          alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[7]+=tamp;
                                 alya(82,13);printf("%d  ",stok[7]);
                                 updateStok(7,stok[7]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }                        

               }else if(pilih2=='3'){
                     alya(15,29);printf("jumlah yg mau di tambah : ");
                        alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[8]+=tamp;
                                 alya(82,15);printf("%d  ",stok[8]);
                                 updateStok(8,stok[8]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }
               }else if(pilih2=='4'){
                     alya(15,29);printf("jumlah yg mau di tambah : ");
                          alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[9]+=tamp;
                                 alya(82,17);printf("%d  ",stok[9]);
                                 updateStok(9,stok[9]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }
               }else if(pilih2=='5'){
                     alya(15,29);printf("jumlah yg mau di tambah : ");
                          alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[10]+=tamp;
                                 alya(82,19);printf("%d  ",stok[10]);
                                 updateStok(10,stok[10]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }
               }else if(pilih2=='6'){
                     alya(15,29);printf("jumlah yg mau di tambah : ");
                         alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[11]+=tamp;
                                 alya(82,21);printf("%d  ",stok[11]);
                                 updateStok(11,stok[11]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }

               }else if(pilih2=='7'){
                     alya(15,29);printf("jumlah yg mau di tambah : ");
                          alya(45,29);julh[y]=getch();
                              batas(45,29,3);
                           if(tamp != 0){
                                 stok[12]+=tamp;
                                 alya(82,23);printf("%d  ",stok[12]);
                                 updateStok(12,stok[12]);
                                 lagi_stok();
                           }else{
                              alya(34,28);printf("      ");
                              alya(45,29);printf("       ");
                           }
                        c++;   
               }else{
                    alya(47,37);printf("kode yang di input salah!!!");Sleep(500);
                    alya(34,28);printf("  ");Sleep(500);
                    alya(47,37);printf("                           ");Sleep(500);
               }

            }                            
                a++;
         }else{
            alya(47,37);printf("kode yang di input salah!!!");Sleep(500);
            alya(63,31);printf("    ");Sleep(500);
            alya(47,37);printf("                           ");Sleep(500);

        }       
          }         

}

void harga_barang(){
    FILE *barang;
   barang=fopen("harga.txt","r");
   for(int x=0;x<13;x++){
      fscanf(barang,"%d",&harga[x]);
   }fclose(barang); 
   
    system("cls");
         bingkai(120, 40, 0, 0, 3);
         bingkai(30,10,12,12,14);
         bingkai(30,10,80,12,14);
         bingkai(20,5,50,29,14);
         alya(20,16);printf("1.CINDRAMATA");
         alya(90,16);printf("2.MAKANAN");
         for(int a=1;a<=1;){
         alya(53,31);printf("pilih :");
         alya(63,31);pilih=getche();
         if(pilih=='1'){
                     system("cls");
                     bingkai(100, 35, 10, 4, 3);
                     bingkai(70,20, 25,6 ,14);
                     bingkai(70,5,25,6,14);
                     bingkai(0,20,76,6,14);
                     alya(30,8);printf(" MENU");
                     alya(82,8);printf("HARGA");
                     alya(27,12);printf("1.SONGKET");
                     alya(27,14);printf("2.GANTUNGAN KUNCI KHAS SIPIROK");
                     alya(27,16);printf("3.KOTAK TISU KHAS SIPIROK");
                     alya(27,18);printf("4.KOTAK PENSIL KHAS SIPIROK");
                     alya(27,20);printf("5.TEMPAT PENSIL KHAS SIPIROK");
                     alya(27,22);printf("6.TAPPA");
                     alya(82,12);printf("RP.%d",harga[0]);
                     alya(82,14);printf("Rp.%d",harga[1]);
                     alya(82,16);printf("Rp.%d",harga[2]);
                     alya(82,18);printf("Rp.%d",harga[3]);
                     alya(82,20);printf("RP.%d",harga[4]);
                     alya(82,22);printf("RP.%d",harga[5]);

                     bingkai(60,6,14,27,3);
                     alya(15,28);printf("pilih cindramata : ");
                     for(int c=0;c=1;){
                     alya(34,28);pilih1=getche();
               if(pilih1=='1'){
                     alya(15,29);printf("harga  yg mau di update : Rp.");
                        // int cekk=0;
                        // while(cekk==0){
                               alya(45,29);julh[y]=getch();
                              batas(45,29,6);
                            
                                 harga[0]=tamp;
                                 alya(82,12);printf("Rp.%d  ",harga[0]);
                                 update_harga(0,harga[0]);
                                  lagi_barang();
                         
                                 // cekk=1;
                        // }
                        
               }else if(pilih1=='2'){
                  // int cekk=0;
                    alya(15,29);printf("harga  yg mau di update : Rp.");
                  // while(cekk==0){
                          alya(45,29);julh[y]=getch();
                              batas(45,29,5);
                      
                           harga[1]=tamp;
                            alya(82,14);printf("Rp.%d  ",harga[1]);
                            update_harga(1,harga[1]);
                             lagi_barang();

                           // cekk=1;
                  // }

               }else if(pilih1=='3'){
                   alya(15,29);printf("harga  yg mau di update : Rp.");
                        // int cekk=0;
                        // while(cekk==0){
                                alya(45,29);julh[y]=getch();
                              batas(45,29,5);
                              
                                 harga[2]=tamp;
                                 alya(82,16);printf("Rp.%d  ",harga[2]);
                                 update_harga(2,harga[2]);
                                  lagi_barang();
                     
                                 // cekk=1;
                        // }

                  }else if(pilih1=='4'){
                      alya(15,29);printf("harga  yg mau di update : Rp.");
                        // int cekk=0;
                        // while(cekk==0){
                                 alya(45,29);julh[y]=getch();
                                    batas(45,29,5);

                                 harga[3]=tamp;
                                 alya(82,18);printf("Rp.%d  ",harga[3]);
                                 update_harga(3,harga[3]);
                                  lagi_barang();
                        
                                 // cekk=1;
                        // }            


                  }else if(pilih1=='5'){
                       alya(15,29);printf("harga  yg mau di update : Rp.");
                        // int cekk=0;
                        // while(cekk==0){
                                 alya(45,29);julh[y]=getch();
                                  batas(45,29,5);
                            
                                 harga[4]=tamp;
                                 alya(82,20);printf("Rp.%d  ",harga[4]);
                                 update_harga(4,harga[4]);
                                  lagi_barang();
                        
                        
                                 // cekk=1;
                        // }   
                  }else if(pilih1=='6'){
                     alya(15,29);printf("harga  yg mau di update : Rp. ");
                        // int cekk=0;
                        // while(cekk==0){
                               alya(45,29);julh[y]=getch();
                              batas(45,29,5);
                           
                                 harga[5]=tamp;
                                 alya(82,22);printf("Rp.%d  ",harga[5]);
                                 update_harga(5,harga[5]);
                                  lagi_barang(); 
                        
                                 // cekk=1;
                        // }
                    c++;   
                  }else{
                     alya(47,37);printf("kode yang di input salah!!!");Sleep(500);
                     alya(34,28);printf("  ");Sleep(500);
                     alya(47,37);printf("                           ");Sleep(500);
                  }    
                     }      
          }else if(pilih=='2'){
               system("cls");  
               bingkai(100, 35, 10,4, 3);
               bingkai(70,20, 25,6 ,14);
               bingkai(70,5,25,6,14);
               bingkai(0,20,76,6,14);
               alya(30,8);printf(" MENU");
               alya(82,8);printf(" HARGA");
               alya(27,11);printf("1.LAPPET");
               alya(27,13);printf("2.OMBUS-OMBUS");
               alya(27,15);printf("3.PANGGELONG");
               alya(27,17);printf("4.GOLANG-GOLANG");
               alya(27,19);printf("5.ITAK");
               alya(27,21);printf("6.SAMBAL TARUMA");
               alya(27,23);printf("7.SAMBAL SUHAT");
               alya(82,11);printf("Rp.%d",harga[6]);
               alya(82,13);printf("RP.%d",harga[7]);
               alya(82,15);printf("Rp.%d",harga[8]);
               alya(82,17);printf("Rp.%d",harga[9]);
               alya(82,19);printf("Rp.%d",harga[10]);
               alya(82,21);printf("Rp.%d",harga[11]);
               alya(82,23);printf("Rp.%d",harga[12]);
              
                   bingkai(60,6,14,27,3);
                 
                  alya(15,28);printf("pilih makanan : ");
                  for(int b=0;b<=1;){
                  alya(34,28);pilih2=getche();
               
               if(pilih2=='1'){
                  alya(15,29);printf("harga  yg mau di update : Rp.");
                      int cekk=0;
                      while(cekk==0){
                             alya(45,29);julh[y]=getch();
                              batas(45,29,4);
                       
                                 harga[6]=tamp;
                                 alya(82,11);printf("Rp.%d  ",harga[6]);
                                 update_harga(6,harga[6]);
                                  lagi_barang();
                        
                        
                                 cekk=1;
                        }        

               }else if(pilih2=='2'){
                  alya(15,29);printf("harga  yg mau di update : Rp. ");
                      int cekk=0;
                      while(cekk==0){
                         alya(45,29);julh[y]=getch();
                              batas(45,29,4);
                       
                                 harga[7]=tamp;
                                 alya(82,13);printf("Rp.%d  ",harga[7]);
                                 update_harga(7,harga[7]);
                                  lagi_barang();
                        
                                 cekk=1;
                        }     

               }else if(pilih2=='3'){
                  alya(15,29);printf("harga  yg mau di update : Rp. ");
                      int cekk=0;
                      while(cekk==0){
                          alya(45,29);julh[y]=getch();
                              batas(45,29,4);
               
                                 harga[8]=tamp;
                                 alya(82,15);printf("RP.%d  ",harga[8]);
                                 update_harga(8,harga[8]);
                                  lagi_barang();
                        
                        
                                 cekk=1;
                        }  
               }else if(pilih2=='4'){
                  alya(15,29);printf("harga  yg mau di update : Rp. ");
                      int cekk=0;
                      while(cekk==0){
                          alya(45,29);julh[y]=getch();
                              batas(45,29,4);
                     
                                 harga[9]=tamp;
                                 alya(82,17);printf("Rp.%d  ",harga[9]);
                                 update_harga(9,harga[9]);
                                  lagi_barang();
                        
                        
                                 cekk=1;
                        }
               }else if(pilih2=='5'){
                  alya(15,29);printf("harga  yg mau di update : Rp.");
                      int cekk=0;
                      while(cekk==0){
                           alya(45,29);julh[y]=getch();
                              batas(45,29,4);
                     
                                 harga[10]=tamp;
                                 alya(82,19);printf("Rp.%d  ",harga[10]);
                               update_harga(10,harga[10]);
                                lagi_barang();
                        
                                 cekk=1;
                        }  
               }else if(pilih2=='6'){
                  alya(15,29);printf("harga  yg mau di update : Rp. ");
                      int cekk=0;
                      while(cekk==0){
                        alya(45,29);julh[y]=getch();
                              batas(45,29,4);
                       
                                 harga[11]=tamp;
                                 alya(82,21);printf("Rp.%d  ",harga[11]);
                                 update_harga(11,harga[11]);
                                  lagi_barang();
                        
                                 cekk=1;
                        }   
               }else if(pilih2=='7'){
                  alya(15,29);printf("harga  yg mau di update : Rp.");
                      int cekk=0;
                      while(cekk==0){
                           alya(45,29);julh[y]=getch();
                              batas(45,29,4);
                       
                                 harga[12]=tamp;
                                 alya(82,23);printf("Rp.%d  ",harga[12]);
                             update_harga(12,harga[12]);
                             lagi_barang();
                        
                                 cekk=1;
                        }  
                         
                        b++;   
                  }else{
                     alya(47,37);printf("kode yang di input salah!!!");Sleep(500);
                     alya(34,28);printf("  ");Sleep(500);
                     alya(47,37);printf("                           ");Sleep(500);
                  }    
                  }                                              
                a++;
         }else{
            alya(47,37);printf("kode yang di input salah!!!");Sleep(500);
            alya(63,31);printf("  ");Sleep(500);
            alya(47,37);printf("                           ");Sleep(500);
        }
        
         }
}

void keluar() {
   char pilih;
   alya(40,20);printf("ANDA YAKIN INGIN KELUAR? (Y/N) : ");
    while(true){ 
   alya(75,20);pilih=getche();
      if (pilih=='Y'){
         system("cls");
      tampilan5();
      }else if (pilih=='N'){
         menu_utama();
      }
      else {
         textcolor(12);
         alya(53,28);printf("INPUTAN SALAH!!!");Sleep(100);
         alya(75,20);printf("    ");Sleep(1000);
         alya(53,28);printf("                  ");Sleep(1000);
        
      }
   }

}

void lagi_barang(){
 alya(15,30);printf("apakah  lagi (y/t)?");
   for(int a=1;a<=1;){
      alya(35,30);lagi=getche();
      if(lagi=='y'){
         harga_barang();
      }else if(lagi=='t'){
         menu_utama();
         a++;
      }else{
         alya(15,31);printf("kode yg di inputkan salah!!!");Sleep(1000);
         alya(35,30);printf("    ");;Sleep(1000);
         alya(15,31);printf("                               ");Sleep(1000);

      }
   }
}

void lagi_stok(){
 alya(15,30);printf("apakah  lagi (y/t)?");
   for(int a=1;a<=1;){
      alya(35,30);lagi=getche();
      if(lagi=='y'){
         stok_barang();
      }else if(lagi=='t'){
         menu_utama();
         a++;
      }else{
         alya(15,31);printf("kode yg di inputkan salah!!!");Sleep(1000);
         alya(35,30);printf("    ");;Sleep(1000);
         alya(15,31);printf("                               ");Sleep(1000);

      }
   }
}

void beli_lagi(){
 alya(15,30);printf("apakah  lagi (y/t)?");
   for(int a=1;a<=1;){
      alya(35,30);lagi=getche();
      if(lagi=='y'){
         penjualan();
      }else if(lagi=='t'){
         system("cls");
          bingkai(120, 40, 0, 0,3);
         bingkai(90,20, 15,6 ,14);
         data();
         a++;
      }else{
         alya(15,31);printf("kode yg di inputkan salah!!!");Sleep(1000);
         alya(35,30);printf("    ");;Sleep(1000);
         alya(15,31);printf("                               ");Sleep(1000);

      }
   }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                       VALIDASI ANGKA                                                      //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
int valangka(char a[])
{
    int x = 0;
    int y = 0;
    if (a[0] == ' '){
        y = 1;
        return y;
    }
    for (int i = 0; i < strlen(a); i++){
        if (!(a[i] >= '0' && a[i] <= '9')){
            x++;
        }
    }
    return x;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                        VALIDASI NO HP                                                 //
//////////////////////////////////////////////////////////////////////////////////////////////////////////

int valnomor(char hp[]){
	int cek=0;
   if(strlen(hp) == '0' || !(hp[0] >= '0' && hp[0] <= '9') || !(hp[strlen(hp)-1] >= '0' && hp[strlen(hp)-1] <= '9') || !(strlen(hp) >= 11 && strlen(hp) <= 13)){
   	cek++;
   }
   for(int x=0; x<strlen(hp); x++){
   	if(!(hp[x] >= '0' && hp[x] <= '9') || hp[1] != '8' || hp[0] != '0'|| hp[2]=='0'||hp[2]=='4'||hp[2]=='6'){
      	cek++;
      } 
   }
   if(cek > 0){
   	return false;
   }else{
   	return true;
   }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                        VALIDASI JENIS KELAMIN                                                //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int valjenis_kelamin(char jenis_kelamin[]){
	int cek = 0;
   for(int x=0; x<strlen(jenis_kelamin); x++){
   	if(!(jenis_kelamin[x] >= 'a' && jenis_kelamin[x] <= 'z' || jenis_kelamin[x] >= 'A' && jenis_kelamin[x] <= 'Z') || strlen(jenis_kelamin) == 0){
      	cek++;
      }
   }
   if((strcmp(jenis_kelamin,"LAKI-LAKI")==0 || strcmp(jenis_kelamin,"laki-laki")==0 || strcmp(jenis_kelamin,"PEREMPUAN")==0 || strcmp(jenis_kelamin,"perempuan")==0)){
		return true;
   }else{
   	return false;
   }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                    VALISADI NAMA                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

char* valname(char* namaa,int p){	
   char inputan;	
   char data1[30]={};
   char data2[30]={};
   int index=0;

      while((inputan=getch())!=13 || index<3 || data1[index-1]==' '  || data1[index-1]=='-'  || data1[index-1]=='\'' )
      {
         if(index<p && (inputan>='a' && inputan<='z' || inputan>='A' && inputan<='Z' || inputan==' ' && index!=0 && data1[index-1]!=' ' || inputan=='-' && index!=0 && data1[index-1]!='-' && data1[index-1]!='\''
               || inputan=='\'' && index!=0 && data1[index-1]!='\'' && data1[index-1]!='-')){
            printf("%c",inputan);
            data1[index]=inputan;
            index++;
         }else if(inputan==8 && index!=0){
            printf("\b \b");
            index-=1;
            data1[index]=' ';
         }
      }
      for(int a=0;a<index;a++){
         data2[a]=data1[a];
      }
      strcpy(namaa,data2);
      return namaa;
}




void data(){
         
         alya(20,12);printf("N A M A                   :    ");valname(nama,25);
         alya(20,13);printf("------------------------------------------------------------------------");
         alya(20,14);printf("N O . H P                 :");
         alya(20,15);printf("------------------------------------------------------------------------");
         alya(20,16);printf("J E N I S  K E L A M IN   :");
         alya(20,17);printf("------------------------------------------------------------------------");
             
         do{
             alya(50,14);gets(hp[i]);
            if(valnomor(hp[i]) == true && strlen(hp[i]) >= 11 && strlen(hp[i]) <= 13){
            
            }else{
            	alya(50,14); printf("Inputan Invalid"); Sleep(400);
            	alya(50,14); printf("                                            "); Sleep(400);
            }
         }while(valnomor(hp[i])!= true);

        do{
          alya(50,16);gets(jenis_kelamin[i]);
          if(valjenis_kelamin(jenis_kelamin[i]) == true){
          	// alya(23,14);printf("%s",jenis_kelamin[i]);
          }else{
          	alya(50,16); printf("Inputan Invalid"); Sleep(400);
            alya(50,16); printf("                                    "); Sleep(400);
          }
        }while(valjenis_kelamin(jenis_kelamin[i]) != true);

        	struk();
}

void data1(){
         alya(17,11);printf("N A M A                   \t\t :   %s",nama);
         alya(20,12);printf("------------------------------------------------------------------------");
         alya(17,13);printf("NO . HP                  \t\t :    %s",hp[i]);
         alya(20,14);printf("------------------------------------------------------------------------");
         alya(17,15);printf("J E N I S  K E L A M I N \t\t :    %s",jenis_kelamin[i]);
         alya(20,16);printf("------------------------------------------------------------------------");


}






  
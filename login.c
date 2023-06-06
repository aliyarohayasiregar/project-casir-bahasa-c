void login()
{
     tampilan1();
      bingkai(40, 5, 40, 27, 3);
    int z=0;
    char nama[100];
    char login[20][100];
while(true){
    textcolor(15);
    alya(43, 29);printf("password:");
    z=0;
    alya(54,29);nama[z]=getch();
    while(nama[z]!=13){
        if(nama[z]==8){
            z--;
            if(z<0){
                z=0;
            }alya(54+z,29);printf(" ");
        }else{
            printf("*");
            z++;
        }
        if(z>6){
            z=6;
            alya(54+z,0);printf(" ");
        }alya(54+z,29);nama[z]=getch();
    }nama[z]='\0';
    FILE *fp;
    fp=fopen("pass.txt","r");
    fscanf(fp,"%s",&login[0]);
    fclose(fp);

    if(strcmp(nama,login[0])==0){
      alya(50, 33);
                 printf("login berhasil");Sleep(100);
                 alya(43,30);printf("                 ");
            
                 for(int x=1;x<=100;x++){
                     textcolor(15);
                     alya(50,35);printf("LOADING");
                     alya(60,35);printf("%d",x);Sleep(10);
                         alya(x+10,36);printf("%c",219);Sleep(1);
                
                 }break;
            }else{
                alya(50, 33);printf("pasword salah");Sleep(1000);
                alya(50,33);printf("              ");
                alya(54,29);printf("              ");
            }
}
}
//     tampilan1();
//     bingkai(40, 5, 40, 27, 3);
//     char sandi[100];
//     alya(43, 29);
//     printf("password : ");
//     alya(54,29);printf("max 6 digit !!!");Sleep(1000);
//     alya(54,29);printf("                ");
// while(true){
//     int b=0;
//     alya(54,29);sandi[b]=getch();
//     while(sandi[b]!=13){         
//         if(sandi[b]==8){
//             b--;
//             if(b<0){
//                 b=0;
//             }
//             alya(54+b,29);printf(" ");
//         }else{
//             printf("*");
//             b++;
//         }if(b>6){
//             b=6;
//             alya(54+b,29);printf(" ");
//         }
//         alya(54+b,29);sandi[b]=getch();
//     }sandi[b]='\0';

//             if (strcmp(sandi,"080403") == 0)
//             {
//                  alya(50, 33);
//                  printf("login berhasil");Sleep(100);
//                  alya(43,30);printf("                 ");
            
//                  for(int x=1;x<=100;x++){
//                      textcolor(15);
//                      alya(50,35);printf("LOADING");
//                      alya(60,35);printf("%d",x);Sleep(50);
//                          alya(x+10,36);printf("%c",219);Sleep(1);
                
//                  }break;
//             }else{
//                 alya(50, 33);printf("pasword salah");Sleep(1000);
//                 alya(50,33);printf("              ");
//                 alya(54,29);printf("              ");
//             }

   
// }
// }
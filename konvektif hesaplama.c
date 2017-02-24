#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
  float t850,td850,t500,tp500,tdd700,td700,t700,ki,tho;
  int secim,secim1,secim2;
  printf("---- Konvektif Hesaplayici v0.2----\n");
  printf("Bu program cesitli konvektif endeksleri hesaplar.\n*** HAVANIN NOTLARI tarafindan yapilmistir.***\n");
  printf("Asagidaki adreslerden ulasabilirsiniz:\nTwitter:@havaninotlari\nhavaninotlari.com\nMail:havanotu@gmail.com\n ");
  
  	 
  
again:  printf("Bu programda hesaplanabilecek endeksler;\n 1-K Index\n 2-Totals Totals\n 3-Lifted Index\n 4-Thompson Index\n 5-Vertical Totals\n 6-Cross Totals\n 7-LCL Seviyesi Bulma\n ");
  printf("Seciminizi Yapiniz:\n"); scanf("%d",&secim);
if (secim==1){
              printf("K Index sectiniz.\n 850 hPa sicakligini giriniz:\n"); scanf("%f",&t850); 
              printf("500 hPa sicakligini giriniz:\n"); scanf("%f",&t500);
              printf("850 hPa yogunlasma sicakligini giriniz:\n"); scanf("%f",&td850);
              printf("700 hPa yogunlasma depresyonunu giriniz:\n"); scanf("%f",&tdd700);
              float KIndex=(t850-t500)+(td850-tdd700); 
              printf("K Index=%.2f\n",fabs(KIndex));
   if(KIndex>=26 && KIndex<=30){
                            printf(" Bir kac oraj aktivasyonu olusabilir\n");
                            }
                            else if (KIndex>=30 && KIndex<=40){
                                 printf("Gokgurultulu saganak yagis kutlesi etkisini gece saatlerinde de yogun bicimde surdurebilir.\n");
                                 }
                                 else if(KIndex>=40){
                                       ntf("Gok gurultulu firtina olusma ihtimali kesine yakindir\n\a");
                                      }
                                       }
if (secim==2){
              printf("Totals Totals Index sectiniz.\n 850 hPa sicakligini giriniz:\n"); scanf("%f",&t850);
              printf("850 hPa yogunlasma sicakligini giriniz:\n"); scanf("%f",&td850);
              printf("500 hPa sicakli1gini giriniz:\n "); scanf("%f",&t500); 
              float Totalstotals= t850+td850 - 2*(t500);
              printf("Totals Totals Index=%.2f\n",fabs(Totalstotals));
   if (Totalstotals>=44 && Totalstotals<=45){
                       printf("Tekil firtina kutleleri.\n");
                       }
                       else if (Totalstotals>=46 && Totalstotals<=51){
                            printf("Aralikli firtina kutleleri.\n"); 
                            }
                            else if (Totalstotals>=52 && Totalstotals<=55){
                                 printf("Yaygin firtina kutleleleri.\n");
                                 }
                                 else if (Totalstotals>=60){
                                      printf("Gok gurultulu firtina ihtimali kesine yakin.\n");
                                      }                                  
                                       }       
if (secim==3){
              printf("Lifted Index'i sectiniz.\n");
              printf("500 hPa sicakligini giriniz:\n"); scanf("%f",&t500);
              printf("500 hPa Parsel Sicakligini giriniz:\n"); scanf("%f",&tp500);
             float lifted=t500-tp500;
              printf("Lifted Index:%.2f\n",lifted);
              if (lifted>11){
                             printf("Asiri derecede kararli hava kosullari. Oraj ihtimali sifira yakin.\n");
                             }
                             else if (lifted>=8 && lifted<=11){
                                  printf(" Cok kararli hava kosullari. Oraj ihtimali  cok dusuk.\n");
                                  }
                                  else if (lifted>=4 && lifted<=7){
                                       printf("Kararli hava kosullari. Oraj ihtimali dusuk.\n");
                                       }
                                       else if (lifted>=0 && lifted<=3){
                                            printf("Cogunlukla kararlidir. Oraj ihtimali gene dusuktur.\n");
                                            }
                                            else if (lifted>=-3 && lifted<=-1){
                                                 printf("Az da olsa kararsizlik vardir. Oraj olusabilir.\n");
                                                 }
                                                 else if (lifted>=-5 && lifted<=-4){
                                                      printf("Kararsizlik durumudur. Buyuk ihtimalle gok gurultulu firtina olusacaktir.\n");
                                                      }
                                                      else if(lifted>=-7 && lifted<=-6){
                                                           printf("Cok fazla kararsizlik. Siddetli bir gok gurultulu firtina olusabilir.\n");
                                                           }
                                                           else if (lifted<=-7){
                                                                printf("Asiri derecede kararsizlik durumu vardir. Hortum bile olusabilir.\n");
                                                                }
                                                                 }
if (secim==4){
              printf("Thompson Index sectiniz.\n");
              printf("850 hPa sicakligini giriniz:\n"); scanf("%f",&t850);
              printf("500 hPa sicakligini giriniz:\n"); scanf("%f",&t500);
              printf("850 hPa yogunlasma sicakigini giriniz:\n"); scanf("%f",&td850);
              printf("700 hPa sicakligini giriniz:\n"); scanf("%f",&t700);
              printf("700 hPa yogunlasma sicakligini giriniz:\n"); scanf("%f",&td700);
              printf("500 hPa parsel sicakligini giriniz:\n"); scanf("%f",&tp500);
         float thompson=((t850-t500)+td850-(t700-td700))-(t500-tp500);
         printf("Thompson Index=%.2f\n",fabs(thompson));
         if(thompson<25){
                         printf("Oraj ihtimali dusuk.\n");
                         }
                         else if (thompson>25 && thompson<=34){
                              printf("Oraj potansiyeli bulunuyor.\n");
                              }
                              else if(thompson>=35 && thompson<=39){
                                   printf("Siddetlenebilecek bir oraj potansiyeli bulunuyor.\n");
                                   }
                                   else if (thompson>=40){
                                        printf("Siddetli oraj potansiyeli var.\n");
                                        } 
                                         }
if (secim==5) {
              printf("Vertical Totals sectiniz.\n");
              printf("850 hPa sicakligini giriniz:\n"); scanf("%f",&t850);
              printf("500 hPa sicakligini giriniz:\n"); scanf("%f",&t500);
         float vertical=t850-t500;
         printf("Vertical Totals=%.2f\n",fabs(vertical));
         if(vertical>28){
                         printf("Oraj olusma ihtimali fazladir.\n");
                         }
                          }
if (secim==6){
              printf("Cross Totals sectiniz.\n");
              printf("850 hPa yogunlasma sicakligini giriniz:\n"); scanf("%f",&td850);
              printf("500 hPa sicakigini giriniz:\n"); scanf("%f",&t500);
        float cross=td850-t500;
        printf("Cross Totals=%.2f",cross);
        if(cross<18){
                     printf("Oraj olusumu icin zayif potansiyel vardir.\n");
                     }
                     else if (cross>=22 && cross<=23){
                          printf("Oraj olusumu icin orta derecede potansiyel vardir.\n");
                          }
                          else if(cross>24){
                               printf("Oraj olusumu icin cok guclu potansiyel vardir.\n");
                               }
                               }
if (secim==7){
             
             float sicaklik,bagilnem;
              printf("LCL Seviyesi Bulma'yi sectiniz.\n");
              printf("Sicakligi giriniz:\n"); scanf("%f",&sicaklik);
              printf("Bagil Nemi giriniz:\n"); scanf("%f",&bagilnem);
              float lcl=(20+sicaklik/5)*(100-bagilnem);
              printf("LCL Seviyesi :%.1f metre\n",lcl);
              }    
              else{
                   printf("Lutfen 1-7 Arasinda Secim Yapiniz.\n\a");
                   }     
			
			
		
			
		
         goto again;

  system("PAUSE");	
  return 0;
}

#include <stdio.h>
int main(){
    int sodiendauthang, sodiencuoithang,sodien, dem;
    printf("nhap so dien dau thang:");
    scanf("%d", &sodiendauthang);
    printf("nhap so dien cuoi thang:");
    scanf("%d", &sodiencuoithang);
    sodien = sodiendauthang+sodiencuoithang;
    for(int i=0;i<sodien;i++){
    if((sodien>=0) && (sodien<50)) dem+=10000;
    if((sodien>=50) && (sodien<100)) dem+=15000;
    if((sodien>=100) && (sodien<150)) dem+=20000;
    if((sodien>=150) && (sodien<200)) dem+=25000;
    if(sodien>=200) dem+=30000;
}
printf("%d", dem);
return 0;
}
    
    
    
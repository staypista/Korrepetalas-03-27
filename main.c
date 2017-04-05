#include <stdio.h>
#include <stdlib.h>
void hiba(void);
void checksum();
void primtolig();
void repux();
void HammingDistance(int ham1, int ham2);

int main()
{
    printf("\n\n*** 1. feladat ***\n");
    /**1. feladat*/
    int i, szam=0;
    for(i=0;i<=255;i++){
        if((i&0b1000) == 0b1000){
            szam++;
        }
    }
    printf("%d", szam);


    printf("\n\n*** 2. feladat ***\n");
    /**2. feladat*/
    hiba();


    printf("\n\n*** 3. feladat ***\n");
    /**3. feladat*/
    checksum();


    printf("\n\n*** 4. feladat ***\n");
    /**4. feladat*/
    primtolig();


    printf("\n\n*** 5. feladat ***\n");
    /**5. feladat*/
    repux();


    printf("\n\n*** 6. feladat ***\n");
    /**6. feladat*/
    HammingDistance(7,1);


    printf("\n\n");
    return 0;
}


void hiba(void){
    double h=0;
    double hp0=1.5;
    int i=0;
    for(i=10;i<=100;i=i+10/**i+=10*/){
       /**Xm = i*/
        h=hp0*(100/i);
        if(h < 2.5) break;
    }
    printf("%d", i);
}

void checksum(){
    int i;
    unsigned char ch=0;
    for(i=5;i<=20;i++){
        ch=ch+i;
    }
    printf("%d", ch);
}

void primtolig(){
    int i, j;
    int db=0;
    for(i=1000;i<10001;i++){
        for(j=2;j<10001;j++){
            if((i%j) == 0){
                if(i == j){
                    db++;
                }
                else{
                    break;
                }
            }
        }
    }
    printf("%d", db);
}

void repux(){
    int i;
    double Rx;
    double Re=270;
    double temp;
    for(i=1, Rx=270.2;i<=150;i++, Rx+=0.2){
        temp=(1/Re)+(1/Rx);
        Re=(1/temp);
    }
    printf("%f", Re);
}

void HammingDistance(int ham1, int ham2){
    int hammdistance=0;
    int i;
    int temp=0;
    temp=ham1^ham2;
    for(i=1;i != 0;i<<=1){
        if((temp&i) == i) hammdistance++;
    }
    printf("%d", hammdistance);
}


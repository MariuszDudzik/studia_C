#include <stdio.h>

int main(){

char napisA[100], napisB[100], znak, znacznik;
int licznikA, licznikB, n, a, b;
licznikA = licznikB = 0;
znacznik = 'C';

for (int i = 0; i < 99; i++ ){
    if(scanf("%c", &znak) != EOF && znak != '\n'){
        napisA[i] = znak;
        licznikA++;
    }
    else{
    napisA[i]=('\0');
    break;
    }
    }

for(int i = 0; i < 99; i++ ){
    if(scanf("%c", &znak) != EOF && znak != '\n'){
        napisB[i] = znak;
        licznikB++;
    }
    else{
   napisB[i]=('\0');
    break;
    }
    }

 putchar('\n');

if (licznikA > licznikB)
n = licznikA;
else
n = licznikB;

for(int i = 0; i<n; ++i){
a = napisA[i];
b = napisB[i];
    if (a != b){
        if(a<b){
            znacznik = 'A';
            break;
        }
        else{
            znacznik = 'B';
            break;
        }
    }
else
{}

}

if(znacznik == 'C')
printf("Takie same wyrazy");
else{
    if(znacznik == 'A'){
        for(int i = 0; i<=licznikA; i++){
            printf("%c", napisA[i]);
        }
    }
    else
        for(int i = 0; i<=licznikB; i++){
            printf("%c", napisB[i]);
        }
    }
}


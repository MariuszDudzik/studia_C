#include <stdio.h>

int main() {
    
int tab[100][100];
int a, b, l_wiersza, l_kolumny, p_wiersz, p_kolumna, k_wiersz, k_kolumna;

    
    scanf("%d %d", &a, &b);
    
    if ((a>0 && a<=100) && (b>0 && b<=100)){
           for(int i=0; i<a; ++i){
               for(int j=0;j<a; ++j)
                   scanf("%d", &tab[i][j]);
           }
    l_wiersza = a;
    l_kolumny = b;

    p_wiersz = 0;
    k_wiersz = a-1;
    k_kolumna = b-1;
    p_kolumna = 0;

while(l_wiersza>0){

if(l_wiersza>0){
        for(int i = p_wiersz; i <= p_wiersz; i++){
            for(int j = p_kolumna; j<=k_kolumna; j++)
            printf("%d ", tab[i][j]);
        }
    p_wiersz++;
    l_wiersza--;
}
else
break;

if(l_kolumny>0){
        for(int j = k_kolumna; j <= k_kolumna; j++){
            for(int i = p_wiersz; i<=k_wiersz; i++)
            printf("%d ", tab[i][j]);
        }
           
     k_kolumna--;
     l_kolumny--;
}
else
break;

if(l_wiersza>0){
        for(int i = k_wiersz; i >= k_wiersz; i--){
            for(int j = k_kolumna; j>=p_kolumna; j--)
            printf("%d ", tab[i][j]);
        }
    k_wiersz--;
    l_wiersza--;
}
else
break;

if(l_kolumny>0){
        for(int j = p_kolumna; j <= p_kolumna; j++){
            for(int i = k_wiersz; i>=p_wiersz; i--)
            printf("%d ", tab[i][j]);
        }
           
     p_kolumna++;
    l_kolumny--;
}
else
break;

}
   
}           
    else
        printf("BŁĄD");
    return 0;
}
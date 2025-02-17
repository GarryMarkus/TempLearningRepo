#include<stdio.h>
#include<math.h>

int countDigit(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}

int divisionModulo(int key, int ts){
    return key%ts;
}

int midSquare(int key, int ts){
    int x=key*key;
    int k=countDigit(ts-1);
    int y=x/(int)pow(10,k);
    int z=y%(int)pow(10,k);
    return z%ts;
}

int folding(int key, int ts){
    int k=countDigit(ts-1);
    int sum=0;
    while(key>0){
        sum=sum+(key%(int)pow(10,k));
        key=key/(int)pow(10,k);
    }
    return sum%ts;
}

int main(){
    int key[]={153, 122, 101, 177, 205};
    int ts=100;
    int n=6;
    for(int i=0; i<n; i++){
        printf("Location of %d is: %d\n", key[i], midSquare(key[i], ts));
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void powerofTwo(int x){
    x=9;
    if((x>0)&&(x&(x-1))==0){
        cout<<"Power of two";
    }
}
 void setOrNot(int x){
    int k=2;//koto number bit
    if(x&(1<<k)){
        cout<<"k th bit is set bit";
    }
 }

 void toggle(int x){
    int k = 3;

    if(x^(1<<k)){
        cout<<"k th bit is toggle";
    }
 }

 void createSetBit(int x){
    int k =4;

    int y = (x|(1<<k));//create k th bit set bit 
 }
 void UnSetBit(int x)
 {
     int k = 4;

     int y = (x & ~(1 << k)); // unset kth bit
 }

 void Rigthshift(int x){
    x =8;
    int k = 3;
    int y = x>>k;//(x/2^k),,,,,x>>k;
 }

 void Leftshift(int x)
 {
     x = 8;
     int k = 3;
     int y = x << k; //(x*2^k),,,,,x>>k;
 }

 void modulo(int x){

    //x%2^k;

    int k =3;
    x=10;

    int y = (x& (1<<k)-1);

    cout<<y<<endl;
 }
void swap(){
    int x =2,y=3;

    x = x^y;
    y = x^y;
    x = x^y;

    cout<<x<<" "<<y;
}

void xxx(){
    int x;
    int a,b;

    if(x==a){
        x=b; // x = a^b^x;
    }
    else if(x==b){
        x==a; 
    }

}

void add(int a, int b){
    int add= a+b;
     add = (a^b) + 2*(a&b);
     add = (a | b) + (a & b);
}

int main()
{
    int x =9;

    if(x&1){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }
 
}

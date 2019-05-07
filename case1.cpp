/*
Nama Program : Case 1
Nama         : Hana Meilina Fauziyyah
NPM          : 140810180012
Tanggal buat : 7 Mei 2019
Deskripsi    : Reverse Word Stack Array
******************************************/
#include <iostream>
using namespace std;

const int maxElemen = 255;
struct Stack {
    char isi[maxElemen];
    int TOP;
};
Stack S;

void createStack(Stack& S);
void push(Stack& S, char elemenBaru);
void pop(Stack& S, int& elemenHsl);
void output(Stack S);

main(){
    Stack s;
    int n;
    char word;

    cout<<"Masukkan jumlah huruf : ";
    cin>>n;
    createStack(s);
    for(int i=0;i<n;i++){
        cout<<"Masukkan satu huruf : ";
        cin>>word;
        push(s,word);
    }
    cout<<"Input : "<<endl;
    output(s);
}

void createStack(Stack& S){
    S.TOP = -1;
}

void push(Stack& S, char elemenBaru){
    if(S.TOP == maxElemen-1){
        cout<<"Tumpukkan sudah penuh"<<endl;
    }
    else{
        S.TOP=S.TOP+1;
        S.isi[S.TOP]=elemenBaru;
    }
}

void pop(Stack& S, int& elemenHsl){
    if (S.TOP < 0) {
        cout<<"Tumpukan sudah kosong "<<endl;
    }
    else {
        elemenHsl= S.isi[S.TOP];
        S.TOP=S.TOP - 1;
    }
}

void output(Stack S){
    for (int i=S.TOP;i>=0;i--){
        cout<<S.isi[i];
    }
    cout<<endl;
    cout<<"Reverse : "<<endl;
    for(int i=0; i<=S.TOP;i++){
        cout<<S.isi[i];
    }
}

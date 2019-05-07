/*
Nama Program : Case 2
Nama         : Hana Meilina Fauziyyah
NPM          : 140810180012
Tanggal buat : 7 Mei 2019
Deskripsi    : Reverse Word Stack Linked list
******************************************/
#include <iostream>
using namespace std;

struct ElemtList{
    char info;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer Stack;

void createStack(Stack& Top);
void createElement(pointer& pBaru);
void push(Stack& Top, pointer& pBaru);
void Pop(Stack& Top, pointer& pHapus);
void print(Stack Top);
void print2(Stack Top);

main(){
    Stack s;
    pointer x;
    char word;
    int n;

    cout<<"Masukkan banyak huruf : ";
    cin>>n;
    createStack(s);
    for (int i=0;i<n;i++){
        createElement(x);
        push(s,x);
    }
    cout<<"Hasil : "<<endl;
    print(s);
    cout<<endl;
    print2(s);
}

void createStack(Stack& Top){
    Top = NULL;
}

void createElement(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"Masukkan satu huruf : ";
    cin>>pBaru->info;
    pBaru->next = NULL;
}

void push(Stack& Top, pointer& pBaru){
    if (Top==NULL) // Stack kosong
        Top=pBaru;
        else { // Stack ada isi
            pBaru->next=Top;
            Top=pBaru;
        }
}

void Pop(Stack& Top, pointer& pHapus){
    cout<<"Pop Stack "<<endl;
    if (Top==NULL){
        cout<<"Stack kosong "<<endl;
        pHapus=NULL;
    }
    else if (Top->next==NULL){
        pHapus=Top;
        Top=NULL;
    }
    else {
        pHapus=Top;
        Top=Top->next;
        pHapus->next=NULL;
    }
}

void print(Stack Top){
    pointer temp;
    while (Top != NULL){
        temp = Top;
        cout << temp->info;
        Top = Top->next;
    }
}

void print2(Stack Top){
    pointer temp;
    temp = Top;
    do{
        cout<<temp->info<<" ";
        temp = temp->next;
    }
    while(temp!=NULL);
    cout<<endl;
}


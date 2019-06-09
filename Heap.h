#pragma once
#include <iostream>
using namespace std;

class Heap{
    private:
    int *niz;
    int len;
    int brEl;

    public:
    Heap(int x){
        niz=new int[x+1];
        niz[0]=0;
        len=x;
        brEl=0;
    }
    ~Heap(){
        delete[] niz;
    }
    void insert(int x){
        if(len<=brEl){
            return;
        }
        else{
            brEl++;
            int i=brEl;
            while(i>1 && niz[i/2]<x){
                niz[i]=niz[i/2];
                i/=2;
            }
            niz[i]=x;
        }
    }
    void print(){
        for(int i=1;i<=brEl;i++)
            cout<<niz[i]<<' ';
        cout<<'\n';
    }
    void delRoot(){
        
    }
};
#ifndef MYVECTOR_H_INCLUDED
#define MYVECTOR_H_INCLUDED
#include<iostream>
using namespace std;

template<typename T>
class MyVector{
int size;
int cap;
T *arr;

public:
    void doublearray2(){
        T* arr2=new T[cap*2];
        for(int i=0; i<size; i++){
            arr2[i]=arr[i];
        }
        delete []arr;
        arr=arr2;
    }

    MyVector(const int& c=0, const int& value=0):size(0), cap(c){
        arr=new T[c];
        for(int i=0; i<cap; i++)
            arr[i]=value;

    }

    int& operator[](const T& index){
        return arr[index];
    }


    //VECTOR FUNCTIONS
    void pushback(const T& value){
    if(size==cap){
        doublearray2();
        arr[size]=value;
        size++;
    }
    else if(size<cap){
        arr[size]=value;
        size++;
    }
    }

    void popback(){
        if(size==0)
            return;
        else
        size--;
    }

    int getsize(){
        return size;
    }

    int front(){
        if(size==0)
            return -1;
        else
            return arr[0];
    }

    int end(){
        if(size==0)
            return -1;
        else
            return arr[size-1];
    }



};



#endif // MYVECTOR_H_INCLUDED

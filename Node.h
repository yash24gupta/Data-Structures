#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

template<typename T>
class node{
public:
    T data;
    node* next;

node(T data){
    this->data=data;
    next=NULL;
}
};

#endif // NODE_H_INCLUDED

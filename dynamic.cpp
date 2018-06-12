#include <iostream>
using namespace std;
class stack{
 
 private:
 int * _arr, _size, _top;
 public:
 void push (int value);
 int pop ();
 stack (int sz = 100);
 ~stack ();
};

stack::stack (int sz){
 this->_size = sz;
 this->_arr = new int [this->_size]; 
 this->_top = -1;   
}

void stack::push (int value){
 if(this->_top == this->_size){
   int * tmp;
   tmp = new int [2*_size];
   for (int ix = 0; ix < this->_size; ++ix){
       tmp[ix] = this->_arr[ix];
       }
   delete [] _arr;
   this->_arr = tmp;
   this->_size = (2*this->_size);  
 }   
   this->_arr[++this->_top] = value; 
 }
 
 int stack::pop (){
  if (this->_top == -1){
    cout<<"your stack is empty!!!";
    return 0;
 }
  return (this->_arr[this->_top--]);
 }    
  stack::~stack(){
    delete [] _arr;
    _arr = NULL;
 }   
     
 int main () {
    stack newObj;
    newObj.push (33);
    newObj.push (45);
    newObj.pop();
    newObj.pop();
    cout<<newObj.pop();
     
 }
 





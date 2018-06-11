#include <iostream>
#include <cmath>
using namespace std;
   int reverse(int a) {
    int b;
    if(a<0)
     {b = (-a);}
    else
     {b=a;}
    int count = 0;
    while(b >= 1){
     b = b/10;
     count++; //counting number of digits in inputting number
}
    if(a<0){
     a = (-1)*a;
    int tmp = 0; 
    while(a != 0){
     tmp = tmp + a%10*(pow(10,--count));	
      a = (a-(a%10)) / 10;
}
    cout<<(-1)*tmp;
}
    else{
     int tmp=0;
      while(a != 0){
       tmp = tmp +a%10*(pow(10,--count));
       a = (a-(a%10)) / 10;
}
    cout<<tmp;
}
}
  int main() {
   reverse(-249);
}

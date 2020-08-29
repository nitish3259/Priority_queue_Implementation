//EXAMPLE IMPLEMENTATION

//EXAMPLE IMPLEMENTATION

#include<iostream>
using namespace std;
#include <vector>
#include"MaxHeap.h"

 bool comparator(int x, int y) { return x < y; } 

int main(){
  MaxHeap<int>myheap(comparator);
  myheap.push(2);
  myheap.push(1);
  myheap.push(4);
  myheap.push(6);
  myheap.push(3);
  myheap.pop();
  myheap.pop();
  cout<<myheap.top();
}

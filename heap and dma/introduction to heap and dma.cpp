#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10; //a memory is allocated in stack
    int *p=new int(); //a memory is allocated at heap
    *p=10;//now the memory which is allocated at heap is now containing the value 10
    //now if i want to delete the memory location on heap i have to do that manually
    delete(p);//deallocating the memory in heap
    //now the the pointer is of no use so we can either use it in a different operation or we can remove the pointer 
    p=0;
    //now the pointer is also removed 
    return 0;
}

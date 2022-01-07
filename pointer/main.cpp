#include <bits/stdc++.h>
using namespace std;

void swap(int *c,int *d){ //here c and d are different c and d than c and d in the int function
    int temp = *c;
    *c = *d;
    *d = temp; 
    }
int main(){
    int a = 10;
    //creating pointer which take int var 's address 
    int *aptr;
    //giving address of a
    aptr = &a;
    cout << "  " << *aptr <<"   "<< aptr;
    *aptr = 1; /*changing the original value*/
    cout << "\n" << a;
    cout << "\n";
    
    int arr[] = {9,20,30,40};
    cout << *arr << endl;//in array usually already pointing to zeroth element  
    int *ptr = arr; //have not used & as in array it points to the zeroth element
    
    for(auto it : arr){
        //gives the elemnet of the array
        cout << *ptr << endl;
        //incrementing the address increase by 4 as int take 4 bytes
        ptr ++;
        }
    for(int i = 0;i<4;i++){
        cout << *(arr+i) << endl;
        //arr ++; //illegal
        }
    cout << "\n";
    //POINTER TO POINTER
    int *p = &a;
    cout << *p <<endl;
    //taking pointr p as a value
    int **q = &p;
    //gives the address of the adress of p
    cout << *q << endl;
    //gives the value a *-->address--*-->value at that address
    cout << **q << endl;
    
    //POINTERS TO FUNCTION
    int c = 2;
    int d = 4;
    //swap doesnt change the c and d if we dont use the pointer
    //swap(c,d);
    int *cptr = &c ;
    int *dptr = &d;
    swap(cptr,dptr);//passing reference value 
    cout << "\n" << c << " " << d << endl;
    swap(&c,&d); //passing reference value
    cout << "\n" <<c << " " << d << endl;





    return 0;
}

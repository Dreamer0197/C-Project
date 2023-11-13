//
//  main.cpp
//  C++ Project
//
//  Created by Kaan Şengün on 1.10.2023.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int fibSeq[5] = {1,1,2,3,5};
    int *fibPtr;
    fibPtr=fibSeq;
    cout<<"\n fibSeq points to :"<< *fibSeq<< endl;
    for(int i=0;i<5;i++){
        cout<<"\n fibSeq["<<i<<"]= "<<*(fibPtr+i)<< endl;//parantez dışına koyulan * pointerın değerini yazmamıza yardım ediyor
    }
   
    
}

// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1

#include <iostream>
using namespace std;

int main(){

    int prn;
    cout<<"Enter the last six digits of prn number"<<endl;
    cin>>prn;

    while(prn!=0){

        cout<<prn%10;
        
        prn=prn/10;
}

}

//output
/*
Enter the last six digits of prn number
123007
700321

=== Code Execution Successful ===
/*

/* Problem Statement: Write a C++ program to accept a 3 digit number and check if its a Keith Number without using Arrays
or Strings
Key Learning: We run the while loop as long as the sum of the numbers is less than the original number 
*/

#include <iostream>
using namespace std;

bool keithnumberCheck(int N){
    bool Status=false, Exceeded=false;
    int dum=N;

    int d1, d2, d3;

    while(dum>0){
        d3=dum%10;
        dum=dum/10;
        d2=dum%10;
        dum=dum/10;
        d1=dum%10;
        dum=dum/10;
    }

    while(!Exceeded && !Status){
        dum=d3;
        d3+=d1+d2;

        d1=d2;
        d2=dum;

        if(d3==N) Status=true;
        else if (d3>N) Exceeded=true;
    }

    return Status;
}

int main(){
    int N;
    cout<<"Enter a 3 Digit Number: ";
    cin>>N;

    bool Status=keithnumberCheck(N);
    
    if(Status) cout<<"The Number, "<<N<<" is a Keith Number";
    else cout<<"The Number, "<<N<<" is NOT a Keith Number";
}

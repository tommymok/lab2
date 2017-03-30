#include<iomanip>
#include <math.h>
#include <iostream>

using namespace std;
int main()

{
    double g[6]={0,0.5,0.5,0,0,0};
    double r[6]={1,0.5,0.5,1,1,1};
    double k=32;
    double Ra=1613,Rb=1609;
    double Ea,Eb;
    double c1,c2;
    double b1,b2;
    double a1,a2;
    int n=0.0;
    
    while(n<=5){
        
        
        
        
    c1=(Rb-Ra)/400.0;
    b1=pow(10.0,c1);
    Ea=1.0/(1.0+b1);
    cout<<setprecision(4)<<"ea="<<Ea<< endl;
    
    c2=(Ra-Rb)/400;
    b2=pow(10,c2);
    Eb=1/(1+b2);
   cout<<setprecision(4)<<"eb="<<Eb<< endl;
    
    a1=Ra+k*(g[n]-Ea);
    cout<<fixed<<setprecision(0)<<a1<< endl;
    a2=Rb+k*(r[n]-Eb);
    cout<<fixed<<setprecision(0)<<a2<< endl;
    
    Ra=a1;
    Rb=a2;
        n++;

    }
}

#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[] , int y , double z[]) {
    double sum = 0 , SD = 0 , GM = 1 , HM = 0 , Max = x[0] , Min = x[0] ;
    for (int i = 0 ; i < y ; i++){
        sum += x[i] ;
        SD += pow(x[i],2) ;
        GM *= x[i] ;
        HM += 1/x[i] ;
        if(x[i] > Max) Max = x[i] ;
        if(x[i] < Min) Min = x[i] ;
    }
    z[0] = sum / y ;
    z[1] = sqrt((SD/y)-pow(z[0],2)) ;
    z[2] = pow(GM,1.0/y) ;
    z[3] = y / HM ;
    z[4] = Max ;
    z[5] = Min ;
} 
#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    double A , B , C, average;

    cin>>A>>B>>C;

    average=(A*3+ B*2 + C*5);

    cout<<fixed<<setprecision(1);
    cout<< "MEDIA = "<<average;

    return 0;
}
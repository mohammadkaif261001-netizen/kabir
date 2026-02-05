#include<iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
}
void check( int n){
    if(n%2==0){
        cout<<"This number is Even.";
    }
    else {
        cout<<"This number is Odd.";
    }
}
int main(){
    int x, y, N;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"Sum: "<<sum(x, y)<<endl;
    cout<<"Enter a number: ";
    cin>>N;
    check(N);
    return 0;
}

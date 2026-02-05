#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double A, B, average;
    cin >> A >> B;
    average = (A * 3.5 + B * 7.5) / 11.00;
    cout << fixed << setprecision(5);
    cout << "MEDIA = " << average << endl;
    return 0;
}
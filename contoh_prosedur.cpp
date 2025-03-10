#include <iostream>
using namespace std;


float phi = 3.14;
float r, luas;

// prosedur input
void InputData(){
    cout << "enter value of r :";
    cin >> r;
}

// prosedur hitung luas
void HitungLuasLingkaran (){
    luas = phi * r * r;
}

// prosedur output 
void OutputData (){
    cout << "luas lingkaran = "<< luas;
}

int main()
{
    InputData();
    HitungLuasLingkaran();
    OutputData();
}
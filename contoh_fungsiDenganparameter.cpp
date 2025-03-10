#include <iostream>
using namespace std;


float phi = 3.14;
float r, luas;

// prosedur input
void InputData()
{
    cout << "enter value of r :";
    cin >> r;
}

// fungsi hitung luas / function for counting are of circle
float HitungLuasLingkaran ()
{
    return phi * r * r;
}

// dengan parameter
float HitungLuasLingkaranParamater (float x )
{
    return phi * x * x;
}

// prosedur output 
void OutputData (){
    cout << "luas lingkaran = "<< HitungLuasLingkaran();
}

// dengan parameter 
void OutputDataParameter (){
    cout << "luas lingkaran = "<< HitungLuasLingkaranParamater(r);
}

int main()
{
    InputData();
    OutputData();
    OutputDataParameter();
}
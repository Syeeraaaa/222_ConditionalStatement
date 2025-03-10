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

// fugsi unutk cek status lingkaran
string StatusBesaranLingkaran(float luas) {
    if (luas > 30) {
        return "besar";
    }
    else {
        return "kecil";
    }
}

// prosedur output 
void OutputData (){
    cout << "luas lingkaran = "<< HitungLuasLingkaran() << endl;
}

// dengan parameter 
void OutputDataParameter (){
    cout << "luas lingkaran = "<< HitungLuasLingkaranParamater(r) << endl;
    cout << "Besarnya lingkaran ="<< StatusBesaranLingkaran(HitungLuasLingkaranParamater(r)) << endl;
}

int main()
{
    InputData();
    OutputData();
    OutputDataParameter();
}
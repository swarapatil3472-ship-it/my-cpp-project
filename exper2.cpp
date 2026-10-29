#include<iostream>
using namespace std;
class Complex {
public:
int real;
int imaginary;
Complex()
{
real = 0;
imaginary = 0;
}
Complex(int r, int i)
{
real = r;
imaginary = i;
}
Complex addComplexNumber(Complex C1, Complex C2)
{
Complex res;
res.real = C1.real + C2.real;
res.imaginary = C1.imaginary + C2.imaginary;
return res;
}
};
int main()
{
Complex C1(4,2);
Complex C2(1,2);
Complex C3;
C3 = C3.addComplexNumber(C1, C2);
cout<<"Real Part = "<< C3.real<<endl;
cout<<"Imaginary Part = "<<C3.imaginary<<endl;
return 0;
}

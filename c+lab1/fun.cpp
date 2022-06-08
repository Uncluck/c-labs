#include"fun.h"
#include <complex>
using namespace std;
namespace fun
{
    void zad1_1(int* ta, int* tb)
    {
        *ta = *ta + *tb;
    }
    void zad1_2(int& ta, int& tb)
    {
        ta = ta + tb;
    }
    void zad2_1(int* tc)
    {
        *tc = -*tc;
    }
    void zad2_2(int& tc)
    {
        tc = -tc;
    }
    void zad3_1(complex<double> *f1)
    {
        double Re = abs(*f1);
        double Im = (-1) * arg(*f1);
        *f1 = complex<double>(Re, Im);
    }

    void zad3_2(complex<double> &f2)
    {
        double Re = abs(f2);
        double Im = (-1) * arg(f2);
        f2 = complex<double>(Re, Im);
    }
    void zad4_1(float* tmat, float* tm)
    {
        for(int i = 0; i < 3; ++i){
            for(int j = 2; j >= 0; j--){
                tmat[i * 3 + j] = tmat[i * 3 + j] * *tm;
            }
        }
    }
    void zad4_2(float (&tmat)[3][3], float& tm)
    {
        for(int i = 0; i < 3; ++i){
            for(int j = 0; j < 3; ++j){
                tmat[i][j] *= tm;
            }
        }
    }
}

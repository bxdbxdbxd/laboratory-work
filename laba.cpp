#include <iostream>
#include <math.h>

double Perimetr (double first, double second, double third, double sum);
double squareGeron(double first, double second, double third, double perimetr);
bool checkIsosceles(double first, double second, double third);

using namespace std;
int main(){
    double firstPar=0,secondPar=0,thirdPar=0;
    cin>>firstPar>>secondPar>>thirdPar;

    if((firstPar + secondPar > thirdPar && firstPar + thirdPar > secondPar && secondPar + thirdPar > firstPar) && (firstPar>0 && secondPar>0 && thirdPar>0)){
        double sum=Perimetr(firstPar,secondPar,thirdPar,sum);
        cout<<sum<<endl;
        double Sqare = squareGeron(firstPar,  secondPar, thirdPar,sum);
        cout<<Sqare<<endl;
        if(checkIsosceles(firstPar,secondPar,thirdPar)){
            cout<<"Triangle is isosceles"<<endl;
        }
        else{
            cout<<"Triangle is not isosceles"<<endl;
        }
    }
    else{
        cout<<"UNCORRECT"<<endl;
    }
    return 0;
}

double Perimetr (double first, double second, double third, double sum){
    sum=first+second+third;
    return sum;
}

double squareGeron(double first, double second, double third, double perimetr){
    double semiPerimeter=perimetr/2;
    double square=sqrt(semiPerimeter * (semiPerimeter - first) * (semiPerimeter - second) * (semiPerimeter - third));
    return square;
}

bool checkIsosceles(double first, double second, double third){
    bool check=false;
    if((first == second && first != third) || (first == third && first != second) || (second == third && second != first)){
        check=true;
    }
    return check;
}
#include <iostream>
#include <math.h>

double Perimetr (double first, double second, double third, double sum);
double squareGeron(double first, double second, double third, double perimetr);
bool checkIsosceles(double first, double second, double third);

using namespace std;
int main(){
    double firstParties=0,secondParties=0,thirdParties=0;
    cin>>firstParties>>secondParties>>thirdParties;
    if(firstParties + secondParties > thirdParties && firstParties + thirdParties > secondParties && secondParties + thirdParties > firstParties){
        double sum=Perimetr(firstParties,secondParties,thirdParties,sum);
        cout<<sum<<endl;
        double Sqare = squareGeron(firstParties,  secondParties, thirdParties,sum);
        cout<<Sqare<<endl;
        if(checkIsosceles(firstParties,secondParties,thirdParties)){
            cout<<"Triangle is isosceles"<<endl;
        }
        else{
            cout<<"Triangle is not isosceles"<<endl;
        }
    }
    else{
        cout<<"UNCORRECT";
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
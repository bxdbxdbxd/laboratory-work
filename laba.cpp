#include <iostream>

double Perimetr (double first, double second, double third, double sum){
    sum=first+second+third;
    return sum;
}

using namespace std;
int main(){
    double firstParties=0,secondParties=0,thirdParties=0;
    cin>>firstParties>>secondParties>>thirdParties;
    if(firstParties + secondParties > thirdParties && firstParties + thirdParties > secondParties && secondParties + thirdParties > firstParties){
    double sum=Perimetr(firstParties,secondParties,thirdParties,sum);
    cout<<sum;
    }
    else{
        cout<<" UNCORRECT";
    }
    return 0;
}
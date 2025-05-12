#include <iostream>

/*int main()
{
    int fileSize = 100;
    double sales= 9.99;
    std::cout<< fileSize << std::endl;
    std::cout << "Hello World!" << std::endl;

    int x,y;
    x=10;
    y=3;

    double z=x+y;
    std::cout << z << std::endl;

    y=x++; // y=10, x=11
    z=++x; // x=12, z=12
    std::cout << y << std::endl; // 10
    return 0;
}*/

using namespace std;
/*
int main()
{
    int x = 10;
    int y=10;
    cout << "x = " << x << endl
         << "y = " << y << endl;
    
    return 0;
}
    int main()
{
    double sales = 95000;
    const double StateTaxPer = 0.04;
    const double CountyTaxPer = 0.02;

    double CountyTax=sales*CountyTaxPer;
    double StateTax=sales*StateTaxPer;
    double TotalTax=CountyTax+StateTax;
    double TotalSales=sales-TotalTax;  

    cout << "Net Sales = $"<< TotalSales << endl;
    cout << "County Tax = $"<< CountyTax << endl;    
    cout << "StateTax = $"<< StateTax << endl;

    double x;
    double y;
    cout << "Enter x:";
    cin >> x;
    cout << endl;

    cout << "Enter y:";
    cin >> y;
    cout << endl;

    cout<< " x + y = " << x+y << endl;
    

    return 0;
}
}
    */

#include <cstdlib>
int main()
{
    auto elapsedSeconds=time(0);
    srand(time(0)); // seed the random number generator
    int number= rand();
    cout << number;
    cout <<"Elapsed seconds since 1970: " << elapsedSeconds << endl;

    cout << " Rolling dice..." << endl;
    auto dice1=rand()%6+1; // shifts rancge between 0 and 5 then plus 1
    auto dice2=rand()%6+1;
    cout << "Dice 1: " << dice1 << endl;
    cout << "Dice 2: " << dice2 << endl;
    cout << "Total: " << dice1+dice2 << endl;

    cout << "get line" << endl;
    cout << "Enter a string: ";
    string name;
    cin >> name;
    cout << "name " << name << endl;
    cout << "calculation" << endl;
    float x=10;
    float y=30;
    auto z=x/y;

    cout << "x/y = " << z << endl;
}
    


        
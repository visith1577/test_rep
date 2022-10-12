#include<iostream>
using namespace std;

int main()
{
    float weight, height;
    cout << "Enter your weight" << endl;
    cin >> weight;
    cout << "Enter your height" << endl;    
    cin >> height;
    float bmi = weight / (height * height);
    if ( bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi < 25)
    {
        cout << "Normal" << endl;
    }
    else if (bmi < 30)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Obese" << endl;
    }

    cout << "Your BMI" << bmi << endl;

    system("pause>0");
}
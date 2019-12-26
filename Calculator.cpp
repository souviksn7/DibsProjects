Basic Calculator using C++

# include <iostream>
using namespace std;
int main()
{
    int ch;
    float num1, num2;
    cout << "Enter option 1.Addition \t 2. Subtraction \n 3.Multiplication \t 4. Division \n 5. Modulus \t 6. Maximum of two nos  ";
    cin >> ch;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(ch)
    {
        case '1':
            sum=num1+num2;
            cout<<"sSum of two numbers is "<<sum
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}

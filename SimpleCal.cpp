#include <iostream>
using namespace std;

int main(){
    char again;

    do{
        double num1, num2;
        char operation;

        cout<<"*****Basic Calculator******" << endl;
        cout<<"\nPlease enter the first number: ";
        cin>>num1;
        cout<<"Please enter the second number: ";
        cin>>num2;
        
        cout<<"Choose an operation (+ {add}, - {subtract}, * {multiplication}, / {divisio}): ";
        cin >> operation;
        
        double result;

        switch(operation){
            case '+':
                result=num1+num2;
                cout<<"Result: "<<num1<<" + "<<num2<<" = "<<result<<endl;
                break;
            case '-':
                result=num1-num2;
                cout<<"Result: "<<num1<<" - "<<num2<<" = "<<result<<endl;
                break;
            case '*':
                result=num1*num2;
                cout<<"Result: "<<num1<<" * "<<num2<<" = "<<result<<endl;
                break;
            case '/':
                if(num2 != 0) {
                    result=num1/num2;
                    cout<<"Result: "<<num1<<" / "<<num2<<" = "<<result<<endl;
                }else{
                    cout<<"Division by zero is not allowed."<<endl;
                }
                break;
            default:
                cout<<"Invalid operation. Please use +, -, *, or /."<<endl;
        }

        cout<<"Do you want to perform another calculation? (Y/N): ";
        cin>>again;

    }while(again == 'Y' || again == 'y');

    return 0;
}


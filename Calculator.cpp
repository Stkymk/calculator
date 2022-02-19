#include <iostream>

using namespace std;

void SumNum (float &a, float &b);
void SubNum (float &a, float &b);
void MulNum (float &a, float &b);
void DivNum (float &a, float &b);
int main()
{
    char c;
    char temp;
    float *num1 = new float;
    float *num2 = new float;
    char exit='n';
    cout << "********************************" << endl;
    cout << "*	  Calculator 	       *" << endl;
    cout << "********************************" << endl;

    while(exit=='n'){

        cout << "Enter the first number:";
        cin >> *num1;
        cout << "Enter the second number:";
        cin >> *num2;
        cout << "Enter the operator (+,-,*,/):";
        cin >> c;
        
        switch (c){
            case'+':
                SumNum(*num1,*num2);
                break;
            case'-':
                SubNum(*num1,*num2);
                break;
            case'*':
                MulNum(*num1,*num2);
                break;
            case'/':
                DivNum(*num1,*num2);
                break;
        }
        cout<<endl<<"Enter y for exit the Calculator: "<< endl;
        cin>>temp;
        if (temp=='y' or temp=='Y'){
        exit='y';
		delete num1,num2;
	}
        else
        exit='n';
    }
    return 0;
}

void SumNum(float &a, float &b){
	cout<< a << "+" << b << "=" << a+b << endl; 
}
void SubNum(float &a, float &b){
	cout<< a << "-" << b << "=" << a-b << endl; 
}
void MulNum(float &a, float &b){
	cout<< a << "." << b << "=" << a*b << endl; 
}
void DivNum(float &a, float &b){
    if(b==0){
    cout << "ERROR CAN NOT DIVIDE BY ZERO!!";
    }
	cout<< a << "/" << b << "=" << a/b << endl; 
}


#include<iostream>
using namespace std;

int sum(int a,int b)
{
        return a+b;
}

int sub(int a,int b)
{
        return a-b;
}

int mul(int a,int b)
{
        return a*b;
}

int divi(int a,int b)
{
        return a/b;
}

int mod(int a,int b)
{
        return a%b;
}

int main()
{
    int a,b,choice;

    do
    {

     cout<<endl;

     cout<<"Enter your choice to perform arithmetic operator"<<endl;

     cout<<"Press 1 for + "<<endl;
     cout<<"Press 2 for - "<<endl;
     cout<<"Press 3 for * "<<endl;
     cout<<"Press 4 for / "<<endl;
     cout<<"Press 5 for % "<<endl;
     cout<<"Press 0 for exit "<<endl;

     cout<<endl;

     cout<<"Enter your choice: ";
     cin>>choice;
    
     cout<<endl;

        switch(choice)
        {
                case 1:
                        cout<<"Enter value of a :";
                        cin>>a;

                        cout<<"Enetr value of b :";
                        cin>>b;

                        cout<<"Sum of tow number = "<<sum(a,b)<<endl;
                        break;

                case 2:
                        cout<<"Enter value of a :";
                        cin>>a;

                        cout<<"Enetr value of b :";
                        cin>>b;

                        cout<<"Subtraction of tow number = "<<sub(a,b)<<endl;
                        break;

                case 3:
                        cout<<"Enter value of a :";
                        cin>>a;

                        cout<<"Enetr value of b :";
                        cin>>b;

                        cout<<"Multiplication of tow number = "<<mul(a,b)<<endl;
                        break;

                case 4:
                        cout<<"Enter value of a :";
                        cin>>a;

                        cout<<"Enetr value of b :";
                        cin>>b;

                        cout<<"Division of two number : = "<<divi(a,b)<<endl;
                        break;
                case 5:
                        cout<<"Enter value of a :";
                        cin>>a;

                        cout<<"Enetr value of b :";
                        cin>>b;

                        cout<<"Modulo of number : = "<<mod(a,b)<<endl;
                        break;
                case 0:
                        cout<<"Bye "<<endl;
                        break;
                default:
                        cout<<"Wrong Choice "<<endl;

        }

    }while(choice!=0);

    return 0;
}

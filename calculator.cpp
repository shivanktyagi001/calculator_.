# include<iostream>
using namespace std;
int main(){
    float num1,num2 , res;
    char op;
// taking first input from user as num1
    cout<<"enter num1\n";
    cin>>num1;
    //enter operatator (+,-,*,/)
      cout<<"enter operator \n";
    cin>>op;
    //taking second input from user as num2
     cout<<"emter num2 \n";
    cin>>num2;
  
    switch(op)
    {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            res = num1/num2;
            break; 
            default: "invalid input";
    }
   
     cout<<res;
    return 0;

}

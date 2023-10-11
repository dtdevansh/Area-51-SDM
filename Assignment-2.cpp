#include <iostream>
#include <cmath>
using namespace std;

int function1() {
  for(int i1=1;i1<=20;i1++){
  cout<<i1<<endl;
  }
  }

int function2() {
    int i2,n=21;
  for(i2=n-1;i2=0;n--){
  cout<<i2<<endl;
  }
  }

int function3() {
  int i3, rem3;
  for(i3=1;i3<=20;i3++){
  rem3 = i3 % 2;
  if (rem3==0){
      cout<<i3<<" is a even number\n";
  }
  }
}

int function4(){
int i4, rem4;
  for(i4=1;i4<=20;i4++){
  rem4 = i4 % 2;
  if (rem4!=0){
      cout<<i4<<" is a odd number\n";
  }
  }


}

int function5(){
  int i5,sum5=0;
  for(i5=1;i5<=20;i5++){
  sum5=sum5+i5;
  }
  cout<<sum5<<endl;


}

int function6(){
  int i6, sum6=0;
  for(i6=0;i6<=20;i6=i6+2){
 sum6=sum6+i6;
  }
  cout<<sum6;


}

int function7(){
     int i7,sum7=0;
    for(i7=1;i7<=20;i7=i7+2){
     sum7=sum7+i7;   
    }
cout<<sum7;


}

int function8(){
int i8,sum8=0;
    for(i8=1;i8<=10;i8++){
     cout<<"5 X "<<i8<<"= "<<i8*5<<endl;    
    }


}

int function9(){
int i9, fact9=1, num9;
    cout<<"Type a number you want factorial of :";
    cin>> num9;
    for(i9=1;i9<=num9;i9++){
        fact9=fact9*i9;
    }
    cout<<"Factorial of "<<num9<<" is "<<fact9;


}

int function10(){
int i10, rem10, n10, num10;
    cout<<"Type a number :";
    cin>> num10;
    if(num10==2 || num10==3){
        cout<<num10<<" is a prime number.";
    }
    else{
        n10= sqrt(num10);
    for(i10=2;i10<=n10;i10++){
        rem10=num10 % i10;
        if (rem10==0){
            cout<<num10<<" is not a prime number";
break;
        }
        else{
            cout<<num10<<" is a prime number";
            break;
        }
    }
    }


}

int function11(){
int n111, n112, dgt11, sm11=0;
    cout<<"Type a number :";
    cin>> n111;
    n112=n111;
    while(n111!=0) {
       dgt11=n111%10;
        cout<<dgt11<<" "; 
        sm11=dgt11+sm11;
        n111=n111/10;
        }
        cout<<endl;
        cout<<"Sum = "<<sm11;


}

int function12(){
int n121, dgt12;
    cout<<"Type a number :";
    cin>> n121;
    while(n121!=0) {
       dgt12=n121%10;
        cout<<dgt12<<" ";
        n121=n121/10;
        }


}

int function13(){
int n131,n132,dgt13,sm13=0;
    cout<<"Type a number :";
    cin>> n131;
    n132=n131;
    while(n131!=0) {
       dgt13= n131 % 10;
        sm13 = sm13+(dgt13*dgt13*dgt13);
        n131=n131/10;
        }  
        if(sm13==n132){
            cout<<n132<<" is an armstrong number.";
        }
        else{
            cout<<n132<<" is not an armstrong number.";
        }


}

int function14(){
int n14, n141=1, n142=0, n143;
   cout<<"Type the number: ";
   cin>>n14;
   cout<<"Fibonacci series before "<<n14<<" is 0 ";
   while(n141<=n14){
n143=n141;
n141=n141+n142;
n142=n143;
cout<<n142<<" ";
   }


}

int function15(){
int n151,rm15,n152,n153=0;
    cout<<"Type a number :";
    cin>> n151;
    n152=n151;
    while(n151!=0) {
       rm15= n151 %10;
        n153 =(n153*10)+rm15;
        n151=n151/10;
        }
        if(n152==n153){
            cout<<n152<<" is a palindrome number";
        } else {
            cout<<n152<<" is not a palindrome number";
        }


}


int main() {
int c1;
cout<<"Choose 1 for printing all natural numbers till 20."<<endl;
cout<<"Choose 2 for printing all natural numbers in reverse order starting from 20."<<endl;
cout<<"Choose 3 for printing all even numbers from 1 to 20."<<endl;
cout<<"Choose 4 for printing all odd numbers from 1 to 20"<<endl;
cout<<"Choose 5 for adding all numbers from 1 to 20."<<endl;
cout<<"Choose 6 for finding sum of all even numbers till 20."<<endl;
cout<<"Choose 7 for finding sum of all odd numbers till 20."<<endl;
cout<<"Choose 8 for printing multiplication table of a number. For eg. Display should be '2 X 1 = 2'."<<endl;
cout<<"Choose 9 to calculate factorial of a number."<<endl;
cout<<"Choose 10 to check whether a number is prime or not."<<endl;
cout<<"Choose 11 to print all digits of a number and their sum."<<endl;
cout<<"Choose 12 to print reverse of a number."<<endl;
cout<<"Choose 13 to check whether the number is Armstrong or not."<<endl;
cout<<"Choose 14 to print the Fibonacci series in a given range."<<endl;
cout<<"Choose 15 to check whether the number entered is palindrome or not."<<endl;
cout<<"Choose from above and typoe the associated number to run the program:";
cin>>c1;
cout<<"You've choosen option: "<<c1<<endl;

switch (c1) {
    case 1:
    cout<<"1: Printing all natural numbers till 20"<<endl;
    function1();
    break;

    case 2:
    cout<<"2: Printing all natural numbers in reverse order starting from 20"<<endl;
    function2();
    break;

    case 3:
    cout<<"3: printing all even numbers from 1 to 20"<<endl;
    function3();
    break;

    case 4:
    cout<<"4: Printing all odd numbers from 1 to 20"<<endl;
    function4();
    break;

    case 5:
    cout<<"5: Adding all numbers from 1 to 20"<<endl;
    function5();
    break;

    case 6:
    cout<<"6: For finding sum of all even numbers till 20"<<endl;
    function6();
    break;

    case 7:
    cout<<"7: For finding sum of all odd numbers till 20"<<endl;
    function7();
    break;

    case 8:
    cout<<"8: For printing multiplication table of a number. For eg. Display should be '2 X 1 = 2'"<<endl;
    function8();
    break;

    case 9:
    cout<<"9: To calculate factorial of a number"<<endl;
    function9();
    break;

    case 10:
    cout<<"10: To check whether a number is prime or not"<<endl;
    function10();
    break;

    case 11:
    cout<<"11: To print all digits of a number and their sum"<<endl;
    function11();
    break;

    case 12:
    cout<<"12: To print reverse of a number"<<endl;
    function12();
    break;

    case 13:
    cout<<"13: To check whether the number is Armstrong or not"<<endl;
    function13();
    break;

    case 14:
    cout<<"14: To print the Fibonacci series in a given range"<<endl;
    function14();
    break;

    case 15:
    cout<<"15: To check whether the number entered is palindrome or not"<<endl;
    function15();
    break;

default:
cout<<"Invalid input!"<<endl;
break;
}

}
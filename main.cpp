   #include <iostream>
using namespace std;
  void  add(int num1 ,  int num2);
  void  sub(int num1 ,  int num2);
  void  mul(int num1 ,  int num2);
  void  divi(int num1 ,  int num2);
int main()
{
  int choice ,num1,num2;
    cout<<"Please Enter Your Choice:\n"   ;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
cin>> choice;

    cout<<"Enter 2 Integers:\n"   ;

    cin>>num1 >> num2; 
    
 

switch (choice){
    case 1:
    cout<<"You choose Addition \n" ;
    add(num1,num2);
    break;
    case 2:
    cout<<"You choose Subtraction \n" ;sub(num1,num2);
    break;
    case 3:
    cout<<"You choose Multiplication \n" ;mul(num1,num2);
    break;
    case 4:
    cout<<"You choose Division \n" ;divi(num1,num2);
    break;
   default:
   cout<<"Incorrect !";
   break;
}
 
    return 0;
}
//Switch Statements :
 

//Addition_Function   
  void add(int num1,int num2){   
      
  cout<<"The Sum is : "<< num1+num2;
}


//Subtraction_Function   
  void sub(int num1,int num2){   
      
  cout<<"The Difference is : "<< num1-num2;
}
 
 
//Multiplication_Function   
  void mul(int num1,int num2){   
      
  cout<<"The approx value is : "<< num1 * num2;
}

//Division_Function   
  void divi(int num1,int num2){   
      
  cout<<"The approx value is : "<< num1 / num2;
}




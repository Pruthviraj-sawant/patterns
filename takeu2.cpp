//practice
#include<iostream>
using namespace std;

void pattern1(int n){
    for (int i = 0; i < n; i++) //rows
{
   for(int j=0;j<n;j++){    //column

      cout<<" *";


   }
   cout<<endl;
}
}
void pattern2(int n){
for (int i = 0; i < n; i++) //rows
{
   for(int j=0;j<=i;j++){    //column

      cout<<" *";


   }
   cout<<endl;
}
}
void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
    
        }
       cout<<endl; 
    }

}
void pattern4(int n){
 
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i;
    }
    cout<<endl;
  }

}
void pattern5(int n){
for (int i = 1; i<=n; i++)
{
  for (int j =0; j<n-i+1; j++) //i-1 or n-i+1
  {
   cout<<" *";
  }
  cout<<endl;
}



}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i+1;j++){
             cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for (int i = 0; i < n; i++)
    {
           for (int j = 0; j < n-i-1; j++){ //n-i-1   ... 5-0-1=4...5-1-1=3....5-2-1=2....5-3-1=1
           cout<<" ";}

           for (int j = 0; j <2 * i+1 ; j++)
           {  cout<<"*";}
          for (int j = 0; j < n-i-1; j++)
          {
            cout<<" ";
          }
          cout<<endl;
       }
}
void pattern8(int n){

  for(int i=0;i<n;i++){
   
    for(int j=0;j<i;j++){
      cout<<" ";
    }
      for(int j=0;j<2*n-(2*i+1);j++){
      cout<<"*";
    }
      for(int j=0;j<i;j++){
      cout<<" ";
    }
     cout<<endl;
  }
}
void pattern9(int n){
  for(int i=1;i<=2*n-1;i++){
        int stars=i;
       if(i>n){ stars=2*n-i;}
      for (int j = 1; j <= stars; j++)
      {
        cout<<("*");
      }
    cout<<endl;
        
  }
  
}
void pattern10(int n){
  for (int i = 0; i < n; i++)
  {   int start=i;
     if(i%2==0){start=1;}else{start=0;} 
    for (int j = 0; j <= i; j++)
    {
      cout<<start;
      start=1-start;
    }
     cout<<endl;
  } 
}
void pattern11(int n){
int spacee=2* (n-1);
for (int i = 1; i <= n; i++)
{
  //no
  for (int j = 1; j <= i; j++)
  {
    cout<<j;
  }
  
  //space
  for (int j = 1; j <= spacee; j++)
  {
     cout<<" ";
  }
  
  //no
  for (int j = i; j>=1; j--)
  {
    cout<<j;
  }
  cout<<endl;
  spacee -= 2;
}
 
}
void pattern12(int n){
  int num=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<" "<<num;
        num+=1;
    }
     cout<<endl; 
  }

}
void pattern13(int n){
    for (int  i =0; i < n; i++)
    {
      for(char ch='A';ch<='A'+i;ch++){
          cout<<ch;
      }
       cout<<endl;
    }
    
}
void pattern14(int n){
  for (int i = 0; i < n; i++)
  {
    for (char ch = 'A'; ch <= 'A'+ (n-i-1); ch++)
    {
      cout<<ch;
    }
    cout<<endl;
  }
  
}
void pattern15(int n){
     for (int i = 0; i < n; i++)
     {
      char ch='a'+i;
      for(int j=0;j<=i;j++){
        cout<<ch;
      }
        cout<<endl;
     }
     
}
void pattern16(int n){
     for (int i = 0; i < n; i++)
    {       
            
           for (int j = 0; j < n-i-1; j++){ //n-i-1   ... 5-0-1=4...5-1-1=3....5-2-1=2....5-3-1=1
           cout<<" ";}
           
           char ch='A';
           int breakpoint=(2*i+1)/2;
           for (int j = 1; j <=2 * i+1 ; j++)
           {  cout<<ch;
               if(j<= breakpoint ){ch++;}
               else{ch--;}
               
           }

          for (int j = 0; j < n-i-1; j++)
          {
            cout<<" ";
          }
          cout<<endl;
       }
}
void pattern17(int n){
    for (int  i =0; i < n; i++)
    {
      for(char ch='E'-i;ch<='E';ch++){
          cout<<ch;
      }
       cout<<endl;
    }
    
}
void pattern18(int n){
    int intial=0;
    for (int i = 0; i < n; i++)
    {      
           for (int j = 1; j <= n-i; j++){ //n-i
           cout<<"*";}

           for (int j = 0; j <intial ; j++)
           {  cout<<" ";}
          for (int j = 1; j <= n-i; j++)
          {
            cout<<"*";
          }
          intial+=2;
          cout<<endl;       
       }
       intial=8;
       for (int i = 1; i <= n; i++)
    {      
           for (int j = 1; j <= i; j++){ //i
           cout<<"*";}

           for (int j = 0; j <intial ; j++)
           {  cout<<" ";}
          for (int j = 1; j <= i; j++)
          {
            cout<<"*";
          }
          intial-=2;
          cout<<endl;       
       }
}
void pattern19(int n){
  //stars
    int space=2*n-2;
  for(int i=1;i<=2*n-1;i++){
      int star=i;
      if(i>n){star=2*n-i;}
      for (int j = 1; j <= star; j++)
      {
        cout<<"*";
      }
  //spaces

    for(int j=1;j<=space;j++){
      cout<<" ";
    }
  //stars
      for (int j = 1; j <= star; j++)
      {
        cout<<"*";
      }
      cout<<endl;
      if(i<n) space-=2;
     else space+=2;
    }
}
void pattern20(int n){
for (int i = 0; i < n; i++)
{
  for(int j=0;  j<n  ;j++){
            if( i==0 || i==n-1||j==0||j==n-1){
            cout<<"*";
        }
             else{cout<<" ";}
         }
       cout<<endl;
    }
}

int main() {

//pattern 1
cout<<"enter how many times you want to take test";
int t;
cin>>t;
cout<<"enter how many elemnts you want in an patterns";
for(int i=0;i<t;i++){ 
int n;
cin>>n;
pattern1(n);
pattern2(n);
pattern3(n);
pattern4(n);
pattern5(n);
pattern6(n);
pattern7(n);
pattern8(n);
pattern9(n);
pattern10(n);
pattern11(n);
pattern12(n);
pattern13(n);
pattern14(n);
pattern15(n);
pattern16(n);
pattern17(n);
pattern18(n);
pattern19(n);
pattern20(n);
}
 
return 0;
}
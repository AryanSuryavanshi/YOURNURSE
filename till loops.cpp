#include<iostream>
using namespace std;

int main(){
    
/*    cout<<"hello ish"<< endl;

    int a;
    cin>>a;
    cout<<"value of a :"<< a << endl;
    if(a>0){
        cout<<"positive";
    }
else{
    cout<<"neg";
}
int a,b ;
cin>>a>>b;
cout<<"value of a"<<a<< endl;
cout<<"value of b"<<b<<endl;
if(a>b){
    cout<<"pos";
}
else {
    cout<<"neg";

}
// cin.get concept to read space,tab,entre
int a;
a=cin.get();
cout<<"value of a is"<< a<<endl;

int a;
cin>>a;
cout <<"value of a is "<< a << endl;
if(a>0){
    cout<<"positive";

  }  else{
        if(a<0){
            cout<<"Neg";    

        }
        else{
            cout<<"0";
        }
    }
    char ch;
    cin>>ch;
    cout<<"given charter is"<<ch<<endl;
    if(ch>='a'&& ch<='z'){
        cout<<"small alphabets";
    }
    else if (ch>='A'&& ch<='Z'){
        cout<<"cap alpha";
    }
    else if (ch<='0' && ch>='9'){
        cout<<"numeric";
    }
    int n;
    cin>>n;
    int i=1;
  
    while(i<=n){
        cout<<i<<endl;
          i=i+1;
    }
    // sum in loop
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
cout<<"sum is"<<sum<<endl;

// sum of even no
int n;
cin>>n;
int i=2;
int sum = 0;
while(i<=n){
    sum=sum+i;
    i=i+2;
}
cout<<"sum of even no"<<sum<<endl;

//f to c
float c,f;
cin>>f;
cout<<"value of f is"<<f<<endl;
 c= 5*(f-32)/9;
 cout<<"value of c is"<<c<<endl;
 */
// prime no
int n;
cin>>n;
int i=2;
while(i<n){//not less thsn = kyunki last no se phele rukna h 
    if(n%i==0){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
     i=i+1;
}

}

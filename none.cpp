#include <iostream>
#include <array>
//import std;
using namespace std;
int none(int target,int numbers[],int num);


int main(){
int numbers[10]= {67,5,32,67,54,5,3,21,56,87};
int target;
int result;

    cout<<"\ntype the number you want to find: ";
    cin>>target;



        result= none(target,numbers, 10);
if(result==0){cout<<"false";}else{
cout<<"true ";
}

    return 0;
}
//none
int none(int target,int numbers[],int num){
    for(int i=0; i<num;i++){
        if(target==numbers[i]){
            return 0;
        }
    }
return 1;
}
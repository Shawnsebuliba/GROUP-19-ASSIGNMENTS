#include <iostream>
#include <array>
//import std;
using namespace std;
int find_first(int target,int numbers[],int num);


int main(){
int numbers[10]= {67,5,32,67,54,5,3,21,56,87};
int target;
int result;

    cout<<"\ntype the number you want to find: ";
    cin>>target;



        result= find_first(target,numbers, 10);
if(result==0){cout<<"target "<<target<<" is not found\n";}else{
cout<<"target "<<target<<" is first found at position "<<result;
}

    return 0;
}
//find first
int find_first(int target,int numbers[],int num){
    for(int i=0; i<num;i++){
        if(target==numbers[i]){
            return i+1;
        }
    }
return 0;
}
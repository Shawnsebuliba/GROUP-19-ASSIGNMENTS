#include <iostream>
#include <array>
//import std;
using namespace std;
int find(int target,int numbers[],int num);
int find_first(int target,int numbers[],int num);
int find_last(int target,int numbers[],int num);
int contains(int target,int numbers[],int num);
int none(int target,int numbers[],int num);


int main(){
int numbers[10]= {67,5,32,67,54,5,3,21,56,87};
int target;
int operation;
cout<<"\n1->find(), 2->find_first(), 3->find_last(), 4->contains(), 5->none()\n"
    "enter a number: ";
cin>>operation;

    cout<<"\n\ntype the number you want to find: ";
    cin>>target;

int result;



    switch(operation){
        case 1: //find
        result= find(target,numbers, 10);
if(result==0){cout<<"target "<<target<<" is not found\n";}else{
cout<<"target "<<target<<"is at position "<<result;
}
break;
        case 2: //find_first
        result= find_first(target,numbers, 10);
if(result==0){cout<<"target "<<target<<" is not found\n";}else{
cout<<"target "<<target<<" is first found at position "<<result;
}
break;
        case 3: //find_last
        result= find_last(target,numbers, 10);
if(result==0){cout<<"target "<<target<<" is not found\n";}else{
cout<<"target "<<target<<" is last found at position "<<result;
}
break;
        case 4: //contains
        result= contains(target,numbers, 10);
if(result==0){cout<<"false ";}else{
cout<<"true";
}
break;
case 5: //none
        result= none(target,numbers, 10);
if(result==0){cout<<"false";}else{
cout<<"true ";
}
break;
    }//switch end













    return 0;
}

//find 
int find(int target,int numbers[],int num){
    for(int i=0; i<num;i++){
        if(target==numbers[i]){
            return i+1;
        }
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

//find last
int find_last(int target,int numbers[],int num){
    for(int i=num-1; i>=0;i--){
        if(target==numbers[i]){
            return i+1;
        }
    }
return 0;
}

//contains
int contains(int target,int numbers[],int num){
    for(int i=0; i<num;i++){
        if(target==numbers[i]){
            return 1;
        }
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
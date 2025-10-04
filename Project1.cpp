#include<iostream>
#include<windows.h>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    string play="y";
    while(play=="Y"||play=="y"){
        srand(time(0));// attempt start hone se pehle har baar guess number alag aata he
    int rand_num=(rand()%(100))+1;// random number generate karta he
        int num;
        cout<<"Guess number between 0 to 99=";
        cin>>num;
        int attempt=1;
        while(rand_num!=num){
            if(num<rand_num){
                cout<<"think bigger!";
                // Beep(2000,1000);
            }else if(num>rand_num){
                // Beep(500,1000);
                cout<<"think smaller!";
        }attempt++;
            cout<<endl<<"Guess number between 0 to 99=";
            cin>>num;
    }cout<<"Good!! right guess"<<endl<<"Attempt taken="<<attempt<<endl;     
    
    cout<<"Want to play again:"<<"Y or N"<<endl;
        cin>>play;
}cout<<"Thanks";
}









































































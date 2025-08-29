  #include<iostream>
  using namespace std;
  int main(){
    int n;
    cout<<"Enter any amount :";
    cin >> n;

    int note;
    note = 100;
     switch(note){                                   
     case 100:
        cout<<"100 notes use in  " << (n/100)<<endl;
        n = n%100;
     }
    note = 50;
     switch(note){
     case 50:
        cout<<"50 nots use in  " << (n/50)<<endl;
        n = n%50;
      
     }
    note = 20;
     switch(note){
     case 20:
        cout<<"20 nots use in  " << (n/20) <<endl;
        n = n%20;
    
     }
    note = 1;
     switch(note){
     case 1:
        cout<<"1 nots use in  " << (n/1)<<endl;
        n = n%1;
    
     }
}
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        string x;
        cin>>x;
        int f=x.length();
        int  count1 =0,count0=0,s=0;
        char m=0;
        while (f>0){
            char l=x[f-1];
            if(m==l){

                
            }
            else{
                if(m>l){
                    s=1;
                }
                if(l=='0'){
                    count0++;
                }
                else{
                    count1++;
                }
                         
            }
            m=l;
            f=f-1;

        }
        cout<< count1+count0-s<< endl;
    }

    return 0;
}
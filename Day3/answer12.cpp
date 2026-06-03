
# include<iostream>
using namespace std;
int main()
{ 
    int a,b,i=1,lcm;
    cout<<"enter two numbers :";
    cin>>a>>b;
    while(i>0){
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i++;
    }
    
    cout<<"LCM of given numbers is "<<lcm;
    return 0;
}
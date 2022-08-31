#include<iostream>
using namespace std;
template<typename...arg>
void hello(int a,string b,arg...c){
    int sz=sizeof...(c);
    cout<<a<<" "<<b<<" "<<sz<<endl;
}
using namespace std;
int main(){
    hello(1,"hello");
    hello(1,"thing");
    hello(1,"thing","hello","ME");
    return 0;
}
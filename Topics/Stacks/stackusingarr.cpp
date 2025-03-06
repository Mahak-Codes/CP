#include <iostream>
using namespace std;


class Stack{
  public:  
    int top;
    int size;
    int *st;
    
    Stack(int n){
        top=-1;
        size=n;
        st=new int[size];
    }
    void push(int ele){
        if(top==size-1){
            cout<<"Overflow";
            return;
        }
        else{
            top++;
            st[top]=ele;
            
        }
    } 
    int pop(){
        if(top==-1){
            cout<<"Underflow";
            return -1;
        }
        else{
            return st[top--];
        }
    }
    void peek(){
        if(top==-1){
            cout<<"Underflow";
            
        }
        else{
            cout<<st[top]<<endl;
        }
    }
    void display(){
        if(top==-1){
            cout<<"Underflow";
            
        }
        for(int i=top;i>=0;i--){
            cout<<st[i]<<" ";
        }
        cout<<endl;
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main() {
    Stack st(5);
    st.push(44);
    st.push(5);
    st.push(34);
    st.peek();
    st.pop();
    st.display();
    st.pop();
    st.display();


    return 0;
}
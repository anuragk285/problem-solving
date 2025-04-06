#include<iostream>

using namespace std;

class node {

    public: 
    int data;
    node *next;
};

class stak{

    public:
    string s;

    void push(char c){
        s.push_back(c);
    }
    char pop(){
        char x = s[s.length()-1];
        s.pop_back();
        return x;
    }
    bool is_empty(){
        if(s.length() == 0) return true;
        return false;
    }
    char at_top(){
        return s[s.length()-1];
    }
};

int in_stack_pre(char c){

    if(c == '+' || c == '-') return 2;

    if(c == '*' || c == '/') return 4;

    if(c == '^') return 5;

    if(c == '(') return 0;

    return -1;
}
int out_stack_pre(char c){

    if(c == '+' || c == '-') return 1;

    if(c == '*' || c == '/') return 3;

    if(c == '^') return 6;

    if(c == '(') return 7;

    if(c == ')') return 0;

    return -1;
}

bool is_operand(char c){

    if((c=='(') || (c==')') || (c=='-') || (c=='+') || (c=='*') || (c=='/') || (c=='^')) return false;
    
    return true;
}

string convert_infix_to_postfix(string infix){

    string postfix;

    stak st;

    int i =0;

    while(i<infix.length()){

        if(is_operand(infix[i])) postfix.push_back(infix[i++]);

        if(st.at_top() == '(' && infix[i] == ')') st.pop(), i++;

        else {

            if(st.is_empty()) st.push(infix[i++]);

            else if(in_stack_pre(st.at_top()) < out_stack_pre(infix[i])){

                if(st.at_top() == '(' && infix[i] == ')'){
                    st.pop();
                    i++;
                }

                else st.push(infix[i++]);
            }

            else postfix.push_back(st.pop());
        }
        // cout<<"stack  = ";
        // for(char c : st.s) cout<<c<<" ";
        // cout<<"postfix = ";
        // for(char c : postfix) cout<<c<<" ";
        // cout<<'\n';
    }
    while(!st.is_empty()) postfix.push_back(st.pop());

    return postfix;
}

class stac{

    public: 
    node *top = NULL; 

    bool is_empty(){
        if(!top) return true;
        return false;
    }
    void push(int val){
        node *p = new node;
        p->data = val;
        p->next = top;
        top = p;
    }
    void pop(int &a, int &b){
        b = top->data;
        a = (top->next)->data;
        node *p = (top->next)->next;
        delete top;
        delete top->next;
        top = p;
    }  
    void display(){
        node *p = top;
        cout<<"\nstack = ";
        while(p){
            cout<<p->data<<" ";
            p=p->next;
        }
    }

    int at_top(){
        if(top == NULL) return -1;
        return top->data;
    }
};

int cal_postfix(string postfix){

    stac st;

    int ans =0, i=0;

    while(i<postfix.length()){
        
        //st.display();
        if(is_operand(postfix[i])) st.push(postfix[i]-'0');

        else { 

            ans =0;

            int a, b;
            st.pop(a, b);
            if(postfix[i] == '+') ans += a+b;

            else if(postfix[i] == '-') ans += a-b;

            else if(postfix[i] == '*') ans += a*b;

            else if(postfix[i] == '/') ans += a/b;

            else if(postfix[i] == '%') ans += a%b;

            st.push(ans);

        }
        i++;   
    }
    return st.at_top();
}

int main(){

    string infix;

    cout<<"Give a correct expression : ";
    cin>>infix;

    string postfix = convert_infix_to_postfix(infix);

    cout<<"postfix = "<<postfix<<endl;

    int ans = cal_postfix(postfix);

    cout<<"ans = "<<ans;
return 0;
}
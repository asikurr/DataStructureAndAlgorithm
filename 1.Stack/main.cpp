#include <iostream>

using namespace std;

class stackk{

    private:
        int top;
        int arr[5];
    public:
        stackk(){
            top = -1;
            for(int i = 0; i<=4; i++){
                arr[i] = 0;
            }
        }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else
        return false;
    }

    bool isFull(){
        if(top == 4){
            return true;
        }else
        return false;
    }

    void push(int num){
        if(isFull() == true){
            cout<<"Stack Is full."<<endl;
        }else
        {
            top++;
            arr[top] = num;
        }
    }

    int pop()
    {
        if(isEmpty() == true)
        {
            cout<<"Stack is Empty."<<endl;
        }else
        {
          int pop_val = arr[top];
          arr[top] = 0;
          top--;
          return pop_val;
        }
    }

    int count(){
        return(top+1);
    }

    int peek(int pos){
        if(isEmpty()){
            cout<<"Stack is Empty."<<endl;
        }else
        {
            return arr[pos];
        }
    }

    void change( int pos, int val){
        arr[pos] = val;
        cout<<"Value change at the Position: "<<pos<<endl;
    }

    void display(){
        if(isEmpty()){
            cout<<"Stack is Empty."<<endl;
        }else
        {
            cout<<"All Stack value is : "<<endl;
            for(int i=4; i>=0; i--){
                cout<<"Item : "<<arr[i]<<endl;
            }
        }
    }


};

int main()
{
    stackk st1;
    int position, value=0, option;

    do{
            cout<<"Select Your Option, If you want to Exit Enter With 0"<<endl;
            cout<<"Enter : 1, For Push data in Stack"<<endl;
            cout<<"Enter : 2, For Pop data From Stack"<<endl;
            cout<<"Enter : 3, For Check Empty in Stack"<<endl;
            cout<<"Enter : 4, For Check Full in Stack"<<endl;
            cout<<"Enter : 5, For Count data in Stack"<<endl;
            cout<<"Enter : 6, For Peek data from Stack"<<endl;
            cout<<"Enter : 7, For Change data in Stack"<<endl;
            cout<<"Enter : 8, For Show all data in Stack"<<endl;

            cout<<"==================================================="<<endl;

            cout<<"Please Choose Your Operation : ";
            cin>>option;
            switch(option){
            case 1:
                cout<<"Enter the Value for Push in Stack: "<<endl;
                cin>>value;
                st1.push(value);
                cout<<"New Value "<<value<<" added in Stack: "<<endl;

                break;
            case 2:
                if(st1.isEmpty() == true)
                    {
                       cout<<"stack is Empty."<<endl;
                    }else
                    {
                        cout<<"Value "<<st1.pop()<<" Removed from stack."<<endl;
                    }
                break;
            case 3:
                if(st1.isEmpty() == true){
                    cout<<"Stack Is Empty."<<endl;
                }else{
                    cout<<"Stack Not Empty."<<endl;
                }
                break;
            case 4:
                if(st1.isFull() == true){
                    cout<<"Stack Is FULL."<<endl;
                }else{
                    cout<<"Stack Not Full."<<endl;
                }
                break;
            case 5:
                if(st1.isEmpty() == true){
                    cout<<"Stack Is Empty."<<endl;
                }else{
                    cout<<"Number Of Element in Stack : "<<st1.count()<<endl;
                }
                break;
            case 6:

                cout<<"Enter array position for peek value: "<<endl;
                cin>>position;
                cout<<"Number Of Element in Stack : "<<st1.peek(position)<<endl;

                break;
            case 7:
                if(st1.isEmpty() == true){
                    cout<<"Stack Is Empty."<<endl;
                }else{
                    cout<<"Enter array position : "<<endl;
                    cin>>position;
                    cout<<"Enter array value : "<<endl;
                    cin>>value;
                    st1.change(position, value);
                    cout<<"value change at  position "<<position<<" and value : "<<value<<endl;
                }
                break;
            case 8:
                    cout<<"Total Number Of Element in Stack : "<<endl;
                    st1.display();
                break;
            case 9:
                system("cls");
                break;
            default:
                    cout<<"Invalid Input."<<endl;
                    break;
            }

    }while(option != 0);

    return 0;
}

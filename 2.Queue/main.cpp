#include <iostream>

using namespace std;

class Queue{
private:
    int front;
    int rear;
    int arr[5];

public:
    Queue(){
        rear  = -1;
        front = -1;
        for(int i=0; i<5; i++){
            arr[i] = 0;
        }
    }

    bool isEmpty(){
        if(rear == -1 && front == -1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if(rear == 4){ //size(arr) - 1
            return true;
        }
        else
        return false;
    }
    void enQueue(int val){
        if(isFull()){
            cout<<"The Queue is full."<<endl;
            return;
        }else if(isEmpty()){
            rear = 0;
            front = 0;
            arr[rear] = val;
        }else{
            rear++;
            arr[rear] = val;
        }

    }
    int deQueue(){
        int x = 0;
        if(isEmpty()){
            cout<<"The Queue is Empty."<<endl;
            return 0;
        }else if(front == rear){
            x = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return x;
        }else{
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }

    int count(){
        return (rear - front + 1);
    }

    void display(){
        if(isEmpty() == true){
            cout<<"The Queue is Empty."<<endl;
        }else{
            for(int i=4; i>=0; i--){
                cout<<"value : "<<arr[i]<<" ";
            }
        }
    }


};

int main()
{
    Queue queue1;
    int option, val;
    do{
            cout<<endl;
            cout<<"Select Your Option, If you want to Exit Enter With 0"<<endl;
            cout<<"Enter : 1, For Check Empty in Queue"<<endl;
            cout<<"Enter : 2, For Check Full in Queue"<<endl;
            cout<<"Enter : 3, For Enqueue data in Queue"<<endl;
            cout<<"Enter : 4, For Dequeue data in Queue"<<endl;
            cout<<"Enter : 5, For Count data in Queue"<<endl;
            cout<<"Enter : 6, For Show all data in Queue"<<endl;
            cout<<"Enter : 7, For Clean Screen"<<endl;

            cout<<"==================================================="<<endl;
            cout<<"Enter Your Option : ";
            cin>>option;

            switch(option){
            case 1:
                if(queue1.isEmpty() == true){
                    cout<<"The Queue is Empty."<<endl;
                    break;
                }
            case 2:
                if(queue1.isFull()){
                    cout<<"The Queue is Full."<<endl;
                }else{
                    cout<<"The Queue is not Full."<<endl;
                }

                break;

            case 3:
                if(queue1.isFull() == true){
                    cout<<"The Queue is Full.";
                }else{
                    cout<<"Enter a Number to add in Queue : ";
                    cin>>val;
                    queue1.enQueue(val);
                    cout<<val <<" added in the Queue."<<endl;

                }
                break;
            case 4:
                if(queue1.isEmpty() == true){
                    cout<<"The Queue is Empty.";
                }else{
                    cout<<"value "<<queue1.deQueue()<<" remove in the Queue."<<endl;
                }
                break;
            case 5:
                if(queue1.isEmpty() == true){
                    cout<<"The Queue is Empty.";
                }else{
                    cout<<"Total number in queue is : "<<queue1.count()<<endl;
                }
                break;
            case 6:
                cout<<"Element in queue are : "<<endl;
                queue1.display();
                break;
             case 7:
                system("cls");
                break;
            default:
                cout<<"Invalid Input."<<endl;
                break;
            }
    }
    while(option != 0);
    return 0;
}

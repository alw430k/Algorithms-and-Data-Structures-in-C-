#include <iostream>
using namespace std;


// struct Node
// {
//     int value;
//     Node *next;
// };
struct Node
        {
            int value;
            Node *next = NULL;
        };

class linkedList{
    public:
        bool headexists = false;
        int length = 0;
        Node *head;
        Node *tail;
        linkedList(){
            head = new Node;
            tail = new Node;
        }
        void insert(int val)
        {
            Node *n = new Node;
            //n->next = NULL;
            n->value = val;
            // cout << "insertion head: " << head << " "<< head->value << " " << head->next << endl;
            // cout << "insertion tail: " << tail << " "<< tail->value << " " << tail->next << endl;
            if (!headexists){ // head doesn't exist
                head = n;
                tail = n;
                this->headexists = true;
            } else {
                tail->next = n;
                tail = n;
            }
            this->length++;
            // cout << "inserted" << val << endl;
            // cout << "after insertion head: " << head << " "<< head->value << " " << head->next << endl;
            // cout << "after insertion tail: " << tail << " "<< tail->value << " " << tail->next << endl;
        }
        bool contains(int val){
            Node *n = this->head;
            while (n && n->value != val){
                n = n->next;
            }
            if(!n){
                return false;
            }
            return true;
        }
        void traverse(){
            Node *n = this->head;
            // cout << n->value << " traversing head node value";
            int currval;
            while (n) {
                currval = n->value;
                cout << currval << " ";
                n = n->next;
            }
            cout << endl;
        }
        void remove(int x){
            if (!headexists){ // if no elements exist
                return;
            }
            else if (x == this->head->value) { // if head is the element
                if (head == tail){ //if only one element in list
                    this->head = new Node;
                    this->tail = new Node;
                    this->headexists = false;
                }else{
                    this->head = this->head->next;
                }
                return;
            }
            Node *n = this->head;
            while (n->next && n->next->value != x){
                n = n->next;
            }
            if (n->next) {
                if (n->next == this->tail){
                    this->tail = n;
                }
                n->next = n->next->next;
            } 
            
            
            // value not found in list
            return;
        }
};

int main(){
    // Node *n1, *n2, *n3;
    // n1 = new Node;
    // n2 = new Node;
    // n3 = new Node;
    // n1->value = 10;
    // n2->value = 14;
    // n3->value = 16;
    // n1->next = n2;
    // n2->next = n3;
    // n3->next = nullptr;

    // cout << n1->value;

    // Node *n1copy = n1;
    // cout << n1copy->value;

    // while (n1copy!=nullptr){
    //     cout<<n1copy->value;
    //     n1copy = n1copy->next;
    // }


    linkedList *list = new linkedList;
    // list->insert(11);
    // list->insert(12);

    for (int i=0; i<10; i++){
        list->insert(i);
    }
    // cout << "list's head: " << list->head << endl;
    // cout << "list's head value: " << list->head->value << endl;
    // cout << "list's tail: " << list->tail << endl;
    // cout << "list's tail value: " << list->tail->value << endl;
    // cout << "nullpointer: " << false << endl;
    // cout << "list's head next: " << list->head->next << endl;
    
    // Node *n1copy = list->head;
    // while (n1copy!=nullptr){
    //     int temp = n1copy->value;
    //     cout<<n1copy->value;
    //     n1copy = n1copy->next;
    // }
    // // list->traverse();
    list->traverse();

    list->remove(9);

    list->traverse();
    
    
}
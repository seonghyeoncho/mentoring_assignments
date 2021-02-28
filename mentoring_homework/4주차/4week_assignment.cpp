#include <iostream>
#include <cstdio>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};
class Link {
    private:
        int size;
    public:
        Node* head;
        void InitNode();
        void InitSize();
        void InsertData(int);
        void GetData(int);
        void PrintData();
        void PrintSize();
        void DeleteNode(int);
    
};
void Link::PrintSize() {
    cout << size << '\n';
}
void Link::InitNode() {
    head = new Node;
    head -> next = nullptr;
    
};
void Link::InitSize() {
    size = 0;
};
void Link::InsertData(int data) {
    if(size == 0) {
        head -> data = data;
    } else {
        Node* curNode = new Node();
        curNode -> data = data;
        Node* tempNode = head;
        
        while(tempNode -> next != nullptr) {
            tempNode = tempNode -> next;
        }
        tempNode -> next = curNode;
    }
    size++;

};
void Link::GetData(int nodeIndex) {
    Node* tempNode = head;
    for(int i=0; i<size; i++) {
        if(nodeIndex == i) {
            cout << tempNode -> data <<'\n';
            break;
        } else {
            tempNode = tempNode -> next;
        }
    }
    
    
};
void Link::PrintData(){
    Node* tempNode = head;
    if(size == 0) {
        cout << "no data" << '\n';
        
    } else {
        while(tempNode != NULL) {
            cout << tempNode -> data << '\t';
            tempNode = tempNode -> next;
        }
        
    }
};
void Link::DeleteNode(int nodeIndex) {
    Node* tempNode = head;
    Node* deleteNode;
    Node* swapNode;
    
    if(nodeIndex>0) {
        for(int i=0;i<nodeIndex-1;i++) tempNode = tempNode -> next;
        deleteNode = tempNode -> next;
        swapNode = deleteNode -> next;
        tempNode -> next = swapNode;
        
    } else {
        head = tempNode -> next;
        delete tempNode;
    }
    size--;
}
Link link;
class MainPage {
        
    public:
        void Root();
        void SwitchPage(int);
};
void MainPage::SwitchPage(int page) {
    int data;
    switch (page) {
            
        case 1:
            cout << "넣고싶은 데이터를 입력하세요 : ";
            cin >> data;
            link.InsertData(data);
            cout << "입력이 완료되었습니다." << '\n';
            break;
        case 2:
            cout << "삭제하고 싶은 데이터의 인데스를 입력하세요 : ";
            cin >> data;
            link.DeleteNode(data);
            break;
        case 3:
            cout << "찾고 싶은 데이터의 인데스를 입력하세요 : ";
            cin >> data;
            cout << "인데스 '" << data << "'의 값 : ";
            link.GetData(data);
            cout << "탐색을 완료했습니다." << '\n';
            break;
        case 4:
            cout << '\n';
            link.PrintData();
            cout << '\n' << "출력을 완료했습니다." << '\n';
            break;
        case 5:
            link.PrintSize();
            cout << "출력을 완료했습니다." << '\n';
            break;
        case 6:
            exit(0);
            break;
        default:
            cout<< "잘못된 입력입니다. 다시 입력해주세요." <<'\n';
    }
    
}
void MainPage::Root() {
    int page = 0;
    cout << "----- 링크드 리스트 프로그램 -----" << '\n';
    cout<< "1. 데이터 입력" << '\n';
    cout<< "2. 데이터 삭제" << '\n';
    cout<< "3. 데이터 값 찾기" << '\n';
    cout<< "4. 모든 데이터 출력" << '\n';
    cout<< "5. 데이터 크기 확인" << '\n';
    cout<< "6. 종료" << '\n';
    cout << "----------------------------" << '\n';
    cin >> page;
    SwitchPage(page);
}
int main () {
    MainPage mainPage;
    link.InitNode();
    link.InitSize();
    
    while(1){
        mainPage.Root();
    }

    
    return 0;
    
};

struct Node {
    int key;
    int val;
    Node* prev;
    Node* next;
    Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
};
class LRUCache {
public:
    void deleteNode(Node* e){
        Node* preve=e->prev;
        Node* nexte=e->next;
        preve->next=nexte;
        nexte->prev=preve;
    }
    void insertNode(Node* p){
        Node*f=head->next;
        head->next=p;
        p->prev=head;
        p->next=f;
        f->prev=p;
    }
    unordered_map<int,Node*> m; 
    Node*head =new Node(-1,-1);
    Node*tail=new Node(-1,-1);
    int c=0;
    LRUCache(int capacity) {
      c=capacity;
      m.clear();
      head->next=tail;
      tail->prev=head;
    } 
    int get(int key) {
        if(m.find(key)==m.end()){
            return -1;
        }
        Node*j=m[key];
        deleteNode(j);
        insertNode(j);
        return j->val;
    }
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            Node*k=m[key];
            k->val=value;
            deleteNode(k);
            insertNode(k);
        }
        else{
            if(m.size()==c){
                Node*l=tail->prev;
                m.erase(l->key);
                deleteNode(l);
                delete(l);
            }
            Node*q=new Node(key,value);
            m[key]=q;
            insertNode(q);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
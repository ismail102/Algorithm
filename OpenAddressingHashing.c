#include<stdio.h>
#include<malloc.h>
int capacity = 7;
int size;
typedef struct structHashNode {
    int key;
    int value;
} HashNode;

HashNode **arr;
HashNode *dummy;
void init() {
    size = 0;
    dummy = (HashNode*)malloc(sizeof(HashNode));
    arr = (HashNode**)malloc(capacity*sizeof(HashNode*));

    for(int i = 0;i < capacity; i++) {
        arr[i] = NULL;
    }
    dummy->key = -1;
    dummy->value = -1;
}

int hashCode(int key) {
    return key % capacity;
}

void insertNode(int key,int value) {

    if(size >= capacity) return;
    HashNode *temp = (HashNode*)malloc(sizeof(HashNode));
    temp->key = key;
    temp->value = value;
    int hashIndex = hashCode(key);
    while(arr[hashIndex] != NULL && arr[hashIndex]->key != key && arr[hashIndex]->key != -1) {
        hashIndex++;
        hashIndex %= capacity;
    }
    if(arr[hashIndex] == NULL || arr[hashIndex]->key == -1) {
        size++;
    }
    arr[hashIndex] = temp;
}

HashNode *deleteNode(int key) {
    if(size == 0) return NULL;
    int hashIndex = hashCode(key);
    while(arr[hashIndex] != NULL) {
        if(arr[hashIndex]->key == key) {
            HashNode *temp = arr[hashIndex];
            arr[hashIndex] = dummy;
            size--;
            return temp;
        }
        hashIndex++;
        hashIndex %= capacity;
    }
    return NULL;
}

HashNode *searchNode(int key) {
    int hashIndex = hashCode(key);
    int count = 0;
    int originIndex = hashIndex;
    while(arr[hashIndex] != NULL) {
        if(count++ > capacity) return NULL;
        if(arr[hashIndex]->key == key) {
            return arr[hashIndex];
        }
        hashIndex++;
        hashIndex %= capacity;
        if(hashIndex == originIndex) return NULL;
    }
    return NULL;
}

int sizeofMap() {
    return size;
}

int isEmpty() {
    return size == 0;
}

 void display() { 
        for(int i=0 ; i<capacity ; i++) 
        { 
            if(arr[i] != NULL && arr[i]->key != -1) {
               printf("key = %d ",arr[i]->key);  
               printf(" value = %d\n",arr[i]->value);
            } 
        } 
}

int main() {
    HashNode *h;

    init();

    insertNode(100,50);
    insertNode(200,700);
    insertNode(300,76);
    insertNode(400,85); 
    insertNode(500,92);
    insertNode(600,73);
    insertNode(700,101);

    display();

    printf("Size = %d\n",sizeofMap());
    printf("isEmpty= %d\n",isEmpty());

    h = searchNode(600);
    if(h!=NULL)printf("search-key = %d  search-value = %d\n",h->key,h->value);
    return 0;
}


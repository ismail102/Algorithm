#include<stdio.h>
#include<malloc.h>

#define Max_table 50005
int node[5];
int nodeSize[5][4900];
int Dbcount;
int isDelete[Max_table];

struct st {
    char record[5][100];
}Db[Max_table];

int strln(char *str) {
    int len=0;
    for(int i=0;str[i];i++) len++;
    return len;
}

void strcpy(char *a, char *b)
{
    int i;
    for(i=0;b[i];i++) {
        a[i] = b[i];
    }
    a[i]='\0';
}

int strcmp(char *a, char *b) {
    int lna = strln(a);
    int lnb = strln(b);
    if(lna !=  lnb) return 0;
    for(int i=0;a[i];i++) {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

typedef struct structNode{
    int nodeIndex;
    struct structNode *A[70];
}NODE;

NODE *fieldHead[5];

char sign[] = "@._/0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
int signIndex[200];

NODE *getNode(){
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    newNode->nodeIndex = -1;
    for(int i=0;i<70;i++) {
        newNode->A[i] = NULL;
    }
}

typedef struct structLink {
    int data;
    struct structLink *next;
}linkNode;

linkNode *nodeHead[5][4900];

linkNode *insertLinkList(linkNode *root, int data) {
    linkNode *cur = root;
    linkNode *temp = (linkNode*)malloc(sizeof(linkNode));
    temp->data = data;
    temp->next = NULL;
    if(root==NULL){
        return temp;
    }

    // printf("head = %d ",root->data);
    while(cur->next != NULL) {
        cur = cur->next;
        
    }
    cur->next = temp;
    // printf("->%d ",cur->next->data)
    return root;
}

void insertNode(int field, NODE *root, char str[100], int rNo) {
    NODE *cur = root;
    int len = strln(str);
    // printf("\nHEllo: %s %d\n",str,rNo);

    for(int i=0;i<len;i++) {
        int id = signIndex[str[i]];
        if(cur->A[id]==NULL) {
            cur->A[id] = getNode();
            if(i==len-1) {
                cur->A[id]->nodeIndex = ++node[field];
                nodeHead[field][cur->A[id]->nodeIndex] = NULL;
            }
        }
        cur = cur->A[id];
    }
    nodeSize[field][cur->nodeIndex]++;
    // printf("\n%d %s %d %d %d\n",field,str, cur->nodeIndex, nodeSize[field][cur->nodeIndex], rNo);

   nodeHead[field][cur->nodeIndex] =  insertLinkList(nodeHead[field][cur->nodeIndex], rNo);

    // printf("field = %d, nodeIndex = %d\n\n",field,nodeHead[field][cur->nodeIndex]->data);
}

void init()
{
    Dbcount = 0;
    for(int i=0;i<4900-5;i++) {
        nodeSize[0][i] = 0;
        nodeSize[1][i] = 0;
        nodeSize[2][i] = 0;
        nodeSize[3][i] = 0;
        nodeSize[4][i] = 0;
    // Link list heads

    }
    for(int i=0;i<Max_table-5;i++) {
        isDelete[i] = 0;
    }

    for(int i=0;i<5;i++){
        fieldHead[i] = getNode();
        node[i]=0;
    }
    for(int i=0;sign[i];i++) signIndex[sign[i]] = i;
}

void add(char *name, char *number, char *birthday, char *email, char *memo) {

    // printf("%s %s %s %s %s",name,number,birthday,email,memo);
    insertNode(0,fieldHead[0],name,Dbcount);
    insertNode(1,fieldHead[1],number,Dbcount);
    insertNode(2,fieldHead[2],birthday,Dbcount);
    insertNode(3,fieldHead[3],email,Dbcount);
    insertNode(4,fieldHead[4],memo,Dbcount);
    isDelete[Dbcount] = 0;
    Dbcount++;
}

int deleteNode(int field, NODE *root, char *str)
{
    int len = strln(str);
    
}

int delete(int field,char *str) {

}

int main() {

    freopen("input.txt", "r", stdin);
    int t;
    int f;
    char name[100],number[100],birthday[100],email[100],memo[100];
    init();
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&f);
        if(f==1) {
            scanf("%s %s %s %s %s",name,number,birthday,email,memo);
            add(name,number,birthday,email,memo);
        }
    }
    return 0;
}
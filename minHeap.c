#include<stdio.h>
int heap[100005];
void insertHeap(int data,int index){
    int temp,root,p;
    heap[index] = data;
    while(index > 0)
    {
        root = (index-1)/2;
        if(heap[index] < heap[root]){
            temp = heap[index];
            heap[index] = heap[root];
            heap[root] = temp;
            index = root;
        }
        else break;
    }
    //printf("%d\n",heap[0]);
}

int deleteHeap(int lastIndex,int deletedIndex)
{
    int ret,temp,left,right,cur;
    ret = heap[0];
    heap[deletedIndex] = heap[lastIndex];
    int min,minIndex;
    cur = deletedIndex;
    while(cur < lastIndex)
    {
        left = 2*cur + 1;
        right = 2*cur + 2;
        min = heap[cur];
        minIndex = cur;
        if(left < lastIndex && min > heap[left]){
            min = heap[left];
            minIndex = left;
        }
        if(right < lastIndex && min > heap[right]){
            min = heap[right];
            minIndex = right;
        }
        if(heap[cur] == min) break;
        temp = heap[cur];
        heap[cur] = heap[minIndex];
        heap[minIndex] = temp;
        cur = minIndex;
    }
    return ret;
}

void searchValue(int item,int n)
{
    int minValue;
    for(int i=0;i<n;i++){
        if(heap[i]==item){
            minValue = deleteHeap(--n,i);
            break;
        }
    }
   //printf("%d\n",minValue);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int q;
    int x,y;
    scanf("%d",&q);
    int i=0;
    while(q--){
        scanf("%d",&x);
        if(x==1){
            scanf("%d",&y);
            insertHeap(y,i);
            i++;
        }
        if(x==2){
            scanf("%d",&y);
            searchValue(y,i);
            i--;
        }
        if(x==3){
            printf("%d\n",heap[0]);
        }
    }
    return 0;
}

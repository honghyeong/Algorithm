l=[int(input()) for _ in range(int(input()))]

def heapify(li,idx,heap_size):
    s_idx=idx
    left=idx*2
    right=idx*2+1

    if (left<=heap_size and li[left]<li[s_idx]):
        s_idx=left
    if (right<=heap_size and li[right]<li[s_idx]):
        s_idx=right
    if s_idx!=idx:
        li[s_idx],li[idx]=li[idx],li[s_idx]
        return heapify(li,s_idx,heap_size)
    

def heap_sort(v):
    
    n=len(v)
    v=[0]+v

    for i in range(n,0,-1):
        heapify(v,i,n)

    for i in range(n,0,-1):
        print(v[1])
        v[1],v[i]=v[i],v[1]
        heapify(v,1,i-1)

heap_sort(l)

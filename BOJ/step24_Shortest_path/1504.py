import heapq
import sys
import collections

input=sys.stdin.readline
N,E=map(int,input().split())
graph = collections.defaultdict(list)
INF=sys.maxsize
# 그래프 인접리스트 생성
for _ in range(E):
    a=list(map(int,input().split()))
    graph[a[0]].append((a[1],a[2]))
    graph[a[1]].append((a[0],a[2]))

V1,V2=map(int,input().split())

def dijkstra(start):
   dist=[INF for _ in range(N+1)]
   dist[start]=0
   Q=[(0,start)]

   while Q:
       weight,node=heapq.heappop(Q)
       for v,w in graph[node]:
            alt=weight+w
            if alt<dist[v]:
                dist[v]=alt
                heapq.heappush(Q,(alt,v))
   return dist

one=dijkstra(1)
V1_start=dijkstra(V1)
V2_start=dijkstra(V2)

result=min(one[V1]+V1_start[V2]+V2_start[N], one[V2]+V2_start[V1]+V1_start[N])

print(result if result<INF else -1)

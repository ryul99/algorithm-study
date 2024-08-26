N = int(input())
tree = dict()
queue = list()
answer = dict()

for _ in range(N - 1):
    edge = tuple(map(int, input().split()))
    # 0 -> 1
    nodes = tree.get(edge[0])
    nodes = list() if not nodes else nodes
    nodes.append(edge[1])
    tree[edge[0]] = nodes
    # 1 -> 0
    nodes = tree.get(edge[1])
    nodes = list() if not nodes else nodes
    nodes.append(edge[0])
    tree[edge[1]] = nodes

queue.append((1, 1))
while len(queue) > 0:
    front = queue[0]
    answer[front[1]] = front[0] # front: (parent, child)
    queue = queue[1:]
    for child in tree[front[1]]:
        if child != front[0]:
            queue.append((front[1], child))

for idx in range(2, N + 1):
    print(answer[idx])


tree = dict()

N = int(input())


def pp(s: str):
    print(s, end="")


def preorder(curr: str):
    child1, child2 = tree[curr]
    pp(curr)
    if child1 != ".":
        preorder(child1)
    if child2 != ".":
        preorder(child2)


def inorder(curr: str):
    child1, child2 = tree[curr]
    if child1 != ".":
        inorder(child1)
    pp(curr)
    if child2 != ".":
        inorder(child2)


def postorder(curr: str):
    child1, child2 = tree[curr]
    if child1 != ".":
        postorder(child1)
    if child2 != ".":
        postorder(child2)
    pp(curr)


for _ in range(N):
    curr, child1, child2 = input().split()
    tree[curr] = (child1, child2)

preorder('A')
print()
inorder('A')
print()
postorder('A')
print()

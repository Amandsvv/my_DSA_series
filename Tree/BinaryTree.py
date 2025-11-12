class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
    
    def createNode(self):
        data = int(input("Enter data (-1 for no new node) : "))

        if(data == -1):
            return None
        new_node = Node(data)
        print(f"Creating left child for {data}")
        new_node.left = self.createNode()
        print(f"Creating right node of {data}")
        new_node.right = self.createNode()
        return new_node
    
    def printNode(self,root):
        if root == None:
            return
        print(f"{root.data} -> ",end="")
        self.printNode(root.left)
        self.printNode(root.right)

tree = Node(0)
root = tree.createNode()
tree.printNode(root)
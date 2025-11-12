class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    
    def insert(self, data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
            else:
                self.data = data
    
    def PrintTree(self):
        if self.right:
            self.right.PrintTree()
        print(self.data)
        if self.left:
            self.left.PrintTree()
            
    def preorder(self):
        print(self.data)
        if self.left:
            self.left.preorder()
        if self.right:
            self.right.preorder()
    


root = Node('A')
root.insert('B')
root.insert('C')
root.insert('D')
root.insert('E')
# root.PrintTree()
root.preorder()
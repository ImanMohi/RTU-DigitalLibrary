class Node:    
    def __init__(self,data):    
        self.data = data;    
        self.previous = None;    
        self.next = None;    
            
class RemoveDuplicate:    
    #Represent the head and tail of the doubly linked list    
    def __init__(self):    
        self.head = None;    
        self.tail = None;    
            
    #addNode() will add a node to the list    
    def addNode(self, data):    
        #Create a new node    
        newNode = Node(data);    
            
        #If list is empty    
        if(self.head == None):    
            #Both head and tail will point to newNode    
            self.head = self.tail = newNode;    
            #head's previous will point to None    
            self.head.previous = None;    
            #tail's next will point to None, as it is the last node of the list    
            self.tail.next = None;    
        else:    
            #newNode will be added after tail such that tail's next will point to newNode    
            self.tail.next = newNode;    
            #newNode's previous will point to tail    
            newNode.previous = self.tail;    
            #newNode will become new tail    
            self.tail = newNode;    
            #As it is last node, tail's next will point to None    
            self.tail.next = None;    
                
    #removeDuplicateNode() will remove duplicate nodes from the list    
    def removeDuplicateNode(self):    
            
        #Checks whether list is empty    
        if(self.head == None):    
            return;    
        else:    
            #Initially, current will point to head node    
            current = self.head;    
            while(current != None):    
                #index will point to node next to current    
                index = current.next    
                while(index != None):    
                    if(current.data == index.data):    
                        #Store the duplicate node in temp    
                        temp = index;    
                        #index's previous node will point to node next to index thus, removes the duplicate node    
                        index.previous.next = index.next;    
                        if(index.next != None):    
                            index.next.previous = index.previous;    
                        #Delete duplicate node by making temp to None    
                        temp = None;    
                    index = index.next;    
                current = current.next;    
                            
    #display() will print out the nodes of the list    
    def display(self):    
        #Node current will point to head    
        current = self.head;    
        if(self.head == None):    
            print("List is empty");    
            return;    
        while(current != None):    
            #Prints each node by incrementing pointer.    
            print(current.data),    
            current = current.next;    
        print();    
            
dList = RemoveDuplicate();    
#Add nodes to the list    
dList.addNode(1);    
dList.addNode(2);    
dList.addNode(3);    
dList.addNode(2);    
dList.addNode(2);    
dList.addNode(4);    
dList.addNode(5);    
dList.addNode(3);    
     
print("Originals list: ");    
dList.display();    
     
#Removes duplicate nodes    
dList.removeDuplicateNode();    
     
print("List after removing duplicates: ");    
dList.display();    
def TowerOfHanoi(n , source, dest, aux): 
    if n==1: 
        print ("Move disk 1 from source",source,"to destination",dest) 
        return
    TowerOfHanoi(n-1, source, aux, dest) 
    print ("Move disk",n,"from source",source,"to destination",dest) 
    TowerOfHanoi(n-1, aux, dest, source) 
n = 4
TowerOfHanoi(n,'A','B','C')  

  

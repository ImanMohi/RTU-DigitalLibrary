
def findSmallest(n): 
	if n < 10: 
		print n+10
		return
	
	res = [] 
	for i in range(9,1,-1): 
		# If current digit divides n, then store all 
		# occurrences of current digit in res 
		while n % i == 0: 
			n = n / i 
			res.append(i) 
	
	
	if n > 10: 
		print "Not Possible"
		return
		
	n = res[len(res)-1] 
	for i in range(len(res)-2,-1,-1): 
		n = 10 * n + res[i] 
	print n 
	
findSmallest(7) 

findSmallest(36) 

findSmallest(13) 

findSmallest(100) 


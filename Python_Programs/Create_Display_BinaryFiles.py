import pickle
def add():
	fout=open('Bin.dat','ab')
	n=int(input('No. Of Records You Wish To Enter:'))
	print()
	for k in range(n):
		dict={'co':int(input('Enter Code:')),
			  'na':input('Enter Name:'),
			  'bs':float(input('Enter Basic Salary:'))
			  }
		print()
		pickle.dump(dict,fout)
	fout.close()

def show():
	fin=open('Bin.dat','rb')
	try:
		print('_'*25)
		print('Code','Name','Basic Salary',sep='\t')
		print('_'*25)
		while True:
			dict=pickle.load(fin)
			print(dict['co'],dict['na'],dict['bs'],sep='\t')
	except:
		fin.close()
		print('_'*25)

add()
show()


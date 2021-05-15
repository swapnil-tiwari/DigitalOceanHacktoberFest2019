class BinarySearch:
	def insert(self,number):
		a.append(number) #adding elements to an array
	def search(self,no):
		beg=0
		temp=0
		end=len(a)-1
		a.sort() #used to sort the array
		while beg<=end:
			mid=((beg+end)/2)
			if a[mid]==no:
				temp=1
				break
			elif a[mid]>no:
				end=mid-1
			elif a[mid]<no:
				beg=mid+1
		if temp==1:
			print "Element found"
			
		else:
			print "Element not Found"
	
a=[]
obj=BinarySearch()
n=input("Enter the number of Elements:")
for i in range(n):
	number=input("number :")
	obj.insert(number)
no=input("Enter the number to search:");
obj.search(no)

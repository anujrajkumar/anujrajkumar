
def prime():
    beg=int(input("Enter the beg no"))
    end=int(input("Enter the end no"))
    print(2)
    for i in range(beg,end+1):
        if(i>2):
            for j in range(2,i):
                if(i%j==0):
                    break
            else:
                
                print(i)

   
# beg=2
# end=50
 
	

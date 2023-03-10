def asteriscos(horizontal, vertical):
    height = 3
    for x in range(0,height):
        print (horizontal)
        #We break the loop when x is two so we dont add an extra y in our b letter#
        if x ==2:
            break
        for y in range(0,height-1):
            print(vertical)
        
def horizontal(size):
  #Ask the size to see how long your B is goint to take spaces if size= 5 then 'xxxxx#
    string = 'x'*size
    return string
def vertical(size):
  #We add a variable n to take the right spaces between the first x and the last one#
    n = size - 2
    n = str(' '*n)
    string ='x'+n+'x'
    return string
#Size must be higher or equal than 3#
size = 8
horizontal= horizontal(size)
vertical= vertical(size)
asteriscos(horizontal,vertical)

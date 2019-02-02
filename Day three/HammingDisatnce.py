def hammingDistance(a, b):
    if(len(a)==len(b)):
        n=len(a)
        distance=0
        for i in range(0,n):
            if(a[i]!=b[i]):
                distance=distance+1
        print("hamming Distance"+str(distance))
    else:
        print("the Length of the strings are not equal")    


string1=input("Enter the string")
string2=input("Enter the string")

hammingDistance(string1,string2)

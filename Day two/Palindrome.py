def checkIsPalindrome(val):
    n=len(val)
    for i in range(0,int(n/2)):
        if val[i]!=val[n-i-1]:
            return 0
    return 1

val=input("Enter the String")
n=checkIsPalindrome(val)

if n==1:
    print("Palindrome")
else:
    print("Not a Palindrome")
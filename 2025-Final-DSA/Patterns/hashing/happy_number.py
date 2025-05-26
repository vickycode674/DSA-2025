# python happy number 
# 26th may 2025 
value = int(input("Enter the number to check happy number or not"));

seen = set()

def happy_number(n):
    while n!=1 and n not in seen:
        seen.add(n)
        sum_value=0
        
        while n>0:
            k=n%10
            sum_value=sum_value+k*k
            n=n//10
        n = sum_value
        
    return n==1
        


if happy_number(value):
    print("This is an happy_number:")
else:
    print("Not an happy number")
            